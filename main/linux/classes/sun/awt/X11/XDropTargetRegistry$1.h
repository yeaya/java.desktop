#ifndef _sun_awt_X11_XDropTargetRegistry$1_h_
#define _sun_awt_X11_XDropTargetRegistry$1_h_
//$ class sun.awt.X11.XDropTargetRegistry$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XDropTargetRegistry;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDropTargetRegistry$1 : public ::java::lang::Runnable {
	$class(XDropTargetRegistry$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XDropTargetRegistry$1();
	void init$(::sun::awt::X11::XDropTargetRegistry* this$0, int64_t val$window);
	virtual void run() override;
	::sun::awt::X11::XDropTargetRegistry* this$0 = nullptr;
	int64_t val$window = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDropTargetRegistry$1_h_