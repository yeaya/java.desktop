#include <java/awt/geom/Rectangle2D.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/RectIterator.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef OUT_BOTTOM
#undef OUT_LEFT
#undef OUT_RIGHT
#undef OUT_TOP

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Line2D = ::java::awt::geom::Line2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $RectIterator = ::java::awt::geom::RectIterator;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Rectangle2D_FieldInfo_[] = {
	{"OUT_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Rectangle2D, OUT_LEFT)},
	{"OUT_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Rectangle2D, OUT_TOP)},
	{"OUT_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Rectangle2D, OUT_RIGHT)},
	{"OUT_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Rectangle2D, OUT_BOTTOM)},
	{}
};

$MethodInfo _Rectangle2D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Rectangle2D::*)()>(&Rectangle2D::init$))},
	{"add", "(DD)V", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"createIntersection", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"createUnion", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"intersect", "(Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Rectangle2D*,Rectangle2D*,Rectangle2D*)>(&Rectangle2D::intersect))},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{"intersectsLine", "(DDDD)Z", nullptr, $PUBLIC},
	{"intersectsLine", "(Ljava/awt/geom/Line2D;)Z", nullptr, $PUBLIC},
	{"outcode", "(DD)I", nullptr, $PUBLIC | $ABSTRACT},
	{"outcode", "(Ljava/awt/geom/Point2D;)I", nullptr, $PUBLIC},
	{"setFrame", "(DDDD)V", nullptr, $PUBLIC},
	{"setRect", "(DDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRect", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"union", "(Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Rectangle2D*,Rectangle2D*,Rectangle2D*)>(&Rectangle2D::union$))},
	{}
};

$InnerClassInfo _Rectangle2D_InnerClassesInfo_[] = {
	{"java.awt.geom.Rectangle2D$Double", "java.awt.geom.Rectangle2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Rectangle2D$Float", "java.awt.geom.Rectangle2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Rectangle2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.Rectangle2D",
	"java.awt.geom.RectangularShape",
	nullptr,
	_Rectangle2D_FieldInfo_,
	_Rectangle2D_MethodInfo_,
	nullptr,
	nullptr,
	_Rectangle2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.Rectangle2D$Double,java.awt.geom.Rectangle2D$Float"
};

$Object* allocate$Rectangle2D($Class* clazz) {
	return $of($alloc(Rectangle2D));
}

void Rectangle2D::init$() {
	$RectangularShape::init$();
}

void Rectangle2D::setRect(Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	setRect(var$0, var$1, var$2, r->getHeight());
}

bool Rectangle2D::intersectsLine(double x1, double y1, double x2, double y2) {
	int32_t out1 = 0;
	int32_t out2 = 0;
	if ((out2 = outcode(x2, y2)) == 0) {
		return true;
	}
	while ((out1 = outcode(x1, y1)) != 0) {
		if (((int32_t)(out1 & (uint32_t)out2)) != 0) {
			return false;
		}
		if (((int32_t)(out1 & (uint32_t)(Rectangle2D::OUT_LEFT | Rectangle2D::OUT_RIGHT))) != 0) {
			double x = getX();
			if (((int32_t)(out1 & (uint32_t)Rectangle2D::OUT_RIGHT)) != 0) {
				x += getWidth();
			}
			y1 = y1 + (x - x1) * (y2 - y1) / (x2 - x1);
			x1 = x;
		} else {
			double y = getY();
			if (((int32_t)(out1 & (uint32_t)Rectangle2D::OUT_BOTTOM)) != 0) {
				y += getHeight();
			}
			x1 = x1 + (y - y1) * (x2 - x1) / (y2 - y1);
			y1 = y;
		}
	}
	return true;
}

bool Rectangle2D::intersectsLine($Line2D* l) {
	double var$0 = $nc(l)->getX1();
	double var$1 = l->getY1();
	double var$2 = l->getX2();
	return intersectsLine(var$0, var$1, var$2, l->getY2());
}

int32_t Rectangle2D::outcode($Point2D* p) {
	double var$0 = $nc(p)->getX();
	return outcode(var$0, p->getY());
}

void Rectangle2D::setFrame(double x, double y, double w, double h) {
	setRect(x, y, w, h);
}

Rectangle2D* Rectangle2D::getBounds2D() {
	return $cast(Rectangle2D, clone());
}

bool Rectangle2D::contains(double x, double y) {
	double x0 = getX();
	double y0 = getY();
	bool var$0 = x >= x0 && y >= y0 && x < x0 + getWidth();
	return (var$0 && y < y0 + getHeight());
}

bool Rectangle2D::intersects(double x, double y, double w, double h) {
	if (isEmpty() || w <= 0 || h <= 0) {
		return false;
	}
	double x0 = getX();
	double y0 = getY();
	bool var$0 = x + w > x0 && y + h > y0 && x < x0 + getWidth();
	return (var$0 && y < y0 + getHeight());
}

bool Rectangle2D::contains(double x, double y, double w, double h) {
	if (isEmpty() || w <= 0 || h <= 0) {
		return false;
	}
	double x0 = getX();
	double y0 = getY();
	bool var$0 = x >= x0 && y >= y0 && (x + w) <= x0 + getWidth();
	return (var$0 && (y + h) <= y0 + getHeight());
}

void Rectangle2D::intersect(Rectangle2D* src1, Rectangle2D* src2, Rectangle2D* dest) {
	$init(Rectangle2D);
	double var$0 = $nc(src1)->getMinX();
	double x1 = $Math::max(var$0, $nc(src2)->getMinX());
	double var$1 = $nc(src1)->getMinY();
	double y1 = $Math::max(var$1, $nc(src2)->getMinY());
	double var$2 = $nc(src1)->getMaxX();
	double x2 = $Math::min(var$2, $nc(src2)->getMaxX());
	double var$3 = $nc(src1)->getMaxY();
	double y2 = $Math::min(var$3, $nc(src2)->getMaxY());
	$nc(dest)->setFrame(x1, y1, x2 - x1, y2 - y1);
}

void Rectangle2D::union$(Rectangle2D* src1, Rectangle2D* src2, Rectangle2D* dest) {
	$init(Rectangle2D);
	double var$0 = $nc(src1)->getMinX();
	double x1 = $Math::min(var$0, $nc(src2)->getMinX());
	double var$1 = $nc(src1)->getMinY();
	double y1 = $Math::min(var$1, $nc(src2)->getMinY());
	double var$2 = $nc(src1)->getMaxX();
	double x2 = $Math::max(var$2, $nc(src2)->getMaxX());
	double var$3 = $nc(src1)->getMaxY();
	double y2 = $Math::max(var$3, $nc(src2)->getMaxY());
	$nc(dest)->setFrameFromDiagonal(x1, y1, x2, y2);
}

void Rectangle2D::add(double newx, double newy) {
	double x1 = $Math::min(getMinX(), newx);
	double x2 = $Math::max(getMaxX(), newx);
	double y1 = $Math::min(getMinY(), newy);
	double y2 = $Math::max(getMaxY(), newy);
	setRect(x1, y1, x2 - x1, y2 - y1);
}

void Rectangle2D::add($Point2D* pt) {
	double var$0 = $nc(pt)->getX();
	add(var$0, pt->getY());
}

void Rectangle2D::add(Rectangle2D* r) {
	double var$0 = getMinX();
	double x1 = $Math::min(var$0, $nc(r)->getMinX());
	double var$1 = getMaxX();
	double x2 = $Math::max(var$1, $nc(r)->getMaxX());
	double var$2 = getMinY();
	double y1 = $Math::min(var$2, $nc(r)->getMinY());
	double var$3 = getMaxY();
	double y2 = $Math::max(var$3, $nc(r)->getMaxY());
	setRect(x1, y1, x2 - x1, y2 - y1);
}

$PathIterator* Rectangle2D::getPathIterator($AffineTransform* at) {
	return $new($RectIterator, this, at);
}

$PathIterator* Rectangle2D::getPathIterator($AffineTransform* at, double flatness) {
	return $new($RectIterator, this, at);
}

int32_t Rectangle2D::hashCode() {
	int64_t bits = $Double::doubleToLongBits(getX());
	bits += $Double::doubleToLongBits(getY()) * 37;
	bits += $Double::doubleToLongBits(getWidth()) * 43;
	bits += $Double::doubleToLongBits(getHeight()) * 47;
	return (((int32_t)bits) ^ ((int32_t)(bits >> 32)));
}

bool Rectangle2D::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(Rectangle2D, obj)) {
		$var(Rectangle2D, r2d, $cast(Rectangle2D, obj));
		double var$3 = getX();
		bool var$2 = (var$3 == $nc(r2d)->getX());
		if (var$2) {
			double var$4 = getY();
			var$2 = (var$4 == r2d->getY());
		}
		bool var$1 = var$2;
		if (var$1) {
			double var$5 = getWidth();
			var$1 = (var$5 == r2d->getWidth());
		}
		bool var$0 = var$1;
		if (var$0) {
			double var$6 = getHeight();
			var$0 = (var$6 == r2d->getHeight());
		}
		return (var$0);
	}
	return false;
}

Rectangle2D::Rectangle2D() {
}

$Class* Rectangle2D::load$($String* name, bool initialize) {
	$loadClass(Rectangle2D, name, initialize, &_Rectangle2D_ClassInfo_, allocate$Rectangle2D);
	return class$;
}

$Class* Rectangle2D::class$ = nullptr;

		} // geom
	} // awt
} // java