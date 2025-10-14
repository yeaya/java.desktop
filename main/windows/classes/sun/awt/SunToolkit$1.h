#ifndef _sun_awt_SunToolkit$1_h_
#define _sun_awt_SunToolkit$1_h_
//$ class sun.awt.SunToolkit$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}

namespace sun {
	namespace awt {

class SunToolkit$1 : public ::java::lang::Runnable {
	$class(SunToolkit$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SunToolkit$1();
	void init$(::java::awt::AWTEvent* val$e);
	virtual void run() override;
	::java::awt::AWTEvent* val$e = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_SunToolkit$1_h_