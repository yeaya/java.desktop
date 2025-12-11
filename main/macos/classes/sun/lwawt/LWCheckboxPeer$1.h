#ifndef _sun_lwawt_LWCheckboxPeer$1_h_
#define _sun_lwawt_LWCheckboxPeer$1_h_
//$ class sun.lwawt.LWCheckboxPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWCheckboxPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWCheckboxPeer$1 : public ::java::lang::Runnable {
	$class(LWCheckboxPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LWCheckboxPeer$1();
	void init$(::sun::lwawt::LWCheckboxPeer* this$0, ::java::awt::event::ItemEvent* val$e);
	virtual void run() override;
	::sun::lwawt::LWCheckboxPeer* this$0 = nullptr;
	::java::awt::event::ItemEvent* val$e = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWCheckboxPeer$1_h_