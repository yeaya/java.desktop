#include <sun/java2d/marlin/Curve.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <sun/java2d/marlin/Helpers.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Helpers = ::sun::java2d::marlin::Helpers;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _Curve_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Curve, $assertionsDisabled)},
	{"ax", "D", nullptr, 0, $field(Curve, ax)},
	{"ay", "D", nullptr, 0, $field(Curve, ay)},
	{"bx", "D", nullptr, 0, $field(Curve, bx)},
	{"by", "D", nullptr, 0, $field(Curve, by)},
	{"cx", "D", nullptr, 0, $field(Curve, cx)},
	{"cy", "D", nullptr, 0, $field(Curve, cy)},
	{"dx", "D", nullptr, 0, $field(Curve, dx)},
	{"dy", "D", nullptr, 0, $field(Curve, dy)},
	{"dax", "D", nullptr, 0, $field(Curve, dax)},
	{"day", "D", nullptr, 0, $field(Curve, day)},
	{"dbx", "D", nullptr, 0, $field(Curve, dbx)},
	{"dby", "D", nullptr, 0, $field(Curve, dby)},
	{}
};

$MethodInfo _Curve_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Curve::*)()>(&Curve::init$))},
	{"ROCsq", "(D)D", nullptr, $PRIVATE, $method(static_cast<double(Curve::*)(double)>(&Curve::ROCsq))},
	{"dxRoots", "([DI)I", nullptr, 0, $method(static_cast<int32_t(Curve::*)($doubles*,int32_t)>(&Curve::dxRoots))},
	{"dyRoots", "([DI)I", nullptr, 0, $method(static_cast<int32_t(Curve::*)($doubles*,int32_t)>(&Curve::dyRoots))},
	{"eliminateInf", "(D)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double)>(&Curve::eliminateInf))},
	{"falsePositionROCsqMinusX", "(DDDD)D", nullptr, $PRIVATE, $method(static_cast<double(Curve::*)(double,double,double,double)>(&Curve::falsePositionROCsqMinusX))},
	{"infPoints", "([DI)I", nullptr, 0, $method(static_cast<int32_t(Curve::*)($doubles*,int32_t)>(&Curve::infPoints))},
	{"perpendiculardfddf", "([DI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Curve::*)($doubles*,int32_t)>(&Curve::perpendiculardfddf))},
	{"rootsOfROCMinusW", "([DIDD)I", nullptr, 0, $method(static_cast<int32_t(Curve::*)($doubles*,int32_t,double,double)>(&Curve::rootsOfROCMinusW))},
	{"sameSign", "(DD)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double,double)>(&Curve::sameSign))},
	{"set", "([DI)V", nullptr, 0, $method(static_cast<void(Curve::*)($doubles*,int32_t)>(&Curve::set))},
	{"set", "(DDDDDDDD)V", nullptr, 0, $method(static_cast<void(Curve::*)(double,double,double,double,double,double,double,double)>(&Curve::set))},
	{"set", "(DDDDDD)V", nullptr, 0, $method(static_cast<void(Curve::*)(double,double,double,double,double,double)>(&Curve::set))},
	{"set", "(DDDD)V", nullptr, 0, $method(static_cast<void(Curve::*)(double,double,double,double)>(&Curve::set))},
	{"xPoints", "([DID)I", nullptr, 0, $method(static_cast<int32_t(Curve::*)($doubles*,int32_t,double)>(&Curve::xPoints))},
	{"yPoints", "([DID)I", nullptr, 0, $method(static_cast<int32_t(Curve::*)($doubles*,int32_t,double)>(&Curve::yPoints))},
	{}
};

$ClassInfo _Curve_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Curve",
	"java.lang.Object",
	nullptr,
	_Curve_FieldInfo_,
	_Curve_MethodInfo_
};

$Object* allocate$Curve($Class* clazz) {
	return $of($alloc(Curve));
}

bool Curve::$assertionsDisabled = false;

void Curve::init$() {
}

void Curve::set($doubles* points, int32_t type) {
	if (type == 8) {
		set($nc(points)->get(0), points->get(1), points->get(2), points->get(3), points->get(4), points->get(5), points->get(6), points->get(7));
	} else if (type == 4) {
		set($nc(points)->get(0), points->get(1), points->get(2), points->get(3));
	} else {
		set($nc(points)->get(0), points->get(1), points->get(2), points->get(3), points->get(4), points->get(5));
	}
}

void Curve::set(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
	double dx32 = 3.0 * (x3 - x2);
	double dy32 = 3.0 * (y3 - y2);
	double dx21 = 3.0 * (x2 - x1);
	double dy21 = 3.0 * (y2 - y1);
	this->ax = (x4 - x1) - dx32;
	this->ay = (y4 - y1) - dy32;
	this->bx = (dx32 - dx21);
	this->by = (dy32 - dy21);
	this->cx = dx21;
	this->cy = dy21;
	this->dx = x1;
	this->dy = y1;
	this->dax = 3.0 * this->ax;
	this->day = 3.0 * this->ay;
	this->dbx = 2.0 * this->bx;
	this->dby = 2.0 * this->by;
}

void Curve::set(double x1, double y1, double x2, double y2, double x3, double y3) {
	double dx21 = (x2 - x1);
	double dy21 = (y2 - y1);
	this->ax = 0.0;
	this->ay = 0.0;
	this->bx = (x3 - x2) - dx21;
	this->by = (y3 - y2) - dy21;
	this->cx = 2.0 * dx21;
	this->cy = 2.0 * dy21;
	this->dx = x1;
	this->dy = y1;
	this->dax = 0.0;
	this->day = 0.0;
	this->dbx = 2.0 * this->bx;
	this->dby = 2.0 * this->by;
}

void Curve::set(double x1, double y1, double x2, double y2) {
	double dx21 = (x2 - x1);
	double dy21 = (y2 - y1);
	this->ax = 0.0;
	this->ay = 0.0;
	this->bx = 0.0;
	this->by = 0.0;
	this->cx = dx21;
	this->cy = dy21;
	this->dx = x1;
	this->dy = y1;
	this->dax = 0.0;
	this->day = 0.0;
	this->dbx = 0.0;
	this->dby = 0.0;
}

int32_t Curve::dxRoots($doubles* roots, int32_t off) {
	return $Helpers::quadraticRoots(this->dax, this->dbx, this->cx, roots, off);
}

int32_t Curve::dyRoots($doubles* roots, int32_t off) {
	return $Helpers::quadraticRoots(this->day, this->dby, this->cy, roots, off);
}

int32_t Curve::infPoints($doubles* pts, int32_t off) {
	double a = this->dax * this->dby - this->dbx * this->day;
	double b = 2.0 * (this->cy * this->dax - this->day * this->cx);
	double c = this->cy * this->dbx - this->cx * this->dby;
	return $Helpers::quadraticRoots(a, b, c, pts, off);
}

int32_t Curve::xPoints($doubles* ts, int32_t off, double x) {
	return $Helpers::cubicRootsInAB(this->ax, this->bx, this->cx, this->dx - x, ts, off, 0.0, 1.0);
}

int32_t Curve::yPoints($doubles* ts, int32_t off, double y) {
	return $Helpers::cubicRootsInAB(this->ay, this->by, this->cy, this->dy - y, ts, off, 0.0, 1.0);
}

int32_t Curve::perpendiculardfddf($doubles* pts, int32_t off) {
	if (!Curve::$assertionsDisabled && !($nc(pts)->length >= off + 4)) {
		$throwNew($AssertionError);
	}
	double a = 2.0 * (this->dax * this->dax + this->day * this->day);
	double b = 3.0 * (this->dax * this->dbx + this->day * this->dby);
	double c = 2.0 * (this->dax * this->cx + this->day * this->cy) + this->dbx * this->dbx + this->dby * this->dby;
	double d = this->dbx * this->cx + this->dby * this->cy;
	return $Helpers::cubicRootsInAB(a, b, c, d, pts, off, 0.0, 1.0);
}

int32_t Curve::rootsOfROCMinusW($doubles* roots, int32_t off, double w2, double err) {
	if (!Curve::$assertionsDisabled && !(off <= 6 && $nc(roots)->length >= 10)) {
		$throwNew($AssertionError);
	}
	int32_t ret = off;
	int32_t end = off + perpendiculardfddf(roots, off);
	$nc(roots)->set(end, 1.0);
	double t0 = 0.0;
	double ft0 = ROCsq(t0) - w2;
	for (int32_t i = off; i <= end; ++i) {
		double t1 = roots->get(i);
		double ft1 = ROCsq(t1) - w2;
		if (ft0 == 0.0) {
			roots->set(ret++, t0);
		} else if (ft1 * ft0 < 0.0) {
			roots->set(ret++, falsePositionROCsqMinusX(t0, t1, w2, err));
		}
		t0 = t1;
		ft0 = ft1;
	}
	return ret - off;
}

double Curve::eliminateInf(double x) {
	$init(Curve);
	$init($Double);
	return (x == $Double::POSITIVE_INFINITY ? $Double::MAX_VALUE : (x == $Double::NEGATIVE_INFINITY ? $Double::MIN_VALUE : x));
}

double Curve::falsePositionROCsqMinusX(double t0, double t1, double w2, double err) {
	int32_t iterLimit = 100;
	int32_t side = 0;
	double t = t1;
	double ft = eliminateInf(ROCsq(t) - w2);
	double s = t0;
	double fs = eliminateInf(ROCsq(s) - w2);
	double r = s;
	double fr = 0.0;
	{
		int32_t i = 0;
		for (;; ++i) {
			bool var$0 = i < iterLimit;
			if (var$0) {
				double var$1 = $Math::abs(t - s);
				var$0 = var$1 > err * $Math::abs(t + s);
			}
			if (!(var$0)) {
				break;
			}
			{
				r = (fs * t - ft * s) / (fs - ft);
				fr = ROCsq(r) - w2;
				if (sameSign(fr, ft)) {
					ft = fr;
					t = r;
					if (side < 0) {
						fs /= ($sl(1, -side));
						--side;
					} else {
						side = -1;
					}
				} else if (fr * fs > 0.0) {
					fs = fr;
					s = r;
					if (side > 0) {
						ft /= ($sl(1, side));
						++side;
					} else {
						side = 1;
					}
				} else {
					break;
				}
			}
		}
	}
	return r;
}

bool Curve::sameSign(double x, double y) {
	$init(Curve);
	return (x < 0.0 && y < 0.0) || (x > 0.0 && y > 0.0);
}

double Curve::ROCsq(double t) {
	double dx = t * (t * this->dax + this->dbx) + this->cx;
	double dy = t * (t * this->day + this->dby) + this->cy;
	double ddx = 2.0 * this->dax * t + this->dbx;
	double ddy = 2.0 * this->day * t + this->dby;
	double dx2dy2 = dx * dx + dy * dy;
	double ddx2ddy2 = ddx * ddx + ddy * ddy;
	double ddxdxddydy = ddx * dx + ddy * dy;
	return dx2dy2 * ((dx2dy2 * dx2dy2) / (dx2dy2 * ddx2ddy2 - ddxdxddydy * ddxdxddydy));
}

void clinit$Curve($Class* class$) {
	Curve::$assertionsDisabled = !Curve::class$->desiredAssertionStatus();
}

Curve::Curve() {
}

$Class* Curve::load$($String* name, bool initialize) {
	$loadClass(Curve, name, initialize, &_Curve_ClassInfo_, clinit$Curve, allocate$Curve);
	return class$;
}

$Class* Curve::class$ = nullptr;

		} // marlin
	} // java2d
} // sun