#ifndef _sun_awt_X11_XErrorHandler$XBaseErrorHandler_h_
#define _sun_awt_X11_XErrorHandler$XBaseErrorHandler_h_
//$ class sun.awt.X11.XErrorHandler$XBaseErrorHandler
//$ extends sun.awt.X11.XErrorHandler

#include <sun/awt/X11/XErrorHandler.h>

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

class XErrorHandler$XBaseErrorHandler : public ::sun::awt::X11::XErrorHandler {
	$class(XErrorHandler$XBaseErrorHandler, $NO_CLASS_INIT, ::sun::awt::X11::XErrorHandler)
public:
	XErrorHandler$XBaseErrorHandler();
	void init$();
	virtual int32_t handleError(int64_t display, ::sun::awt::X11::XErrorEvent* err) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XErrorHandler$XBaseErrorHandler_h_