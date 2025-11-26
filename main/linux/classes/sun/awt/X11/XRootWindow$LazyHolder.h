#ifndef _sun_awt_X11_XRootWindow$LazyHolder_h_
#define _sun_awt_X11_XRootWindow$LazyHolder_h_
//$ class sun.awt.X11.XRootWindow$LazyHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XRootWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XRootWindow$LazyHolder : public ::java::lang::Object {
	$class(XRootWindow$LazyHolder, 0, ::java::lang::Object)
public:
	XRootWindow$LazyHolder();
	void init$();
	static ::sun::awt::X11::XRootWindow* xawtRootWindow;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XRootWindow$LazyHolder_h_