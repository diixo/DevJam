// Copyright (C) 2006  Davis E. King (davis@dlib.net)
// License: Boost Software License   See LICENSE.txt for the full license.
#ifndef DLIB_THREADs_KERNEL_
#define DLIB_THREADs_KERNEL_

#include "lib/dlib/src/platform.h"

#ifdef WIN32
#include "lib/dlib/src/threads/windows.h"
#endif

#ifndef WIN32
#include "lib/dlib/src/threads/posix.h"
#endif

#endif // DLIB_THREADs_KERNEL_


