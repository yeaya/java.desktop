#ifndef _sun_awt_windows_WListPeer$1_h_
#define _sun_awt_windows_WListPeer$1_h_
//$ class sun.awt.windows.WListPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class List;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WListPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WListPeer$1 : public ::java::lang::Runnable {
	$class(WListPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WListPeer$1();
	void init$(::sun::awt::windows::WListPeer* this$0, ::java::awt::List* val$l, int32_t val$index, int64_t val$when, int32_t val$modifiers);
	virtual void run() override;
	::sun::awt::windows::WListPeer* this$0 = nullptr;
	int32_t val$modifiers = 0;
	int64_t val$when = 0;
	int32_t val$index = 0;
	::java::awt::List* val$l = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WListPeer$1_h_