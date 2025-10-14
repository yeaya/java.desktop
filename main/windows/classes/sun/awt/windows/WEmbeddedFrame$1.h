#ifndef _sun_awt_windows_WEmbeddedFrame$1_h_
#define _sun_awt_windows_WEmbeddedFrame$1_h_
//$ class sun.awt.windows.WEmbeddedFrame$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace windows {

class WEmbeddedFrame$1 : public ::java::security::PrivilegedAction {
	$class(WEmbeddedFrame$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	WEmbeddedFrame$1();
	void init$();
	virtual $Object* run() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WEmbeddedFrame$1_h_