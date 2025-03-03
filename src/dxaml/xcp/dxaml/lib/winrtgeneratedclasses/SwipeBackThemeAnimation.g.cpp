// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#include "SwipeBackThemeAnimation.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::SwipeBackThemeAnimationGenerated::SwipeBackThemeAnimationGenerated()
{
}

DirectUI::SwipeBackThemeAnimationGenerated::~SwipeBackThemeAnimationGenerated()
{
}

HRESULT DirectUI::SwipeBackThemeAnimationGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SwipeBackThemeAnimation)))
    {
        *ppObject = static_cast<DirectUI::SwipeBackThemeAnimation*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation*>(this);
    }
    else
    {
        RRETURN(DirectUI::DynamicTimeline::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationGenerated::get_FromHorizontalOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SwipeBackThemeAnimation_FromHorizontalOffset, pValue));
}
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationGenerated::put_FromHorizontalOffset(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::SwipeBackThemeAnimation_FromHorizontalOffset, value));
}
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationGenerated::get_FromVerticalOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SwipeBackThemeAnimation_FromVerticalOffset, pValue));
}
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationGenerated::put_FromVerticalOffset(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::SwipeBackThemeAnimation_FromVerticalOffset, value));
}
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationGenerated::get_TargetName(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SwipeBackThemeAnimation_TargetName, pValue));
}
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationGenerated::put_TargetName(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::SwipeBackThemeAnimation_TargetName, value));
}

// Events.

// Methods.

HRESULT DirectUI::SwipeBackThemeAnimationFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationFactory::get_TargetNameProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SwipeBackThemeAnimation_TargetName, ppValue));
}
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationFactory::get_FromHorizontalOffsetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SwipeBackThemeAnimation_FromHorizontalOffset, ppValue));
}
IFACEMETHODIMP DirectUI::SwipeBackThemeAnimationFactory::get_FromVerticalOffsetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SwipeBackThemeAnimation_FromVerticalOffset, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_SwipeBackThemeAnimation()
    {
        RRETURN(ctl::ActivationFactoryCreator<SwipeBackThemeAnimationFactory>::CreateActivationFactory());
    }
}
