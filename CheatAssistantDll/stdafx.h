// stdafx.h: 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 项目特定的包含文件
//

#pragma once

#include "targetver.h"

//#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>
#include <windowsx.h>
#include <vector>
#include <string>
#include <map>
#include <ctime>
#include <process.h>
#include <thread>
#include <direct.h>
#include <tchar.h>


// 在此处引用程序需要的其他标头
#include "../VMProtectSDK.h"
#include "memory.h"

extern HWND g_hWnd;
extern bool g_switch;
extern HANDLE g_msdkHandle;

typedef HANDLE(WINAPI*M_OPEN_VIDPID)(int, int);
typedef int (WINAPI*M_RELEASEALLKEY)(HANDLE);
typedef int (WINAPI*M_KEYSTATE2)(HANDLE, int);
typedef int (WINAPI*M_KEYDOWN2)(HANDLE, int);
typedef int (WINAPI*M_KEYUP2)(HANDLE, int);
typedef int (WINAPI*M_LEFTCLICK)(HANDLE, int);
typedef int (WINAPI*M_MOVETO2)(HANDLE, int, int);
typedef int (WINAPI*M_MOVETO3)(HANDLE, int, int);
typedef int (WINAPI*M_GETCURMOUSEPOS2)(int*, int*);
typedef int (WINAPI*M_CLOSE)(HANDLE);
typedef int (WINAPI*M_RESOLUTIONUSED)(HANDLE, int, int);

extern M_OPEN_VIDPID M_Open_VidPid;
extern M_RELEASEALLKEY M_ReleaseAllKey;
extern M_KEYSTATE2 M_KeyState2;
extern M_KEYDOWN2 M_KeyDown2;
extern M_KEYUP2 M_KeyUp2;
extern M_LEFTCLICK M_LeftClick;
extern M_MOVETO2 M_MoveTo2;
extern M_MOVETO3 M_MoveTo3;
extern M_GETCURMOUSEPOS2 M_GetCurrMousePos2;
extern M_CLOSE M_Close;
extern M_RESOLUTIONUSED M_ResolutionUsed;