/*
 * Copyright (C) 2014 NAVER Corp. All rights reserved.
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

#include "config.h"
#include "AWKCallback.h"

#include <java/lang.h>

namespace org {
namespace webkit {
namespace Managed {

void AWKCallback::invoke()
{
}

void AWKCallback::invoke(bool value)
{
}

void AWKCallback::invoke(int32_t value)
{
}

void AWKCallback::invoke(int64_t value)
{
}

void AWKCallback::invoke(float value)
{
}

void AWKCallback::invoke(double value)
{
}

void AWKCallback::invoke(const std::string& value)
{
}

void AWKCallback::invoke(const std::shared_ptr<void>& value)
{
}

void AWKCallback::invoke(const std::shared_ptr<void>& first, const std::shared_ptr<void>& second)
{
}

void AWKCallback::INIT()
{
}

}
} // namespace webkit
} // namespace org
