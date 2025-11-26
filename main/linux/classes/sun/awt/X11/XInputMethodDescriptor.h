#ifndef _sun_awt_X11_XInputMethodDescriptor_h_
#define _sun_awt_X11_XInputMethodDescriptor_h_
//$ class sun.awt.X11.XInputMethodDescriptor
//$ extends sun.awt.X11InputMethodDescriptor

#include <sun/awt/X11InputMethodDescriptor.h>

namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethod;
			}
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XInputMethodDescriptor : public ::sun::awt::X11InputMethodDescriptor {
	$class(XInputMethodDescriptor, $NO_CLASS_INIT, ::sun::awt::X11InputMethodDescriptor)
public:
	XInputMethodDescriptor();
	void init$();
	virtual ::java::awt::im::spi::InputMethod* createInputMethod() override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XInputMethodDescriptor_h_