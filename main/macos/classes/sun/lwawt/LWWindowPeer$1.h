#ifndef _sun_lwawt_LWWindowPeer$1_h_
#define _sun_lwawt_LWWindowPeer$1_h_
//$ class sun.lwawt.LWWindowPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWWindowPeer$1 : public ::java::lang::Runnable {
	$class(LWWindowPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LWWindowPeer$1();
	void init$(::sun::lwawt::LWWindowPeer* this$0, ::java::awt::GraphicsConfiguration* val$newGC);
	virtual void run() override;
	::sun::lwawt::LWWindowPeer* this$0 = nullptr;
	::java::awt::GraphicsConfiguration* val$newGC = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWWindowPeer$1_h_