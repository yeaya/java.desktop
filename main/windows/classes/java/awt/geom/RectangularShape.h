#ifndef _java_awt_geom_RectangularShape_h_
#define _java_awt_geom_RectangularShape_h_
//$ class java.awt.geom.RectangularShape
//$ extends java.awt.Shape
//$ implements java.lang.Cloneable

#include <java/awt/Shape.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Dimension2D;
			class PathIterator;
			class Point2D;
			class Rectangle2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $export RectangularShape : public ::java::awt::Shape, public ::java::lang::Cloneable {
	$class(RectangularShape, $NO_CLASS_INIT, ::java::awt::Shape, ::java::lang::Cloneable)
public:
	RectangularShape();
	using ::java::awt::Shape::contains;
	using ::java::awt::Shape::getPathIterator;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* clone() override;
	virtual bool contains(::java::awt::geom::Point2D* p) override;
	virtual bool contains(::java::awt::geom::Rectangle2D* r) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getCenterX();
	virtual double getCenterY();
	virtual ::java::awt::geom::Rectangle2D* getFrame();
	virtual double getHeight() {return 0.0;}
	virtual double getMaxX();
	virtual double getMaxY();
	virtual double getMinX();
	virtual double getMinY();
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	virtual double getWidth() {return 0.0;}
	virtual double getX() {return 0.0;}
	virtual double getY() {return 0.0;}
	using ::java::awt::Shape::intersects;
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) override;
	virtual bool isEmpty() {return false;}
	virtual void setFrame(double x, double y, double w, double h) {}
	virtual void setFrame(::java::awt::geom::Point2D* loc, ::java::awt::geom::Dimension2D* size);
	virtual void setFrame(::java::awt::geom::Rectangle2D* r);
	virtual void setFrameFromCenter(double centerX, double centerY, double cornerX, double cornerY);
	virtual void setFrameFromCenter(::java::awt::geom::Point2D* center, ::java::awt::geom::Point2D* corner);
	virtual void setFrameFromDiagonal(double x1, double y1, double x2, double y2);
	virtual void setFrameFromDiagonal(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* p2);
	virtual $String* toString() override;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_RectangularShape_h_