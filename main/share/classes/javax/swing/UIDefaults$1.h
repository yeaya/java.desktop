#ifndef _javax_swing_UIDefaults$1_h_
#define _javax_swing_UIDefaults$1_h_
//$ class javax.swing.UIDefaults$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Module;
	}
}

namespace javax {
	namespace swing {

class UIDefaults$1 : public ::java::security::PrivilegedAction {
	$class(UIDefaults$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	UIDefaults$1();
	void init$(::java::lang::Module* val$thisModule, $String* val$baseName);
	virtual $Object* run() override;
	$String* val$baseName = nullptr;
	::java::lang::Module* val$thisModule = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_UIDefaults$1_h_