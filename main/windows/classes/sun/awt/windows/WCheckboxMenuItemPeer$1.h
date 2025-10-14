#ifndef _sun_awt_windows_WCheckboxMenuItemPeer$1_h_
#define _sun_awt_windows_WCheckboxMenuItemPeer$1_h_
//$ class sun.awt.windows.WCheckboxMenuItemPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class CheckboxMenuItem;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WCheckboxMenuItemPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WCheckboxMenuItemPeer$1 : public ::java::lang::Runnable {
	$class(WCheckboxMenuItemPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WCheckboxMenuItemPeer$1();
	void init$(::sun::awt::windows::WCheckboxMenuItemPeer* this$0, ::java::awt::CheckboxMenuItem* val$target, bool val$state);
	virtual void run() override;
	::sun::awt::windows::WCheckboxMenuItemPeer* this$0 = nullptr;
	bool val$state = false;
	::java::awt::CheckboxMenuItem* val$target = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WCheckboxMenuItemPeer$1_h_