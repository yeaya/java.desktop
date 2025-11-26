#ifndef _sun_awt_X11_XRootWindow_h_
#define _sun_awt_X11_XRootWindow_h_
//$ class sun.awt.X11.XRootWindow
//$ extends sun.awt.X11.XBaseWindow

#include <java/lang/Array.h>
#include <sun/awt/X11/XBaseWindow.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XRootWindow : public ::sun::awt::X11::XBaseWindow {
	$class(XRootWindow, $NO_CLASS_INIT, ::sun::awt::X11::XBaseWindow)
public:
	XRootWindow();
	void init$();
	static ::sun::awt::X11::XRootWindow* getInstance();
	virtual $StringArray* getWMClass();
	virtual $String* getWMName() override;
	static int64_t getXRootWindow();
	using ::sun::awt::X11::XBaseWindow::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XRootWindow_h_