#ifndef _sun_awt_X11_XMSelection$1_h_
#define _sun_awt_X11_XMSelection$1_h_
//$ class sun.awt.X11.XMSelection$1
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

class XMSelection$1 : public ::sun::awt::X11::XEventDispatcher {
	$class(XMSelection$1, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XMSelection$1();
	void init$(int32_t val$screen);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	int32_t val$screen = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMSelection$1_h_