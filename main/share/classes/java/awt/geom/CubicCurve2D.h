#ifndef _java_awt_geom_CubicCurve2D_h_
#define _java_awt_geom_CubicCurve2D_h_
//$ class java.awt.geom.CubicCurve2D
//$ extends java.awt.Shape
//$ implements java.lang.Cloneable

#include <java/awt/Shape.h>
#include <java/lang/Array.h>
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

class $export CubicCurve2D : public ::java::awt::Shape, public ::java::lang::Cloneable {
	$class(CubicCurve2D, $NO_CLASS_INIT, ::java::awt::Shape, ::java::lang::Cloneable)
public:
	CubicCurve2D();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static double bisectRoot($doubles* eqn, double x0, double xe);
	static double bisectRootWithHint($doubles* eqn, double x0, double xe, double hint);
	virtual $Object* clone() override;
	virtual bool contains(double x, double y) override;
	virtual bool contains(::java::awt::geom::Point2D* p) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool contains(::java::awt::geom::Rectangle2D* r) override;
	static int32_t fixRoots($doubles* eqn, $doubles* res, int32_t num);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::geom::Point2D* getCtrlP1() {return nullptr;}
	virtual ::java::awt::geom::Point2D* getCtrlP2() {return nullptr;}
	virtual double getCtrlX1() {return 0.0;}
	virtual double getCtrlX2() {return 0.0;}
	virtual double getCtrlY1() {return 0.0;}
	virtual double getCtrlY2() {return 0.0;}
	static double getFlatness(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2);
	static double getFlatness($doubles* coords, int32_t offset);
	virtual double getFlatness();
	static double getFlatnessSq(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2);
	static double getFlatnessSq($doubles* coords, int32_t offset);
	virtual double getFlatnessSq();
	virtual ::java::awt::geom::Point2D* getP1() {return nullptr;}
	virtual ::java::awt::geom::Point2D* getP2() {return nullptr;}
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	static double getRootUpperBound($doubles* eqn);
	virtual double getX1() {return 0.0;}
	virtual double getX2() {return 0.0;}
	virtual double getY1() {return 0.0;}
	virtual double getY2() {return 0.0;}
	static bool inInterval(double t, double min, double max);
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) override;
	static bool iszero(double x, double err);
	static bool oppositeSigns(double x1, double x2);
	int32_t rectCrossings(double x, double y, double w, double h);
	static double refineRootWithHint($doubles* eqn, double min, double max, double t);
	virtual void setCurve(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2) {}
	virtual void setCurve($doubles* coords, int32_t offset);
	virtual void setCurve(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* cp1, ::java::awt::geom::Point2D* cp2, ::java::awt::geom::Point2D* p2);
	virtual void setCurve($Array<::java::awt::geom::Point2D>* pts, int32_t offset);
	virtual void setCurve(::java::awt::geom::CubicCurve2D* c);
	static int32_t solveCubic($doubles* eqn);
	static int32_t solveCubic($doubles* eqn, $doubles* res);
	static double solveEqn($doubles* eqn, int32_t order, double t);
	virtual void subdivide(::java::awt::geom::CubicCurve2D* left, ::java::awt::geom::CubicCurve2D* right);
	static void subdivide(::java::awt::geom::CubicCurve2D* src, ::java::awt::geom::CubicCurve2D* left, ::java::awt::geom::CubicCurve2D* right);
	static void subdivide($doubles* src, int32_t srcoff, $doubles* left, int32_t leftoff, $doubles* right, int32_t rightoff);
	virtual $String* toString() override;
	static bool within(double x, double y, double err);
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_CubicCurve2D_h_