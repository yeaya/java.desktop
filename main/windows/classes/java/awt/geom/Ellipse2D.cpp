#include <java/awt/geom/Ellipse2D.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/EllipseIterator.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $EllipseIterator = ::java::awt::geom::EllipseIterator;
using $PathIterator = ::java::awt::geom::PathIterator;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$MethodInfo _Ellipse2D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Ellipse2D::*)()>(&Ellipse2D::init$))},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Ellipse2D_InnerClassesInfo_[] = {
	{"java.awt.geom.Ellipse2D$Double", "java.awt.geom.Ellipse2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Ellipse2D$Float", "java.awt.geom.Ellipse2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Ellipse2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.Ellipse2D",
	"java.awt.geom.RectangularShape",
	nullptr,
	nullptr,
	_Ellipse2D_MethodInfo_,
	nullptr,
	nullptr,
	_Ellipse2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.Ellipse2D$Double,java.awt.geom.Ellipse2D$Float"
};

$Object* allocate$Ellipse2D($Class* clazz) {
	return $of($alloc(Ellipse2D));
}

void Ellipse2D::init$() {
	$RectangularShape::init$();
}

bool Ellipse2D::contains(double x, double y) {
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
	return (normx * normx + normy * normy) < 0.25;
}

bool Ellipse2D::intersects(double x, double y, double w, double h) {
	if (w <= 0.0 || h <= 0.0) {
		return false;
	}
	double ellw = getWidth();
	if (ellw <= 0.0) {
		return false;
	}
	double normx0 = (x - getX()) / ellw - 0.5;
	double normx1 = normx0 + w / ellw;
	double ellh = getHeight();
	if (ellh <= 0.0) {
		return false;
	}
	double normy0 = (y - getY()) / ellh - 0.5;
	double normy1 = normy0 + h / ellh;
	double nearx = 0.0;
	double neary = 0.0;
	if (normx0 > 0.0) {
		nearx = normx0;
	} else if (normx1 < 0.0) {
		nearx = normx1;
	} else {
		nearx = 0.0;
	}
	if (normy0 > 0.0) {
		neary = normy0;
	} else if (normy1 < 0.0) {
		neary = normy1;
	} else {
		neary = 0.0;
	}
	return (nearx * nearx + neary * neary) < 0.25;
}

bool Ellipse2D::contains(double x, double y, double w, double h) {
	bool var$2 = contains(x, y);
	bool var$1 = var$2 && contains(x + w, y);
	bool var$0 = var$1 && contains(x, y + h);
	return (var$0 && contains(x + w, y + h));
}

$PathIterator* Ellipse2D::getPathIterator($AffineTransform* at) {
	return $new($EllipseIterator, this, at);
}

int32_t Ellipse2D::hashCode() {
	int64_t bits = $Double::doubleToLongBits(getX());
	bits += $Double::doubleToLongBits(getY()) * 37;
	bits += $Double::doubleToLongBits(getWidth()) * 43;
	bits += $Double::doubleToLongBits(getHeight()) * 47;
	return (((int32_t)bits) ^ ((int32_t)(bits >> 32)));
}

bool Ellipse2D::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(Ellipse2D, obj)) {
		$var(Ellipse2D, e2d, $cast(Ellipse2D, obj));
		double var$3 = getX();
		bool var$2 = (var$3 == $nc(e2d)->getX());
		if (var$2) {
			double var$4 = getY();
			var$2 = (var$4 == e2d->getY());
		}
		bool var$1 = var$2;
		if (var$1) {
			double var$5 = getWidth();
			var$1 = (var$5 == e2d->getWidth());
		}
		bool var$0 = var$1;
		if (var$0) {
			double var$6 = getHeight();
			var$0 = (var$6 == e2d->getHeight());
		}
		return (var$0);
	}
	return false;
}

Ellipse2D::Ellipse2D() {
}

$Class* Ellipse2D::load$($String* name, bool initialize) {
	$loadClass(Ellipse2D, name, initialize, &_Ellipse2D_ClassInfo_, allocate$Ellipse2D);
	return class$;
}

$Class* Ellipse2D::class$ = nullptr;

		} // geom
	} // awt
} // java