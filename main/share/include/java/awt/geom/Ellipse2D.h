#ifndef _java_awt_geom_Ellipse2D_h_
#define _java_awt_geom_Ellipse2D_h_
//$ class java.awt.geom.Ellipse2D
//$ extends java.awt.geom.RectangularShape

#include <java/awt/geom/RectangularShape.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import Ellipse2D : public ::java::awt::geom::RectangularShape {
	$class(Ellipse2D, $NO_CLASS_INIT, ::java::awt::geom::RectangularShape)
public:
	Ellipse2D();
	using ::java::awt::geom::RectangularShape::contains;
	using ::java::awt::geom::RectangularShape::getPathIterator;
	void init$();
	virtual bool contains(double x, double y) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool equals(Object$* obj) override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual int32_t hashCode() override;
	using ::java::awt::geom::RectangularShape::intersects;
	virtual bool intersects(double x, double y, double w, double h) override;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Ellipse2D_h_