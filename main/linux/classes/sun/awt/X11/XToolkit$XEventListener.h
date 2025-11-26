#ifndef _sun_awt_X11_XToolkit$XEventListener_h_
#define _sun_awt_X11_XToolkit$XEventListener_h_
//$ interface sun.awt.X11.XToolkit$XEventListener
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

class XToolkit$XEventListener : public ::java::lang::Object {
	$interface(XToolkit$XEventListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void eventProcessed(::sun::awt::X11::XEvent* e) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XToolkit$XEventListener_h_