#ifndef _sun_awt_windows_WScrollbarPeer$1_h_
#define _sun_awt_windows_WScrollbarPeer$1_h_
//$ class sun.awt.windows.WScrollbarPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Scrollbar;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WScrollbarPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WScrollbarPeer$1 : public ::java::lang::Runnable {
	$class(WScrollbarPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WScrollbarPeer$1();
	void init$(::sun::awt::windows::WScrollbarPeer* this$0, ::java::awt::Scrollbar* val$sb, bool val$isAdjusting, int32_t val$value, int32_t val$type);
	virtual void run() override;
	::sun::awt::windows::WScrollbarPeer* this$0 = nullptr;
	int32_t val$type = 0;
	int32_t val$value = 0;
	bool val$isAdjusting = false;
	::java::awt::Scrollbar* val$sb = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WScrollbarPeer$1_h_