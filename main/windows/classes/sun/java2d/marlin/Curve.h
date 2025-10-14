#ifndef _sun_java2d_marlin_Curve_h_
#define _sun_java2d_marlin_Curve_h_
//$ class sun.java2d.marlin.Curve
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class Curve : public ::java::lang::Object {
	$class(Curve, 0, ::java::lang::Object)
public:
	Curve();
	void init$();
	double ROCsq(double t);
	int32_t dxRoots($doubles* roots, int32_t off);
	int32_t dyRoots($doubles* roots, int32_t off);
	static double eliminateInf(double x);
	double falsePositionROCsqMinusX(double t0, double t1, double w2, double err);
	int32_t infPoints($doubles* pts, int32_t off);
	int32_t perpendiculardfddf($doubles* pts, int32_t off);
	int32_t rootsOfROCMinusW($doubles* roots, int32_t off, double w2, double err);
	static bool sameSign(double x, double y);
	void set($doubles* points, int32_t type);
	void set(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	void set(double x1, double y1, double x2, double y2, double x3, double y3);
	void set(double x1, double y1, double x2, double y2);
	int32_t xPoints($doubles* ts, int32_t off, double x);
	int32_t yPoints($doubles* ts, int32_t off, double y);
	static bool $assertionsDisabled;
	double ax = 0.0;
	double ay = 0.0;
	double bx = 0.0;
	double by = 0.0;
	double cx = 0.0;
	double cy = 0.0;
	double dx = 0.0;
	double dy = 0.0;
	double dax = 0.0;
	double day = 0.0;
	double dbx = 0.0;
	double dby = 0.0;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_Curve_h_