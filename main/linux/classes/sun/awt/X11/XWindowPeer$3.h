#ifndef _sun_awt_X11_XWindowPeer$3_h_
#define _sun_awt_X11_XWindowPeer$3_h_
//$ class sun.awt.X11.XWindowPeer$3
//$ extends sun.awt.X11.XEventDispatcher

#include <sun/awt/X11/XEventDispatcher.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEvent;
			class XWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWindowPeer$3 : public ::sun::awt::X11::XEventDispatcher {
	$class(XWindowPeer$3, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XWindowPeer$3();
	void init$(::sun::awt::X11::XWindowPeer* this$0);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	::sun::awt::X11::XWindowPeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWindowPeer$3_h_