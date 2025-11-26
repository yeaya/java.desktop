#ifndef _sun_awt_X11_XAwtState_h_
#define _sun_awt_X11_XAwtState_h_
//$ class sun.awt.X11.XAwtState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XBaseWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XAwtState : public ::java::lang::Object {
	$class(XAwtState, 0, ::java::lang::Object)
public:
	XAwtState();
	void init$();
	static ::java::awt::Component* getComponentMouseEntered();
	static ::sun::awt::X11::XBaseWindow* getGrabWindow();
	static bool isManualGrab();
	static void setAutoGrabWindow(::sun::awt::X11::XBaseWindow* grabWindow);
	static void setComponentMouseEntered(::java::awt::Component* component);
	static void setGrabWindow(::sun::awt::X11::XBaseWindow* grabWindow);
	static void setGrabWindow(::sun::awt::X11::XBaseWindow* grabWindow, bool isAutoGrab);
	static ::java::lang::ref::WeakReference* componentMouseEnteredRef;
	static bool inManualGrab;
	static ::java::lang::ref::WeakReference* grabWindowRef;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XAwtState_h_