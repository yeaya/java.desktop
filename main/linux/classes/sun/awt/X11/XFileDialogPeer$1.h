#ifndef _sun_awt_X11_XFileDialogPeer$1_h_
#define _sun_awt_X11_XFileDialogPeer$1_h_
//$ class sun.awt.X11.XFileDialogPeer$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XFileDialogPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XFileDialogPeer$1 : public ::java::security::PrivilegedAction {
	$class(XFileDialogPeer$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XFileDialogPeer$1();
	void init$(::sun::awt::X11::XFileDialogPeer* this$0);
	virtual $Object* run() override;
	::sun::awt::X11::XFileDialogPeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XFileDialogPeer$1_h_