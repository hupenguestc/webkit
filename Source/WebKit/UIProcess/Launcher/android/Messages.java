/*
 * Copyright (C) 2017 Daewoong Jang.
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

package org.webkit.launcher;

import org.webkit.SurfaceTextureFactory;
import org.webkit.SurfaceTextureFactoryHost;

import android.os.Bundle;
import android.os.Message;

public class Messages {
    private static int sNextMessage = 0x10000000;

    public static int registerMessage() {
        return sNextMessage++;
    }

    public static Message obtain(int what, int arg1, int arg2, String data) {
        Message msg = Message.obtain(null, what, arg1, arg2);
        msg.getData().putCharSequence("data", data);
        return msg;
    }

    public static Message obtain(int what, int arg1, int arg2, Bundle data) {
        Message msg = Message.obtain(null, what, arg1, arg2);
        msg.setData(data);
        return msg;
    }

    public static void registerMessages() {
        MessageHost.registerMessages();
        SurfaceTextureFactory.registerMessages();
        SurfaceTextureFactoryHost.registerMessages();
    }
}
