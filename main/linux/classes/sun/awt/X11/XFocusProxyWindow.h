#ifndef _sun_awt_X11_XFocusProxyWindow_h_
#define _sun_awt_X11_XFocusProxyWindow_h_
//$ class sun.awt.X11.XFocusProxyWindow
//$ extends sun.awt.X11.XBaseWindow

#include <java/lang/Array.h>
#include <sun/awt/X11/XBaseWindow.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
			class XEvent;
			class XWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XFocusProxyWindow : public ::sun::awt::X11::XBaseWindow {
	$class(XFocusProxyWindow, $NO_CLASS_INIT, ::sun::awt::X11::XBaseWindow)
public:
	XFocusProxyWindow();
	void init$(::sun::awt::X11::XWindowPeer* owner);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	virtual ::sun::awt::X11::XWindowPeer* getOwner();
	virtual $StringArray* getWMClass();
	virtual $String* getWMName() override;
	virtual void handleFocusEvent(::sun::awt::X11::XEvent* xev);
	virtual void handleKeyPress(::sun::awt::X11::XEvent* xev) override;
	virtual void handleKeyRelease(::sun::awt::X11::XEvent* xev) override;
	using ::sun::awt::X11::XBaseWindow::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	::sun::awt::X11::XWindowPeer* owner = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XFocusProxyWindow_h_