#ifndef _java_awt_Component$3_h_
#define _java_awt_Component$3_h_
//$ class java.awt.Component$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace awt {

class Component$3 : public ::java::security::PrivilegedAction {
	$class(Component$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Component$3();
	void init$(::java::awt::Component* this$0, $Class* val$clazz);
	virtual $Object* run() override;
	::java::awt::Component* this$0 = nullptr;
	$Class* val$clazz = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Component$3_h_