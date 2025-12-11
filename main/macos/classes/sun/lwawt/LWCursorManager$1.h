#ifndef _sun_lwawt_LWCursorManager$1_h_
#define _sun_lwawt_LWCursorManager$1_h_
//$ class sun.lwawt.LWCursorManager$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		class LWCursorManager;
	}
}

namespace sun {
	namespace lwawt {

class LWCursorManager$1 : public ::java::lang::Runnable {
	$class(LWCursorManager$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LWCursorManager$1();
	void init$(::sun::lwawt::LWCursorManager* this$0);
	virtual void run() override;
	::sun::lwawt::LWCursorManager* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWCursorManager$1_h_