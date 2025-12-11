#ifndef _sun_awt_FullScreenCapable_h_
#define _sun_awt_FullScreenCapable_h_
//$ interface sun.awt.FullScreenCapable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {

class $import FullScreenCapable : public ::java::lang::Object {
	$interface(FullScreenCapable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void enterFullScreenMode() {}
	virtual void exitFullScreenMode() {}
};

	} // awt
} // sun

#endif // _sun_awt_FullScreenCapable_h_