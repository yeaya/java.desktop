#ifndef _java_awt_geom_Area_h_
#define _java_awt_geom_Area_h_
//$ class java.awt.geom.Area
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
			class PathIterator;
			class Point2D;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import Area : public ::java::awt::Shape, public ::java::lang::Cloneable {
	$class(Area, 0, ::java::awt::Shape, ::java::lang::Cloneable)
public:
	Area();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::Shape* s);
	virtual void add(::java::awt::geom::Area* rhs);
	virtual $Object* clone() override;
	virtual bool contains(double x, double y) override;
	virtual bool contains(::java::awt::geom::Point2D* p) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool contains(::java::awt::geom::Rectangle2D* r) override;
	virtual ::java::awt::geom::Area* createTransformedArea(::java::awt::geom::AffineTransform* t);
	virtual bool equals(::java::awt::geom::Area* other);
	virtual void exclusiveOr(::java::awt::geom::Area* rhs);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	::java::awt::geom::Rectangle2D* getCachedBounds();
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	virtual void intersect(::java::awt::geom::Area* rhs);
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) override;
	void invalidateBounds();
	virtual bool isEmpty();
	virtual bool isPolygonal();
	virtual bool isRectangular();
	virtual bool isSingular();
	static ::java::util::Vector* pathToCurves(::java::awt::geom::PathIterator* pi);
	virtual void reset();
	virtual void subtract(::java::awt::geom::Area* rhs);
	virtual $String* toString() override;
	virtual void transform(::java::awt::geom::AffineTransform* t);
	static ::java::util::Vector* EmptyCurves;
	::java::util::Vector* curves = nullptr;
	::java::awt::geom::Rectangle2D* cachedBounds = nullptr;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Area_h_