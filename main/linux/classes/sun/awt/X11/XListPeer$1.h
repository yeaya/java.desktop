#ifndef _sun_awt_X11_XListPeer$1_h_
#define _sun_awt_X11_XListPeer$1_h_
//$ class sun.awt.X11.XListPeer$1
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
			class XListPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XListPeer$1 : public ::java::lang::Runnable {
	$class(XListPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XListPeer$1();
	void init$(::sun::awt::X11::XListPeer* this$0, ::java::awt::event::MouseEvent* val$me);
	virtual void run() override;
	::sun::awt::X11::XListPeer* this$0 = nullptr;
	::java::awt::event::MouseEvent* val$me = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XListPeer$1_h_