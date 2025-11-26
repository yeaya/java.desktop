#include <sun/java2d/marlin/Helpers.h>

#include <java/lang/Error.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <sun/java2d/marlin/Curve.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <jcpp.h>

#undef A
#undef B
#undef D
#undef OUTCODE_BOTTOM
#undef OUTCODE_LEFT
#undef OUTCODE_RIGHT
#undef OUTCODE_TOP
#undef PI

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Curve = ::sun::java2d::marlin::Curve;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;

namespace sun {
	namespace java2d {
		namespace marlin {

$MethodInfo _Helpers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Helpers::*)()>(&Helpers::init$))},
	{"cubicRootsInAB", "(DDDD[DIDD)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(double,double,double,double,$doubles*,int32_t,double,double)>(&Helpers::cubicRootsInAB))},
	{"curvelen", "(DDDDDDDD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double,double,double)>(&Helpers::curvelen))},
	{"evalCubic", "(DDDDD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double,double,double,double)>(&Helpers::evalCubic))},
	{"evalQuad", "(DDDD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double,double,double)>(&Helpers::evalQuad))},
	{"fastCurvelen", "(DDDDDDDD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double,double,double)>(&Helpers::fastCurvelen))},
	{"fastLineLen", "(DDDD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double,double,double)>(&Helpers::fastLineLen))},
	{"fastQuadLen", "(DDDDDD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double)>(&Helpers::fastQuadLen))},
	{"filterOutNotInAB", "([DIIDD)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($doubles*,int32_t,int32_t,double,double)>(&Helpers::filterOutNotInAB))},
	{"findClipPoints", "(Lsun/java2d/marlin/Curve;[D[DII[D)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Curve*,$doubles*,$doubles*,int32_t,int32_t,$doubles*)>(&Helpers::findClipPoints))},
	{"findSubdivPoints", "(Lsun/java2d/marlin/Curve;[D[DID)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Curve*,$doubles*,$doubles*,int32_t,double)>(&Helpers::findSubdivPoints))},
	{"isort", "([DI)V", nullptr, $STATIC, $method(static_cast<void(*)($doubles*,int32_t)>(&Helpers::isort))},
	{"linelen", "(DDDD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double,double,double)>(&Helpers::linelen))},
	{"outcode", "(DD[D)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(double,double,$doubles*)>(&Helpers::outcode))},
	{"quadlen", "(DDDDDD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double)>(&Helpers::quadlen))},
	{"quadraticRoots", "(DDD[DI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(double,double,double,$doubles*,int32_t)>(&Helpers::quadraticRoots))},
	{"subdivide", "([D[D[DI)V", nullptr, $STATIC, $method(static_cast<void(*)($doubles*,$doubles*,$doubles*,int32_t)>(&Helpers::subdivide))},
	{"subdivideAt", "(D[DI[DII)V", nullptr, $STATIC, $method(static_cast<void(*)(double,$doubles*,int32_t,$doubles*,int32_t,int32_t)>(&Helpers::subdivideAt))},
	{"subdivideCubic", "([D[D[D)V", nullptr, $STATIC, $method(static_cast<void(*)($doubles*,$doubles*,$doubles*)>(&Helpers::subdivideCubic))},
	{"subdivideCubicAt", "(D[DI[DII)V", nullptr, $STATIC, $method(static_cast<void(*)(double,$doubles*,int32_t,$doubles*,int32_t,int32_t)>(&Helpers::subdivideCubicAt))},
	{"subdivideLineAt", "(D[DI[DII)V", nullptr, $STATIC, $method(static_cast<void(*)(double,$doubles*,int32_t,$doubles*,int32_t,int32_t)>(&Helpers::subdivideLineAt))},
	{"subdivideQuad", "([D[D[D)V", nullptr, $STATIC, $method(static_cast<void(*)($doubles*,$doubles*,$doubles*)>(&Helpers::subdivideQuad))},
	{"subdivideQuadAt", "(D[DI[DII)V", nullptr, $STATIC, $method(static_cast<void(*)(double,$doubles*,int32_t,$doubles*,int32_t,int32_t)>(&Helpers::subdivideQuadAt))},
	{"within", "(DDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)(double,double,double)>(&Helpers::within))},
	{}
};

$InnerClassInfo _Helpers_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.Helpers$IndexStack", "sun.java2d.marlin.Helpers", "IndexStack", $STATIC | $FINAL},
	{"sun.java2d.marlin.Helpers$PolyStack", "sun.java2d.marlin.Helpers", "PolyStack", $STATIC | $FINAL},
	{}
};

$ClassInfo _Helpers_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Helpers",
	"java.lang.Object",
	"sun.java2d.marlin.MarlinConst",
	nullptr,
	_Helpers_MethodInfo_,
	nullptr,
	nullptr,
	_Helpers_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.Helpers$IndexStack,sun.java2d.marlin.Helpers$PolyStack"
};

$Object* allocate$Helpers($Class* clazz) {
	return $of($alloc(Helpers));
}

void Helpers::init$() {
	$throwNew($Error, "This is a non instantiable class"_s);
}

bool Helpers::within(double x, double y, double err) {
	$init(Helpers);
	double d = y - x;
	return (d <= err && d >= -err);
}

double Helpers::evalCubic(double a, double b, double c, double d, double t) {
	$init(Helpers);
	return t * (t * (t * a + b) + c) + d;
}

double Helpers::evalQuad(double a, double b, double c, double t) {
	$init(Helpers);
	return t * (t * a + b) + c;
}

int32_t Helpers::quadraticRoots(double a, double b, double c, $doubles* zeroes, int32_t off) {
	$init(Helpers);
	int32_t ret = off;
	if (a != 0.0) {
		double dis = b * b - 4.0 * a * c;
		if (dis > 0.0) {
			double sqrtDis = $Math::sqrt(dis);
			if (b >= 0.0) {
				$nc(zeroes)->set(ret++, (2.0 * c) / (-b - sqrtDis));
				zeroes->set(ret++, (-b - sqrtDis) / (2.0 * a));
			} else {
				$nc(zeroes)->set(ret++, (-b + sqrtDis) / (2.0 * a));
				zeroes->set(ret++, (2.0 * c) / (-b + sqrtDis));
			}
		} else if (dis == 0.0) {
			$nc(zeroes)->set(ret++, -b / (2.0 * a));
		}
	} else if (b != 0.0) {
		$nc(zeroes)->set(ret++, -c / b);
	}
	return ret - off;
}

int32_t Helpers::cubicRootsInAB(double d, double a, double b, double c, $doubles* pts, int32_t off, double A, double B) {
	$init(Helpers);
	if (d == 0.0) {
		int32_t num = quadraticRoots(a, b, c, pts, off);
		return filterOutNotInAB(pts, off, num, A, B) - off;
	}
	a /= d;
	b /= d;
	c /= d;
	double sub = (1.0 / 3.0) * a;
	double sq_A = a * a;
	double p = (1.0 / 3.0) * ((-1.0 / 3.0) * sq_A + b);
	double q = (1.0 / 2.0) * ((2.0 / 27.0) * a * sq_A - sub * b + c);
	double cb_p = p * p * p;
	double D = q * q + cb_p;
	int32_t num = 0;
	if (D < 0.0) {
		double phi = (1.0 / 3.0) * $Math::acos(-q / $Math::sqrt(-cb_p));
		double t = 2.0 * $Math::sqrt(-p);
		$nc(pts)->set(off, (t * $Math::cos(phi) - sub));
		pts->set(off + 1, (-t * $Math::cos(phi + ($Math::PI / 3.0)) - sub));
		pts->set(off + 2, (-t * $Math::cos(phi - ($Math::PI / 3.0)) - sub));
		num = 3;
	} else {
		double sqrt_D = $Math::sqrt(D);
		double u = $Math::cbrt(sqrt_D - q);
		double v = -$Math::cbrt(sqrt_D + q);
		$nc(pts)->set(off, (u + v - sub));
		num = 1;
		if (within(D, 0.0, 1.0E-8)) {
			pts->set(off + 1, ((-1.0 / 2.0) * (u + v) - sub));
			num = 2;
		}
	}
	return filterOutNotInAB(pts, off, num, A, B) - off;
}

int32_t Helpers::filterOutNotInAB($doubles* nums, int32_t off, int32_t len, double a, double b) {
	$init(Helpers);
	int32_t ret = off;
	{
		int32_t i = off;
		int32_t end = off + len;
		for (; i < end; ++i) {
			if ($nc(nums)->get(i) >= a && nums->get(i) < b) {
				nums->set(ret++, nums->get(i));
			}
		}
	}
	return ret;
}

double Helpers::fastLineLen(double x0, double y0, double x1, double y1) {
	$init(Helpers);
	double dx = x1 - x0;
	double dy = y1 - y0;
	double var$0 = $Math::abs(dx);
	return var$0 + $Math::abs(dy);
}

double Helpers::linelen(double x0, double y0, double x1, double y1) {
	$init(Helpers);
	double dx = x1 - x0;
	double dy = y1 - y0;
	return $Math::sqrt(dx * dx + dy * dy);
}

double Helpers::fastQuadLen(double x0, double y0, double x1, double y1, double x2, double y2) {
	$init(Helpers);
	double dx1 = x1 - x0;
	double dx2 = x2 - x1;
	double dy1 = y1 - y0;
	double dy2 = y2 - y1;
	double var$2 = $Math::abs(dx1);
	double var$1 = var$2 + $Math::abs(dx2);
	double var$0 = var$1 + $Math::abs(dy1);
	return var$0 + $Math::abs(dy2);
}

double Helpers::quadlen(double x0, double y0, double x1, double y1, double x2, double y2) {
	$init(Helpers);
	double var$1 = linelen(x0, y0, x1, y1);
	double var$0 = var$1 + linelen(x1, y1, x2, y2);
	return (var$0 + linelen(x0, y0, x2, y2)) / 2.0;
}

double Helpers::fastCurvelen(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3) {
	$init(Helpers);
	double dx1 = x1 - x0;
	double dx2 = x2 - x1;
	double dx3 = x3 - x2;
	double dy1 = y1 - y0;
	double dy2 = y2 - y1;
	double dy3 = y3 - y2;
	double var$4 = $Math::abs(dx1);
	double var$3 = var$4 + $Math::abs(dx2);
	double var$2 = var$3 + $Math::abs(dx3);
	double var$1 = var$2 + $Math::abs(dy1);
	double var$0 = var$1 + $Math::abs(dy2);
	return var$0 + $Math::abs(dy3);
}

double Helpers::curvelen(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3) {
	$init(Helpers);
	double var$2 = linelen(x0, y0, x1, y1);
	double var$1 = var$2 + linelen(x1, y1, x2, y2);
	double var$0 = var$1 + linelen(x2, y2, x3, y3);
	return (var$0 + linelen(x0, y0, x3, y3)) / 2.0;
}

int32_t Helpers::findSubdivPoints($Curve* c, $doubles* pts, $doubles* ts, int32_t type, double w2) {
	$init(Helpers);
	double x12 = $nc(pts)->get(2) - pts->get(0);
	double y12 = pts->get(3) - pts->get(1);
	if ((y12 != 0.0) && (x12 != 0.0)) {
		double hypot = $Math::sqrt(x12 * x12 + y12 * y12);
		double cos = x12 / hypot;
		double sin = y12 / hypot;
		double x1 = cos * pts->get(0) + sin * pts->get(1);
		double y1 = cos * pts->get(1) - sin * pts->get(0);
		double x2 = cos * pts->get(2) + sin * pts->get(3);
		double y2 = cos * pts->get(3) - sin * pts->get(2);
		double x3 = cos * pts->get(4) + sin * pts->get(5);
		double y3 = cos * pts->get(5) - sin * pts->get(4);
		{
			double x4 = 0;
			double y4 = 0;
			switch (type) {
			case 8:
				{
					x4 = cos * pts->get(6) + sin * pts->get(7);
					y4 = cos * pts->get(7) - sin * pts->get(6);
					$nc(c)->set(x1, y1, x2, y2, x3, y3, x4, y4);
					break;
				}
			case 6:
				{
					$nc(c)->set(x1, y1, x2, y2, x3, y3);
					break;
				}
			default:
				{}
			}
		}
	} else {
		$nc(c)->set(pts, type);
	}
	int32_t ret = 0;
	ret += $nc(c)->dxRoots(ts, ret);
	ret += c->dyRoots(ts, ret);
	if (type == 8) {
		ret += c->infPoints(ts, ret);
	}
	ret += c->rootsOfROCMinusW(ts, ret, w2, 1.0E-4);
	ret = filterOutNotInAB(ts, 0, ret, 1.0E-4, 0.9999);
	isort(ts, ret);
	return ret;
}

int32_t Helpers::findClipPoints($Curve* curve, $doubles* pts, $doubles* ts, int32_t type, int32_t outCodeOR, $doubles* clipRect) {
	$init(Helpers);
	$nc(curve)->set(pts, type);
	int32_t ret = 0;
	if (((int32_t)(outCodeOR & (uint32_t)$MarlinConst::OUTCODE_LEFT)) != 0) {
		ret += curve->xPoints(ts, ret, $nc(clipRect)->get(2));
	}
	if (((int32_t)(outCodeOR & (uint32_t)$MarlinConst::OUTCODE_RIGHT)) != 0) {
		ret += curve->xPoints(ts, ret, $nc(clipRect)->get(3));
	}
	if (((int32_t)(outCodeOR & (uint32_t)$MarlinConst::OUTCODE_TOP)) != 0) {
		ret += curve->yPoints(ts, ret, $nc(clipRect)->get(0));
	}
	if (((int32_t)(outCodeOR & (uint32_t)$MarlinConst::OUTCODE_BOTTOM)) != 0) {
		ret += curve->yPoints(ts, ret, $nc(clipRect)->get(1));
	}
	isort(ts, ret);
	return ret;
}

void Helpers::subdivide($doubles* src, $doubles* left, $doubles* right, int32_t type) {
	$init(Helpers);
	switch (type) {
	case 8:
		{
			subdivideCubic(src, left, right);
			return;
		}
	case 6:
		{
			subdivideQuad(src, left, right);
			return;
		}
	default:
		{
			$throwNew($InternalError, "Unsupported curve type"_s);
		}
	}
}

void Helpers::isort($doubles* a, int32_t len) {
	$init(Helpers);
	{
		int32_t i = 1;
		int32_t j = 0;
		for (; i < len; ++i) {
			double ai = $nc(a)->get(i);
			j = i - 1;
			for (; j >= 0 && a->get(j) > ai; --j) {
				a->set(j + 1, a->get(j));
			}
			a->set(j + 1, ai);
		}
	}
}

void Helpers::subdivideCubic($doubles* src, $doubles* left, $doubles* right) {
	$init(Helpers);
	double x1 = $nc(src)->get(0);
	double y1 = src->get(1);
	double cx1 = src->get(2);
	double cy1 = src->get(3);
	double cx2 = src->get(4);
	double cy2 = src->get(5);
	double x2 = src->get(6);
	double y2 = src->get(7);
	$nc(left)->set(0, x1);
	left->set(1, y1);
	$nc(right)->set(6, x2);
	right->set(7, y2);
	x1 = (x1 + cx1) / 2.0;
	y1 = (y1 + cy1) / 2.0;
	x2 = (x2 + cx2) / 2.0;
	y2 = (y2 + cy2) / 2.0;
	double cx = (cx1 + cx2) / 2.0;
	double cy = (cy1 + cy2) / 2.0;
	cx1 = (x1 + cx) / 2.0;
	cy1 = (y1 + cy) / 2.0;
	cx2 = (x2 + cx) / 2.0;
	cy2 = (y2 + cy) / 2.0;
	cx = (cx1 + cx2) / 2.0;
	cy = (cy1 + cy2) / 2.0;
	left->set(2, x1);
	left->set(3, y1);
	left->set(4, cx1);
	left->set(5, cy1);
	left->set(6, cx);
	left->set(7, cy);
	right->set(0, cx);
	right->set(1, cy);
	right->set(2, cx2);
	right->set(3, cy2);
	right->set(4, x2);
	right->set(5, y2);
}

void Helpers::subdivideCubicAt(double t, $doubles* src, int32_t offS, $doubles* pts, int32_t offL, int32_t offR) {
	$init(Helpers);
	double x1 = $nc(src)->get(offS);
	double y1 = src->get(offS + 1);
	double cx1 = src->get(offS + 2);
	double cy1 = src->get(offS + 3);
	double cx2 = src->get(offS + 4);
	double cy2 = src->get(offS + 5);
	double x2 = src->get(offS + 6);
	double y2 = src->get(offS + 7);
	$nc(pts)->set(offL, x1);
	pts->set(offL + 1, y1);
	pts->set(offR + 6, x2);
	pts->set(offR + 7, y2);
	x1 = x1 + t * (cx1 - x1);
	y1 = y1 + t * (cy1 - y1);
	x2 = cx2 + t * (x2 - cx2);
	y2 = cy2 + t * (y2 - cy2);
	double cx = cx1 + t * (cx2 - cx1);
	double cy = cy1 + t * (cy2 - cy1);
	cx1 = x1 + t * (cx - x1);
	cy1 = y1 + t * (cy - y1);
	cx2 = cx + t * (x2 - cx);
	cy2 = cy + t * (y2 - cy);
	cx = cx1 + t * (cx2 - cx1);
	cy = cy1 + t * (cy2 - cy1);
	pts->set(offL + 2, x1);
	pts->set(offL + 3, y1);
	pts->set(offL + 4, cx1);
	pts->set(offL + 5, cy1);
	pts->set(offL + 6, cx);
	pts->set(offL + 7, cy);
	pts->set(offR, cx);
	pts->set(offR + 1, cy);
	pts->set(offR + 2, cx2);
	pts->set(offR + 3, cy2);
	pts->set(offR + 4, x2);
	pts->set(offR + 5, y2);
}

void Helpers::subdivideQuad($doubles* src, $doubles* left, $doubles* right) {
	$init(Helpers);
	double x1 = $nc(src)->get(0);
	double y1 = src->get(1);
	double cx = src->get(2);
	double cy = src->get(3);
	double x2 = src->get(4);
	double y2 = src->get(5);
	$nc(left)->set(0, x1);
	left->set(1, y1);
	$nc(right)->set(4, x2);
	right->set(5, y2);
	x1 = (x1 + cx) / 2.0;
	y1 = (y1 + cy) / 2.0;
	x2 = (x2 + cx) / 2.0;
	y2 = (y2 + cy) / 2.0;
	cx = (x1 + x2) / 2.0;
	cy = (y1 + y2) / 2.0;
	left->set(2, x1);
	left->set(3, y1);
	left->set(4, cx);
	left->set(5, cy);
	right->set(0, cx);
	right->set(1, cy);
	right->set(2, x2);
	right->set(3, y2);
}

void Helpers::subdivideQuadAt(double t, $doubles* src, int32_t offS, $doubles* pts, int32_t offL, int32_t offR) {
	$init(Helpers);
	double x1 = $nc(src)->get(offS);
	double y1 = src->get(offS + 1);
	double cx = src->get(offS + 2);
	double cy = src->get(offS + 3);
	double x2 = src->get(offS + 4);
	double y2 = src->get(offS + 5);
	$nc(pts)->set(offL, x1);
	pts->set(offL + 1, y1);
	pts->set(offR + 4, x2);
	pts->set(offR + 5, y2);
	x1 = x1 + t * (cx - x1);
	y1 = y1 + t * (cy - y1);
	x2 = cx + t * (x2 - cx);
	y2 = cy + t * (y2 - cy);
	cx = x1 + t * (x2 - x1);
	cy = y1 + t * (y2 - y1);
	pts->set(offL + 2, x1);
	pts->set(offL + 3, y1);
	pts->set(offL + 4, cx);
	pts->set(offL + 5, cy);
	pts->set(offR, cx);
	pts->set(offR + 1, cy);
	pts->set(offR + 2, x2);
	pts->set(offR + 3, y2);
}

void Helpers::subdivideLineAt(double t, $doubles* src, int32_t offS, $doubles* pts, int32_t offL, int32_t offR) {
	$init(Helpers);
	double x1 = $nc(src)->get(offS);
	double y1 = src->get(offS + 1);
	double x2 = src->get(offS + 2);
	double y2 = src->get(offS + 3);
	$nc(pts)->set(offL, x1);
	pts->set(offL + 1, y1);
	pts->set(offR + 2, x2);
	pts->set(offR + 3, y2);
	x1 = x1 + t * (x2 - x1);
	y1 = y1 + t * (y2 - y1);
	pts->set(offL + 2, x1);
	pts->set(offL + 3, y1);
	pts->set(offR, x1);
	pts->set(offR + 1, y1);
}

void Helpers::subdivideAt(double t, $doubles* src, int32_t offS, $doubles* pts, int32_t offL, int32_t type) {
	$init(Helpers);
	if (type == 8) {
		subdivideCubicAt(t, src, offS, pts, offL, offL + type);
	} else if (type == 4) {
		subdivideLineAt(t, src, offS, pts, offL, offL + type);
	} else {
		subdivideQuadAt(t, src, offS, pts, offL, offL + type);
	}
}

int32_t Helpers::outcode(double x, double y, $doubles* clipRect) {
	$init(Helpers);
	int32_t code = 0;
	if (y < $nc(clipRect)->get(0)) {
		code = $MarlinConst::OUTCODE_TOP;
	} else if (y >= clipRect->get(1)) {
		code = $MarlinConst::OUTCODE_BOTTOM;
	} else {
		code = 0;
	}
	if (x < $nc(clipRect)->get(2)) {
		code |= $MarlinConst::OUTCODE_LEFT;
	} else if (x >= clipRect->get(3)) {
		code |= $MarlinConst::OUTCODE_RIGHT;
	}
	return code;
}

Helpers::Helpers() {
}

$Class* Helpers::load$($String* name, bool initialize) {
	$loadClass(Helpers, name, initialize, &_Helpers_ClassInfo_, allocate$Helpers);
	return class$;
}

$Class* Helpers::class$ = nullptr;

		} // marlin
	} // java2d
} // sun