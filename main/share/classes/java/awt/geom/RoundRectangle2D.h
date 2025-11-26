#ifndef _java_awt_geom_RoundRectangle2D_h_
#define _java_awt_geom_RoundRectangle2D_h_
//$ class java.awt.geom.RoundRectangle2D
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

class $export RoundRectangle2D : public ::java::awt::geom::RectangularShape {
	$class(RoundRectangle2D, $NO_CLASS_INIT, ::java::awt::geom::RectangularShape)
public:
	RoundRectangle2D();
	using ::java::awt::geom::RectangularShape::contains;
	using ::java::awt::geom::RectangularShape::getPathIterator;
	void init$();
	int32_t classify(double coord, double left, double right, double arcsize);
	virtual bool contains(double x, double y) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool equals(Object$* obj) override;
	virtual double getArcHeight() {return 0.0;}
	virtual double getArcWidth() {return 0.0;}
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual int32_t hashCode() override;
	using ::java::awt::geom::RectangularShape::intersects;
	virtual bool intersects(double x, double y, double w, double h) override;
	using ::java::awt::geom::RectangularShape::setFrame;
	virtual void setFrame(double x, double y, double w, double h) override;
	virtual void setRoundRect(double x, double y, double w, double h, double arcWidth, double arcHeight) {}
	virtual void setRoundRect(::java::awt::geom::RoundRectangle2D* rr);
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_RoundRectangle2D_h_