#ifndef _sun_awt_AWTAccessor$WindowAccessor_h_
#define _sun_awt_AWTAccessor$WindowAccessor_h_
//$ interface sun.awt.AWTAccessor$WindowAccessor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
		}
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$WindowAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$WindowAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::geom::Point2D* calculateSecurityWarningPosition(::java::awt::Window* window, double x, double y, double w, double h) {return nullptr;}
	virtual $Array<::java::awt::Window>* getOwnedWindows(::java::awt::Window* w) {return nullptr;}
	virtual bool isAutoRequestFocus(::java::awt::Window* w) {return false;}
	virtual bool isTrayIconWindow(::java::awt::Window* w) {return false;}
	virtual void setLWRequestStatus(::java::awt::Window* changed, bool status) {}
	virtual void setSecurityWarningSize(::java::awt::Window* w, int32_t width, int32_t height) {}
	virtual void setTrayIconWindow(::java::awt::Window* w, bool isTrayIconWindow) {}
	virtual void updateWindow(::java::awt::Window* window) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$WindowAccessor_h_