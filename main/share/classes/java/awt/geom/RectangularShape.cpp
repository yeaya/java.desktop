#include <java/awt/geom/RectangularShape.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Dimension2D.h>
#include <java/awt/geom/FlatteningPathIterator.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Dimension2D = ::java::awt::geom::Dimension2D;
using $FlatteningPathIterator = ::java::awt::geom::FlatteningPathIterator;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$CompoundAttribute _RectangularShape_MethodAnnotations_getFrame7[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$MethodInfo _RectangularShape_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RectangularShape::*)()>(&RectangularShape::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCenterX", "()D", nullptr, $PUBLIC},
	{"getCenterY", "()D", nullptr, $PUBLIC},
	{"getFrame", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _RectangularShape_MethodAnnotations_getFrame7},
	{"getHeight", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxX", "()D", nullptr, $PUBLIC},
	{"getMaxY", "()D", nullptr, $PUBLIC},
	{"getMinX", "()D", nullptr, $PUBLIC},
	{"getMinY", "()D", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getX", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setFrame", "(DDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFrame", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Dimension2D;)V", nullptr, $PUBLIC},
	{"setFrame", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"setFrameFromCenter", "(DDDD)V", nullptr, $PUBLIC},
	{"setFrameFromCenter", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"setFrameFromDiagonal", "(DDDD)V", nullptr, $PUBLIC},
	{"setFrameFromDiagonal", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RectangularShape_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.RectangularShape",
	"java.lang.Object",
	"java.awt.Shape,java.lang.Cloneable",
	nullptr,
	_RectangularShape_MethodInfo_
};

$Object* allocate$RectangularShape($Class* clazz) {
	return $of($alloc(RectangularShape));
}

int32_t RectangularShape::hashCode() {
	 return this->$Shape::hashCode();
}

bool RectangularShape::equals(Object$* arg0) {
	 return this->$Shape::equals(arg0);
}

$String* RectangularShape::toString() {
	 return this->$Shape::toString();
}

void RectangularShape::finalize() {
	this->$Shape::finalize();
}

void RectangularShape::init$() {
}

double RectangularShape::getMinX() {
	return getX();
}

double RectangularShape::getMinY() {
	return getY();
}

double RectangularShape::getMaxX() {
	double var$0 = getX();
	return var$0 + getWidth();
}

double RectangularShape::getMaxY() {
	double var$0 = getY();
	return var$0 + getHeight();
}

double RectangularShape::getCenterX() {
	double var$0 = getX();
	return var$0 + getWidth() / 2.0;
}

double RectangularShape::getCenterY() {
	double var$0 = getY();
	return var$0 + getHeight() / 2.0;
}

$Rectangle2D* RectangularShape::getFrame() {
	double var$0 = getX();
	double var$1 = getY();
	double var$2 = getWidth();
	return $new($Rectangle2D$Double, var$0, var$1, var$2, getHeight());
}

void RectangularShape::setFrame($Point2D* loc, $Dimension2D* size) {
	double var$0 = $nc(loc)->getX();
	double var$1 = loc->getY();
	double var$2 = $nc(size)->getWidth();
	setFrame(var$0, var$1, var$2, size->getHeight());
}

void RectangularShape::setFrame($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	setFrame(var$0, var$1, var$2, r->getHeight());
}

void RectangularShape::setFrameFromDiagonal(double x1, double y1, double x2, double y2) {
	if (x2 < x1) {
		double t = x1;
		x1 = x2;
		x2 = t;
	}
	if (y2 < y1) {
		double t = y1;
		y1 = y2;
		y2 = t;
	}
	setFrame(x1, y1, x2 - x1, y2 - y1);
}

void RectangularShape::setFrameFromDiagonal($Point2D* p1, $Point2D* p2) {
	double var$0 = $nc(p1)->getX();
	double var$1 = p1->getY();
	double var$2 = $nc(p2)->getX();
	setFrameFromDiagonal(var$0, var$1, var$2, p2->getY());
}

void RectangularShape::setFrameFromCenter(double centerX, double centerY, double cornerX, double cornerY) {
	double halfW = $Math::abs(cornerX - centerX);
	double halfH = $Math::abs(cornerY - centerY);
	setFrame(centerX - halfW, centerY - halfH, halfW * 2.0, halfH * 2.0);
}

void RectangularShape::setFrameFromCenter($Point2D* center, $Point2D* corner) {
	double var$0 = $nc(center)->getX();
	double var$1 = center->getY();
	double var$2 = $nc(corner)->getX();
	setFrameFromCenter(var$0, var$1, var$2, corner->getY());
}

bool RectangularShape::contains($Point2D* p) {
	double var$0 = $nc(p)->getX();
	return contains(var$0, p->getY());
}

bool RectangularShape::intersects($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return intersects(var$0, var$1, var$2, r->getHeight());
}

bool RectangularShape::contains($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return contains(var$0, var$1, var$2, r->getHeight());
}

$Rectangle* RectangularShape::getBounds() {
	double width = getWidth();
	double height = getHeight();
	if (width < 0 || height < 0) {
		return $new($Rectangle);
	}
	double x = getX();
	double y = getY();
	double x1 = $Math::floor(x);
	double y1 = $Math::floor(y);
	double x2 = $Math::ceil(x + width);
	double y2 = $Math::ceil(y + height);
	return $new($Rectangle, $cast(int32_t, x1), $cast(int32_t, y1), $cast(int32_t, (x2 - x1)), $cast(int32_t, (y2 - y1)));
}

$PathIterator* RectangularShape::getPathIterator($AffineTransform* at, double flatness) {
	return $new($FlatteningPathIterator, $(getPathIterator(at)), flatness);
}

$Object* RectangularShape::clone() {
	try {
		return $of($Shape::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

RectangularShape::RectangularShape() {
}

$Class* RectangularShape::load$($String* name, bool initialize) {
	$loadClass(RectangularShape, name, initialize, &_RectangularShape_ClassInfo_, allocate$RectangularShape);
	return class$;
}

$Class* RectangularShape::class$ = nullptr;

		} // geom
	} // awt
} // java