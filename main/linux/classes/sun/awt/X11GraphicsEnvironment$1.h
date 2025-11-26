#ifndef _sun_awt_X11GraphicsEnvironment$1_h_
#define _sun_awt_X11GraphicsEnvironment$1_h_
//$ class sun.awt.X11GraphicsEnvironment$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {

class X11GraphicsEnvironment$1 : public ::java::security::PrivilegedAction {
	$class(X11GraphicsEnvironment$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	X11GraphicsEnvironment$1();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // sun

#endif // _sun_awt_X11GraphicsEnvironment$1_h_