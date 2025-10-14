#ifndef _sun_awt_windows_WCheckboxPeer$1_h_
#define _sun_awt_windows_WCheckboxPeer$1_h_
//$ class sun.awt.windows.WCheckboxPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Checkbox;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WCheckboxPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WCheckboxPeer$1 : public ::java::lang::Runnable {
	$class(WCheckboxPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WCheckboxPeer$1();
	void init$(::sun::awt::windows::WCheckboxPeer* this$0, ::java::awt::Checkbox* val$cb, bool val$state);
	virtual void run() override;
	::sun::awt::windows::WCheckboxPeer* this$0 = nullptr;
	bool val$state = false;
	::java::awt::Checkbox* val$cb = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WCheckboxPeer$1_h_