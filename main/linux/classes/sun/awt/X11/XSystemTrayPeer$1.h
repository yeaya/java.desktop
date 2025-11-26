#ifndef _sun_awt_X11_XSystemTrayPeer$1_h_
#define _sun_awt_X11_XSystemTrayPeer$1_h_
//$ class sun.awt.X11.XSystemTrayPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XSystemTrayPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XSystemTrayPeer$1 : public ::java::lang::Runnable {
	$class(XSystemTrayPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XSystemTrayPeer$1();
	void init$(::sun::awt::X11::XSystemTrayPeer* this$0, $String* val$propertyName, Object$* val$oldValue, Object$* val$newValue);
	virtual void run() override;
	::sun::awt::X11::XSystemTrayPeer* this$0 = nullptr;
	$Object* val$newValue = nullptr;
	$Object* val$oldValue = nullptr;
	$String* val$propertyName = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XSystemTrayPeer$1_h_