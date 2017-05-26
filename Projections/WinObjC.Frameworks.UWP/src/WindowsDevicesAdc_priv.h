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

// WindowsDevicesAdc_priv.h
// Forward decls for private object generation
#pragma once

#include "WindowsFoundation_priv.h"
#include "WindowsDevicesAdcProvider_priv.h"
ComPtr<ABI::Windows::Devices::Adc::IAdcControllerStatics> WDAIAdcControllerStatics_inst();
ComPtr<ABI::Windows::Devices::Adc::IAdcControllerStatics2> WDAIAdcControllerStatics2_inst();

id RTProxiedNSArray_WDAAdcController_create(IInspectable* val);

@class RTProxiedNSArray_WDAAdcController;
