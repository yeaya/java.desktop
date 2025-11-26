#include <java/awt/geom/CubicCurve2D.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/CubicIterator.h>
#include <java/awt/geom/FlatteningPathIterator.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/QuadCurve2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef A
#undef B
#undef C
#undef D
#undef M
#undef PI
#undef RECT_INTERSECTS

using $Point2DArray = $Array<::java::awt::geom::Point2D>;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $CubicIterator = ::java::awt::geom::CubicIterator;
using $FlatteningPathIterator = ::java::awt::geom::FlatteningPathIterator;
using $Line2D = ::java::awt::geom::Line2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $QuadCurve2D = ::java::awt::geom::QuadCurve2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Curve = ::sun::awt::geom::Curve;

namespace java {
	namespace awt {
		namespace geom {

$MethodInfo _CubicCurve2D_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CubicCurve2D::*)()>(&CubicCurve2D::init$))},
	{"bisectRoot", "([DDD)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)($doubles*,double,double)>(&CubicCurve2D::bisectRoot))},
	{"bisectRootWithHint", "([DDDD)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)($doubles*,double,double,double)>(&CubicCurve2D::bisectRootWithHint))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"fixRoots", "([D[DI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($doubles*,$doubles*,int32_t)>(&CubicCurve2D::fixRoots))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCtrlP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCtrlP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCtrlX1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getCtrlX2", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getCtrlY1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getCtrlY2", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getFlatness", "(DDDDDDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double,double,double)>(&CubicCurve2D::getFlatness))},
	{"getFlatness", "([DI)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($doubles*,int32_t)>(&CubicCurve2D::getFlatness))},
	{"getFlatness", "()D", nullptr, $PUBLIC},
	{"getFlatnessSq", "(DDDDDDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double,double,double)>(&CubicCurve2D::getFlatnessSq))},
	{"getFlatnessSq", "([DI)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($doubles*,int32_t)>(&CubicCurve2D::getFlatnessSq))},
	{"getFlatnessSq", "()D", nullptr, $PUBLIC},
	{"getP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getRootUpperBound", "([D)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)($doubles*)>(&CubicCurve2D::getRootUpperBound))},
	{"getX1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getX2", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY2", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"inInterval", "(DDD)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double,double,double)>(&CubicCurve2D::inInterval))},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"iszero", "(DD)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double,double)>(&CubicCurve2D::iszero))},
	{"oppositeSigns", "(DD)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double,double)>(&CubicCurve2D::oppositeSigns))},
	{"rectCrossings", "(DDDD)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CubicCurve2D::*)(double,double,double,double)>(&CubicCurve2D::rectCrossings))},
	{"refineRootWithHint", "([DDDD)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)($doubles*,double,double,double)>(&CubicCurve2D::refineRootWithHint))},
	{"setCurve", "(DDDDDDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCurve", "([DI)V", nullptr, $PUBLIC},
	{"setCurve", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"setCurve", "([Ljava/awt/geom/Point2D;I)V", nullptr, $PUBLIC},
	{"setCurve", "(Ljava/awt/geom/CubicCurve2D;)V", nullptr, $PUBLIC},
	{"solveCubic", "([D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*)>(&CubicCurve2D::solveCubic))},
	{"solveCubic", "([D[D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,$doubles*)>(&CubicCurve2D::solveCubic))},
	{"solveEqn", "([DID)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)($doubles*,int32_t,double)>(&CubicCurve2D::solveEqn))},
	{"subdivide", "(Ljava/awt/geom/CubicCurve2D;Ljava/awt/geom/CubicCurve2D;)V", nullptr, $PUBLIC},
	{"subdivide", "(Ljava/awt/geom/CubicCurve2D;Ljava/awt/geom/CubicCurve2D;Ljava/awt/geom/CubicCurve2D;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(CubicCurve2D*,CubicCurve2D*,CubicCurve2D*)>(&CubicCurve2D::subdivide))},
	{"subdivide", "([DI[DI[DI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,$doubles*,int32_t,$doubles*,int32_t)>(&CubicCurve2D::subdivide))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"within", "(DDD)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double,double,double)>(&CubicCurve2D::within))},
	{}
};

$InnerClassInfo _CubicCurve2D_InnerClassesInfo_[] = {
	{"java.awt.geom.CubicCurve2D$Double", "java.awt.geom.CubicCurve2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.CubicCurve2D$Float", "java.awt.geom.CubicCurve2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CubicCurve2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.CubicCurve2D",
	"java.lang.Object",
	"java.awt.Shape,java.lang.Cloneable",
	nullptr,
	_CubicCurve2D_MethodInfo_,
	nullptr,
	nullptr,
	_CubicCurve2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.CubicCurve2D$Double,java.awt.geom.CubicCurve2D$Float"
};

$Object* allocate$CubicCurve2D($Class* clazz) {
	return $of($alloc(CubicCurve2D));
}

int32_t CubicCurve2D::hashCode() {
	 return this->$Shape::hashCode();
}

bool CubicCurve2D::equals(Object$* arg0) {
	 return this->$Shape::equals(arg0);
}

$String* CubicCurve2D::toString() {
	 return this->$Shape::toString();
}

void CubicCurve2D::finalize() {
	this->$Shape::finalize();
}

void CubicCurve2D::init$() {
}

void CubicCurve2D::setCurve($doubles* coords, int32_t offset) {
	setCurve($nc(coords)->get(offset + 0), coords->get(offset + 1), coords->get(offset + 2), coords->get(offset + 3), coords->get(offset + 4), coords->get(offset + 5), coords->get(offset + 6), coords->get(offset + 7));
}

void CubicCurve2D::setCurve($Point2D* p1, $Point2D* cp1, $Point2D* cp2, $Point2D* p2) {
	double var$0 = $nc(p1)->getX();
	double var$1 = p1->getY();
	double var$2 = $nc(cp1)->getX();
	double var$3 = cp1->getY();
	double var$4 = $nc(cp2)->getX();
	double var$5 = cp2->getY();
	double var$6 = $nc(p2)->getX();
	setCurve(var$0, var$1, var$2, var$3, var$4, var$5, var$6, p2->getY());
}

void CubicCurve2D::setCurve($Point2DArray* pts, int32_t offset) {
	double var$0 = $nc($nc(pts)->get(offset + 0))->getX();
	double var$1 = $nc(pts->get(offset + 0))->getY();
	double var$2 = $nc(pts->get(offset + 1))->getX();
	double var$3 = $nc(pts->get(offset + 1))->getY();
	double var$4 = $nc(pts->get(offset + 2))->getX();
	double var$5 = $nc(pts->get(offset + 2))->getY();
	double var$6 = $nc(pts->get(offset + 3))->getX();
	setCurve(var$0, var$1, var$2, var$3, var$4, var$5, var$6, $nc(pts->get(offset + 3))->getY());
}

void CubicCurve2D::setCurve(CubicCurve2D* c) {
	double var$0 = $nc(c)->getX1();
	double var$1 = c->getY1();
	double var$2 = c->getCtrlX1();
	double var$3 = c->getCtrlY1();
	double var$4 = c->getCtrlX2();
	double var$5 = c->getCtrlY2();
	double var$6 = c->getX2();
	setCurve(var$0, var$1, var$2, var$3, var$4, var$5, var$6, c->getY2());
}

double CubicCurve2D::getFlatnessSq(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2) {
	$init(CubicCurve2D);
	double var$0 = $Line2D::ptSegDistSq(x1, y1, x2, y2, ctrlx1, ctrly1);
	return $Math::max(var$0, $Line2D::ptSegDistSq(x1, y1, x2, y2, ctrlx2, ctrly2));
}

double CubicCurve2D::getFlatness(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2) {
	$init(CubicCurve2D);
	return $Math::sqrt(getFlatnessSq(x1, y1, ctrlx1, ctrly1, ctrlx2, ctrly2, x2, y2));
}

double CubicCurve2D::getFlatnessSq($doubles* coords, int32_t offset) {
	$init(CubicCurve2D);
	return getFlatnessSq($nc(coords)->get(offset + 0), coords->get(offset + 1), coords->get(offset + 2), coords->get(offset + 3), coords->get(offset + 4), coords->get(offset + 5), coords->get(offset + 6), coords->get(offset + 7));
}

double CubicCurve2D::getFlatness($doubles* coords, int32_t offset) {
	$init(CubicCurve2D);
	return getFlatness($nc(coords)->get(offset + 0), coords->get(offset + 1), coords->get(offset + 2), coords->get(offset + 3), coords->get(offset + 4), coords->get(offset + 5), coords->get(offset + 6), coords->get(offset + 7));
}

double CubicCurve2D::getFlatnessSq() {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getCtrlX1();
	double var$3 = getCtrlY1();
	double var$4 = getCtrlX2();
	double var$5 = getCtrlY2();
	double var$6 = getX2();
	return getFlatnessSq(var$0, var$1, var$2, var$3, var$4, var$5, var$6, getY2());
}

double CubicCurve2D::getFlatness() {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getCtrlX1();
	double var$3 = getCtrlY1();
	double var$4 = getCtrlX2();
	double var$5 = getCtrlY2();
	double var$6 = getX2();
	return getFlatness(var$0, var$1, var$2, var$3, var$4, var$5, var$6, getY2());
}

void CubicCurve2D::subdivide(CubicCurve2D* left, CubicCurve2D* right) {
	subdivide(this, left, right);
}

void CubicCurve2D::subdivide(CubicCurve2D* src, CubicCurve2D* left, CubicCurve2D* right) {
	$init(CubicCurve2D);
	double x1 = $nc(src)->getX1();
	double y1 = src->getY1();
	double ctrlx1 = src->getCtrlX1();
	double ctrly1 = src->getCtrlY1();
	double ctrlx2 = src->getCtrlX2();
	double ctrly2 = src->getCtrlY2();
	double x2 = src->getX2();
	double y2 = src->getY2();
	double centerx = (ctrlx1 + ctrlx2) / 2.0;
	double centery = (ctrly1 + ctrly2) / 2.0;
	ctrlx1 = (x1 + ctrlx1) / 2.0;
	ctrly1 = (y1 + ctrly1) / 2.0;
	ctrlx2 = (x2 + ctrlx2) / 2.0;
	ctrly2 = (y2 + ctrly2) / 2.0;
	double ctrlx12 = (ctrlx1 + centerx) / 2.0;
	double ctrly12 = (ctrly1 + centery) / 2.0;
	double ctrlx21 = (ctrlx2 + centerx) / 2.0;
	double ctrly21 = (ctrly2 + centery) / 2.0;
	centerx = (ctrlx12 + ctrlx21) / 2.0;
	centery = (ctrly12 + ctrly21) / 2.0;
	if (left != nullptr) {
		left->setCurve(x1, y1, ctrlx1, ctrly1, ctrlx12, ctrly12, centerx, centery);
	}
	if (right != nullptr) {
		right->setCurve(centerx, centery, ctrlx21, ctrly21, ctrlx2, ctrly2, x2, y2);
	}
}

void CubicCurve2D::subdivide($doubles* src, int32_t srcoff, $doubles* left, int32_t leftoff, $doubles* right, int32_t rightoff) {
	$init(CubicCurve2D);
	double x1 = $nc(src)->get(srcoff + 0);
	double y1 = src->get(srcoff + 1);
	double ctrlx1 = src->get(srcoff + 2);
	double ctrly1 = src->get(srcoff + 3);
	double ctrlx2 = src->get(srcoff + 4);
	double ctrly2 = src->get(srcoff + 5);
	double x2 = src->get(srcoff + 6);
	double y2 = src->get(srcoff + 7);
	if (left != nullptr) {
		left->set(leftoff + 0, x1);
		left->set(leftoff + 1, y1);
	}
	if (right != nullptr) {
		right->set(rightoff + 6, x2);
		right->set(rightoff + 7, y2);
	}
	x1 = (x1 + ctrlx1) / 2.0;
	y1 = (y1 + ctrly1) / 2.0;
	x2 = (x2 + ctrlx2) / 2.0;
	y2 = (y2 + ctrly2) / 2.0;
	double centerx = (ctrlx1 + ctrlx2) / 2.0;
	double centery = (ctrly1 + ctrly2) / 2.0;
	ctrlx1 = (x1 + centerx) / 2.0;
	ctrly1 = (y1 + centery) / 2.0;
	ctrlx2 = (x2 + centerx) / 2.0;
	ctrly2 = (y2 + centery) / 2.0;
	centerx = (ctrlx1 + ctrlx2) / 2.0;
	centery = (ctrly1 + ctrly2) / 2.0;
	if (left != nullptr) {
		left->set(leftoff + 2, x1);
		left->set(leftoff + 3, y1);
		left->set(leftoff + 4, ctrlx1);
		left->set(leftoff + 5, ctrly1);
		left->set(leftoff + 6, centerx);
		left->set(leftoff + 7, centery);
	}
	if (right != nullptr) {
		right->set(rightoff + 0, centerx);
		right->set(rightoff + 1, centery);
		right->set(rightoff + 2, ctrlx2);
		right->set(rightoff + 3, ctrly2);
		right->set(rightoff + 4, x2);
		right->set(rightoff + 5, y2);
	}
}

int32_t CubicCurve2D::solveCubic($doubles* eqn) {
	$init(CubicCurve2D);
	return solveCubic(eqn, eqn);
}

int32_t CubicCurve2D::solveCubic($doubles* eqn$renamed, $doubles* res) {
	$init(CubicCurve2D);
	$var($doubles, eqn, eqn$renamed);
	double d = $nc(eqn)->get(3);
	if (d == 0) {
		return $QuadCurve2D::solveQuadratic(eqn, res);
	}
	double A = eqn->get(2) / d;
	double B = eqn->get(1) / d;
	double C = eqn->get(0) / d;
	double sq_A = A * A;
	double p = 1.0 / 3 * (-1.0 / 3 * sq_A + B);
	double q = 1.0 / 2 * (2.0 / 27 * A * sq_A - 1.0 / 3 * A * B + C);
	double cb_p = p * p * p;
	double D = q * q + cb_p;
	double sub = 1.0 / 3 * A;
	int32_t num = 0;
	if (D < 0) {
		double phi = 1.0 / 3 * $Math::acos(-q / $Math::sqrt(-cb_p));
		double t = 2 * $Math::sqrt(-p);
		if (res == eqn) {
			$assign(eqn, $Arrays::copyOf(eqn, 4));
		}
		$nc(res)->set(0, (t * $Math::cos(phi)));
		res->set(1, (-t * $Math::cos(phi + $Math::PI / 3)));
		res->set(2, (-t * $Math::cos(phi - $Math::PI / 3)));
		num = 3;
		for (int32_t i = 0; i < num; ++i) {
			(*res)[i] -= sub;
		}
	} else {
		double sqrt_D = $Math::sqrt(D);
		double u = $Math::cbrt(sqrt_D - q);
		double v = -$Math::cbrt(sqrt_D + q);
		double uv = u + v;
		num = 1;
		int32_t var$0 = 0x47868C00;
		double var$2 = $Math::abs(uv);
		double var$1 = $Math::ulp(var$2 + $Math::abs(sub));
		double err = var$0 * var$1;
		bool var$3 = iszero(D, err);
		if (var$3 || within(u, v, err)) {
			if (res == eqn) {
				$assign(eqn, $Arrays::copyOf(eqn, 4));
			}
			$nc(res)->set(1, -(uv / 2) - sub);
			num = 2;
		}
		$nc(res)->set(0, uv - sub);
	}
	if (num > 1) {
		num = fixRoots(eqn, res, num);
	}
	if (num > 2 && ($nc(res)->get(2) == res->get(1) || $nc(res)->get(2) == res->get(0))) {
		--num;
	}
	if (num > 1 && $nc(res)->get(1) == res->get(0)) {
		res->set(1, res->get(--num));
	}
	return num;
}

int32_t CubicCurve2D::fixRoots($doubles* eqn, $doubles* res, int32_t num) {
	$init(CubicCurve2D);
	$var($doubles, intervals, $new($doubles, {
		$nc(eqn)->get(1),
		2 * eqn->get(2),
		3 * eqn->get(3)
	}));
	int32_t critCount = $QuadCurve2D::solveQuadratic(intervals, intervals);
	if (critCount == 2 && intervals->get(0) == intervals->get(1)) {
		--critCount;
	}
	if (critCount == 2 && intervals->get(0) > intervals->get(1)) {
		double tmp = intervals->get(0);
		intervals->set(0, intervals->get(1));
		intervals->set(1, tmp);
	}
	if (num == 3) {
		double xe = getRootUpperBound(eqn);
		double x0 = -xe;
		$Arrays::sort(res, 0, num);
		if (critCount == 2) {
			$nc(res)->set(0, refineRootWithHint(eqn, x0, intervals->get(0), res->get(0)));
			res->set(1, refineRootWithHint(eqn, intervals->get(0), intervals->get(1), res->get(1)));
			res->set(2, refineRootWithHint(eqn, intervals->get(1), xe, res->get(2)));
			return 3;
		} else if (critCount == 1) {
			double fxe = eqn->get(3);
			double fx0 = -fxe;
			double x1 = intervals->get(0);
			double fx1 = solveEqn(eqn, 3, x1);
			if (oppositeSigns(fx0, fx1)) {
				$nc(res)->set(0, bisectRootWithHint(eqn, x0, x1, res->get(0)));
			} else if (oppositeSigns(fx1, fxe)) {
				$nc(res)->set(0, bisectRootWithHint(eqn, x1, xe, res->get(2)));
			} else {
				$nc(res)->set(0, x1);
			}
		} else if (critCount == 0) {
			$nc(res)->set(0, bisectRootWithHint(eqn, x0, xe, res->get(1)));
		}
	} else if (num == 2 && critCount == 2) {
		double goodRoot = $nc(res)->get(0);
		double badRoot = res->get(1);
		double x1 = intervals->get(0);
		double x2 = intervals->get(1);
		double var$0 = $Math::abs(x1 - goodRoot);
		double x = var$0 > $Math::abs(x2 - goodRoot) ? x1 : x2;
		double fx = solveEqn(eqn, 3, x);
		if (iszero(fx, 0x00989680 * $Math::ulp(x))) {
			double badRootVal = solveEqn(eqn, 3, badRoot);
			double var$1 = $Math::abs(badRootVal);
			res->set(1, var$1 < $Math::abs(fx) ? badRoot : x);
			return 2;
		}
	}
	return 1;
}

double CubicCurve2D::refineRootWithHint($doubles* eqn, double min, double max, double t) {
	$init(CubicCurve2D);
	if (!inInterval(t, min, max)) {
		return t;
	}
	$var($doubles, deriv, $new($doubles, {
		$nc(eqn)->get(1),
		2 * eqn->get(2),
		3 * eqn->get(3)
	}));
	double origt = t;
	for (int32_t i = 0; i < 3; ++i) {
		double slope = solveEqn(deriv, 2, t);
		double y = solveEqn(eqn, 3, t);
		double delta = -(y / slope);
		double newt = t + delta;
		if (slope == 0 || y == 0 || t == newt) {
			break;
		}
		t = newt;
	}
	bool var$0 = within(t, origt, 1000 * $Math::ulp(origt));
	if (var$0 && inInterval(t, min, max)) {
		return t;
	}
	return origt;
}

double CubicCurve2D::bisectRootWithHint($doubles* eqn, double x0, double xe, double hint) {
	$init(CubicCurve2D);
	double delta1 = $Math::min($Math::abs(hint - x0) / 64, 0.0625);
	double delta2 = $Math::min($Math::abs(hint - xe) / 64, 0.0625);
	double x02 = hint - delta1;
	double xe2 = hint + delta2;
	double fx02 = solveEqn(eqn, 3, x02);
	double fxe2 = solveEqn(eqn, 3, xe2);
	while (oppositeSigns(fx02, fxe2)) {
		if (x02 >= xe2) {
			return x02;
		}
		x0 = x02;
		xe = xe2;
		delta1 /= 64;
		delta2 /= 64;
		x02 = hint - delta1;
		xe2 = hint + delta2;
		fx02 = solveEqn(eqn, 3, x02);
		fxe2 = solveEqn(eqn, 3, xe2);
	}
	if (fx02 == 0) {
		return x02;
	}
	if (fxe2 == 0) {
		return xe2;
	}
	return bisectRoot(eqn, x0, xe);
}

double CubicCurve2D::bisectRoot($doubles* eqn, double x0, double xe) {
	$init(CubicCurve2D);
	double fx0 = solveEqn(eqn, 3, x0);
	double m = x0 + (xe - x0) / 2;
	while (m != x0 && m != xe) {
		double fm = solveEqn(eqn, 3, m);
		if (fm == 0) {
			return m;
		}
		if (oppositeSigns(fx0, fm)) {
			xe = m;
		} else {
			fx0 = fm;
			x0 = m;
		}
		m = x0 + (xe - x0) / 2;
	}
	return m;
}

bool CubicCurve2D::inInterval(double t, double min, double max) {
	$init(CubicCurve2D);
	return min <= t && t <= max;
}

bool CubicCurve2D::within(double x, double y, double err) {
	$init(CubicCurve2D);
	double d = y - x;
	return (d <= err && d >= -err);
}

bool CubicCurve2D::iszero(double x, double err) {
	$init(CubicCurve2D);
	return within(x, (double)0, err);
}

bool CubicCurve2D::oppositeSigns(double x1, double x2) {
	$init(CubicCurve2D);
	return (x1 < 0 && x2 > 0) || (x1 > 0 && x2 < 0);
}

double CubicCurve2D::solveEqn($doubles* eqn, int32_t order, double t) {
	$init(CubicCurve2D);
	double v = $nc(eqn)->get(order);
	while (--order >= 0) {
		v = v * t + eqn->get(order);
	}
	return v;
}

double CubicCurve2D::getRootUpperBound($doubles* eqn) {
	$init(CubicCurve2D);
	double d = $nc(eqn)->get(3);
	double a = eqn->get(2);
	double b = eqn->get(1);
	double c = eqn->get(0);
	int32_t var$0 = 1;
	double var$4 = $Math::abs(a);
	double var$3 = $Math::max(var$4, $Math::abs(b));
	double var$2 = $Math::max(var$3, $Math::abs(c));
	double var$1 = var$2 / $Math::abs(d);
	double M = var$0 + var$1;
	M += $Math::ulp(M) + 1;
	return M;
}

bool CubicCurve2D::contains(double x, double y) {
	if (!(x * 0.0 + y * 0.0 == 0.0)) {
		return false;
	}
	double x1 = getX1();
	double y1 = getY1();
	double x2 = getX2();
	double y2 = getY2();
	int32_t var$0 = $Curve::pointCrossingsForLine(x, y, x1, y1, x2, y2);
	double var$2 = x;
	double var$3 = y;
	double var$4 = x1;
	double var$5 = y1;
	double var$6 = getCtrlX1();
	double var$7 = getCtrlY1();
	double var$8 = getCtrlX2();
	int32_t var$1 = $Curve::pointCrossingsForCubic(var$2, var$3, var$4, var$5, var$6, var$7, var$8, getCtrlY2(), x2, y2, 0);
	int32_t crossings = (var$0 + var$1);
	return (((int32_t)(crossings & (uint32_t)1)) == 1);
}

bool CubicCurve2D::contains($Point2D* p) {
	double var$0 = $nc(p)->getX();
	return contains(var$0, p->getY());
}

bool CubicCurve2D::intersects(double x, double y, double w, double h) {
	if (w <= 0 || h <= 0) {
		return false;
	}
	int32_t numCrossings = rectCrossings(x, y, w, h);
	return numCrossings != 0;
}

bool CubicCurve2D::intersects($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return intersects(var$0, var$1, var$2, r->getHeight());
}

bool CubicCurve2D::contains(double x, double y, double w, double h) {
	if (w <= 0 || h <= 0) {
		return false;
	}
	int32_t numCrossings = rectCrossings(x, y, w, h);
	return !(numCrossings == 0 || numCrossings == $Curve::RECT_INTERSECTS);
}

int32_t CubicCurve2D::rectCrossings(double x, double y, double w, double h) {
	int32_t crossings = 0;
	double var$1 = getX1();
	bool var$0 = var$1 == getX2();
	if (var$0) {
		double var$2 = getY1();
		var$0 = var$2 == getY2();
	}
	if (!(var$0)) {
		int32_t var$3 = crossings;
		double var$4 = x;
		double var$5 = y;
		double var$6 = x + w;
		double var$7 = y + h;
		double var$8 = getX1();
		double var$9 = getY1();
		double var$10 = getX2();
		crossings = $Curve::rectCrossingsForLine(var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, getY2());
		if (crossings == $Curve::RECT_INTERSECTS) {
			return crossings;
		}
	}
	int32_t var$11 = crossings;
	double var$12 = x;
	double var$13 = y;
	double var$14 = x + w;
	double var$15 = y + h;
	double var$16 = getX2();
	double var$17 = getY2();
	double var$18 = getCtrlX2();
	double var$19 = getCtrlY2();
	double var$20 = getCtrlX1();
	double var$21 = getCtrlY1();
	double var$22 = getX1();
	return $Curve::rectCrossingsForCubic(var$11, var$12, var$13, var$14, var$15, var$16, var$17, var$18, var$19, var$20, var$21, var$22, getY1(), 0);
}

bool CubicCurve2D::contains($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return contains(var$0, var$1, var$2, r->getHeight());
}

$Rectangle* CubicCurve2D::getBounds() {
	return $nc($(getBounds2D()))->getBounds();
}

$PathIterator* CubicCurve2D::getPathIterator($AffineTransform* at) {
	return $new($CubicIterator, this, at);
}

$PathIterator* CubicCurve2D::getPathIterator($AffineTransform* at, double flatness) {
	return $new($FlatteningPathIterator, $(getPathIterator(at)), flatness);
}

$Object* CubicCurve2D::clone() {
	try {
		return $of($Shape::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

CubicCurve2D::CubicCurve2D() {
}

$Class* CubicCurve2D::load$($String* name, bool initialize) {
	$loadClass(CubicCurve2D, name, initialize, &_CubicCurve2D_ClassInfo_, allocate$CubicCurve2D);
	return class$;
}

$Class* CubicCurve2D::class$ = nullptr;

		} // geom
	} // awt
} // java