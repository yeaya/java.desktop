#ifndef _sun_java2d_marlin_Helpers_h_
#define _sun_java2d_marlin_Helpers_h_
//$ class sun.java2d.marlin.Helpers
//$ extends sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/MarlinConst.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B

namespace sun {
	namespace java2d {
		namespace marlin {
			class Curve;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class Helpers : public ::sun::java2d::marlin::MarlinConst {
	$class(Helpers, $NO_CLASS_INIT, ::sun::java2d::marlin::MarlinConst)
public:
	Helpers();
	void init$();
	static int32_t cubicRootsInAB(double d, double a, double b, double c, $doubles* pts, int32_t off, double A, double B);
	static double curvelen(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3);
	static double evalCubic(double a, double b, double c, double d, double t);
	static double evalQuad(double a, double b, double c, double t);
	static double fastCurvelen(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3);
	static double fastLineLen(double x0, double y0, double x1, double y1);
	static double fastQuadLen(double x0, double y0, double x1, double y1, double x2, double y2);
	static int32_t filterOutNotInAB($doubles* nums, int32_t off, int32_t len, double a, double b);
	static int32_t findClipPoints(::sun::java2d::marlin::Curve* curve, $doubles* pts, $doubles* ts, int32_t type, int32_t outCodeOR, $doubles* clipRect);
	static int32_t findSubdivPoints(::sun::java2d::marlin::Curve* c, $doubles* pts, $doubles* ts, int32_t type, double w2);
	static void isort($doubles* a, int32_t len);
	static double linelen(double x0, double y0, double x1, double y1);
	static int32_t outcode(double x, double y, $doubles* clipRect);
	static double quadlen(double x0, double y0, double x1, double y1, double x2, double y2);
	static int32_t quadraticRoots(double a, double b, double c, $doubles* zeroes, int32_t off);
	static void subdivide($doubles* src, $doubles* left, $doubles* right, int32_t type);
	static void subdivideAt(double t, $doubles* src, int32_t offS, $doubles* pts, int32_t offL, int32_t type);
	static void subdivideCubic($doubles* src, $doubles* left, $doubles* right);
	static void subdivideCubicAt(double t, $doubles* src, int32_t offS, $doubles* pts, int32_t offL, int32_t offR);
	static void subdivideLineAt(double t, $doubles* src, int32_t offS, $doubles* pts, int32_t offL, int32_t offR);
	static void subdivideQuad($doubles* src, $doubles* left, $doubles* right);
	static void subdivideQuadAt(double t, $doubles* src, int32_t offS, $doubles* pts, int32_t offL, int32_t offR);
	static bool within(double x, double y, double err);
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("A")
#pragma pop_macro("B")

#endif // _sun_java2d_marlin_Helpers_h_