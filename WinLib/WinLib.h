#define	STRICT					// 由Windows.h所帶出的嚴謹檢查模式
#define WIN32_LEAN_AND_MEAN		// 把較少用的定義傳入
#if defined(_MSC_VER) && defined(_DEBUG)
#define _CRTDBG_MAP_ALLOC		// 確保除錯程式碼所要用的記憶體
#endif
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#if defined(_MSC_VER) && defined(_DEBUG)
#include <crtdbg.h>
#define	DEBUG_NEW	new(_NORMAL_BLOCK, __FILE__, __LINE__)
#else
#define	DEBUG_NEW	new
#endif
#include "Application.h"
#include "Window.h"
#include "dc.h"
#include "Dialog.h"
#include "Geometry.h"
#include "Misc.h"

//#include <Application.h>
//#include <Window.h>
//#include <dc.h>
//#include <Dialog.h>
//#include <Geometry.h>
//#include <Misc.h>

// 在VC++中，這指出連結的程式庫
#ifdef	_MSC_VER
	#ifdef	_DEBUG
		#pragma comment(lib, "WinLibD.lib")
	#else
		#pragma comment(lib, "WinLib.lib")
	#endif
#endif
