#ifndef _sun_awt_im_ExecutableInputMethodManager$1_h_
#define _sun_awt_im_ExecutableInputMethodManager$1_h_
//$ class sun.awt.im.ExecutableInputMethodManager$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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

class ExecutableInputMethodManager$1 : public ::java::lang::Runnable {
	$class(ExecutableInputMethodManager$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ExecutableInputMethodManager$1();
	void init$(::sun::awt::im::ExecutableInputMethodManager* this$0);
	virtual void run() override;
	::sun::awt::im::ExecutableInputMethodManager* this$0 = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_ExecutableInputMethodManager$1_h_