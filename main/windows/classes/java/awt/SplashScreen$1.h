#ifndef _java_awt_SplashScreen$1_h_
#define _java_awt_SplashScreen$1_h_
//$ class java.awt.SplashScreen$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {

class SplashScreen$1 : public ::java::security::PrivilegedAction {
	$class(SplashScreen$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SplashScreen$1();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // java

#endif // _java_awt_SplashScreen$1_h_