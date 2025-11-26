#ifndef _sun_awt_X11_XToolkit$3_h_
#define _sun_awt_X11_XToolkit$3_h_
//$ class sun.awt.X11.XToolkit$3
//$ extends sun.awt.X11.XEventDispatcher

#include <sun/awt/X11/XEventDispatcher.h>

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

class XToolkit$3 : public ::sun::awt::X11::XEventDispatcher {
	$class(XToolkit$3, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XToolkit$3();
	void init$();
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XToolkit$3_h_