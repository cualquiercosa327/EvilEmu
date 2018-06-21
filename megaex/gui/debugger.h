/*
 *  debugger.h

Copyright (c) 2011 Lee Hammerton

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

 */

#pragma once

#include "mytypes.h"

#define DEB_Mode_68000				(0)
#define DEB_Mode_Z80					(3)
#define DEB_Mode_SH2_Master		(6)
#define DEB_Mode_SH2_Slave		(9)

#if ENABLE_DEBUGGER

ION_C_API void DisplayDebugger();
ION_C_API int UpdateDebugger();

ION_C_API void DEB_PauseEmulation(int mode,const char *reason);

#else

#define DisplayDebugger()
#define UpdateDebugger()	0

#define DEB_PauseEmulation(x,y)

#endif
