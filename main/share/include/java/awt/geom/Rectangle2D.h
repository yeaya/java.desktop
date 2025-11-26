#ifndef _java_awt_geom_Rectangle2D_h_
#define _java_awt_geom_Rectangle2D_h_
//$ class java.awt.geom.Rectangle2D
//$ extends java.awt.geom.RectangularShape

#include <java/awt/geom/RectangularShape.h>

#pragma push_macro("OUT_BOTTOM")
#undef OUT_BOTTOM
#pragma push_macro("OUT_LEFT")
#undef OUT_LEFT
#pragma push_macro("OUT_RIGHT")
#undef OUT_RIGHT
#pragma push_macro("OUT_TOP")
#undef OUT_TOP

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Line2D;
			class PathIterator;
			class Point2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import Rectangle2D : public ::java::awt::geom::RectangularShape {
	$class(Rectangle2D, $NO_CLASS_INIT, ::java::awt::geom::RectangularShape)
public:
	Rectangle2D();
	using ::java::awt::geom::RectangularShape::contains;
	void init$();
	virtual void add(double newx, double newy);
	virtual void add(::java::awt::geom::Point2D* pt);
	virtual void add(::java::awt::geom::Rectangle2D* r);
	virtual bool contains(double x, double y) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual ::java::awt::geom::Rectangle2D* createIntersection(::java::awt::geom::Rectangle2D* r) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* createUnion(::java::awt::geom::Rectangle2D* r) {return nullptr;}
	virtual bool equals(Object$* obj) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	virtual int32_t hashCode() override;
	static void intersect(::java::awt::geom::Rectangle2D* src1, ::java::awt::geom::Rectangle2D* src2, ::java::awt::geom::Rectangle2D* dest);
	using ::java::awt::geom::RectangularShape::intersects;
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool intersectsLine(double x1, double y1, double x2, double y2);
	virtual bool intersectsLine(::java::awt::geom::Line2D* l);
	virtual int32_t outcode(double x, double y) {return 0;}
	virtual int32_t outcode(::java::awt::geom::Point2D* p);
	using ::java::awt::geom::RectangularShape::setFrame;
	virtual void setFrame(double x, double y, double w, double h) override;
	virtual void setRect(double x, double y, double w, double h) {}
	virtual void setRect(::java::awt::geom::Rectangle2D* r);
	static void union$(::java::awt::geom::Rectangle2D* src1, ::java::awt::geom::Rectangle2D* src2, ::java::awt::geom::Rectangle2D* dest);
	static const int32_t OUT_LEFT = 1;
	static const int32_t OUT_TOP = 2;
	static const int32_t OUT_RIGHT = 4;
	static const int32_t OUT_BOTTOM = 8;
};

		} // geom
	} // awt
} // java

#pragma pop_macro("OUT_BOTTOM")
#pragma pop_macro("OUT_LEFT")
#pragma pop_macro("OUT_RIGHT")
#pragma pop_macro("OUT_TOP")

#endif // _java_awt_geom_Rectangle2D_h_