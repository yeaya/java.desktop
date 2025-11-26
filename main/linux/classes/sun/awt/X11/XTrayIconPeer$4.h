#ifndef _sun_awt_X11_XTrayIconPeer$4_h_
#define _sun_awt_X11_XTrayIconPeer$4_h_
//$ class sun.awt.X11.XTrayIconPeer$4
//$ extends sun.awt.X11.XEventDispatcher

#include <sun/awt/X11/XEventDispatcher.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEvent;
			class XTrayIconPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer$4 : public ::sun::awt::X11::XEventDispatcher {
	$class(XTrayIconPeer$4, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XTrayIconPeer$4();
	void init$(::sun::awt::X11::XTrayIconPeer* this$0);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	::sun::awt::X11::XTrayIconPeer* this$0 = nullptr;
	::sun::awt::X11::XTrayIconPeer* xtiPeer = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$4_h_