#ifndef _sun_awt_X11_XWM$1_h_
#define _sun_awt_X11_XWM$1_h_
//$ class sun.awt.X11.XWM$1
//$ extends sun.awt.X11.XErrorHandler$XBaseErrorHandler

#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XErrorEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWM$1 : public ::sun::awt::X11::XErrorHandler$XBaseErrorHandler {
	$class(XWM$1, $NO_CLASS_INIT, ::sun::awt::X11::XErrorHandler$XBaseErrorHandler)
public:
	XWM$1();
	void init$();
	virtual int32_t handleError(int64_t display, ::sun::awt::X11::XErrorEvent* err) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWM$1_h_