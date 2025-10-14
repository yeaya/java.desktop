#ifndef _sun_awt_windows_WButtonPeer$1_h_
#define _sun_awt_windows_WButtonPeer$1_h_
//$ class sun.awt.windows.WButtonPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WButtonPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WButtonPeer$1 : public ::java::lang::Runnable {
	$class(WButtonPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WButtonPeer$1();
	void init$(::sun::awt::windows::WButtonPeer* this$0, int64_t val$when, int32_t val$modifiers);
	virtual void run() override;
	::sun::awt::windows::WButtonPeer* this$0 = nullptr;
	int32_t val$modifiers = 0;
	int64_t val$when = 0;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WButtonPeer$1_h_