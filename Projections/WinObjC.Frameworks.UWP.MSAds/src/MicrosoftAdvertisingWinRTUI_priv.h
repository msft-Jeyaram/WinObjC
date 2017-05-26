//******************************************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// MicrosoftAdvertisingWinRTUI_priv.h
// Forward decls for private object generation
#pragma once

#include "MicrosoftAdvertising_priv.h"
#include "WindowsUIXamlInput_priv.h"
#include "WindowsUIXaml_priv.h"
#include "WindowsFoundation_priv.h"
#include "WindowsUIXamlControls_priv.h"
#include "WindowsUIXamlMediaAnimation_priv.h"
#include "WindowsApplicationModelDataTransfer_priv.h"
#include "WindowsUIXamlMedia_priv.h"
#include "WindowsUIInput_priv.h"
#include "WindowsUIXamlAutomationPeers_priv.h"
#include "WindowsUIXamlMarkup_priv.h"
#include "WindowsUIXamlControlsPrimitives_priv.h"
#include "WindowsUIXamlData_priv.h"
#include "WindowsUIXamlMediaMedia3D_priv.h"
#include "WindowsUICore_priv.h"
#include "WindowsUIText_priv.h"
static ComPtr<ABI::Microsoft::Advertising::WinRT::UI::__IManipulationStateChangedEventArgsFactory>
MAWU__IManipulationStateChangedEventArgsFactory_inst();
static ComPtr<ABI::Microsoft::Advertising::WinRT::UI::__IExpandPropertiesFactory> MAWU__IExpandPropertiesFactory_inst();
ComPtr<ABI::Microsoft::Advertising::WinRT::UI::__IExpandPropertiesStatics> MAWU__IExpandPropertiesStatics_inst();

id RTProxiedIterableNSArray_RTProxiedIterableNSArray_WFPoint_create(IInspectable* val);
id RTProxiedIterableNSArray_WFPoint_create(IInspectable* val);
id RTProxiedNSArray_Single_create(IInspectable* val);
id RTProxiedNSArray_WUXIPointer_create(IInspectable* val);

@class RTProxiedIterableNSArray_RTProxiedIterableNSArray_WFPoint, RTProxiedIterableNSArray_WFPoint, RTProxiedNSArray_Single,
    RTProxiedNSArray_WUXIPointer;

#ifndef __EventHandler_Microsoft_Advertising_WinRT_UI_AdErrorEventArgs__DEFINED
#define __EventHandler_Microsoft_Advertising_WinRT_UI_AdErrorEventArgs__DEFINED
class EventHandler_Microsoft_Advertising_WinRT_UI_AdErrorEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::Advertising::WinRT::UI::AdErrorEventArgs*>> {
    void (^_delegate)(RTObject*, MAWUAdErrorEventArgs*);

public:
    EventHandler_Microsoft_Advertising_WinRT_UI_AdErrorEventArgs(void (^del)(RTObject*, MAWUAdErrorEventArgs*)) : _delegate([del copy]) {
    }
    ~EventHandler_Microsoft_Advertising_WinRT_UI_AdErrorEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Microsoft::Advertising::WinRT::UI::__IAdErrorEventArgsPublicNonVirtuals* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<MAWUAdErrorEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __EventHandler_Microsoft_Advertising_WinRT_UI_ManipulationStateChangedEventArgs__DEFINED
#define __EventHandler_Microsoft_Advertising_WinRT_UI_ManipulationStateChangedEventArgs__DEFINED
class EventHandler_Microsoft_Advertising_WinRT_UI_ManipulationStateChangedEventArgs
    : public RuntimeClass<
          RuntimeClassFlags<WinRtClassicComMix>,
          ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::Advertising::WinRT::UI::ManipulationStateChangedEventArgs*>> {
    void (^_delegate)(RTObject*, MAWUManipulationStateChangedEventArgs*);

public:
    EventHandler_Microsoft_Advertising_WinRT_UI_ManipulationStateChangedEventArgs(void (^del)(RTObject*,
                                                                                              MAWUManipulationStateChangedEventArgs*))
        : _delegate([del copy]) {
    }
    ~EventHandler_Microsoft_Advertising_WinRT_UI_ManipulationStateChangedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(
        IInspectable* arg0, ABI::Microsoft::Advertising::WinRT::UI::__IManipulationStateChangedEventArgsPublicNonVirtuals* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<MAWUManipulationStateChangedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __EventHandler_Microsoft_Advertising_WinRT_UI_MouseWheelEventArgs__DEFINED
#define __EventHandler_Microsoft_Advertising_WinRT_UI_MouseWheelEventArgs__DEFINED
class EventHandler_Microsoft_Advertising_WinRT_UI_MouseWheelEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::Advertising::WinRT::UI::MouseWheelEventArgs*>> {
    void (^_delegate)(RTObject*, MAWUMouseWheelEventArgs*);

public:
    EventHandler_Microsoft_Advertising_WinRT_UI_MouseWheelEventArgs(void (^del)(RTObject*, MAWUMouseWheelEventArgs*))
        : _delegate([del copy]) {
    }
    ~EventHandler_Microsoft_Advertising_WinRT_UI_MouseWheelEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE
    Invoke(IInspectable* arg0, ABI::Microsoft::Advertising::WinRT::UI::__IMouseWheelEventArgsPublicNonVirtuals* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<MAWUMouseWheelEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __EventHandler_Microsoft_Advertising_WinRT_UI_PointerDownEventArgs__DEFINED
#define __EventHandler_Microsoft_Advertising_WinRT_UI_PointerDownEventArgs__DEFINED
class EventHandler_Microsoft_Advertising_WinRT_UI_PointerDownEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::Advertising::WinRT::UI::PointerDownEventArgs*>> {
    void (^_delegate)(RTObject*, MAWUPointerDownEventArgs*);

public:
    EventHandler_Microsoft_Advertising_WinRT_UI_PointerDownEventArgs(void (^del)(RTObject*, MAWUPointerDownEventArgs*))
        : _delegate([del copy]) {
    }
    ~EventHandler_Microsoft_Advertising_WinRT_UI_PointerDownEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE
    Invoke(IInspectable* arg0, ABI::Microsoft::Advertising::WinRT::UI::__IPointerDownEventArgsPublicNonVirtuals* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<MAWUPointerDownEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __EventHandler_Microsoft_Advertising_WinRT_UI_PointerMoveEventArgs__DEFINED
#define __EventHandler_Microsoft_Advertising_WinRT_UI_PointerMoveEventArgs__DEFINED
class EventHandler_Microsoft_Advertising_WinRT_UI_PointerMoveEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::Advertising::WinRT::UI::PointerMoveEventArgs*>> {
    void (^_delegate)(RTObject*, MAWUPointerMoveEventArgs*);

public:
    EventHandler_Microsoft_Advertising_WinRT_UI_PointerMoveEventArgs(void (^del)(RTObject*, MAWUPointerMoveEventArgs*))
        : _delegate([del copy]) {
    }
    ~EventHandler_Microsoft_Advertising_WinRT_UI_PointerMoveEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE
    Invoke(IInspectable* arg0, ABI::Microsoft::Advertising::WinRT::UI::__IPointerMoveEventArgsPublicNonVirtuals* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<MAWUPointerMoveEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __EventHandler_System_Object__DEFINED
#define __EventHandler_System_Object__DEFINED
class EventHandler_System_Object
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::Foundation::IEventHandler<IInspectable*>> {
    void (^_delegate)(RTObject*, RTObject*);

public:
    EventHandler_System_Object(void (^del)(RTObject*, RTObject*)) : _delegate([del copy]) {
    }
    ~EventHandler_System_Object() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, IInspectable* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createBareRTObj(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __EventHandler_Windows_UI_Xaml_RoutedEventArgs__DEFINED
#define __EventHandler_Windows_UI_Xaml_RoutedEventArgs__DEFINED
class EventHandler_Windows_UI_Xaml_RoutedEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::IEventHandler<ABI::Windows::UI::Xaml::RoutedEventArgs*>> {
    void (^_delegate)(RTObject*, WXRoutedEventArgs*);

public:
    EventHandler_Windows_UI_Xaml_RoutedEventArgs(void (^del)(RTObject*, WXRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~EventHandler_Windows_UI_Xaml_RoutedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, ABI::Windows::UI::Xaml::IRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WXRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusDisengagedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusDisengagedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusDisengagedEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Controls::Control*,
                                                                       ABI::Windows::UI::Xaml::Controls::FocusDisengagedEventArgs*>> {
    void (^_delegate)(WXCControl*, WXCFocusDisengagedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusDisengagedEventArgs(
        void (^del)(WXCControl*, WXCFocusDisengagedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusDisengagedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::Controls::IControl* arg0,
                                             ABI::Windows::UI::Xaml::Controls::IFocusDisengagedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXCControl>(arg0), _createRtProxy<WXCFocusDisengagedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusEngagedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusEngagedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusEngagedEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Controls::Control*,
                                                                       ABI::Windows::UI::Xaml::Controls::FocusEngagedEventArgs*>> {
    void (^_delegate)(WXCControl*, WXCFocusEngagedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusEngagedEventArgs(
        void (^del)(WXCControl*, WXCFocusEngagedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_Controls_Control_Windows_UI_Xaml_Controls_FocusEngagedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::Controls::IControl* arg0,
                                             ABI::Windows::UI::Xaml::Controls::IFocusEngagedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXCControl>(arg0), _createRtProxy<WXCFocusEngagedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_System_Object__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_System_Object__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_System_Object
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::FrameworkElement*, IInspectable*>> {
    void (^_delegate)(WXFrameworkElement*, RTObject*);

public:
    ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_System_Object(void (^del)(WXFrameworkElement*, RTObject*)) : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_System_Object() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IFrameworkElement* arg0, IInspectable* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXFrameworkElement>(arg0), _createBareRTObj(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_Windows_UI_Xaml_DataContextChangedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_Windows_UI_Xaml_DataContextChangedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_Windows_UI_Xaml_DataContextChangedEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::FrameworkElement*,
                                                                       ABI::Windows::UI::Xaml::DataContextChangedEventArgs*>> {
    void (^_delegate)(WXFrameworkElement*, WXDataContextChangedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_Windows_UI_Xaml_DataContextChangedEventArgs(
        void (^del)(WXFrameworkElement*, WXDataContextChangedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_FrameworkElement_Windows_UI_Xaml_DataContextChangedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IFrameworkElement* arg0,
                                             ABI::Windows::UI::Xaml::IDataContextChangedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXFrameworkElement>(arg0), _createRtProxy<WXDataContextChangedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DragStartingEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DragStartingEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DragStartingEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,
                                                                       ABI::Windows::UI::Xaml::DragStartingEventArgs*>> {
    void (^_delegate)(WXUIElement*, WXDragStartingEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DragStartingEventArgs(void (^del)(WXUIElement*, WXDragStartingEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DragStartingEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IUIElement* arg0,
                                             ABI::Windows::UI::Xaml::IDragStartingEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXUIElement>(arg0), _createRtProxy<WXDragStartingEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DropCompletedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DropCompletedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DropCompletedEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,
                                                                       ABI::Windows::UI::Xaml::DropCompletedEventArgs*>> {
    void (^_delegate)(WXUIElement*, WXDropCompletedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DropCompletedEventArgs(void (^del)(WXUIElement*,
                                                                                                    WXDropCompletedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_DropCompletedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IUIElement* arg0,
                                             ABI::Windows::UI::Xaml::IDropCompletedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXUIElement>(arg0), _createRtProxy<WXDropCompletedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs
    : public RuntimeClass<
          RuntimeClassFlags<WinRtClassicComMix>,
          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,
                                                       ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*>> {
    void (^_delegate)(WXUIElement*, WUXIAccessKeyDisplayDismissedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs(
        void (^del)(WXUIElement*, WUXIAccessKeyDisplayDismissedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IUIElement* arg0,
                                             ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXUIElement>(arg0), _createRtProxy<WUXIAccessKeyDisplayDismissedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs
    : public RuntimeClass<
          RuntimeClassFlags<WinRtClassicComMix>,
          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,
                                                       ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*>> {
    void (^_delegate)(WXUIElement*, WUXIAccessKeyDisplayRequestedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs(
        void (^del)(WXUIElement*, WUXIAccessKeyDisplayRequestedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IUIElement* arg0,
                                             ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXUIElement>(arg0), _createRtProxy<WUXIAccessKeyDisplayRequestedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,
                                                                       ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*>> {
    void (^_delegate)(WXUIElement*, WUXIAccessKeyInvokedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs(
        void (^del)(WXUIElement*, WUXIAccessKeyInvokedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IUIElement* arg0,
                                             ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXUIElement>(arg0), _createRtProxy<WUXIAccessKeyInvokedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_ContextRequestedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_ContextRequestedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_ContextRequestedEventArgs
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*,
                                                                       ABI::Windows::UI::Xaml::Input::ContextRequestedEventArgs*>> {
    void (^_delegate)(WXUIElement*, WUXIContextRequestedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_ContextRequestedEventArgs(
        void (^del)(WXUIElement*, WUXIContextRequestedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_Input_ContextRequestedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IUIElement* arg0,
                                             ABI::Windows::UI::Xaml::Input::IContextRequestedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXUIElement>(arg0), _createRtProxy<WUXIContextRequestedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_RoutedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_RoutedEventArgs__DEFINED
class ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_RoutedEventArgs
    : public RuntimeClass<
          RuntimeClassFlags<WinRtClassicComMix>,
          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::RoutedEventArgs*>> {
    void (^_delegate)(WXUIElement*, WXRoutedEventArgs*);

public:
    ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_RoutedEventArgs(void (^del)(WXUIElement*, WXRoutedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_UI_Xaml_UIElement_Windows_UI_Xaml_RoutedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IUIElement* arg0,
                                             ABI::Windows::UI::Xaml::IRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXUIElement>(arg0), _createRtProxy<WXRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIDoubleTappedEventHandler_shim__DEFINED
#define __WUXIDoubleTappedEventHandler_shim__DEFINED
class WUXIDoubleTappedEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IDoubleTappedEventHandler> {
    void (^_delegate)(RTObject*, WUXIDoubleTappedRoutedEventArgs*);

public:
    WUXIDoubleTappedEventHandler_shim(void (^del)(RTObject*, WUXIDoubleTappedRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIDoubleTappedEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIDoubleTappedRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIHoldingEventHandler_shim__DEFINED
#define __WUXIHoldingEventHandler_shim__DEFINED
class WUXIHoldingEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IHoldingEventHandler> {
    void (^_delegate)(RTObject*, WUXIHoldingRoutedEventArgs*);

public:
    WUXIHoldingEventHandler_shim(void (^del)(RTObject*, WUXIHoldingRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIHoldingEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, ABI::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIHoldingRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIKeyEventHandler_shim__DEFINED
#define __WUXIKeyEventHandler_shim__DEFINED
class WUXIKeyEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IKeyEventHandler> {
    void (^_delegate)(RTObject*, WUXIKeyRoutedEventArgs*);

public:
    WUXIKeyEventHandler_shim(void (^del)(RTObject*, WUXIKeyRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIKeyEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, ABI::Windows::UI::Xaml::Input::IKeyRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIKeyRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIManipulationCompletedEventHandler_shim__DEFINED
#define __WUXIManipulationCompletedEventHandler_shim__DEFINED
class WUXIManipulationCompletedEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IManipulationCompletedEventHandler> {
    void (^_delegate)(RTObject*, WUXIManipulationCompletedRoutedEventArgs*);

public:
    WUXIManipulationCompletedEventHandler_shim(void (^del)(RTObject*, WUXIManipulationCompletedRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIManipulationCompletedEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIManipulationCompletedRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIManipulationDeltaEventHandler_shim__DEFINED
#define __WUXIManipulationDeltaEventHandler_shim__DEFINED
class WUXIManipulationDeltaEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IManipulationDeltaEventHandler> {
    void (^_delegate)(RTObject*, WUXIManipulationDeltaRoutedEventArgs*);

public:
    WUXIManipulationDeltaEventHandler_shim(void (^del)(RTObject*, WUXIManipulationDeltaRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIManipulationDeltaEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIManipulationDeltaRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIManipulationInertiaStartingEventHandler_shim__DEFINED
#define __WUXIManipulationInertiaStartingEventHandler_shim__DEFINED
class WUXIManipulationInertiaStartingEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IManipulationInertiaStartingEventHandler> {
    void (^_delegate)(RTObject*, WUXIManipulationInertiaStartingRoutedEventArgs*);

public:
    WUXIManipulationInertiaStartingEventHandler_shim(void (^del)(RTObject*, WUXIManipulationInertiaStartingRoutedEventArgs*))
        : _delegate([del copy]) {
    }
    ~WUXIManipulationInertiaStartingEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIManipulationInertiaStartingRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIManipulationStartedEventHandler_shim__DEFINED
#define __WUXIManipulationStartedEventHandler_shim__DEFINED
class WUXIManipulationStartedEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IManipulationStartedEventHandler> {
    void (^_delegate)(RTObject*, WUXIManipulationStartedRoutedEventArgs*);

public:
    WUXIManipulationStartedEventHandler_shim(void (^del)(RTObject*, WUXIManipulationStartedRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIManipulationStartedEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIManipulationStartedRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIManipulationStartingEventHandler_shim__DEFINED
#define __WUXIManipulationStartingEventHandler_shim__DEFINED
class WUXIManipulationStartingEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IManipulationStartingEventHandler> {
    void (^_delegate)(RTObject*, WUXIManipulationStartingRoutedEventArgs*);

public:
    WUXIManipulationStartingEventHandler_shim(void (^del)(RTObject*, WUXIManipulationStartingRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIManipulationStartingEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIManipulationStartingRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIPointerEventHandler_shim__DEFINED
#define __WUXIPointerEventHandler_shim__DEFINED
class WUXIPointerEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IPointerEventHandler> {
    void (^_delegate)(RTObject*, WUXIPointerRoutedEventArgs*);

public:
    WUXIPointerEventHandler_shim(void (^del)(RTObject*, WUXIPointerRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIPointerEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, ABI::Windows::UI::Xaml::Input::IPointerRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIPointerRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXIRightTappedEventHandler_shim__DEFINED
#define __WUXIRightTappedEventHandler_shim__DEFINED
class WUXIRightTappedEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::IRightTappedEventHandler> {
    void (^_delegate)(RTObject*, WUXIRightTappedRoutedEventArgs*);

public:
    WUXIRightTappedEventHandler_shim(void (^del)(RTObject*, WUXIRightTappedRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXIRightTappedEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXIRightTappedRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WUXITappedEventHandler_shim__DEFINED
#define __WUXITappedEventHandler_shim__DEFINED
class WUXITappedEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::Input::ITappedEventHandler> {
    void (^_delegate)(RTObject*, WUXITappedRoutedEventArgs*);

public:
    WUXITappedEventHandler_shim(void (^del)(RTObject*, WUXITappedRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WUXITappedEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, ABI::Windows::UI::Xaml::Input::ITappedRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WUXITappedRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WXDependencyPropertyChangedCallback_shim__DEFINED
#define __WXDependencyPropertyChangedCallback_shim__DEFINED
class WXDependencyPropertyChangedCallback_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::IDependencyPropertyChangedCallback> {
    void (^_delegate)(WXDependencyObject*, WXDependencyProperty*);

public:
    WXDependencyPropertyChangedCallback_shim(void (^del)(WXDependencyObject*, WXDependencyProperty*)) : _delegate([del copy]) {
    }
    ~WXDependencyPropertyChangedCallback_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::UI::Xaml::IDependencyObject* arg0,
                                             ABI::Windows::UI::Xaml::IDependencyProperty* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WXDependencyObject>(arg0), _createRtProxy<WXDependencyProperty>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WXDependencyPropertyChangedEventHandler_shim__DEFINED
#define __WXDependencyPropertyChangedEventHandler_shim__DEFINED
class WXDependencyPropertyChangedEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::IDependencyPropertyChangedEventHandler> {
    void (^_delegate)(RTObject*, WXDependencyPropertyChangedEventArgs*);

public:
    WXDependencyPropertyChangedEventHandler_shim(void (^del)(RTObject*, WXDependencyPropertyChangedEventArgs*)) : _delegate([del copy]) {
    }
    ~WXDependencyPropertyChangedEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0,
                                             ABI::Windows::UI::Xaml::IDependencyPropertyChangedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WXDependencyPropertyChangedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WXDragEventHandler_shim__DEFINED
#define __WXDragEventHandler_shim__DEFINED
class WXDragEventHandler_shim : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::IDragEventHandler> {
    void (^_delegate)(RTObject*, WXDragEventArgs*);

public:
    WXDragEventHandler_shim(void (^del)(RTObject*, WXDragEventArgs*)) : _delegate([del copy]) {
    }
    ~WXDragEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, ABI::Windows::UI::Xaml::IDragEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WXDragEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WXRoutedEventHandler_shim__DEFINED
#define __WXRoutedEventHandler_shim__DEFINED
class WXRoutedEventHandler_shim : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::IRoutedEventHandler> {
    void (^_delegate)(RTObject*, WXRoutedEventArgs*);

public:
    WXRoutedEventHandler_shim(void (^del)(RTObject*, WXRoutedEventArgs*)) : _delegate([del copy]) {
    }
    ~WXRoutedEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, ABI::Windows::UI::Xaml::IRoutedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WXRoutedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __WXSizeChangedEventHandler_shim__DEFINED
#define __WXSizeChangedEventHandler_shim__DEFINED
class WXSizeChangedEventHandler_shim
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>, ABI::Windows::UI::Xaml::ISizeChangedEventHandler> {
    void (^_delegate)(RTObject*, WXSizeChangedEventArgs*);

public:
    WXSizeChangedEventHandler_shim(void (^del)(RTObject*, WXSizeChangedEventArgs*)) : _delegate([del copy]) {
    }
    ~WXSizeChangedEventHandler_shim() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable* arg0, ABI::Windows::UI::Xaml::ISizeChangedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createBareRTObj(arg0), _createRtProxy<WXSizeChangedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif
