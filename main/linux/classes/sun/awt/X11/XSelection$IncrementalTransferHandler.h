#ifndef _sun_awt_X11_XSelection$IncrementalTransferHandler_h_
#define _sun_awt_X11_XSelection$IncrementalTransferHandler_h_
//$ class sun.awt.X11.XSelection$IncrementalTransferHandler
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

class XSelection$IncrementalTransferHandler : public ::sun::awt::X11::XEventDispatcher {
	$class(XSelection$IncrementalTransferHandler, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XSelection$IncrementalTransferHandler();
	void init$();
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XSelection$IncrementalTransferHandler_h_