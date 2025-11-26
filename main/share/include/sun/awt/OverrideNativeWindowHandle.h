#ifndef _sun_awt_OverrideNativeWindowHandle_h_
#define _sun_awt_OverrideNativeWindowHandle_h_
//$ interface sun.awt.OverrideNativeWindowHandle
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {

class $import OverrideNativeWindowHandle : public ::java::lang::Object {
	$interface(OverrideNativeWindowHandle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void overrideWindowHandle(int64_t handle) {}
};

	} // awt
} // sun

#endif // _sun_awt_OverrideNativeWindowHandle_h_