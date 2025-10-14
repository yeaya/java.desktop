#ifndef _java_awt_KeyboardFocusManager$3_h_
#define _java_awt_KeyboardFocusManager$3_h_
//$ class java.awt.KeyboardFocusManager$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class Container;
		class KeyboardFocusManager;
	}
}

namespace java {
	namespace awt {

class KeyboardFocusManager$3 : public ::java::security::PrivilegedAction {
	$class(KeyboardFocusManager$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	KeyboardFocusManager$3();
	void init$(::java::awt::KeyboardFocusManager* this$0, ::java::awt::Container* val$newFocusCycleRoot);
	virtual $Object* run() override;
	::java::awt::KeyboardFocusManager* this$0 = nullptr;
	::java::awt::Container* val$newFocusCycleRoot = nullptr;
};

	} // awt
} // java

#endif // _java_awt_KeyboardFocusManager$3_h_