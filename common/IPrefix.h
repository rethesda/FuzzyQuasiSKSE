#pragma once

// 4018 - signed/unsigned mismatch
// 4200 - zero-sized array
// 4244 - loss of data by assignment
// 4267 - possible loss of data (truncation)
// 4305 - truncation by assignment
// 4288 - disable warning for crap microsoft extension screwing up the scope of variables defined in for loops
// 4311 - pointer truncation
// 4312 - pointer extension
#pragma warning(disable: 4018 4200 4244 4267 4305 4288 4312 4311)

// need win8 for windows store APIs
#define _WIN32_WINNT	0x0602

#include <cstdlib>


#include <cstdio>
#include <cstring>
#include <string>
#include "ITypes.h"
#include "IErrors.h"
#include "IDynamicCreate.h"
#include "IDebugLog.h"
#include "ISingleton.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows specific: C, C++
#include <windows.h>
#include <winsock2.h>
#endif
