#ifndef _sun_awt_X11_XClipboard$SelectionNotifyHandler_h_
#define _sun_awt_X11_XClipboard$SelectionNotifyHandler_h_
//$ class sun.awt.X11.XClipboard$SelectionNotifyHandler
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

class XClipboard$SelectionNotifyHandler : public ::sun::awt::X11::XEventDispatcher {
	$class(XClipboard$SelectionNotifyHandler, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XClipboard$SelectionNotifyHandler();
	void init$();
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XClipboard$SelectionNotifyHandler_h_