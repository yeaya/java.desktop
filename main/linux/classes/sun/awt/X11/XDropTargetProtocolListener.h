#ifndef _sun_awt_X11_XDropTargetProtocolListener_h_
#define _sun_awt_X11_XDropTargetProtocolListener_h_
//$ interface sun.awt.X11.XDropTargetProtocolListener
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDropTargetProtocolListener : public ::java::lang::Object {
	$interface(XDropTargetProtocolListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handleDropTargetNotification(::sun::awt::X11::XWindow* xwindow, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, int32_t eventID) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDropTargetProtocolListener_h_