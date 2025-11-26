#ifndef _sun_awt_OSInfo$1_h_
#define _sun_awt_OSInfo$1_h_
//$ class sun.awt.OSInfo$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {

class OSInfo$1 : public ::java::security::PrivilegedAction {
	$class(OSInfo$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	OSInfo$1();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // sun

#endif // _sun_awt_OSInfo$1_h_