#ifndef _javax_swing_UIManager$1_h_
#define _javax_swing_UIManager$1_h_
//$ class javax.swing.UIManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Properties;
	}
}

namespace javax {
	namespace swing {

class UIManager$1 : public ::java::security::PrivilegedAction {
	$class(UIManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	UIManager$1();
	void init$(::java::util::Properties* val$props);
	virtual $Object* run() override;
	::java::util::Properties* val$props = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_UIManager$1_h_