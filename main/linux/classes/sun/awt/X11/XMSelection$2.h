#ifndef _sun_awt_X11_XMSelection$2_h_
#define _sun_awt_X11_XMSelection$2_h_
//$ class sun.awt.X11.XMSelection$2
//$ extends sun.awt.X11.XEventDispatcher

#include <sun/awt/X11/XEventDispatcher.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEvent;
			class XMSelection;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XMSelection$2 : public ::sun::awt::X11::XEventDispatcher {
	$class(XMSelection$2, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XMSelection$2();
	void init$(::sun::awt::X11::XMSelection* this$0, int32_t val$screen);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	::sun::awt::X11::XMSelection* this$0 = nullptr;
	int32_t val$screen = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMSelection$2_h_