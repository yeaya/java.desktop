#ifndef _sun_awt_X11_XCheckboxPeer$1_h_
#define _sun_awt_X11_XCheckboxPeer$1_h_
//$ class sun.awt.X11.XCheckboxPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Checkbox;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCheckboxPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XCheckboxPeer$1 : public ::java::lang::Runnable {
	$class(XCheckboxPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XCheckboxPeer$1();
	void init$(::sun::awt::X11::XCheckboxPeer* this$0, ::java::awt::Checkbox* val$cb, bool val$newState);
	virtual void run() override;
	::sun::awt::X11::XCheckboxPeer* this$0 = nullptr;
	bool val$newState = false;
	::java::awt::Checkbox* val$cb = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XCheckboxPeer$1_h_