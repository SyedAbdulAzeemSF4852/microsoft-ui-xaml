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


#define __KeyboardAccelerator_GUID "41b6ad62-c40c-4d7c-b5e5-abe7316539c6"

namespace DirectUI
{
    class KeyboardAccelerator;

    class __declspec(novtable) KeyboardAcceleratorGenerated:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Input::IKeyboardAccelerator
    {
        friend class DirectUI::KeyboardAccelerator;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Input.KeyboardAccelerator");

        BEGIN_INTERFACE_MAP(KeyboardAcceleratorGenerated, DirectUI::DependencyObject)
            INTERFACE_ENTRY(KeyboardAcceleratorGenerated, ABI::Microsoft::UI::Xaml::Input::IKeyboardAccelerator)
        END_INTERFACE_MAP(KeyboardAcceleratorGenerated, DirectUI::DependencyObject)

    public:
        KeyboardAcceleratorGenerated();
        ~KeyboardAcceleratorGenerated() override;

        // Event source typedefs.
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Input::KeyboardAccelerator*, ABI::Microsoft::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs*>, ABI::Microsoft::UI::Xaml::Input::IKeyboardAccelerator, ABI::Microsoft::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs> InvokedEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::KeyboardAccelerator;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::KeyboardAccelerator;
        }

        // Properties.
        IFACEMETHOD(get_IsEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsEnabled)(BOOLEAN value) override;
        IFACEMETHOD(get_Key)(_Out_ ABI::Windows::System::VirtualKey* pValue) override;
        IFACEMETHOD(put_Key)(ABI::Windows::System::VirtualKey value) override;
        IFACEMETHOD(get_Modifiers)(_Out_ ABI::Windows::System::VirtualKeyModifiers* pValue) override;
        IFACEMETHOD(put_Modifiers)(ABI::Windows::System::VirtualKeyModifiers value) override;
        IFACEMETHOD(get_ScopeOwner)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue) override;
        IFACEMETHOD(put_ScopeOwner)(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue) override;

        // Events.
        _Check_return_ HRESULT GetInvokedEventSourceNoRef(_Outptr_ InvokedEventSourceType** ppEventSource);
        IFACEMETHOD(add_Invoked)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Input::KeyboardAccelerator*, ABI::Microsoft::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Invoked)(EventRegistrationToken token) override;

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "KeyboardAccelerator_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) KeyboardAcceleratorFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Input::IKeyboardAcceleratorFactory
        , public ABI::Microsoft::UI::Xaml::Input::IKeyboardAcceleratorStatics
    {
        BEGIN_INTERFACE_MAP(KeyboardAcceleratorFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(KeyboardAcceleratorFactory, ABI::Microsoft::UI::Xaml::Input::IKeyboardAcceleratorFactory)
            INTERFACE_ENTRY(KeyboardAcceleratorFactory, ABI::Microsoft::UI::Xaml::Input::IKeyboardAcceleratorStatics)
        END_INTERFACE_MAP(KeyboardAcceleratorFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Input::IKeyboardAccelerator** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_KeyProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ModifiersProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ScopeOwnerProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::KeyboardAccelerator;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
