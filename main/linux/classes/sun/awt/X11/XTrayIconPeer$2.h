#ifndef _sun_awt_X11_XTrayIconPeer$2_h_
#define _sun_awt_X11_XTrayIconPeer$2_h_
//$ class sun.awt.X11.XTrayIconPeer$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XTrayIconPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer$2 : public ::java::security::PrivilegedAction {
	$class(XTrayIconPeer$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XTrayIconPeer$2();
	void init$(::sun::awt::X11::XTrayIconPeer* this$0);
	virtual $Object* run() override;
	::sun::awt::X11::XTrayIconPeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$2_h_