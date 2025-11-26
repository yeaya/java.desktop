#ifndef _sun_awt_im_ExecutableInputMethodManager$3_h_
#define _sun_awt_im_ExecutableInputMethodManager$3_h_
//$ class sun.awt.im.ExecutableInputMethodManager$3
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

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

class ExecutableInputMethodManager$3 : public ::java::security::PrivilegedExceptionAction {
	$class(ExecutableInputMethodManager$3, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ExecutableInputMethodManager$3();
	void init$(::sun::awt::im::ExecutableInputMethodManager* this$0);
	virtual $Object* run() override;
	::sun::awt::im::ExecutableInputMethodManager* this$0 = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_ExecutableInputMethodManager$3_h_