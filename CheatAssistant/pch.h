// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H

//#define VMP_SWITCH_ON

// TODO: 添加要在此处预编译的标头
#include <windows.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <tchar.h>
#include <process.h>  
#include <thread>  
#include <ctime>
#include <iostream>
#include <algorithm> 

#include "../VMProtectSDK.h"

//#ifndef HTTPCLIENT_H
//#include "../http/Http.h"
//#pragma comment(lib,"http.lib")
//#endif // !HTTPCLIENT_H

#ifndef __CONSTS_H__
#include "../consts.h"
#endif // !__CONSTS_H__

#ifndef __UTILS_H__
#include "../utils/utils.h"
#pragma comment(lib,"utils.lib")
#endif // !__UTILS_H__

#ifndef __KCA_H__
#include "../Kca/Kca.h"
#pragma comment(lib,"Kca.lib")
#endif // !__UTILS_H__


#ifndef __MSDK_H__
#include "../msdk/msdk.h"
#pragma comment(lib,"msdk.lib")
#endif // !__KCY_H__

#ifndef __MEMORY_H__
#include "../memory.hpp"
extern Memory<Kca> memory;
#endif // !__MEMORY_H__

#ifndef __LUA_H__
#include "lua.hpp"
extern Lua lua;
#endif // !__LUA_H__

#include "key.hpp"
extern Key<Msdk> key;

typedef struct _POS
{
	int x, y, z = 0;
}POS, *PPOS;
typedef struct _ROLE_POS
{
	POS room = { 38,2 };
	int x = 0;
	int y = 0;
	int z = 0;
} CITY_INFO, *PCITY_INFO, ROLE_POS, *PROLE_POS;


extern WINDOW_INFO gameWindowInfo;
extern HWND g_hWnd;

extern int g_异常计数;
extern bool g_首图标记;
extern int g_过图时间;
extern int g_副本编号;
extern int g_副本难度;
extern bool g_自动开关;
extern int g_自动模式;
extern int g_刷图次数;
extern int g_预留疲劳;
extern int g_移动方式;
extern int g_剧情功能;
extern int g_变身代码;
#endif //PCH_H
