#ifndef _sun_awt_windows_WScrollbarPeer$2_h_
#define _sun_awt_windows_WScrollbarPeer$2_h_
//$ class sun.awt.windows.WScrollbarPeer$2
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

class WScrollbarPeer$2 : public ::java::lang::Runnable {
	$class(WScrollbarPeer$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WScrollbarPeer$2();
	void init$(::sun::awt::windows::WScrollbarPeer* this$0, ::java::awt::Scrollbar* val$sb, int32_t val$value);
	virtual void run() override;
	::sun::awt::windows::WScrollbarPeer* this$0 = nullptr;
	int32_t val$value = 0;
	::java::awt::Scrollbar* val$sb = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WScrollbarPeer$2_h_