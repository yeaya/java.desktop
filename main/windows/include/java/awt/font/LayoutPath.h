#ifndef _java_awt_font_LayoutPath_h_
#define _java_awt_font_LayoutPath_h_
//$ class java.awt.font.LayoutPath
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class $import LayoutPath : public ::java::lang::Object {
	$class(LayoutPath, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LayoutPath();
	void init$();
	virtual void pathToPoint(::java::awt::geom::Point2D* location, bool preceding, ::java::awt::geom::Point2D* point) {}
	virtual bool pointToPath(::java::awt::geom::Point2D* point, ::java::awt::geom::Point2D* location) {return false;}
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_LayoutPath_h_