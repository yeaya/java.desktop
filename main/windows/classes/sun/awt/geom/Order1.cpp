#include <sun/awt/geom/Order1.h>

#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/geom/Crossings.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef DECREASING
#undef INCREASING
#undef SEG_LINETO

using $PathIterator = ::java::awt::geom::PathIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Crossings = ::sun::awt::geom::Crossings;
using $Curve = ::sun::awt::geom::Curve;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _Order1_FieldInfo_[] = {
	{"x0", "D", nullptr, $PRIVATE, $field(Order1, x0)},
	{"y0", "D", nullptr, $PRIVATE, $field(Order1, y0)},
	{"x1", "D", nullptr, $PRIVATE, $field(Order1, x1)},
	{"y1", "D", nullptr, $PRIVATE, $field(Order1, y1)},
	{"xmin", "D", nullptr, $PRIVATE, $field(Order1, xmin)},
	{"xmax", "D", nullptr, $PRIVATE, $field(Order1, xmax)},
	{}
};

$MethodInfo _Order1_MethodInfo_[] = {
	{"<init>", "(DDDDI)V", nullptr, $PUBLIC, $method(static_cast<void(Order1::*)(double,double,double,double,int32_t)>(&Order1::init$))},
	{"TforY", "(D)D", nullptr, $PUBLIC},
	{"XforT", "(D)D", nullptr, $PUBLIC},
	{"XforY", "(D)D", nullptr, $PUBLIC},
	{"YforT", "(D)D", nullptr, $PUBLIC},
	{"accumulateCrossings", "(Lsun/awt/geom/Crossings;)Z", nullptr, $PUBLIC},
	{"compareTo", "(Lsun/awt/geom/Curve;[D)I", nullptr, $PUBLIC},
	{"dXforT", "(DI)D", nullptr, $PUBLIC},
	{"dYforT", "(DI)D", nullptr, $PUBLIC},
	{"enlarge", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"getOrder", "()I", nullptr, $PUBLIC},
	{"getReversedCurve", "()Lsun/awt/geom/Curve;", nullptr, $PUBLIC},
	{"getSegment", "([D)I", nullptr, $PUBLIC},
	{"getSubCurve", "(DDI)Lsun/awt/geom/Curve;", nullptr, $PUBLIC},
	{"getX0", "()D", nullptr, $PUBLIC},
	{"getX1", "()D", nullptr, $PUBLIC},
	{"getXBot", "()D", nullptr, $PUBLIC},
	{"getXMax", "()D", nullptr, $PUBLIC},
	{"getXMin", "()D", nullptr, $PUBLIC},
	{"getXTop", "()D", nullptr, $PUBLIC},
	{"getY0", "()D", nullptr, $PUBLIC},
	{"getY1", "()D", nullptr, $PUBLIC},
	{"getYBot", "()D", nullptr, $PUBLIC},
	{"getYTop", "()D", nullptr, $PUBLIC},
	{"nextVertical", "(DD)D", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Order1_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.geom.Order1",
	"sun.awt.geom.Curve",
	nullptr,
	_Order1_FieldInfo_,
	_Order1_MethodInfo_
};

$Object* allocate$Order1($Class* clazz) {
	return $of($alloc(Order1));
}

void Order1::init$(double x0, double y0, double x1, double y1, int32_t direction) {
	$Curve::init$(direction);
	this->x0 = x0;
	this->y0 = y0;
	this->x1 = x1;
	this->y1 = y1;
	if (x0 < x1) {
		this->xmin = x0;
		this->xmax = x1;
	} else {
		this->xmin = x1;
		this->xmax = x0;
	}
}

int32_t Order1::getOrder() {
	return 1;
}

double Order1::getXTop() {
	return this->x0;
}

double Order1::getYTop() {
	return this->y0;
}

double Order1::getXBot() {
	return this->x1;
}

double Order1::getYBot() {
	return this->y1;
}

double Order1::getXMin() {
	return this->xmin;
}

double Order1::getXMax() {
	return this->xmax;
}

double Order1::getX0() {
	return (this->direction == $Curve::INCREASING) ? this->x0 : this->x1;
}

double Order1::getY0() {
	return (this->direction == $Curve::INCREASING) ? this->y0 : this->y1;
}

double Order1::getX1() {
	return (this->direction == $Curve::DECREASING) ? this->x0 : this->x1;
}

double Order1::getY1() {
	return (this->direction == $Curve::DECREASING) ? this->y0 : this->y1;
}

double Order1::XforY(double y) {
	if (this->x0 == this->x1 || y <= this->y0) {
		return this->x0;
	}
	if (y >= this->y1) {
		return this->x1;
	}
	return (this->x0 + (y - this->y0) * (this->x1 - this->x0) / (this->y1 - this->y0));
}

double Order1::TforY(double y) {
	if (y <= this->y0) {
		return (double)0;
	}
	if (y >= this->y1) {
		return (double)1;
	}
	return (y - this->y0) / (this->y1 - this->y0);
}

double Order1::XforT(double t) {
	return this->x0 + t * (this->x1 - this->x0);
}

double Order1::YforT(double t) {
	return this->y0 + t * (this->y1 - this->y0);
}

double Order1::dXforT(double t, int32_t deriv) {
	switch (deriv) {
	case 0:
		{
			return this->x0 + t * (this->x1 - this->x0);
		}
	case 1:
		{
			return (this->x1 - this->x0);
		}
	default:
		{
			return (double)0;
		}
	}
}

double Order1::dYforT(double t, int32_t deriv) {
	switch (deriv) {
	case 0:
		{
			return this->y0 + t * (this->y1 - this->y0);
		}
	case 1:
		{
			return (this->y1 - this->y0);
		}
	default:
		{
			return (double)0;
		}
	}
}

double Order1::nextVertical(double t0, double t1) {
	return t1;
}

bool Order1::accumulateCrossings($Crossings* c) {
	double xlo = $nc(c)->getXLo();
	double ylo = c->getYLo();
	double xhi = c->getXHi();
	double yhi = c->getYHi();
	if (this->xmin >= xhi) {
		return false;
	}
	double xstart = 0.0;
	double ystart = 0.0;
	double xend = 0.0;
	double yend = 0.0;
	if (this->y0 < ylo) {
		if (this->y1 <= ylo) {
			return false;
		}
		ystart = ylo;
		xstart = XforY(ylo);
	} else {
		if (this->y0 >= yhi) {
			return false;
		}
		ystart = this->y0;
		xstart = this->x0;
	}
	if (this->y1 > yhi) {
		yend = yhi;
		xend = XforY(yhi);
	} else {
		yend = this->y1;
		xend = this->x1;
	}
	if (xstart >= xhi && xend >= xhi) {
		return false;
	}
	if (xstart > xlo || xend > xlo) {
		return true;
	}
	c->record(ystart, yend, this->direction);
	return false;
}

void Order1::enlarge($Rectangle2D* r) {
	$nc(r)->add(this->x0, this->y0);
	r->add(this->x1, this->y1);
}

$Curve* Order1::getSubCurve(double ystart, double yend, int32_t dir) {
	if (ystart == this->y0 && yend == this->y1) {
		return getWithDirection(dir);
	}
	if (this->x0 == this->x1) {
		return $new(Order1, this->x0, ystart, this->x1, yend, dir);
	}
	double num = this->x0 - this->x1;
	double denom = this->y0 - this->y1;
	double xstart = (this->x0 + (ystart - this->y0) * num / denom);
	double xend = (this->x0 + (yend - this->y0) * num / denom);
	return $new(Order1, xstart, ystart, xend, yend, dir);
}

$Curve* Order1::getReversedCurve() {
	return $new(Order1, this->x0, this->y0, this->x1, this->y1, -this->direction);
}

int32_t Order1::compareTo($Curve* other, $doubles* yrange) {
	if (!($instanceOf(Order1, other))) {
		return $Curve::compareTo(other, yrange);
	}
	$var(Order1, c1, $cast(Order1, other));
	if ($nc(yrange)->get(1) <= yrange->get(0)) {
		$throwNew($InternalError, "yrange already screwed up..."_s);
	}
	$nc(yrange)->set(1, $Math::min($Math::min(yrange->get(1), this->y1), $nc(c1)->y1));
	if (yrange->get(1) <= yrange->get(0)) {
		$throwNew($InternalError, $$str({"backstepping from "_s, $$str(yrange->get(0)), " to "_s, $$str(yrange->get(1))}));
	}
	if (this->xmax <= $nc(c1)->xmin) {
		return (this->xmin == c1->xmax) ? 0 : -1;
	}
	if (this->xmin >= $nc(c1)->xmax) {
		return 1;
	}
	double dxa = this->x1 - this->x0;
	double dya = this->y1 - this->y0;
	double dxb = $nc(c1)->x1 - c1->x0;
	double dyb = c1->y1 - c1->y0;
	double denom = dxb * dya - dxa * dyb;
	double y = 0.0;
	if (denom != 0) {
		double num = ((this->x0 - c1->x0) * dya * dyb - this->y0 * dxa * dyb + c1->y0 * dxb * dya);
		y = num / denom;
		if (y <= yrange->get(0)) {
			y = $Math::min(this->y1, c1->y1);
		} else {
			if (y < yrange->get(1)) {
				yrange->set(1, y);
			}
			y = $Math::max(this->y0, c1->y0);
		}
	} else {
		y = $Math::max(this->y0, c1->y0);
	}
	double var$0 = XforY(y);
	return orderof(var$0, c1->XforY(y));
}

int32_t Order1::getSegment($doubles* coords) {
	if (this->direction == $Curve::INCREASING) {
		$nc(coords)->set(0, this->x1);
		coords->set(1, this->y1);
	} else {
		$nc(coords)->set(0, this->x0);
		coords->set(1, this->y0);
	}
	return $PathIterator::SEG_LINETO;
}

Order1::Order1() {
}

$Class* Order1::load$($String* name, bool initialize) {
	$loadClass(Order1, name, initialize, &_Order1_ClassInfo_, allocate$Order1);
	return class$;
}

$Class* Order1::class$ = nullptr;

		} // geom
	} // awt
} // sun