/*
 *   -- http://android-fb2png.googlecode.com/svn/trunk/fb2png-jni.c --
 *
 *   Copyright 2011, Kyan He <kyan.ql.he@gmail.com>
 *
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <jni.h>

#include "fb2png.h"

jint Java_im_kyan_android_graphics_FrameBuffer_captureScreen( JNIEnv *env,
                                          jobject this,
                                          jstring path )
{
    return fb2png("/data/local/fbdump.png");
}
