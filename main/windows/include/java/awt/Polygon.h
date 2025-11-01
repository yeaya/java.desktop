#ifndef _java_awt_Polygon_h_
#define _java_awt_Polygon_h_
//$ class java.awt.Polygon
//$ extends java.awt.Shape
//$ implements java.io.Serializable

#include <java/awt/Shape.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("MIN_LENGTH")
#undef MIN_LENGTH

namespace java {
	namespace awt {
		class Point;
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
namespace sun {
	namespace awt {
		namespace geom {
			class Crossings;
		}
	}
}

namespace java {
	namespace awt {

class $import Polygon : public ::java::awt::Shape, public ::java::io::Serializable {
	$class(Polygon, $NO_CLASS_INIT, ::java::awt::Shape, ::java::io::Serializable)
public:
	Polygon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($ints* xpoints, $ints* ypoints, int32_t npoints);
	virtual void addPoint(int32_t x, int32_t y);
	virtual void calculateBounds($ints* xpoints, $ints* ypoints, int32_t npoints);
	virtual bool contains(::java::awt::Point* p);
	virtual bool contains(int32_t x, int32_t y);
	virtual bool contains(double x, double y) override;
	virtual bool contains(::java::awt::geom::Point2D* p) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool contains(::java::awt::geom::Rectangle2D* r) override;
	virtual ::java::awt::Rectangle* getBoundingBox();
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	::sun::awt::geom::Crossings* getCrossings(double xlo, double ylo, double xhi, double yhi);
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	virtual bool inside(int32_t x, int32_t y);
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) override;
	virtual void invalidate();
	virtual void reset();
	virtual $String* toString() override;
	virtual void translate(int32_t deltaX, int32_t deltaY);
	virtual void updateBounds(int32_t x, int32_t y);
	int32_t npoints = 0;
	$ints* xpoints = nullptr;
	$ints* ypoints = nullptr;
	::java::awt::Rectangle* bounds = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xA65940595EC463AF;
	static const int32_t MIN_LENGTH = 4;
};

	} // awt
} // java

#pragma pop_macro("MIN_LENGTH")

#endif // _java_awt_Polygon_h_