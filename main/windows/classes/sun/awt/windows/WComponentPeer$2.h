#ifndef _sun_awt_windows_WComponentPeer$2_h_
#define _sun_awt_windows_WComponentPeer$2_h_
//$ class sun.awt.windows.WComponentPeer$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WComponentPeer$2 : public ::java::lang::Runnable {
	$class(WComponentPeer$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WComponentPeer$2();
	void init$(::sun::awt::windows::WComponentPeer* this$0);
	virtual void run() override;
	::sun::awt::windows::WComponentPeer* this$0 = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WComponentPeer$2_h_