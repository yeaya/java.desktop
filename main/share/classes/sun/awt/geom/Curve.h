#ifndef _sun_awt_geom_Curve_h_
#define _sun_awt_geom_Curve_h_
//$ class sun.awt.geom.Curve
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DECREASING")
#undef DECREASING
#pragma push_macro("INCREASING")
#undef INCREASING
#pragma push_macro("RECT_INTERSECTS")
#undef RECT_INTERSECTS
#pragma push_macro("TMIN")
#undef TMIN

namespace java {
	namespace awt {
		namespace geom {
			class PathIterator;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace sun {
	namespace awt {
		namespace geom {
			class Crossings;
		}
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class Curve : public ::java::lang::Object {
	$class(Curve, 0, ::java::lang::Object)
public:
	Curve();
	void init$(int32_t direction);
	virtual double TforY(double y) {return 0.0;}
	virtual double XforT(double t) {return 0.0;}
	virtual double XforY(double y) {return 0.0;}
	virtual double YforT(double t) {return 0.0;}
	virtual bool accumulateCrossings(::sun::awt::geom::Crossings* c);
	virtual int32_t compareTo(::sun::awt::geom::Curve* that, $doubles* yrange);
	virtual $String* controlPointString();
	virtual int32_t crossingsFor(double x, double y);
	virtual double dXforT(double t, int32_t deriv) {return 0.0;}
	virtual double dYforT(double t, int32_t deriv) {return 0.0;}
	static int64_t diffbits(double y1, double y2);
	virtual void enlarge(::java::awt::geom::Rectangle2D* r) {}
	virtual bool fairlyClose(double v1, double v2);
	virtual bool findIntersect(::sun::awt::geom::Curve* that, $doubles* yrange, double ymin, int32_t slevel, int32_t tlevel, double s0, double xs0, double ys0, double s1, double xs1, double ys1, double t0, double xt0, double yt0, double t1, double xt1, double yt1);
	int32_t getDirection();
	virtual int32_t getOrder() {return 0;}
	virtual ::sun::awt::geom::Curve* getReversedCurve() {return nullptr;}
	virtual int32_t getSegment($doubles* coords) {return 0;}
	virtual ::sun::awt::geom::Curve* getSubCurve(double ystart, double yend);
	virtual ::sun::awt::geom::Curve* getSubCurve(double ystart, double yend, int32_t dir) {return nullptr;}
	::sun::awt::geom::Curve* getWithDirection(int32_t direction);
	virtual double getX0() {return 0.0;}
	virtual double getX1() {return 0.0;}
	virtual double getXBot() {return 0.0;}
	virtual double getXMax() {return 0.0;}
	virtual double getXMin() {return 0.0;}
	virtual double getXTop() {return 0.0;}
	virtual double getY0() {return 0.0;}
	virtual double getY1() {return 0.0;}
	virtual double getYBot() {return 0.0;}
	virtual double getYTop() {return 0.0;}
	static void insertCubic(::java::util::Vector* curves, double x0, double y0, $doubles* coords);
	static void insertLine(::java::util::Vector* curves, double x0, double y0, double x1, double y1);
	static void insertMove(::java::util::Vector* curves, double x, double y);
	static void insertQuad(::java::util::Vector* curves, double x0, double y0, $doubles* coords);
	static double next(double v);
	virtual double nextVertical(double t0, double t1) {return 0.0;}
	static int32_t orderof(double x1, double x2);
	static int32_t pointCrossingsForCubic(double px, double py, double x0, double y0, double xc0, double yc0, double xc1, double yc1, double x1, double y1, int32_t level);
	static int32_t pointCrossingsForLine(double px, double py, double x0, double y0, double x1, double y1);
	static int32_t pointCrossingsForPath(::java::awt::geom::PathIterator* pi, double px, double py);
	static int32_t pointCrossingsForQuad(double px, double py, double x0, double y0, double xc, double yc, double x1, double y1, int32_t level);
	static double prev(double v);
	static int32_t rectCrossingsForCubic(int32_t crossings, double rxmin, double rymin, double rxmax, double rymax, double x0, double y0, double xc0, double yc0, double xc1, double yc1, double x1, double y1, int32_t level);
	static int32_t rectCrossingsForLine(int32_t crossings, double rxmin, double rymin, double rxmax, double rymax, double x0, double y0, double x1, double y1);
	static int32_t rectCrossingsForPath(::java::awt::geom::PathIterator* pi, double rxmin, double rymin, double rxmax, double rymax);
	static int32_t rectCrossingsForQuad(int32_t crossings, double rxmin, double rymin, double rxmax, double rymax, double x0, double y0, double xc, double yc, double x1, double y1, int32_t level);
	virtual double refineTforY(double t0, double yt0, double y0);
	static double round(double v);
	static int64_t signeddiffbits(double y1, double y2);
	virtual $String* toString() override;
	static const int32_t INCREASING = 1;
	static const int32_t DECREASING = (-1);
	int32_t direction = 0;
	static const int32_t RECT_INTERSECTS = 0x80000000;
	static double TMIN;
};

		} // geom
	} // awt
} // sun

#pragma pop_macro("DECREASING")
#pragma pop_macro("INCREASING")
#pragma pop_macro("RECT_INTERSECTS")
#pragma pop_macro("TMIN")

#endif // _sun_awt_geom_Curve_h_