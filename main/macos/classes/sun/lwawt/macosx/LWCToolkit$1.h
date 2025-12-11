#ifndef _sun_lwawt_macosx_LWCToolkit$1_h_
#define _sun_lwawt_macosx_LWCToolkit$1_h_
//$ class sun.lwawt.macosx.LWCToolkit$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class LWCToolkit$1 : public ::java::security::PrivilegedAction {
	$class(LWCToolkit$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LWCToolkit$1();
	void init$();
	virtual $Object* run() override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_LWCToolkit$1_h_