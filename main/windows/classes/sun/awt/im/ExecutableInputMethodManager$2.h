#ifndef _sun_awt_im_ExecutableInputMethodManager$2_h_
#define _sun_awt_im_ExecutableInputMethodManager$2_h_
//$ class sun.awt.im.ExecutableInputMethodManager$2
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

class ExecutableInputMethodManager$2 : public ::java::lang::Runnable {
	$class(ExecutableInputMethodManager$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ExecutableInputMethodManager$2();
	void init$(::sun::awt::im::ExecutableInputMethodManager* this$0);
	virtual void run() override;
	::sun::awt::im::ExecutableInputMethodManager* this$0 = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_ExecutableInputMethodManager$2_h_