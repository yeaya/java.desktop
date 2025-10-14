#ifndef _sun_awt_windows_WChoicePeer$2_h_
#define _sun_awt_windows_WChoicePeer$2_h_
//$ class sun.awt.windows.WChoicePeer$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Choice;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WChoicePeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WChoicePeer$2 : public ::java::lang::Runnable {
	$class(WChoicePeer$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WChoicePeer$2();
	void init$(::sun::awt::windows::WChoicePeer* this$0, ::java::awt::Choice* val$c, int32_t val$index);
	virtual void run() override;
	::sun::awt::windows::WChoicePeer* this$0 = nullptr;
	int32_t val$index = 0;
	::java::awt::Choice* val$c = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WChoicePeer$2_h_