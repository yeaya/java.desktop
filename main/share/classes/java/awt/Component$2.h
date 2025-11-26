#ifndef _java_awt_Component$2_h_
#define _java_awt_Component$2_h_
//$ class java.awt.Component$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace awt {

class Component$2 : public ::java::security::PrivilegedAction {
	$class(Component$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Component$2();
	void init$(::java::awt::Component* this$0);
	virtual $Object* run() override;
	::java::awt::Component* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Component$2_h_