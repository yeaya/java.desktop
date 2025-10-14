#ifndef _java_awt_geom_Line2D_h_
#define _java_awt_geom_Line2D_h_
//$ class java.awt.geom.Line2D
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
	namespace awt {
		namespace geom {

class $export Line2D : public ::java::awt::Shape, public ::java::lang::Cloneable {
	$class(Line2D, $NO_CLASS_INIT, ::java::awt::Shape, ::java::lang::Cloneable)
public:
	Line2D();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* clone() override;
	virtual bool contains(double x, double y) override;
	virtual bool contains(::java::awt::geom::Point2D* p) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool contains(::java::awt::geom::Rectangle2D* r) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::geom::Point2D* getP1() {return nullptr;}
	virtual ::java::awt::geom::Point2D* getP2() {return nullptr;}
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	virtual double getX1() {return 0.0;}
	virtual double getX2() {return 0.0;}
	virtual double getY1() {return 0.0;}
	virtual double getY2() {return 0.0;}
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) override;
	virtual bool intersectsLine(double x1, double y1, double x2, double y2);
	virtual bool intersectsLine(::java::awt::geom::Line2D* l);
	static bool linesIntersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	static double ptLineDist(double x1, double y1, double x2, double y2, double px, double py);
	virtual double ptLineDist(double px, double py);
	virtual double ptLineDist(::java::awt::geom::Point2D* pt);
	static double ptLineDistSq(double x1, double y1, double x2, double y2, double px, double py);
	virtual double ptLineDistSq(double px, double py);
	virtual double ptLineDistSq(::java::awt::geom::Point2D* pt);
	static double ptSegDist(double x1, double y1, double x2, double y2, double px, double py);
	virtual double ptSegDist(double px, double py);
	virtual double ptSegDist(::java::awt::geom::Point2D* pt);
	static double ptSegDistSq(double x1, double y1, double x2, double y2, double px, double py);
	virtual double ptSegDistSq(double px, double py);
	virtual double ptSegDistSq(::java::awt::geom::Point2D* pt);
	static int32_t relativeCCW(double x1, double y1, double x2, double y2, double px, double py);
	virtual int32_t relativeCCW(double px, double py);
	virtual int32_t relativeCCW(::java::awt::geom::Point2D* p);
	virtual void setLine(double x1, double y1, double x2, double y2) {}
	virtual void setLine(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* p2);
	virtual void setLine(::java::awt::geom::Line2D* l);
	virtual $String* toString() override;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Line2D_h_