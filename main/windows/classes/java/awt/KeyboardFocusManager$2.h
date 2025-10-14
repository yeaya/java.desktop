#ifndef _java_awt_KeyboardFocusManager$2_h_
#define _java_awt_KeyboardFocusManager$2_h_
//$ class java.awt.KeyboardFocusManager$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class KeyboardFocusManager;
	}
}

namespace java {
	namespace awt {

class KeyboardFocusManager$2 : public ::java::security::PrivilegedAction {
	$class(KeyboardFocusManager$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	KeyboardFocusManager$2();
	void init$(::java::awt::KeyboardFocusManager* this$0);
	virtual $Object* run() override;
	::java::awt::KeyboardFocusManager* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_KeyboardFocusManager$2_h_