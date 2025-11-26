#ifndef _sun_awt_X11_XTrayIconPeer$1_h_
#define _sun_awt_X11_XTrayIconPeer$1_h_
//$ class sun.awt.X11.XTrayIconPeer$1
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

class XTrayIconPeer$1 : public ::sun::awt::X11::XEventDispatcher {
	$class(XTrayIconPeer$1, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XTrayIconPeer$1();
	void init$();
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$1_h_