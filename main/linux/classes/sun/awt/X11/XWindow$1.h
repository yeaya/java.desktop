#ifndef _sun_awt_X11_XWindow$1_h_
#define _sun_awt_X11_XWindow$1_h_
//$ class sun.awt.X11.XWindow$1
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

class XWindow$1 : public ::java::lang::Runnable {
	$class(XWindow$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XWindow$1();
	void init$(::java::awt::AWTEvent* val$e);
	virtual void run() override;
	::java::awt::AWTEvent* val$e = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWindow$1_h_