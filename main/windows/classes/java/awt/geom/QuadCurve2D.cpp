#include <java/awt/geom/QuadCurve2D.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/FlatteningPathIterator.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/QuadIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef ABOVE
#undef BELOW
#undef HIGHEDGE
#undef INSIDE
#undef LOWEDGE

using $Point2DArray = $Array<::java::awt::geom::Point2D>;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $FlatteningPathIterator = ::java::awt::geom::FlatteningPathIterator;
using $Line2D = ::java::awt::geom::Line2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $QuadIterator = ::java::awt::geom::QuadIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _QuadCurve2D_FieldInfo_[] = {
	{"BELOW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuadCurve2D, BELOW)},
	{"LOWEDGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuadCurve2D, LOWEDGE)},
	{"INSIDE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuadCurve2D, INSIDE)},
	{"HIGHEDGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuadCurve2D, HIGHEDGE)},
	{"ABOVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuadCurve2D, ABOVE)},
	{}
};

$MethodInfo _QuadCurve2D_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(QuadCurve2D::*)()>(&QuadCurve2D::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"evalQuadratic", "([DIZZ[DDDD)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($doubles*,int32_t,bool,bool,$doubles*,double,double,double)>(&QuadCurve2D::evalQuadratic))},
	{"fillEqn", "([DDDDD)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($doubles*,double,double,double,double)>(&QuadCurve2D::fillEqn))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCtrlPt", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCtrlX", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getCtrlY", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getFlatness", "(DDDDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double)>(&QuadCurve2D::getFlatness))},
	{"getFlatness", "([DI)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($doubles*,int32_t)>(&QuadCurve2D::getFlatness))},
	{"getFlatness", "()D", nullptr, $PUBLIC},
	{"getFlatnessSq", "(DDDDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double)>(&QuadCurve2D::getFlatnessSq))},
	{"getFlatnessSq", "([DI)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($doubles*,int32_t)>(&QuadCurve2D::getFlatnessSq))},
	{"getFlatnessSq", "()D", nullptr, $PUBLIC},
	{"getP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getTag", "(DDD)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(double,double,double)>(&QuadCurve2D::getTag))},
	{"getX1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getX2", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY2", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"inwards", "(III)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t,int32_t)>(&QuadCurve2D::inwards))},
	{"setCurve", "(DDDDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCurve", "([DI)V", nullptr, $PUBLIC},
	{"setCurve", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"setCurve", "([Ljava/awt/geom/Point2D;I)V", nullptr, $PUBLIC},
	{"setCurve", "(Ljava/awt/geom/QuadCurve2D;)V", nullptr, $PUBLIC},
	{"solveQuadratic", "([D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*)>(&QuadCurve2D::solveQuadratic))},
	{"solveQuadratic", "([D[D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,$doubles*)>(&QuadCurve2D::solveQuadratic))},
	{"subdivide", "(Ljava/awt/geom/QuadCurve2D;Ljava/awt/geom/QuadCurve2D;)V", nullptr, $PUBLIC},
	{"subdivide", "(Ljava/awt/geom/QuadCurve2D;Ljava/awt/geom/QuadCurve2D;Ljava/awt/geom/QuadCurve2D;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(QuadCurve2D*,QuadCurve2D*,QuadCurve2D*)>(&QuadCurve2D::subdivide))},
	{"subdivide", "([DI[DI[DI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,$doubles*,int32_t,$doubles*,int32_t)>(&QuadCurve2D::subdivide))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _QuadCurve2D_InnerClassesInfo_[] = {
	{"java.awt.geom.QuadCurve2D$Double", "java.awt.geom.QuadCurve2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.QuadCurve2D$Float", "java.awt.geom.QuadCurve2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _QuadCurve2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.QuadCurve2D",
	"java.lang.Object",
	"java.awt.Shape,java.lang.Cloneable",
	_QuadCurve2D_FieldInfo_,
	_QuadCurve2D_MethodInfo_,
	nullptr,
	nullptr,
	_QuadCurve2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.QuadCurve2D$Double,java.awt.geom.QuadCurve2D$Float"
};

$Object* allocate$QuadCurve2D($Class* clazz) {
	return $of($alloc(QuadCurve2D));
}

int32_t QuadCurve2D::hashCode() {
	 return this->$Shape::hashCode();
}

bool QuadCurve2D::equals(Object$* arg0) {
	 return this->$Shape::equals(arg0);
}

$String* QuadCurve2D::toString() {
	 return this->$Shape::toString();
}

void QuadCurve2D::finalize() {
	this->$Shape::finalize();
}

void QuadCurve2D::init$() {
}

void QuadCurve2D::setCurve($doubles* coords, int32_t offset) {
	setCurve($nc(coords)->get(offset + 0), coords->get(offset + 1), coords->get(offset + 2), coords->get(offset + 3), coords->get(offset + 4), coords->get(offset + 5));
}

void QuadCurve2D::setCurve($Point2D* p1, $Point2D* cp, $Point2D* p2) {
	double var$0 = $nc(p1)->getX();
	double var$1 = p1->getY();
	double var$2 = $nc(cp)->getX();
	double var$3 = cp->getY();
	double var$4 = $nc(p2)->getX();
	setCurve(var$0, var$1, var$2, var$3, var$4, p2->getY());
}

void QuadCurve2D::setCurve($Point2DArray* pts, int32_t offset) {
	double var$0 = $nc($nc(pts)->get(offset + 0))->getX();
	double var$1 = $nc(pts->get(offset + 0))->getY();
	double var$2 = $nc(pts->get(offset + 1))->getX();
	double var$3 = $nc(pts->get(offset + 1))->getY();
	double var$4 = $nc(pts->get(offset + 2))->getX();
	setCurve(var$0, var$1, var$2, var$3, var$4, $nc(pts->get(offset + 2))->getY());
}

void QuadCurve2D::setCurve(QuadCurve2D* c) {
	double var$0 = $nc(c)->getX1();
	double var$1 = c->getY1();
	double var$2 = c->getCtrlX();
	double var$3 = c->getCtrlY();
	double var$4 = c->getX2();
	setCurve(var$0, var$1, var$2, var$3, var$4, c->getY2());
}

double QuadCurve2D::getFlatnessSq(double x1, double y1, double ctrlx, double ctrly, double x2, double y2) {
	$init(QuadCurve2D);
	return $Line2D::ptSegDistSq(x1, y1, x2, y2, ctrlx, ctrly);
}

double QuadCurve2D::getFlatness(double x1, double y1, double ctrlx, double ctrly, double x2, double y2) {
	$init(QuadCurve2D);
	return $Line2D::ptSegDist(x1, y1, x2, y2, ctrlx, ctrly);
}

double QuadCurve2D::getFlatnessSq($doubles* coords, int32_t offset) {
	$init(QuadCurve2D);
	return $Line2D::ptSegDistSq($nc(coords)->get(offset + 0), coords->get(offset + 1), coords->get(offset + 4), coords->get(offset + 5), coords->get(offset + 2), coords->get(offset + 3));
}

double QuadCurve2D::getFlatness($doubles* coords, int32_t offset) {
	$init(QuadCurve2D);
	return $Line2D::ptSegDist($nc(coords)->get(offset + 0), coords->get(offset + 1), coords->get(offset + 4), coords->get(offset + 5), coords->get(offset + 2), coords->get(offset + 3));
}

double QuadCurve2D::getFlatnessSq() {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	double var$3 = getY2();
	double var$4 = getCtrlX();
	return $Line2D::ptSegDistSq(var$0, var$1, var$2, var$3, var$4, getCtrlY());
}

double QuadCurve2D::getFlatness() {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	double var$3 = getY2();
	double var$4 = getCtrlX();
	return $Line2D::ptSegDist(var$0, var$1, var$2, var$3, var$4, getCtrlY());
}

void QuadCurve2D::subdivide(QuadCurve2D* left, QuadCurve2D* right) {
	subdivide(this, left, right);
}

void QuadCurve2D::subdivide(QuadCurve2D* src, QuadCurve2D* left, QuadCurve2D* right) {
	$init(QuadCurve2D);
	double x1 = $nc(src)->getX1();
	double y1 = src->getY1();
	double ctrlx = src->getCtrlX();
	double ctrly = src->getCtrlY();
	double x2 = src->getX2();
	double y2 = src->getY2();
	double ctrlx1 = (x1 + ctrlx) / 2.0;
	double ctrly1 = (y1 + ctrly) / 2.0;
	double ctrlx2 = (x2 + ctrlx) / 2.0;
	double ctrly2 = (y2 + ctrly) / 2.0;
	ctrlx = (ctrlx1 + ctrlx2) / 2.0;
	ctrly = (ctrly1 + ctrly2) / 2.0;
	if (left != nullptr) {
		left->setCurve(x1, y1, ctrlx1, ctrly1, ctrlx, ctrly);
	}
	if (right != nullptr) {
		right->setCurve(ctrlx, ctrly, ctrlx2, ctrly2, x2, y2);
	}
}

void QuadCurve2D::subdivide($doubles* src, int32_t srcoff, $doubles* left, int32_t leftoff, $doubles* right, int32_t rightoff) {
	$init(QuadCurve2D);
	double x1 = $nc(src)->get(srcoff + 0);
	double y1 = src->get(srcoff + 1);
	double ctrlx = src->get(srcoff + 2);
	double ctrly = src->get(srcoff + 3);
	double x2 = src->get(srcoff + 4);
	double y2 = src->get(srcoff + 5);
	if (left != nullptr) {
		left->set(leftoff + 0, x1);
		left->set(leftoff + 1, y1);
	}
	if (right != nullptr) {
		right->set(rightoff + 4, x2);
		right->set(rightoff + 5, y2);
	}
	x1 = (x1 + ctrlx) / 2.0;
	y1 = (y1 + ctrly) / 2.0;
	x2 = (x2 + ctrlx) / 2.0;
	y2 = (y2 + ctrly) / 2.0;
	ctrlx = (x1 + x2) / 2.0;
	ctrly = (y1 + y2) / 2.0;
	if (left != nullptr) {
		left->set(leftoff + 2, x1);
		left->set(leftoff + 3, y1);
		left->set(leftoff + 4, ctrlx);
		left->set(leftoff + 5, ctrly);
	}
	if (right != nullptr) {
		right->set(rightoff + 0, ctrlx);
		right->set(rightoff + 1, ctrly);
		right->set(rightoff + 2, x2);
		right->set(rightoff + 3, y2);
	}
}

int32_t QuadCurve2D::solveQuadratic($doubles* eqn) {
	$init(QuadCurve2D);
	return solveQuadratic(eqn, eqn);
}

int32_t QuadCurve2D::solveQuadratic($doubles* eqn, $doubles* res) {
	$init(QuadCurve2D);
	double a = $nc(eqn)->get(2);
	double b = eqn->get(1);
	double c = eqn->get(0);
	int32_t roots = 0;
	if (a == 0.0) {
		if (b == 0.0) {
			return -1;
		}
		$nc(res)->set(roots++, -c / b);
	} else {
		double d = b * b - 4.0 * a * c;
		if (d < 0.0) {
			return 0;
		}
		d = $Math::sqrt(d);
		if (b < 0.0) {
			d = -d;
		}
		double q = $div((b + d), -2.0);
		$nc(res)->set(roots++, q / a);
		if (q != 0.0) {
			res->set(roots++, c / q);
		}
	}
	return roots;
}

bool QuadCurve2D::contains(double x, double y) {
	double x1 = getX1();
	double y1 = getY1();
	double xc = getCtrlX();
	double yc = getCtrlY();
	double x2 = getX2();
	double y2 = getY2();
	double kx = x1 - 2 * xc + x2;
	double ky = y1 - 2 * yc + y2;
	double dx = x - x1;
	double dy = y - y1;
	double dxl = x2 - x1;
	double dyl = y2 - y1;
	double t0 = (dx * ky - dy * kx) / (dxl * ky - dyl * kx);
	if (t0 < 0 || t0 > 1 || t0 != t0) {
		return false;
	}
	double xb = kx * t0 * t0 + 2 * (xc - x1) * t0 + x1;
	double yb = ky * t0 * t0 + 2 * (yc - y1) * t0 + y1;
	double xl = dxl * t0 + x1;
	double yl = dyl * t0 + y1;
	return (x >= xb && x < xl) || (x >= xl && x < xb) || (y >= yb && y < yl) || (y >= yl && y < yb);
}

bool QuadCurve2D::contains($Point2D* p) {
	double var$0 = $nc(p)->getX();
	return contains(var$0, p->getY());
}

void QuadCurve2D::fillEqn($doubles* eqn, double val, double c1, double cp, double c2) {
	$init(QuadCurve2D);
	$nc(eqn)->set(0, c1 - val);
	eqn->set(1, cp + cp - c1 - c1);
	eqn->set(2, c1 - cp - cp + c2);
	return;
}

int32_t QuadCurve2D::evalQuadratic($doubles* vals, int32_t num, bool include0, bool include1, $doubles* inflect, double c1, double ctrl, double c2) {
	$init(QuadCurve2D);
	int32_t j = 0;
	for (int32_t i = 0; i < num; ++i) {
		double t = $nc(vals)->get(i);
		if ((include0 ? t >= 0 : t > 0) && (include1 ? t <= 1 : t < 1) && (inflect == nullptr || $nc(inflect)->get(1) + 2 * inflect->get(2) * t != 0)) {
			double u = 1 - t;
			vals->set(j++, c1 * u * u + 2 * ctrl * t * u + c2 * t * t);
		}
	}
	return j;
}

int32_t QuadCurve2D::getTag(double coord, double low, double high) {
	$init(QuadCurve2D);
	if (coord <= low) {
		return (coord < low ? QuadCurve2D::BELOW : QuadCurve2D::LOWEDGE);
	}
	if (coord >= high) {
		return (coord > high ? QuadCurve2D::ABOVE : QuadCurve2D::HIGHEDGE);
	}
	return QuadCurve2D::INSIDE;
}

bool QuadCurve2D::inwards(int32_t pttag, int32_t opt1tag, int32_t opt2tag) {
	$init(QuadCurve2D);
	switch (pttag) {
	case QuadCurve2D::BELOW:
		{}
	case QuadCurve2D::ABOVE:
		{}
	default:
		{
			return false;
		}
	case QuadCurve2D::LOWEDGE:
		{
			return (opt1tag >= QuadCurve2D::INSIDE || opt2tag >= QuadCurve2D::INSIDE);
		}
	case QuadCurve2D::INSIDE:
		{
			return true;
		}
	case QuadCurve2D::HIGHEDGE:
		{
			return (opt1tag <= QuadCurve2D::INSIDE || opt2tag <= QuadCurve2D::INSIDE);
		}
	}
}

bool QuadCurve2D::intersects(double x, double y, double w, double h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		return false;
	}
	double x1 = getX1();
	double y1 = getY1();
	int32_t x1tag = getTag(x1, x, x + w);
	int32_t y1tag = getTag(y1, y, y + h);
	if (x1tag == QuadCurve2D::INSIDE && y1tag == QuadCurve2D::INSIDE) {
		return true;
	}
	double x2 = getX2();
	double y2 = getY2();
	int32_t x2tag = getTag(x2, x, x + w);
	int32_t y2tag = getTag(y2, y, y + h);
	if (x2tag == QuadCurve2D::INSIDE && y2tag == QuadCurve2D::INSIDE) {
		return true;
	}
	double ctrlx = getCtrlX();
	double ctrly = getCtrlY();
	int32_t ctrlxtag = getTag(ctrlx, x, x + w);
	int32_t ctrlytag = getTag(ctrly, y, y + h);
	if (x1tag < QuadCurve2D::INSIDE && x2tag < QuadCurve2D::INSIDE && ctrlxtag < QuadCurve2D::INSIDE) {
		return false;
	}
	if (y1tag < QuadCurve2D::INSIDE && y2tag < QuadCurve2D::INSIDE && ctrlytag < QuadCurve2D::INSIDE) {
		return false;
	}
	if (x1tag > QuadCurve2D::INSIDE && x2tag > QuadCurve2D::INSIDE && ctrlxtag > QuadCurve2D::INSIDE) {
		return false;
	}
	if (y1tag > QuadCurve2D::INSIDE && y2tag > QuadCurve2D::INSIDE && ctrlytag > QuadCurve2D::INSIDE) {
		return false;
	}
	bool var$0 = inwards(x1tag, x2tag, ctrlxtag);
	if (var$0 && inwards(y1tag, y2tag, ctrlytag)) {
		return true;
	}
	bool var$1 = inwards(x2tag, x1tag, ctrlxtag);
	if (var$1 && inwards(y2tag, y1tag, ctrlytag)) {
		return true;
	}
	bool xoverlap = (x1tag * x2tag <= 0);
	bool yoverlap = (y1tag * y2tag <= 0);
	if (x1tag == QuadCurve2D::INSIDE && x2tag == QuadCurve2D::INSIDE && yoverlap) {
		return true;
	}
	if (y1tag == QuadCurve2D::INSIDE && y2tag == QuadCurve2D::INSIDE && xoverlap) {
		return true;
	}
	$var($doubles, eqn, $new($doubles, 3));
	$var($doubles, res, $new($doubles, 3));
	if (!yoverlap) {
		fillEqn(eqn, (y1tag < QuadCurve2D::INSIDE ? y : y + h), y1, ctrly, y2);
		bool var$3 = solveQuadratic(eqn, res) == 2;
		bool var$2 = var$3 && evalQuadratic(res, 2, true, true, nullptr, x1, ctrlx, x2) == 2;
		if (var$2) {
			int32_t var$4 = getTag(res->get(0), x, x + w);
			var$2 = var$4 * getTag(res->get(1), x, x + w) <= 0;
		}
		return (var$2);
	}
	if (!xoverlap) {
		fillEqn(eqn, (x1tag < QuadCurve2D::INSIDE ? x : x + w), x1, ctrlx, x2);
		bool var$6 = solveQuadratic(eqn, res) == 2;
		bool var$5 = var$6 && evalQuadratic(res, 2, true, true, nullptr, y1, ctrly, y2) == 2;
		if (var$5) {
			int32_t var$7 = getTag(res->get(0), y, y + h);
			var$5 = var$7 * getTag(res->get(1), y, y + h) <= 0;
		}
		return (var$5);
	}
	double dx = x2 - x1;
	double dy = y2 - y1;
	double k = y2 * x1 - x2 * y1;
	int32_t c1tag = 0;
	int32_t c2tag = 0;
	if (y1tag == QuadCurve2D::INSIDE) {
		c1tag = x1tag;
	} else {
		c1tag = getTag((k + dx * (y1tag < QuadCurve2D::INSIDE ? y : y + h)) / dy, x, x + w);
	}
	if (y2tag == QuadCurve2D::INSIDE) {
		c2tag = x2tag;
	} else {
		c2tag = getTag((k + dx * (y2tag < QuadCurve2D::INSIDE ? y : y + h)) / dy, x, x + w);
	}
	if (c1tag * c2tag <= 0) {
		return true;
	}
	c1tag = ((c1tag * x1tag <= 0) ? y1tag : y2tag);
	fillEqn(eqn, (c2tag < QuadCurve2D::INSIDE ? x : x + w), x1, ctrlx, x2);
	int32_t num = solveQuadratic(eqn, res);
	evalQuadratic(res, num, true, true, nullptr, y1, ctrly, y2);
	c2tag = getTag(res->get(0), y, y + h);
	return (c1tag * c2tag <= 0);
}

bool QuadCurve2D::intersects($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return intersects(var$0, var$1, var$2, r->getHeight());
}

bool QuadCurve2D::contains(double x, double y, double w, double h) {
	if (w <= 0 || h <= 0) {
		return false;
	}
	bool var$2 = contains(x, y);
	bool var$1 = var$2 && contains(x + w, y);
	bool var$0 = var$1 && contains(x + w, y + h);
	return (var$0 && contains(x, y + h));
}

bool QuadCurve2D::contains($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return contains(var$0, var$1, var$2, r->getHeight());
}

$Rectangle* QuadCurve2D::getBounds() {
	return $nc($(getBounds2D()))->getBounds();
}

$PathIterator* QuadCurve2D::getPathIterator($AffineTransform* at) {
	return $new($QuadIterator, this, at);
}

$PathIterator* QuadCurve2D::getPathIterator($AffineTransform* at, double flatness) {
	return $new($FlatteningPathIterator, $(getPathIterator(at)), flatness);
}

$Object* QuadCurve2D::clone() {
	try {
		return $of($Shape::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

QuadCurve2D::QuadCurve2D() {
}

$Class* QuadCurve2D::load$($String* name, bool initialize) {
	$loadClass(QuadCurve2D, name, initialize, &_QuadCurve2D_ClassInfo_, allocate$QuadCurve2D);
	return class$;
}

$Class* QuadCurve2D::class$ = nullptr;

		} // geom
	} // awt
} // java