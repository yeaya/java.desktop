#ifndef _sun_awt_X11_XWarningWindow$2_h_
#define _sun_awt_X11_XWarningWindow$2_h_
//$ class sun.awt.X11.XWarningWindow$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XWarningWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWarningWindow$2 : public ::java::lang::Runnable {
	$class(XWarningWindow$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XWarningWindow$2();
	void init$(::sun::awt::X11::XWarningWindow* this$0, int32_t val$x, int32_t val$y, int32_t val$width, int32_t val$height);
	virtual void run() override;
	::sun::awt::X11::XWarningWindow* this$0 = nullptr;
	int32_t val$height = 0;
	int32_t val$width = 0;
	int32_t val$y = 0;
	int32_t val$x = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWarningWindow$2_h_