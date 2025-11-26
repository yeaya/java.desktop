#ifndef _sun_awt_X11_XlibUtil_h_
#define _sun_awt_X11_XlibUtil_h_
//$ class sun.awt.X11.XlibUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XlibUtil : public ::java::lang::Object {
	$class(XlibUtil, 0, ::java::lang::Object)
public:
	XlibUtil();
	void init$();
	static int32_t getButtonMask(int32_t button);
	static ::java::util::Set* getChildWindows(int64_t window);
	static int64_t getParentWindow(int64_t window);
	static int64_t getRootWindow(int32_t screenNumber);
	static ::java::awt::Rectangle* getWindowGeometry(int64_t window, int32_t scale);
	static int32_t getWindowMapState(int64_t window);
	static bool isRoot(int64_t rootCandidate, int64_t screenNumber);
	static bool isShapingSupported();
	static bool isToplevelWindow(int64_t window);
	static bool isTrueToplevelWindow(int64_t window);
	static bool isXAWTToplevelWindow(int64_t window);
	static int32_t scaleDown(int32_t x, int32_t scale);
	static ::java::awt::Point* translateCoordinates(int64_t src, int64_t dst, ::java::awt::Point* p, int32_t scale);
	static ::java::awt::Rectangle* translateCoordinates(int64_t src, int64_t dst, ::java::awt::Rectangle* r, int32_t scale);
	static ::java::lang::Boolean* isShapingSupported$;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XlibUtil_h_