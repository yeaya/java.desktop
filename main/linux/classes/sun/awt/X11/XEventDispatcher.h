#ifndef _sun_awt_X11_XEventDispatcher_h_
#define _sun_awt_X11_XEventDispatcher_h_
//$ interface sun.awt.X11.XEventDispatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEventDispatcher : public ::java::lang::Object {
	$interface(XEventDispatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEventDispatcher_h_