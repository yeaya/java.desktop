#ifndef _java_awt_geom_Arc2D_h_
#define _java_awt_geom_Arc2D_h_
//$ class java.awt.geom.Arc2D
//$ extends java.awt.geom.RectangularShape

#include <java/awt/geom/RectangularShape.h>

#pragma push_macro("CHORD")
#undef CHORD
#pragma push_macro("OPEN")
#undef OPEN
#pragma push_macro("PIE")
#undef PIE

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

class $export Arc2D : public ::java::awt::geom::RectangularShape {
	$class(Arc2D, $NO_CLASS_INIT, ::java::awt::geom::RectangularShape)
public:
	Arc2D();
	using ::java::awt::geom::RectangularShape::contains;
	using ::java::awt::geom::RectangularShape::getPathIterator;
	void init$();
	void init$(int32_t type);
	virtual bool contains(double x, double y) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool contains(::java::awt::geom::Rectangle2D* r) override;
	bool contains(double x, double y, double w, double h, ::java::awt::geom::Rectangle2D* origrect);
	virtual bool containsAngle(double angle);
	virtual bool equals(Object$* obj) override;
	virtual double getAngleExtent() {return 0.0;}
	virtual double getAngleStart() {return 0.0;}
	virtual int32_t getArcType();
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual ::java::awt::geom::Point2D* getEndPoint();
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::Point2D* getStartPoint();
	virtual int32_t hashCode() override;
	using ::java::awt::geom::RectangularShape::intersects;
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual ::java::awt::geom::Rectangle2D* makeBounds(double x, double y, double w, double h) {return nullptr;}
	static double normalizeDegrees(double angle);
	virtual void setAngleExtent(double angExt) {}
	virtual void setAngleStart(double angSt) {}
	virtual void setAngleStart(::java::awt::geom::Point2D* p);
	virtual void setAngles(double x1, double y1, double x2, double y2);
	virtual void setAngles(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* p2);
	virtual void setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure) {}
	virtual void setArc(::java::awt::geom::Point2D* loc, ::java::awt::geom::Dimension2D* size, double angSt, double angExt, int32_t closure);
	virtual void setArc(::java::awt::geom::Rectangle2D* rect, double angSt, double angExt, int32_t closure);
	virtual void setArc(::java::awt::geom::Arc2D* a);
	virtual void setArcByCenter(double x, double y, double radius, double angSt, double angExt, int32_t closure);
	virtual void setArcByTangent(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* p2, ::java::awt::geom::Point2D* p3, double radius);
	virtual void setArcType(int32_t type);
	using ::java::awt::geom::RectangularShape::setFrame;
	virtual void setFrame(double x, double y, double w, double h) override;
	static const int32_t OPEN = 0;
	static const int32_t CHORD = 1;
	static const int32_t PIE = 2;
	int32_t type = 0;
};

		} // geom
	} // awt
} // java

#pragma pop_macro("CHORD")
#pragma pop_macro("OPEN")
#pragma pop_macro("PIE")

#endif // _java_awt_geom_Arc2D_h_