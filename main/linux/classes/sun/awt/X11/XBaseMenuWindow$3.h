#ifndef _sun_awt_X11_XBaseMenuWindow$3_h_
#define _sun_awt_X11_XBaseMenuWindow$3_h_
//$ class sun.awt.X11.XBaseMenuWindow$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
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

class XBaseMenuWindow$3 : public ::java::lang::Runnable {
	$class(XBaseMenuWindow$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XBaseMenuWindow$3();
	void init$(::sun::awt::X11::XBaseMenuWindow* this$0, ::java::awt::AWTEvent* val$event);
	virtual void run() override;
	::sun::awt::X11::XBaseMenuWindow* this$0 = nullptr;
	::java::awt::AWTEvent* val$event = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XBaseMenuWindow$3_h_