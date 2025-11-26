#ifndef _sun_awt_X11_XToolkit$4_h_
#define _sun_awt_X11_XToolkit$4_h_
//$ class sun.awt.X11.XToolkit$4
//$ extends sun.awt.X11.XEventDispatcher

#include <sun/awt/X11/XEventDispatcher.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEvent;
			class XToolkit;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XToolkit$4 : public ::sun::awt::X11::XEventDispatcher {
	$class(XToolkit$4, $NO_CLASS_INIT, ::sun::awt::X11::XEventDispatcher)
public:
	XToolkit$4();
	void init$(::sun::awt::X11::XToolkit* this$0);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* e) override;
	::sun::awt::X11::XToolkit* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XToolkit$4_h_