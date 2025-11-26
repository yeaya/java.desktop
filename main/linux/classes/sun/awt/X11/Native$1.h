#ifndef _sun_awt_X11_Native$1_h_
#define _sun_awt_X11_Native$1_h_
//$ class sun.awt.X11.Native$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace X11 {

class Native$1 : public ::java::security::PrivilegedAction {
	$class(Native$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Native$1();
	void init$();
	virtual $Object* run() override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_Native$1_h_