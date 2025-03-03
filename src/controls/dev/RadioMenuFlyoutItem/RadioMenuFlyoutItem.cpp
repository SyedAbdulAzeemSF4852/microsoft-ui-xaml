﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "common.h"
#include "RadioMenuFlyoutItem.h"
#include "RuntimeProfiler.h"
#include "ResourceAccessor.h"

thread_local std::unique_ptr<std::map<winrt::hstring, winrt::weak_ref<winrt::RadioMenuFlyoutItem>>> RadioMenuFlyoutItem::s_selectionMap;

RadioMenuFlyoutItem::RadioMenuFlyoutItem()
{
    __RP_Marker_ClassById(RuntimeProfiler::ProfId_RadioMenuFlyoutItem);

    m_InternalIsCheckedChangedRevoker = RegisterPropertyChanged(*this, winrt::ToggleMenuFlyoutItem::IsCheckedProperty(), { this, &RadioMenuFlyoutItem::OnInternalIsCheckedChanged });

    if (!s_selectionMap)
    {
        // Ensure that this object exists
        s_selectionMap = std::make_unique<std::map<winrt::hstring, winrt::weak_ref<winrt::RadioMenuFlyoutItem>>>();
    }

    Loaded({ this, &RadioMenuFlyoutItem::OnLoaded });
    Unloaded({ this, &RadioMenuFlyoutItem::OnUnloaded });

    SetDefaultStyleKey(this);
}

void RadioMenuFlyoutItem::OnLoaded(winrt::IInspectable const&, winrt::RoutedEventArgs const&)
{
    UpdateCheckedItemInGroup();
}

void RadioMenuFlyoutItem::OnUnloaded(winrt::IInspectable const&, winrt::RoutedEventArgs const&)
{
    // If this is the checked item, remove it from the lookup.
    if (m_isChecked && s_selectionMap)
    {
        SharedHelpers::EraseIfExists(*s_selectionMap, m_groupName);
    }
}

void RadioMenuFlyoutItem::OnPropertyChanged(const winrt::DependencyPropertyChangedEventArgs& args)
{
    winrt::IDependencyProperty property = args.Property();

    if (property == s_IsCheckedProperty)
    {
        if (InternalIsChecked() != IsChecked())
        {
            m_isSafeUncheck = true;
            InternalIsChecked(IsChecked());
            m_isSafeUncheck = false;
            UpdateCheckedItemInGroup();
        }
        m_isChecked = IsChecked();
    }
    else if (property == s_GroupNameProperty)
    {
        m_groupName = GroupName();
    }
}

void RadioMenuFlyoutItem::OnInternalIsCheckedChanged(const winrt::DependencyObject& sender, const winrt::DependencyProperty& args)
{
    if (!InternalIsChecked())
    {
        if (m_isSafeUncheck)
        {
            // The uncheck is due to another radio button being checked -- that's all right.
            IsChecked(false);
        }
        else
        {
            // The uncheck is due to user interaction -- not allowed.
            InternalIsChecked(true);
        }
    }
    else if (!IsChecked())
    {
        IsChecked(true);
        UpdateCheckedItemInGroup();
    }
}

void RadioMenuFlyoutItem::UpdateCheckedItemInGroup()
{
    if (IsChecked())
    {
        const auto groupName = GroupName();

        if (const auto previousCheckedItemWeak = (*s_selectionMap)[groupName])
        {
            if (auto previousCheckedItem = previousCheckedItemWeak.get())
            {
                if (previousCheckedItem != static_cast<winrt::RadioMenuFlyoutItem>(*this))
                {
                    // Uncheck the previously checked item.
                    RadioMenuFlyoutItem* rawPreviousCheckedItem = winrt::get_self<RadioMenuFlyoutItem>(previousCheckedItem);
                    rawPreviousCheckedItem->IsChecked(false);
                }
            }
        }
        // Previously we used get_weak() here, but we found the potential to hit a 
        // refcounting problem where in some scenarios the outer object gets
        // an extra Release() in this process.
        auto weakThis {winrt::make_weak(static_cast<winrt::RadioMenuFlyoutItem>(*this))};
        (*s_selectionMap)[groupName] = weakThis;
    }
}

void RadioMenuFlyoutItem::OnAreCheckStatesEnabledPropertyChanged(const winrt::DependencyObject& sender, const winrt::DependencyPropertyChangedEventArgs& args)
{
    if (unbox_value<bool>(args.NewValue()))
    {
        if (auto const& subMenu = sender.try_as<winrt::MenuFlyoutSubItem>())
        {
            // Every time the submenu is loaded, see if it contains a checked RadioMenuFlyoutItem or not.
            subMenu.Loaded(
            {
                [subMenuWeak = winrt::make_weak(subMenu)](winrt::IInspectable const& sender, auto const&)
                {
                    if (auto subMenu = subMenuWeak.get())
                    {
                        bool isAnyItemChecked = false;
                        for (auto const& item : subMenu.Items())
                        {
                            if (auto const& radioItem = item.try_as<winrt::RadioMenuFlyoutItem>())
                            {
                                isAnyItemChecked = isAnyItemChecked || radioItem.IsChecked();
                            }
                        }

                        winrt::VisualStateManager::GoToState(subMenu, isAnyItemChecked ? L"Checked" : L"Unchecked", false);
                    }
                }
            });
        }
    }
}
