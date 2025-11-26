#ifndef _sun_awt_X11_XBaseMenuWindow$1_h_
#define _sun_awt_X11_XBaseMenuWindow$1_h_
//$ class sun.awt.X11.XBaseMenuWindow$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XBaseMenuWindow;
			class XMenuPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XBaseMenuWindow$1 : public ::java::lang::Runnable {
	$class(XBaseMenuWindow$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XBaseMenuWindow$1();
	void init$(::sun::awt::X11::XBaseMenuWindow* this$0, ::sun::awt::X11::XMenuPeer* val$submenuToShow);
	virtual void run() override;
	::sun::awt::X11::XBaseMenuWindow* this$0 = nullptr;
	::sun::awt::X11::XMenuPeer* val$submenuToShow = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XBaseMenuWindow$1_h_