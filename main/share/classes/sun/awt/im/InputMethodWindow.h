#ifndef _sun_awt_im_InputMethodWindow_h_
#define _sun_awt_im_InputMethodWindow_h_
//$ interface sun.awt.im.InputMethodWindow
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class InputMethodWindow : public ::java::lang::Object {
	$interface(InputMethodWindow, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setInputContext(::sun::awt::im::InputContext* inputContext) {}
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputMethodWindow_h_