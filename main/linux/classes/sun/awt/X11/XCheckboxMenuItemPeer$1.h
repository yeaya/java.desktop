#ifndef _sun_awt_X11_XCheckboxMenuItemPeer$1_h_
#define _sun_awt_X11_XCheckboxMenuItemPeer$1_h_
//$ class sun.awt.X11.XCheckboxMenuItemPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XCheckboxMenuItemPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XCheckboxMenuItemPeer$1 : public ::java::lang::Runnable {
	$class(XCheckboxMenuItemPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XCheckboxMenuItemPeer$1();
	void init$(::sun::awt::X11::XCheckboxMenuItemPeer* this$0, int64_t val$when);
	virtual void run() override;
	::sun::awt::X11::XCheckboxMenuItemPeer* this$0 = nullptr;
	int64_t val$when = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XCheckboxMenuItemPeer$1_h_