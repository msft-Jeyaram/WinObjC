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

// WindowsApplicationModelCommunicationBlocking_priv.h
// Forward decls for private object generation
#pragma once

ComPtr<ABI::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>
WACICommunicationBlockingAppManagerStatics2_inst();
ComPtr<ABI::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
WACICommunicationBlockingAppManagerStatics_inst();
ComPtr<ABI::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>
WACICommunicationBlockingAccessManagerStatics_inst();

id RTProxiedIterableNSArray_NSString_create(IInspectable* val);

@class RTProxiedIterableNSArray_NSString;
