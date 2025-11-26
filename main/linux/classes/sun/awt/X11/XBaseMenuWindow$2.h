#ifndef _sun_awt_X11_XBaseMenuWindow$2_h_
#define _sun_awt_X11_XBaseMenuWindow$2_h_
//$ class sun.awt.X11.XBaseMenuWindow$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XBaseMenuWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XBaseMenuWindow$2 : public ::java::lang::Runnable {
	$class(XBaseMenuWindow$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XBaseMenuWindow$2();
	void init$(::sun::awt::X11::XBaseMenuWindow* this$0);
	virtual void run() override;
	::sun::awt::X11::XBaseMenuWindow* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XBaseMenuWindow$2_h_