#ifndef _sun_awt_X11_XScrollPanePeer$XScrollPaneContentWindow_h_
#define _sun_awt_X11_XScrollPanePeer$XScrollPaneContentWindow_h_
//$ class sun.awt.X11.XScrollPanePeer$XScrollPaneContentWindow
//$ extends sun.awt.X11.XWindow

#include <sun/awt/X11/XWindow.h>

namespace java {
	namespace awt {
		class ScrollPane;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XScrollPanePeer$XScrollPaneContentWindow : public ::sun::awt::X11::XWindow {
	$class(XScrollPanePeer$XScrollPaneContentWindow, $NO_CLASS_INIT, ::sun::awt::X11::XWindow)
public:
	XScrollPanePeer$XScrollPaneContentWindow();
	void init$(::java::awt::ScrollPane* target, int64_t parentWindow);
	virtual $String* getWMName() override;
	using ::sun::awt::X11::XWindow::preInit;
	using ::sun::awt::X11::XWindow::postInit;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XScrollPanePeer$XScrollPaneContentWindow_h_