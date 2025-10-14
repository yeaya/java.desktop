#ifndef _javax_swing_UIDefaults$ProxyLazyValue$1_h_
#define _javax_swing_UIDefaults$ProxyLazyValue$1_h_
//$ class javax.swing.UIDefaults$ProxyLazyValue$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		class UIDefaults;
		class UIDefaults$ProxyLazyValue;
	}
}

namespace javax {
	namespace swing {

class UIDefaults$ProxyLazyValue$1 : public ::java::security::PrivilegedAction {
	$class(UIDefaults$ProxyLazyValue$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	UIDefaults$ProxyLazyValue$1();
	void init$(::javax::swing::UIDefaults$ProxyLazyValue* this$0, ::javax::swing::UIDefaults* val$table);
	virtual $Object* run() override;
	::javax::swing::UIDefaults$ProxyLazyValue* this$0 = nullptr;
	::javax::swing::UIDefaults* val$table = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_UIDefaults$ProxyLazyValue$1_h_