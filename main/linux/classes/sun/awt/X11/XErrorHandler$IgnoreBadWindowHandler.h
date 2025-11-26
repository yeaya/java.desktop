#ifndef _sun_awt_X11_XErrorHandler$IgnoreBadWindowHandler_h_
#define _sun_awt_X11_XErrorHandler$IgnoreBadWindowHandler_h_
//$ class sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler
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

class XErrorHandler$IgnoreBadWindowHandler : public ::sun::awt::X11::XErrorHandler$XBaseErrorHandler {
	$class(XErrorHandler$IgnoreBadWindowHandler, 0, ::sun::awt::X11::XErrorHandler$XBaseErrorHandler)
public:
	XErrorHandler$IgnoreBadWindowHandler();
	void init$();
	static ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler* getInstance();
	virtual int32_t handleError(int64_t display, ::sun::awt::X11::XErrorEvent* err) override;
	static ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler* theInstance;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XErrorHandler$IgnoreBadWindowHandler_h_