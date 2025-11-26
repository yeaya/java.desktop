#ifndef _sun_awt_im_InputContext$1_h_
#define _sun_awt_im_InputContext$1_h_
//$ class sun.awt.im.InputContext$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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

class InputContext$1 : public ::java::lang::Runnable {
	$class(InputContext$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	InputContext$1();
	void init$(::sun::awt::im::InputContext* this$0);
	virtual void run() override;
	::sun::awt::im::InputContext* this$0 = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputContext$1_h_