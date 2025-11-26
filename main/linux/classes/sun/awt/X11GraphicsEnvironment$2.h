#ifndef _sun_awt_X11GraphicsEnvironment$2_h_
#define _sun_awt_X11GraphicsEnvironment$2_h_
//$ class sun.awt.X11GraphicsEnvironment$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {

class X11GraphicsEnvironment$2 : public ::java::security::PrivilegedAction {
	$class(X11GraphicsEnvironment$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	X11GraphicsEnvironment$2();
	void init$($String* val$hostName);
	virtual $Object* run() override;
	$String* val$hostName = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_X11GraphicsEnvironment$2_h_