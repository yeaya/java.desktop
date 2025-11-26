#ifndef _sun_awt_X11_ToplevelStateListener_h_
#define _sun_awt_X11_ToplevelStateListener_h_
//$ interface sun.awt.X11.ToplevelStateListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class ToplevelStateListener : public ::java::lang::Object {
	$interface(ToplevelStateListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void stateChangedICCCM(int32_t oldState, int32_t newState) {}
	virtual void stateChangedJava(int32_t oldState, int32_t newState) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_ToplevelStateListener_h_