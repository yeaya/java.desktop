#ifndef _java_awt_Toolkit$1_h_
#define _java_awt_Toolkit$1_h_
//$ class java.awt.Toolkit$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Properties;
	}
}

namespace java {
	namespace awt {

class Toolkit$1 : public ::java::security::PrivilegedAction {
	$class(Toolkit$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Toolkit$1();
	void init$($String* val$sep, ::java::util::Properties* val$properties);
	virtual $Object* run() override;
	::java::util::Properties* val$properties = nullptr;
	$String* val$sep = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Toolkit$1_h_