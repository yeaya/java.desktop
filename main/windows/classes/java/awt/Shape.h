#ifndef _java_awt_Shape_h_
#define _java_awt_Shape_h_
//$ interface java.awt.Shape
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
			class Point2D;
			class Rectangle2D;
		}
	}
}

namespace java {
	namespace awt {

class $export Shape : public ::java::lang::Object {
	$interface(Shape, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool contains(double x, double y) {return false;}
	virtual bool contains(::java::awt::geom::Point2D* p) {return false;}
	virtual bool contains(double x, double y, double w, double h) {return false;}
	virtual bool contains(::java::awt::geom::Rectangle2D* r) {return false;}
	virtual ::java::awt::Rectangle* getBounds() {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() {return nullptr;}
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) {return nullptr;}
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) {return nullptr;}
	virtual bool intersects(double x, double y, double w, double h) {return false;}
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) {return false;}
};

	} // awt
} // java

#endif // _java_awt_Shape_h_