#ifndef _sun_awt_X11_XChoicePeer$2_h_
#define _sun_awt_X11_XChoicePeer$2_h_
//$ class sun.awt.X11.XChoicePeer$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
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

class XChoicePeer$2 : public ::java::lang::Runnable {
	$class(XChoicePeer$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XChoicePeer$2();
	void init$(::sun::awt::X11::XChoicePeer* this$0, ::java::awt::event::MouseEvent* val$me);
	virtual void run() override;
	::sun::awt::X11::XChoicePeer* this$0 = nullptr;
	::java::awt::event::MouseEvent* val$me = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XChoicePeer$2_h_