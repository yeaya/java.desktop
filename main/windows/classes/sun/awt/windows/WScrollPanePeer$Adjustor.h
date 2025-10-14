#ifndef _sun_awt_windows_WScrollPanePeer$Adjustor_h_
#define _sun_awt_windows_WScrollPanePeer$Adjustor_h_
//$ class sun.awt.windows.WScrollPanePeer$Adjustor
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WScrollPanePeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WScrollPanePeer$Adjustor : public ::java::lang::Runnable {
	$class(WScrollPanePeer$Adjustor, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WScrollPanePeer$Adjustor();
	void init$(::sun::awt::windows::WScrollPanePeer* this$0, int32_t orient, int32_t type, int32_t pos, bool isAdjusting);
	virtual void run() override;
	::sun::awt::windows::WScrollPanePeer* this$0 = nullptr;
	int32_t orient = 0;
	int32_t type = 0;
	int32_t pos = 0;
	bool isAdjusting = false;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WScrollPanePeer$Adjustor_h_