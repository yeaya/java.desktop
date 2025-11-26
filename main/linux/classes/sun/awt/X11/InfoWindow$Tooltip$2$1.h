#ifndef _sun_awt_X11_InfoWindow$Tooltip$2$1_h_
#define _sun_awt_X11_InfoWindow$Tooltip$2$1_h_
//$ class sun.awt.X11.InfoWindow$Tooltip$2$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Tooltip$2;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Tooltip$2$1 : public ::java::security::PrivilegedAction {
	$class(InfoWindow$Tooltip$2$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InfoWindow$Tooltip$2$1();
	void init$(::sun::awt::X11::InfoWindow$Tooltip$2* this$1);
	virtual $Object* run() override;
	::sun::awt::X11::InfoWindow$Tooltip$2* this$1 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$Tooltip$2$1_h_