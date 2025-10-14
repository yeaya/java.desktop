#ifndef _java_awt_geom_QuadCurve2D_h_
#define _java_awt_geom_QuadCurve2D_h_
//$ class java.awt.geom.QuadCurve2D
//$ extends java.awt.Shape
//$ implements java.lang.Cloneable

#include <java/awt/Shape.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("ABOVE")
#undef ABOVE
#pragma push_macro("BELOW")
#undef BELOW
#pragma push_macro("HIGHEDGE")
#undef HIGHEDGE
#pragma push_macro("INSIDE")
#undef INSIDE
#pragma push_macro("LOWEDGE")
#undef LOWEDGE

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

class $import QuadCurve2D : public ::java::awt::Shape, public ::java::lang::Cloneable {
	$class(QuadCurve2D, $NO_CLASS_INIT, ::java::awt::Shape, ::java::lang::Cloneable)
public:
	QuadCurve2D();
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
	static int32_t evalQuadratic($doubles* vals, int32_t num, bool include0, bool include1, $doubles* inflect, double c1, double ctrl, double c2);
	static void fillEqn($doubles* eqn, double val, double c1, double cp, double c2);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::geom::Point2D* getCtrlPt() {return nullptr;}
	virtual double getCtrlX() {return 0.0;}
	virtual double getCtrlY() {return 0.0;}
	static double getFlatness(double x1, double y1, double ctrlx, double ctrly, double x2, double y2);
	static double getFlatness($doubles* coords, int32_t offset);
	virtual double getFlatness();
	static double getFlatnessSq(double x1, double y1, double ctrlx, double ctrly, double x2, double y2);
	static double getFlatnessSq($doubles* coords, int32_t offset);
	virtual double getFlatnessSq();
	virtual ::java::awt::geom::Point2D* getP1() {return nullptr;}
	virtual ::java::awt::geom::Point2D* getP2() {return nullptr;}
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	static int32_t getTag(double coord, double low, double high);
	virtual double getX1() {return 0.0;}
	virtual double getX2() {return 0.0;}
	virtual double getY1() {return 0.0;}
	virtual double getY2() {return 0.0;}
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) override;
	static bool inwards(int32_t pttag, int32_t opt1tag, int32_t opt2tag);
	virtual void setCurve(double x1, double y1, double ctrlx, double ctrly, double x2, double y2) {}
	virtual void setCurve($doubles* coords, int32_t offset);
	virtual void setCurve(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* cp, ::java::awt::geom::Point2D* p2);
	virtual void setCurve($Array<::java::awt::geom::Point2D>* pts, int32_t offset);
	virtual void setCurve(::java::awt::geom::QuadCurve2D* c);
	static int32_t solveQuadratic($doubles* eqn);
	static int32_t solveQuadratic($doubles* eqn, $doubles* res);
	virtual void subdivide(::java::awt::geom::QuadCurve2D* left, ::java::awt::geom::QuadCurve2D* right);
	static void subdivide(::java::awt::geom::QuadCurve2D* src, ::java::awt::geom::QuadCurve2D* left, ::java::awt::geom::QuadCurve2D* right);
	static void subdivide($doubles* src, int32_t srcoff, $doubles* left, int32_t leftoff, $doubles* right, int32_t rightoff);
	virtual $String* toString() override;
	static const int32_t BELOW = (-2);
	static const int32_t LOWEDGE = (-1);
	static const int32_t INSIDE = 0;
	static const int32_t HIGHEDGE = 1;
	static const int32_t ABOVE = 2;
};

		} // geom
	} // awt
} // java

#pragma pop_macro("ABOVE")
#pragma pop_macro("BELOW")
#pragma pop_macro("HIGHEDGE")
#pragma pop_macro("INSIDE")
#pragma pop_macro("LOWEDGE")

#endif // _java_awt_geom_QuadCurve2D_h_