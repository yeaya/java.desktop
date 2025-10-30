#include <java/awt/geom/Arc2D.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/ArcIterator.h>
#include <java/awt/geom/Dimension2D.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef CHORD
#undef OPEN
#undef PI
#undef PIE

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ArcIterator = ::java::awt::geom::ArcIterator;
using $Dimension2D = ::java::awt::geom::Dimension2D;
using $Line2D = ::java::awt::geom::Line2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Arc2D_FieldInfo_[] = {
	{"OPEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Arc2D, OPEN)},
	{"CHORD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Arc2D, CHORD)},
	{"PIE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Arc2D, PIE)},
	{"type", "I", nullptr, $PRIVATE, $field(Arc2D, type)},
	{}
};

$MethodInfo _Arc2D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Arc2D::*)()>(&Arc2D::init$))},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Arc2D::*)(int32_t)>(&Arc2D::init$))},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"contains", "(DDDDLjava/awt/geom/Rectangle2D;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Arc2D::*)(double,double,double,double,$Rectangle2D*)>(&Arc2D::contains))},
	{"containsAngle", "(D)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAngleExtent", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getAngleStart", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getArcType", "()I", nullptr, $PUBLIC},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getEndPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getStartPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{"makeBounds", "(DDDD)Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED | $ABSTRACT},
	{"normalizeDegrees", "(D)D", nullptr, $STATIC, $method(static_cast<double(*)(double)>(&Arc2D::normalizeDegrees))},
	{"setAngleExtent", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAngleStart", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAngleStart", "(Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"setAngles", "(DDDD)V", nullptr, $PUBLIC},
	{"setAngles", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"setArc", "(DDDDDDI)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setArc", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Dimension2D;DDI)V", nullptr, $PUBLIC},
	{"setArc", "(Ljava/awt/geom/Rectangle2D;DDI)V", nullptr, $PUBLIC},
	{"setArc", "(Ljava/awt/geom/Arc2D;)V", nullptr, $PUBLIC},
	{"setArcByCenter", "(DDDDDI)V", nullptr, $PUBLIC},
	{"setArcByTangent", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;D)V", nullptr, $PUBLIC},
	{"setArcType", "(I)V", nullptr, $PUBLIC},
	{"setFrame", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Arc2D_InnerClassesInfo_[] = {
	{"java.awt.geom.Arc2D$Double", "java.awt.geom.Arc2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Arc2D$Float", "java.awt.geom.Arc2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Arc2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.Arc2D",
	"java.awt.geom.RectangularShape",
	nullptr,
	_Arc2D_FieldInfo_,
	_Arc2D_MethodInfo_,
	nullptr,
	nullptr,
	_Arc2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.Arc2D$Double,java.awt.geom.Arc2D$Float"
};

$Object* allocate$Arc2D($Class* clazz) {
	return $of($alloc(Arc2D));
}

void Arc2D::init$() {
	Arc2D::init$(Arc2D::OPEN);
}

void Arc2D::init$(int32_t type) {
	$RectangularShape::init$();
	setArcType(type);
}

int32_t Arc2D::getArcType() {
	return this->type;
}

$Point2D* Arc2D::getStartPoint() {
	double angle = $Math::toRadians(-getAngleStart());
	double var$0 = getX();
	double var$2 = ($Math::cos(angle) * 0.5 + 0.5);
	double var$1 = var$2 * getWidth();
	double x = var$0 + var$1;
	double var$3 = getY();
	double var$5 = ($Math::sin(angle) * 0.5 + 0.5);
	double var$4 = var$5 * getHeight();
	double y = var$3 + var$4;
	return $new($Point2D$Double, x, y);
}

$Point2D* Arc2D::getEndPoint() {
	double var$0 = -getAngleStart();
	double angle = $Math::toRadians(var$0 - getAngleExtent());
	double var$1 = getX();
	double var$3 = ($Math::cos(angle) * 0.5 + 0.5);
	double var$2 = var$3 * getWidth();
	double x = var$1 + var$2;
	double var$4 = getY();
	double var$6 = ($Math::sin(angle) * 0.5 + 0.5);
	double var$5 = var$6 * getHeight();
	double y = var$4 + var$5;
	return $new($Point2D$Double, x, y);
}

void Arc2D::setArc($Point2D* loc, $Dimension2D* size, double angSt, double angExt, int32_t closure) {
	double var$0 = $nc(loc)->getX();
	double var$1 = loc->getY();
	double var$2 = $nc(size)->getWidth();
	setArc(var$0, var$1, var$2, size->getHeight(), angSt, angExt, closure);
}

void Arc2D::setArc($Rectangle2D* rect, double angSt, double angExt, int32_t closure) {
	double var$0 = $nc(rect)->getX();
	double var$1 = rect->getY();
	double var$2 = rect->getWidth();
	setArc(var$0, var$1, var$2, rect->getHeight(), angSt, angExt, closure);
}

void Arc2D::setArc(Arc2D* a) {
	double var$0 = $nc(a)->getX();
	double var$1 = a->getY();
	double var$2 = a->getWidth();
	double var$3 = a->getHeight();
	double var$4 = a->getAngleStart();
	setArc(var$0, var$1, var$2, var$3, var$4, a->getAngleExtent(), a->type);
}

void Arc2D::setArcByCenter(double x, double y, double radius, double angSt, double angExt, int32_t closure) {
	setArc(x - radius, y - radius, radius * 2.0, radius * 2.0, angSt, angExt, closure);
}

void Arc2D::setArcByTangent($Point2D* p1, $Point2D* p2, $Point2D* p3, double radius) {
	double var$1 = $nc(p1)->getY();
	double var$0 = var$1 - $nc(p2)->getY();
	double var$2 = p1->getX();
	double ang1 = $Math::atan2(var$0, var$2 - p2->getX());
	double var$4 = $nc(p3)->getY();
	double var$3 = var$4 - $nc(p2)->getY();
	double var$5 = p3->getX();
	double ang2 = $Math::atan2(var$3, var$5 - p2->getX());
	double diff = ang2 - ang1;
	if (diff > $Math::PI) {
		ang2 -= $Math::PI * 2.0;
	} else {
		if (diff < -$Math::PI) {
			ang2 += $Math::PI * 2.0;
		}
	}
	double bisect = (ang1 + ang2) / 2.0;
	double theta = $Math::abs(ang2 - bisect);
	double dist = radius / $Math::sin(theta);
	double var$6 = $nc(p2)->getX();
	double x = var$6 + dist * $Math::cos(bisect);
	double var$7 = p2->getY();
	double y = var$7 + dist * $Math::sin(bisect);
	if (ang1 < ang2) {
		ang1 -= $Math::PI / 2.0;
		ang2 += $Math::PI / 2.0;
	} else {
		ang1 += $Math::PI / 2.0;
		ang2 -= $Math::PI / 2.0;
	}
	ang1 = $Math::toDegrees(-ang1);
	ang2 = $Math::toDegrees(-ang2);
	diff = ang2 - ang1;
	if (diff < 0) {
		diff += 360;
	} else {
		diff -= 360;
	}
	setArcByCenter(x, y, radius, ang1, diff, this->type);
}

void Arc2D::setAngleStart($Point2D* p) {
	double var$0 = getHeight();
	double var$2 = $nc(p)->getX();
	double var$1 = (var$2 - getCenterX());
	double dx = var$0 * var$1;
	double var$3 = getWidth();
	double var$5 = p->getY();
	double var$4 = (var$5 - getCenterY());
	double dy = var$3 * var$4;
	setAngleStart(-$Math::toDegrees($Math::atan2(dy, dx)));
}

void Arc2D::setAngles(double x1, double y1, double x2, double y2) {
	double x = getCenterX();
	double y = getCenterY();
	double w = getWidth();
	double h = getHeight();
	double ang1 = $Math::atan2(w * (y - y1), h * (x1 - x));
	double ang2 = $Math::atan2(w * (y - y2), h * (x2 - x));
	ang2 -= ang1;
	if (ang2 <= 0.0) {
		ang2 += $Math::PI * 2.0;
	}
	setAngleStart($Math::toDegrees(ang1));
	setAngleExtent($Math::toDegrees(ang2));
}

void Arc2D::setAngles($Point2D* p1, $Point2D* p2) {
	double var$0 = $nc(p1)->getX();
	double var$1 = p1->getY();
	double var$2 = $nc(p2)->getX();
	setAngles(var$0, var$1, var$2, p2->getY());
}

void Arc2D::setArcType(int32_t type) {
	$useLocalCurrentObjectStackCache();
	if (type < Arc2D::OPEN || type > Arc2D::PIE) {
		$throwNew($IllegalArgumentException, $$str({"invalid type for Arc: "_s, $$str(type)}));
	}
	this->type = type;
}

void Arc2D::setFrame(double x, double y, double w, double h) {
	double var$0 = x;
	double var$1 = y;
	double var$2 = w;
	double var$3 = h;
	double var$4 = getAngleStart();
	setArc(var$0, var$1, var$2, var$3, var$4, getAngleExtent(), this->type);
}

$Rectangle2D* Arc2D::getBounds2D() {
	if (isEmpty()) {
		double var$0 = getX();
		double var$1 = getY();
		double var$2 = getWidth();
		return makeBounds(var$0, var$1, var$2, getHeight());
	}
	double x1 = 0.0;
	double y1 = 0.0;
	double x2 = 0.0;
	double y2 = 0.0;
	if (getArcType() == Arc2D::PIE) {
		x1 = (y1 = (x2 = (y2 = 0.0)));
	} else {
		x1 = (y1 = 1.0);
		x2 = (y2 = -1.0);
	}
	double angle = 0.0;
	for (int32_t i = 0; i < 6; ++i) {
		if (i < 4) {
			angle += 90.0;
			if (!containsAngle(angle)) {
				continue;
			}
		} else if (i == 4) {
			angle = getAngleStart();
		} else {
			angle += getAngleExtent();
		}
		double rads = $Math::toRadians(-angle);
		double xe = $Math::cos(rads);
		double ye = $Math::sin(rads);
		x1 = $Math::min(x1, xe);
		y1 = $Math::min(y1, ye);
		x2 = $Math::max(x2, xe);
		y2 = $Math::max(y2, ye);
	}
	double w = getWidth();
	double h = getHeight();
	x2 = (x2 - x1) * 0.5 * w;
	y2 = (y2 - y1) * 0.5 * h;
	x1 = getX() + (x1 * 0.5 + 0.5) * w;
	y1 = getY() + (y1 * 0.5 + 0.5) * h;
	return makeBounds(x1, y1, x2, y2);
}

double Arc2D::normalizeDegrees(double angle) {
	$init(Arc2D);
	if (angle > 180.0) {
		if (angle <= (180.0 + 360.0)) {
			angle = angle - 360.0;
		} else {
			angle = $Math::IEEEremainder(angle, 360.0);
			if (angle == -180.0) {
				angle = 180.0;
			}
		}
	} else if (angle <= -180.0) {
		if (angle > (-180.0 - 360.0)) {
			angle = angle + 360.0;
		} else {
			angle = $Math::IEEEremainder(angle, 360.0);
			if (angle == -180.0) {
				angle = 180.0;
			}
		}
	}
	return angle;
}

bool Arc2D::containsAngle(double angle) {
	double angExt = getAngleExtent();
	bool backwards = (angExt < 0.0);
	if (backwards) {
		angExt = -angExt;
	}
	if (angExt >= 360.0) {
		return true;
	}
	double var$0 = normalizeDegrees(angle);
	angle = var$0 - normalizeDegrees(getAngleStart());
	if (backwards) {
		angle = -angle;
	}
	if (angle < 0.0) {
		angle += 360.0;
	}
	return (angle >= 0.0) && (angle < angExt);
}

bool Arc2D::contains(double x, double y) {
	double ellw = getWidth();
	if (ellw <= 0.0) {
		return false;
	}
	double normx = (x - getX()) / ellw - 0.5;
	double ellh = getHeight();
	if (ellh <= 0.0) {
		return false;
	}
	double normy = (y - getY()) / ellh - 0.5;
	double distSq = (normx * normx + normy * normy);
	if (distSq >= 0.25) {
		return false;
	}
	double angExt = $Math::abs(getAngleExtent());
	if (angExt >= 360.0) {
		return true;
	}
	bool inarc = containsAngle(-$Math::toDegrees($Math::atan2(normy, normx)));
	if (this->type == Arc2D::PIE) {
		return inarc;
	}
	if (inarc) {
		if (angExt >= 180.0) {
			return true;
		}
	} else if (angExt <= 180.0) {
		return false;
	}
	double angle = $Math::toRadians(-getAngleStart());
	double x1 = $Math::cos(angle);
	double y1 = $Math::sin(angle);
	angle += $Math::toRadians(-getAngleExtent());
	double x2 = $Math::cos(angle);
	double y2 = $Math::sin(angle);
	int32_t var$0 = $Line2D::relativeCCW(x1, y1, x2, y2, 2 * normx, 2 * normy);
	bool inside = (var$0 * $Line2D::relativeCCW(x1, y1, x2, y2, (double)0, (double)0) >= 0);
	return inarc ? !inside : inside;
}

bool Arc2D::intersects(double x, double y, double w, double h) {
	$useLocalCurrentObjectStackCache();
	double aw = getWidth();
	double ah = getHeight();
	if (w <= 0 || h <= 0 || aw <= 0 || ah <= 0) {
		return false;
	}
	double ext = getAngleExtent();
	if (ext == 0) {
		return false;
	}
	double ax = getX();
	double ay = getY();
	double axw = ax + aw;
	double ayh = ay + ah;
	double xw = x + w;
	double yh = y + h;
	if (x >= axw || y >= ayh || xw <= ax || yh <= ay) {
		return false;
	}
	double axc = getCenterX();
	double ayc = getCenterY();
	$var($Point2D, sp, getStartPoint());
	$var($Point2D, ep, getEndPoint());
	double sx = $nc(sp)->getX();
	double sy = sp->getY();
	double ex = $nc(ep)->getX();
	double ey = ep->getY();
	if (ayc >= y && ayc <= yh) {
		bool var$0 = (sx < xw && ex < xw && axc < xw && axw > x && containsAngle((double)0));
		if (var$0 || (sx > x && ex > x && axc > x && ax < xw && containsAngle((double)180))) {
			return true;
		}
	}
	if (axc >= x && axc <= xw) {
		bool var$1 = (sy > y && ey > y && ayc > y && ay < yh && containsAngle((double)90));
		if (var$1 || (sy < yh && ey < yh && ayc < yh && ayh > y && containsAngle((double)270))) {
			return true;
		}
	}
	$var($Rectangle2D, rect, $new($Rectangle2D$Double, x, y, w, h));
	if (this->type == Arc2D::PIE || $Math::abs(ext) > 180) {
		bool var$2 = rect->intersectsLine(axc, ayc, sx, sy);
		if (var$2 || rect->intersectsLine(axc, ayc, ex, ey)) {
			return true;
		}
	} else if (rect->intersectsLine(sx, sy, ex, ey)) {
		return true;
	}
	bool var$5 = contains(x, y);
	bool var$4 = var$5 || contains(x + w, y);
	bool var$3 = var$4 || contains(x, y + h);
	if (var$3 || contains(x + w, y + h)) {
		return true;
	}
	return false;
}

bool Arc2D::contains(double x, double y, double w, double h) {
	return contains(x, y, w, h, nullptr);
}

bool Arc2D::contains($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return contains(var$0, var$1, var$2, r->getHeight(), r);
}

bool Arc2D::contains(double x, double y, double w, double h, $Rectangle2D* origrect$renamed) {
	$var($Rectangle2D, origrect, origrect$renamed);
	bool var$2 = contains(x, y);
	bool var$1 = var$2 && contains(x + w, y);
	bool var$0 = var$1 && contains(x, y + h);
	if (!(var$0 && contains(x + w, y + h))) {
		return false;
	}
	if (this->type != Arc2D::PIE || $Math::abs(getAngleExtent()) <= 180.0) {
		return true;
	}
	if (origrect == nullptr) {
		$assign(origrect, $new($Rectangle2D$Double, x, y, w, h));
	}
	double halfW = getWidth() / 2.0;
	double halfH = getHeight() / 2.0;
	double xc = getX() + halfW;
	double yc = getY() + halfH;
	double angle = $Math::toRadians(-getAngleStart());
	double xe = xc + halfW * $Math::cos(angle);
	double ye = yc + halfH * $Math::sin(angle);
	if ($nc(origrect)->intersectsLine(xc, yc, xe, ye)) {
		return false;
	}
	angle += $Math::toRadians(-getAngleExtent());
	xe = xc + halfW * $Math::cos(angle);
	ye = yc + halfH * $Math::sin(angle);
	return !$nc(origrect)->intersectsLine(xc, yc, xe, ye);
}

$PathIterator* Arc2D::getPathIterator($AffineTransform* at) {
	return $new($ArcIterator, this, at);
}

int32_t Arc2D::hashCode() {
	int64_t bits = $Double::doubleToLongBits(getX());
	bits += $Double::doubleToLongBits(getY()) * 37;
	bits += $Double::doubleToLongBits(getWidth()) * 43;
	bits += $Double::doubleToLongBits(getHeight()) * 47;
	bits += $Double::doubleToLongBits(getAngleStart()) * 53;
	bits += $Double::doubleToLongBits(getAngleExtent()) * 59;
	bits += getArcType() * 61;
	return (((int32_t)bits) ^ ((int32_t)(bits >> 32)));
}

bool Arc2D::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(Arc2D, obj)) {
		$var(Arc2D, a2d, $cast(Arc2D, obj));
		double var$6 = getX();
		bool var$5 = (var$6 == $nc(a2d)->getX());
		if (var$5) {
			double var$7 = getY();
			var$5 = (var$7 == a2d->getY());
		}
		bool var$4 = var$5;
		if (var$4) {
			double var$8 = getWidth();
			var$4 = (var$8 == a2d->getWidth());
		}
		bool var$3 = var$4;
		if (var$3) {
			double var$9 = getHeight();
			var$3 = (var$9 == a2d->getHeight());
		}
		bool var$2 = var$3;
		if (var$2) {
			double var$10 = getAngleStart();
			var$2 = (var$10 == a2d->getAngleStart());
		}
		bool var$1 = var$2;
		if (var$1) {
			double var$11 = getAngleExtent();
			var$1 = (var$11 == a2d->getAngleExtent());
		}
		bool var$0 = var$1;
		if (var$0) {
			int32_t var$12 = getArcType();
			var$0 = (var$12 == a2d->getArcType());
		}
		return (var$0);
	}
	return false;
}

Arc2D::Arc2D() {
}

$Class* Arc2D::load$($String* name, bool initialize) {
	$loadClass(Arc2D, name, initialize, &_Arc2D_ClassInfo_, allocate$Arc2D);
	return class$;
}

$Class* Arc2D::class$ = nullptr;

		} // geom
	} // awt
} // java