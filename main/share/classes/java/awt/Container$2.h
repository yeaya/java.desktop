#ifndef _java_awt_Container$2_h_
#define _java_awt_Container$2_h_
//$ class java.awt.Container$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class Container;
	}
}

namespace java {
	namespace awt {

class Container$2 : public ::java::security::PrivilegedAction {
	$class(Container$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Container$2();
	void init$(::java::awt::Container* this$0);
	virtual $Object* run() override;
	::java::awt::Container* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Container$2_h_