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

// WindowsGraphicsPrintingOptionDetails_priv.h
// Forward decls for private object generation
#pragma once

#include "WindowsFoundation_priv.h"
#include "WindowsGraphicsPrinting_priv.h"
ComPtr<ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> WGPOIPrintTaskOptionDetailsStatic_inst();

id RTProxiedNSArray_RTObject_create(IInspectable* val);
id RTProxiedNSDictionary_NSString_RTObject_WGPOIPrintOptionDetails_create(IInspectable* val);
id RTProxiedNSMutableArray_NSString_create(IInspectable* val);

@class RTProxiedNSArray_RTObject, RTProxiedNSDictionary_NSString_RTObject_WGPOIPrintOptionDetails, RTProxiedNSMutableArray_NSString;

#ifndef __ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_System_Object__DEFINED
#define __ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_System_Object__DEFINED
class ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_System_Object
    : public RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
                          ABI::Windows::Foundation::
                              ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails*, IInspectable*>> {
    void (^_delegate)(WGPOPrintTaskOptionDetails*, RTObject*);

public:
    ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_System_Object(void (^del)(WGPOPrintTaskOptionDetails*,
                                                                                                                RTObject*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_System_Object() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE Invoke(ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails* arg0,
                                             IInspectable* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WGPOPrintTaskOptionDetails>(arg0), _createBareRTObj(arg1));
            return 0;
        };
    }
};
#endif

#ifndef __ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs__DEFINED
#define __ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs__DEFINED
class
    ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs
    : public RuntimeClass<
          RuntimeClassFlags<WinRtClassicComMix>,
          ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails*,
                                                       ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs*>> {
    void (^_delegate)(WGPOPrintTaskOptionDetails*, WGPOPrintTaskOptionChangedEventArgs*);

public:
    ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs(
        void (^del)(WGPOPrintTaskOptionDetails*, WGPOPrintTaskOptionChangedEventArgs*))
        : _delegate([del copy]) {
    }
    ~ITypedEventHandler_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs() {
        [_delegate release];
    }
    virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override {
        *trustLevel = BaseTrust;
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE
    Invoke(ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails* arg0,
           ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs* arg1) override {
        @autoreleasepool {
            _delegate(_createRtProxy<WGPOPrintTaskOptionDetails>(arg0), _createRtProxy<WGPOPrintTaskOptionChangedEventArgs>(arg1));
            return 0;
        };
    }
};
#endif
