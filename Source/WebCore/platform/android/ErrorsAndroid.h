/*
 * Copyright (C) 2013 NAVER Corp. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ErrorsAndroid_h
#define ErrorsAndroid_h

#include <wtf/text/WTFString.h>

namespace WebCore {

class ResourceError;
class ResourceRequest;
class ResourceResponse;
class URL;

static const char errorDomainNetwork[] = "WebKitNetworkError";
static const char errorDomainPolicy[] = "WebKitPolicyError";
static const char errorDomainPlugin[] = "WebKitPluginError";
static const char errorDomainDownload[] = "WebKitDownloadError";
static const char errorDomainPrint[] = "WebKitPrintError";

enum NetworkError {
    NetworkErrorFailed = 399,
    NetworkErrorTransport = 300,
    NetworkErrorUnknownProtocol = 301,
    NetworkErrorCancelled = 302,
    NetworkErrorFileDoesNotExist = 303
};

// Sync'd with Mac's WebKit Errors at:
// Source/WebKit/mac/Misc/WebKitErrors[Private].h
enum PolicyError {
    PolicyErrorFailed = 199,
    PolicyErrorCannotShowMimeType = 100,
    PolicyErrorCannotShowURL = 101,
    PolicyErrorFrameLoadInterruptedByPolicyChange = 102,
    PolicyErrorCannotUseRestrictedPort = 103
};

enum PluginError {
    PluginErrorFailed = 299,
    PluginErrorCannotFindPlugin = 200,
    PluginErrorCannotLoadPlugin = 201,
    PluginErrorJavaUnavailable = 202,
    PluginErrorConnectionCancelled = 203,
    PluginErrorWillHandleLoad = 204
};

enum DownloadError {
    DownloadErrorNetwork = 499,
    DownloadErrorCancelledByUser = 400,
    DownloadErrorDestination = 401
};

enum PrintError {
    PrintErrorGeneral = 599,
    PrintErrorPrinterNotFound = 500,
    PrintErrorInvalidPageRange = 501
};

ResourceError cancelledError(const ResourceRequest&);
ResourceError blockedError(const ResourceRequest&);
ResourceError cannotShowURLError(const ResourceRequest&);
ResourceError interruptedForPolicyChangeError(const ResourceRequest&);
ResourceError cannotShowMIMETypeError(const ResourceResponse&);
ResourceError fileDoesNotExistError(const ResourceResponse&);
ResourceError pluginWillHandleLoadError(const ResourceResponse&);
ResourceError downloadNetworkError(const ResourceError&);
ResourceError downloadCancelledByUserError(const ResourceResponse&);
ResourceError downloadDestinationError(const ResourceResponse&, const String& errorMessage);
ResourceError printError(const URL& failingURL, const String& errorMessage);
ResourceError printerNotFoundError(const URL& failingURL);
ResourceError invalidPageRangeToPrint(const URL& failingURL);

}

#endif // ErrorsAndroid_h
