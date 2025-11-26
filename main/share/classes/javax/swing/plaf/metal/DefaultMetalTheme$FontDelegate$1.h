#ifndef _javax_swing_plaf_metal_DefaultMetalTheme$FontDelegate$1_h_
#define _javax_swing_plaf_metal_DefaultMetalTheme$FontDelegate$1_h_
//$ class javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class DefaultMetalTheme$FontDelegate;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class DefaultMetalTheme$FontDelegate$1 : public ::java::security::PrivilegedAction {
	$class(DefaultMetalTheme$FontDelegate$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DefaultMetalTheme$FontDelegate$1();
	void init$(::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate* this$0, int32_t val$key);
	virtual $Object* run() override;
	::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate* this$0 = nullptr;
	int32_t val$key = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_DefaultMetalTheme$FontDelegate$1_h_