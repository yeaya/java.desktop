#ifndef _sun_lwawt_macosx_LWCToolkit$2_h_
#define _sun_lwawt_macosx_LWCToolkit$2_h_
//$ class sun.lwawt.macosx.LWCToolkit$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class LWCToolkit$2 : public ::java::security::PrivilegedAction {
	$class(LWCToolkit$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LWCToolkit$2();
	void init$();
	virtual $Object* run() override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_LWCToolkit$2_h_