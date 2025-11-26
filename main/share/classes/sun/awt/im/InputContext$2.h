#ifndef _sun_awt_im_InputContext$2_h_
#define _sun_awt_im_InputContext$2_h_
//$ class sun.awt.im.InputContext$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace im {
			class InputContext;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class InputContext$2 : public ::java::security::PrivilegedAction {
	$class(InputContext$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InputContext$2();
	void init$(::sun::awt::im::InputContext* this$0);
	virtual $Object* run() override;
	::sun::awt::im::InputContext* this$0 = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputContext$2_h_