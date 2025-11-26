#ifndef _sun_awt_X11_XChoicePeer$1_h_
#define _sun_awt_X11_XChoicePeer$1_h_
//$ class sun.awt.X11.XChoicePeer$1
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
			class XChoicePeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XChoicePeer$1 : public ::java::lang::Runnable {
	$class(XChoicePeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XChoicePeer$1();
	void init$(::sun::awt::X11::XChoicePeer* this$0, ::java::awt::AWTEvent* val$e);
	virtual void run() override;
	::sun::awt::X11::XChoicePeer* this$0 = nullptr;
	::java::awt::AWTEvent* val$e = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XChoicePeer$1_h_