#ifndef _sun_awt_X11_XErrorHandler$VerifyChangePropertyHandler_h_
#define _sun_awt_X11_XErrorHandler$VerifyChangePropertyHandler_h_
//$ class sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler
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

class XErrorHandler$VerifyChangePropertyHandler : public ::sun::awt::X11::XErrorHandler$XBaseErrorHandler {
	$class(XErrorHandler$VerifyChangePropertyHandler, 0, ::sun::awt::X11::XErrorHandler$XBaseErrorHandler)
public:
	XErrorHandler$VerifyChangePropertyHandler();
	void init$();
	static ::sun::awt::X11::XErrorHandler$VerifyChangePropertyHandler* getInstance();
	virtual int32_t handleError(int64_t display, ::sun::awt::X11::XErrorEvent* err) override;
	static ::sun::awt::X11::XErrorHandler$VerifyChangePropertyHandler* theInstance;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XErrorHandler$VerifyChangePropertyHandler_h_