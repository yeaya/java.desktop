#ifndef _sun_awt_windows_WToolkit$1_h_
#define _sun_awt_windows_WToolkit$1_h_
//$ class sun.awt.windows.WToolkit$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace windows {

class WToolkit$1 : public ::java::security::PrivilegedAction {
	$class(WToolkit$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	WToolkit$1();
	void init$();
	virtual $Object* run() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WToolkit$1_h_