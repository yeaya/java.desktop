#ifndef _sun_java2d_Disposer$1_h_
#define _sun_java2d_Disposer$1_h_
//$ class sun.java2d.Disposer$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace java2d {

class Disposer$1 : public ::java::security::PrivilegedAction {
	$class(Disposer$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Disposer$1();
	void init$();
	virtual $Object* run() override;
};

	} // java2d
} // sun

#endif // _sun_java2d_Disposer$1_h_