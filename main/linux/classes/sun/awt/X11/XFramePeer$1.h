#ifndef _sun_awt_X11_XFramePeer$1_h_
#define _sun_awt_X11_XFramePeer$1_h_
//$ class sun.awt.X11.XFramePeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XFramePeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XFramePeer$1 : public ::java::lang::Runnable {
	$class(XFramePeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XFramePeer$1();
	void init$(::sun::awt::X11::XFramePeer* this$0);
	virtual void run() override;
	::sun::awt::X11::XFramePeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XFramePeer$1_h_