#ifndef _sun_awt_X11_XWindowPeer$1_h_
#define _sun_awt_X11_XWindowPeer$1_h_
//$ class sun.awt.X11.XWindowPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWindowPeer$1 : public ::java::lang::Runnable {
	$class(XWindowPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XWindowPeer$1();
	void init$(::sun::awt::X11::XWindowPeer* this$0, ::java::awt::GraphicsConfiguration* val$gc);
	virtual void run() override;
	::sun::awt::X11::XWindowPeer* this$0 = nullptr;
	::java::awt::GraphicsConfiguration* val$gc = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWindowPeer$1_h_