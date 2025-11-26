#ifndef _sun_awt_im_ExecutableInputMethodManager$4_h_
#define _sun_awt_im_ExecutableInputMethodManager$4_h_
//$ class sun.awt.im.ExecutableInputMethodManager$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace im {
			class ExecutableInputMethodManager;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class ExecutableInputMethodManager$4 : public ::java::security::PrivilegedAction {
	$class(ExecutableInputMethodManager$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ExecutableInputMethodManager$4();
	void init$(::sun::awt::im::ExecutableInputMethodManager* this$0);
	virtual $Object* run() override;
	::sun::awt::im::ExecutableInputMethodManager* this$0 = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_ExecutableInputMethodManager$4_h_