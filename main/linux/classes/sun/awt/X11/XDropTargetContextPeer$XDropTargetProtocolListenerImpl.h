#ifndef _sun_awt_X11_XDropTargetContextPeer$XDropTargetProtocolListenerImpl_h_
#define _sun_awt_X11_XDropTargetContextPeer$XDropTargetProtocolListenerImpl_h_
//$ class sun.awt.X11.XDropTargetContextPeer$XDropTargetProtocolListenerImpl
//$ extends sun.awt.X11.XDropTargetProtocolListener

#include <java/lang/Array.h>
#include <sun/awt/X11/XDropTargetProtocolListener.h>

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

class XDropTargetContextPeer$XDropTargetProtocolListenerImpl : public ::sun::awt::X11::XDropTargetProtocolListener {
	$class(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, 0, ::sun::awt::X11::XDropTargetProtocolListener)
public:
	XDropTargetContextPeer$XDropTargetProtocolListenerImpl();
	void init$();
	static ::sun::awt::X11::XDropTargetProtocolListener* getInstance();
	virtual void handleDropTargetNotification(::sun::awt::X11::XWindow* xwindow, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, int32_t eventID) override;
	static bool $assertionsDisabled;
	static ::sun::awt::X11::XDropTargetProtocolListener* theInstance;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDropTargetContextPeer$XDropTargetProtocolListenerImpl_h_