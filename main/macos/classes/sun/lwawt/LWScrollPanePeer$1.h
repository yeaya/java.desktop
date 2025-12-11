#ifndef _sun_lwawt_LWScrollPanePeer$1_h_
#define _sun_lwawt_LWScrollPanePeer$1_h_
//$ class sun.lwawt.LWScrollPanePeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		class LWScrollPanePeer;
	}
}

namespace sun {
	namespace lwawt {

class LWScrollPanePeer$1 : public ::java::lang::Runnable {
	$class(LWScrollPanePeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LWScrollPanePeer$1();
	void init$(::sun::lwawt::LWScrollPanePeer* this$0);
	virtual void run() override;
	::sun::lwawt::LWScrollPanePeer* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWScrollPanePeer$1_h_