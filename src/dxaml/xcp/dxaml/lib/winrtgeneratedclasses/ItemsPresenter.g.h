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

#pragma once

#include "FrameworkElement.g.h"
#include "IScrollInfo.g.h"
#include "Thickness.g.h"

#define __ItemsPresenter_GUID "83545f9b-b339-4858-8756-f550c38f39af"

namespace DirectUI
{
    class ItemsPresenter;
    class DataTemplate;
    class ItemsPanelTemplate;
    class TransitionCollection;
    class UIElement;

    class __declspec(novtable) ItemsPresenterGenerated:
        public DirectUI::FrameworkElement
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsPresenter
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo
        , public DirectUI::IScrollInfo
    {
        friend class DirectUI::ItemsPresenter;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ItemsPresenter");

        BEGIN_INTERFACE_MAP(ItemsPresenterGenerated, DirectUI::FrameworkElement)
            INTERFACE_ENTRY(ItemsPresenterGenerated, ABI::Microsoft::UI::Xaml::Controls::IItemsPresenter)
            INTERFACE_ENTRY(ItemsPresenterGenerated, ABI::Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)
            INTERFACE_ENTRY(ItemsPresenterGenerated, DirectUI::IScrollInfo)
        END_INTERFACE_MAP(ItemsPresenterGenerated, DirectUI::FrameworkElement)

    public:
        ItemsPresenterGenerated();
        ~ItemsPresenterGenerated() override;

        // Event source typedefs.
        typedef CEventSource<ABI::Windows::Foundation::IEventHandler<IInspectable*>, IInspectable, IInspectable> HorizontalSnapPointsChangedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::IEventHandler<IInspectable*>, IInspectable, IInspectable> VerticalSnapPointsChangedEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemsPresenter;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ItemsPresenter;
        }

        // Properties.
        IFACEMETHOD(get_AreHorizontalSnapPointsRegular)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_AreVerticalSnapPointsRegular)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_CanHorizontallyScroll)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_CanHorizontallyScroll)(BOOLEAN value) override;
        IFACEMETHOD(get_CanVerticallyScroll)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_CanVerticallyScroll)(BOOLEAN value) override;
        IFACEMETHOD(get_ExtentHeight)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_ExtentWidth)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_Footer)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Footer)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_FooterTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_FooterTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_FooterTransitions)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>** ppValue) override;
        IFACEMETHOD(put_FooterTransitions)(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>* pValue) override;
        IFACEMETHOD(get_Header)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Header)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_HeaderTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_HeaderTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_HeaderTransitions)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>** ppValue) override;
        IFACEMETHOD(put_HeaderTransitions)(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>* pValue) override;
        IFACEMETHOD(get_HorizontalOffset)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT get_ItemsPanel(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IItemsPanelTemplate** ppValue);
        _Check_return_ HRESULT put_ItemsPanel(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IItemsPanelTemplate* pValue);
        IFACEMETHOD(get_MinHorizontalOffset)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_MinVerticalOffset)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_Padding)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_Padding)(ABI::Microsoft::UI::Xaml::Thickness value) override;
        IFACEMETHOD(get_ScrollOwner)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_ScrollOwner)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_VerticalOffset)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_ViewportHeight)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_ViewportWidth)(_Out_ DOUBLE* pValue) override;

        // Events.
        _Check_return_ HRESULT GetHorizontalSnapPointsChangedEventSourceNoRef(_Outptr_ HorizontalSnapPointsChangedEventSourceType** ppEventSource);
        IFACEMETHOD(add_HorizontalSnapPointsChanged)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_HorizontalSnapPointsChanged)(EventRegistrationToken token) override;
        _Check_return_ HRESULT GetVerticalSnapPointsChangedEventSourceNoRef(_Outptr_ VerticalSnapPointsChangedEventSourceType** ppEventSource);
        IFACEMETHOD(add_VerticalSnapPointsChanged)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_VerticalSnapPointsChanged)(EventRegistrationToken token) override;

        // Methods.
        IFACEMETHOD(GetIrregularSnapPoints)(ABI::Microsoft::UI::Xaml::Controls::Orientation orientation, ABI::Microsoft::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, _Outptr_ ABI::Windows::Foundation::Collections::IVectorView<FLOAT>** ppReturnValue) override;
        IFACEMETHOD(GetRegularSnapPoints)(ABI::Microsoft::UI::Xaml::Controls::Orientation orientation, ABI::Microsoft::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, _Out_ FLOAT* pOffset, _Out_ FLOAT* pReturnValue) override;
        IFACEMETHOD(LineDown)() override;
        IFACEMETHOD(LineLeft)() override;
        IFACEMETHOD(LineRight)() override;
        IFACEMETHOD(LineUp)() override;
        IFACEMETHOD(MakeVisible)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pVisual, ABI::Windows::Foundation::Rect rectangle, BOOLEAN useAnimation, DOUBLE horizontalAlignmentRatio, DOUBLE verticalAlignmentRatio, DOUBLE offsetX, DOUBLE offsetY, _Out_ ABI::Windows::Foundation::Rect* pResultRectangle, _Out_ DOUBLE* pAppliedOffsetX, _Out_ DOUBLE* pAppliedOffsetY) override;
        IFACEMETHOD(MouseWheelDown)(UINT mouseWheelDelta) = 0;
        IFACEMETHOD(MouseWheelLeft)(UINT mouseWheelDelta) = 0;
        IFACEMETHOD(MouseWheelRight)(UINT mouseWheelDelta) = 0;
        IFACEMETHOD(MouseWheelUp)(UINT mouseWheelDelta) = 0;
        IFACEMETHOD(PageDown)() override;
        IFACEMETHOD(PageLeft)() override;
        IFACEMETHOD(PageRight)() override;
        IFACEMETHOD(PageUp)() override;
        IFACEMETHOD(SetHorizontalOffset)(DOUBLE offset) override;
        IFACEMETHOD(SetVerticalOffset)(DOUBLE offset) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        _Check_return_ HRESULT EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo) override;
        _Check_return_ HRESULT EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler) override;

    private:

        // Fields.
    };
}

#include "ItemsPresenter_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ItemsPresenterFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsPresenterStatics
    {
        BEGIN_INTERFACE_MAP(ItemsPresenterFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(ItemsPresenterFactory, ABI::Microsoft::UI::Xaml::Controls::IItemsPresenterStatics)
        END_INTERFACE_MAP(ItemsPresenterFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_HeaderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderTransitionsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FooterProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FooterTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FooterTransitionsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PaddingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemsPresenter;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
