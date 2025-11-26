#include <java/awt/geom/RoundRectangle2D.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectIterator.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectIterator = ::java::awt::geom::RoundRectIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$MethodInfo _RoundRectangle2D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RoundRectangle2D::*)()>(&RoundRectangle2D::init$))},
	{"classify", "(DDDD)I", nullptr, $PRIVATE, $method(static_cast<int32_t(RoundRectangle2D::*)(double,double,double,double)>(&RoundRectangle2D::classify))},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getArcHeight", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getArcWidth", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{"setFrame", "(DDDD)V", nullptr, $PUBLIC},
	{"setRoundRect", "(DDDDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRoundRect", "(Ljava/awt/geom/RoundRectangle2D;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RoundRectangle2D_InnerClassesInfo_[] = {
	{"java.awt.geom.RoundRectangle2D$Double", "java.awt.geom.RoundRectangle2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.RoundRectangle2D$Float", "java.awt.geom.RoundRectangle2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _RoundRectangle2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.RoundRectangle2D",
	"java.awt.geom.RectangularShape",
	nullptr,
	nullptr,
	_RoundRectangle2D_MethodInfo_,
	nullptr,
	nullptr,
	_RoundRectangle2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.RoundRectangle2D$Double,java.awt.geom.RoundRectangle2D$Float"
};

$Object* allocate$RoundRectangle2D($Class* clazz) {
	return $of($alloc(RoundRectangle2D));
}

void RoundRectangle2D::init$() {
	$RectangularShape::init$();
}

void RoundRectangle2D::setRoundRect(RoundRectangle2D* rr) {
	double var$0 = $nc(rr)->getX();
	double var$1 = rr->getY();
	double var$2 = rr->getWidth();
	double var$3 = rr->getHeight();
	double var$4 = rr->getArcWidth();
	setRoundRect(var$0, var$1, var$2, var$3, var$4, rr->getArcHeight());
}

void RoundRectangle2D::setFrame(double x, double y, double w, double h) {
	double var$0 = x;
	double var$1 = y;
	double var$2 = w;
	double var$3 = h;
	double var$4 = getArcWidth();
	setRoundRect(var$0, var$1, var$2, var$3, var$4, getArcHeight());
}

bool RoundRectangle2D::contains(double x, double y) {
	if (isEmpty()) {
		return false;
	}
	double rrx0 = getX();
	double rry0 = getY();
	double rrx1 = rrx0 + getWidth();
	double rry1 = rry0 + getHeight();
	if (x < rrx0 || y < rry0 || x >= rrx1 || y >= rry1) {
		return false;
	}
	double var$0 = getWidth();
	double aw = $Math::min(var$0, $Math::abs(getArcWidth())) / 2.0;
	double var$1 = getHeight();
	double ah = $Math::min(var$1, $Math::abs(getArcHeight())) / 2.0;
	bool var$2 = x >= (rrx0 += aw);
	if (var$2 && x < (rrx0 = rrx1 - aw)) {
		return true;
	}
	bool var$3 = y >= (rry0 += ah);
	if (var$3 && y < (rry0 = rry1 - ah)) {
		return true;
	}
	x = (x - rrx0) / aw;
	y = (y - rry0) / ah;
	return (x * x + y * y <= 1.0);
}

int32_t RoundRectangle2D::classify(double coord, double left, double right, double arcsize) {
	if (coord < left) {
		return 0;
	} else if (coord < left + arcsize) {
		return 1;
	} else if (coord < right - arcsize) {
		return 2;
	} else if (coord < right) {
		return 3;
	} else {
		return 4;
	}
}

bool RoundRectangle2D::intersects(double x, double y, double w, double h) {
	if (isEmpty() || w <= 0 || h <= 0) {
		return false;
	}
	double rrx0 = getX();
	double rry0 = getY();
	double rrx1 = rrx0 + getWidth();
	double rry1 = rry0 + getHeight();
	if (x + w <= rrx0 || x >= rrx1 || y + h <= rry0 || y >= rry1) {
		return false;
	}
	double var$0 = getWidth();
	double aw = $Math::min(var$0, $Math::abs(getArcWidth())) / 2.0;
	double var$1 = getHeight();
	double ah = $Math::min(var$1, $Math::abs(getArcHeight())) / 2.0;
	int32_t x0class = classify(x, rrx0, rrx1, aw);
	int32_t x1class = classify(x + w, rrx0, rrx1, aw);
	int32_t y0class = classify(y, rry0, rry1, ah);
	int32_t y1class = classify(y + h, rry0, rry1, ah);
	if (x0class == 2 || x1class == 2 || y0class == 2 || y1class == 2) {
		return true;
	}
	if ((x0class < 2 && x1class > 2) || (y0class < 2 && y1class > 2)) {
		return true;
	}
	x = (x1class == 1) ? (x = x + w - (rrx0 + aw)) : (x = x - (rrx1 - aw));
	y = (y1class == 1) ? (y = y + h - (rry0 + ah)) : (y = y - (rry1 - ah));
	x = x / aw;
	y = y / ah;
	return (x * x + y * y <= 1.0);
}

bool RoundRectangle2D::contains(double x, double y, double w, double h) {
	if (isEmpty() || w <= 0 || h <= 0) {
		return false;
	}
	bool var$2 = contains(x, y);
	bool var$1 = var$2 && contains(x + w, y);
	bool var$0 = var$1 && contains(x, y + h);
	return (var$0 && contains(x + w, y + h));
}

$PathIterator* RoundRectangle2D::getPathIterator($AffineTransform* at) {
	return $new($RoundRectIterator, this, at);
}

int32_t RoundRectangle2D::hashCode() {
	int64_t bits = $Double::doubleToLongBits(getX());
	bits += $Double::doubleToLongBits(getY()) * 37;
	bits += $Double::doubleToLongBits(getWidth()) * 43;
	bits += $Double::doubleToLongBits(getHeight()) * 47;
	bits += $Double::doubleToLongBits(getArcWidth()) * 53;
	bits += $Double::doubleToLongBits(getArcHeight()) * 59;
	return (((int32_t)bits) ^ ((int32_t)(bits >> 32)));
}

bool RoundRectangle2D::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(RoundRectangle2D, obj)) {
		$var(RoundRectangle2D, rr2d, $cast(RoundRectangle2D, obj));
		double var$5 = getX();
		bool var$4 = (var$5 == $nc(rr2d)->getX());
		if (var$4) {
			double var$6 = getY();
			var$4 = (var$6 == rr2d->getY());
		}
		bool var$3 = var$4;
		if (var$3) {
			double var$7 = getWidth();
			var$3 = (var$7 == rr2d->getWidth());
		}
		bool var$2 = var$3;
		if (var$2) {
			double var$8 = getHeight();
			var$2 = (var$8 == rr2d->getHeight());
		}
		bool var$1 = var$2;
		if (var$1) {
			double var$9 = getArcWidth();
			var$1 = (var$9 == rr2d->getArcWidth());
		}
		bool var$0 = var$1;
		if (var$0) {
			double var$10 = getArcHeight();
			var$0 = (var$10 == rr2d->getArcHeight());
		}
		return (var$0);
	}
	return false;
}

RoundRectangle2D::RoundRectangle2D() {
}

$Class* RoundRectangle2D::load$($String* name, bool initialize) {
	$loadClass(RoundRectangle2D, name, initialize, &_RoundRectangle2D_ClassInfo_, allocate$RoundRectangle2D);
	return class$;
}

$Class* RoundRectangle2D::class$ = nullptr;

		} // geom
	} // awt
} // java