#ifndef _sun_awt_X11_XScrollbar$1_h_
#define _sun_awt_X11_XScrollbar$1_h_
//$ class sun.awt.X11.XScrollbar$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XScrollbar;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XScrollbar$1 : public ::java::lang::Runnable {
	$class(XScrollbar$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XScrollbar$1();
	void init$(::sun::awt::X11::XScrollbar* this$0, int32_t val$mode, int32_t val$value, bool val$isAdjusting);
	virtual void run() override;
	::sun::awt::X11::XScrollbar* this$0 = nullptr;
	bool val$isAdjusting = false;
	int32_t val$value = 0;
	int32_t val$mode = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XScrollbar$1_h_