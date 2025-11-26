#ifndef _java_awt_Toolkit$4_h_
#define _java_awt_Toolkit$4_h_
//$ class java.awt.Toolkit$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {

class Toolkit$4 : public ::java::security::PrivilegedAction {
	$class(Toolkit$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Toolkit$4();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // java

#endif // _java_awt_Toolkit$4_h_