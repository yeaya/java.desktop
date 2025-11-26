#ifndef _sun_awt_X11_XErrorHandler_h_
#define _sun_awt_X11_XErrorHandler_h_
//$ class sun.awt.X11.XErrorHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class XErrorHandler : public ::java::lang::Object {
	$class(XErrorHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XErrorHandler();
	void init$();
	virtual int32_t handleError(int64_t display, ::sun::awt::X11::XErrorEvent* err) {return 0;}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XErrorHandler_h_