#ifndef _sun_java2d_windows_WindowsFlags_h_
#define _sun_java2d_windows_WindowsFlags_h_
//$ class sun.java2d.windows.WindowsFlags
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace windows {

class WindowsFlags : public ::java::lang::Object {
	$class(WindowsFlags, 0, ::java::lang::Object)
public:
	WindowsFlags();
	void init$();
	static bool getBooleanProp($String* p, bool defaultVal);
	static int32_t getIntProp($String* p, int32_t defaultVal);
	static bool getPropertySet($String* p);
	static void initFlags();
	static void initJavaFlags();
	static bool initNativeFlags();
	static bool isBooleanPropTrueVerbose($String* p);
	static bool isD3DEnabled();
	static bool isD3DOnScreenEnabled();
	static bool isD3DSet();
	static bool isD3DVerbose();
	static bool isGdiBlitEnabled();
	static bool isMagPresent();
	static bool isOGLEnabled();
	static bool isOGLVerbose();
	static bool isOffscreenSharingEnabled();
	static bool gdiBlitEnabled;
	static bool d3dEnabled;
	static bool d3dVerbose;
	static bool d3dSet;
	static bool d3dOnScreenEnabled;
	static bool oglEnabled;
	static bool oglVerbose;
	static bool offscreenSharingEnabled;
	static bool magPresent;
	static bool setHighDPIAware;
};

		} // windows
	} // java2d
} // sun

#endif // _sun_java2d_windows_WindowsFlags_h_