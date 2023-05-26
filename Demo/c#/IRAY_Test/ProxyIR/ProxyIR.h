#pragma comment( lib, "IRNetSDK.lib" )
#define RC_INVOKED

#pragma once
#include <WinDef.h>
#include "IRNet.h"
using namespace System;

namespace ProxyIR {
	public ref class IRTherm
	{
	public:
		bool ClientStartup(IntPtr hwnd)
		{
			BOOL rc = IRNET_ClientStartup(0, hwnd.ToPointer, NULL);
			return rc;
		}
	};
}
