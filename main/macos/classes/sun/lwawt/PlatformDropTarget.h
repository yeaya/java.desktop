#ifndef _sun_lwawt_PlatformDropTarget_h_
#define _sun_lwawt_PlatformDropTarget_h_
//$ interface sun.lwawt.PlatformDropTarget
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace lwawt {

class PlatformDropTarget : public ::java::lang::Object {
	$interface(PlatformDropTarget, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
};

	} // lwawt
} // sun

#endif // _sun_lwawt_PlatformDropTarget_h_