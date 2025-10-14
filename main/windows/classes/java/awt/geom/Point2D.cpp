#include <java/awt/geom/Point2D.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$MethodInfo _Point2D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Point2D::*)()>(&Point2D::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"distance", "(DDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double)>(&Point2D::distance))},
	{"distance", "(DD)D", nullptr, $PUBLIC},
	{"distance", "(Ljava/awt/geom/Point2D;)D", nullptr, $PUBLIC},
	{"distanceSq", "(DDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double)>(&Point2D::distanceSq))},
	{"distanceSq", "(DD)D", nullptr, $PUBLIC},
	{"distanceSq", "(Ljava/awt/geom/Point2D;)D", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setLocation", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLocation", "(Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Point2D_InnerClassesInfo_[] = {
	{"java.awt.geom.Point2D$Double", "java.awt.geom.Point2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Point2D$Float", "java.awt.geom.Point2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Point2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.Point2D",
	"java.lang.Object",
	"java.lang.Cloneable",
	nullptr,
	_Point2D_MethodInfo_,
	nullptr,
	nullptr,
	_Point2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.Point2D$Double,java.awt.geom.Point2D$Float"
};

$Object* allocate$Point2D($Class* clazz) {
	return $of($alloc(Point2D));
}

void Point2D::init$() {
}

void Point2D::setLocation(Point2D* p) {
	double var$0 = $nc(p)->getX();
	setLocation(var$0, p->getY());
}

double Point2D::distanceSq(double x1, double y1, double x2, double y2) {
	$init(Point2D);
	x1 -= x2;
	y1 -= y2;
	return (x1 * x1 + y1 * y1);
}

double Point2D::distance(double x1, double y1, double x2, double y2) {
	$init(Point2D);
	x1 -= x2;
	y1 -= y2;
	return $Math::sqrt(x1 * x1 + y1 * y1);
}

double Point2D::distanceSq(double px, double py) {
	px -= getX();
	py -= getY();
	return (px * px + py * py);
}

double Point2D::distanceSq(Point2D* pt) {
	double var$0 = $nc(pt)->getX();
	double px = var$0 - this->getX();
	double var$1 = pt->getY();
	double py = var$1 - this->getY();
	return (px * px + py * py);
}

double Point2D::distance(double px, double py) {
	px -= getX();
	py -= getY();
	return $Math::sqrt(px * px + py * py);
}

double Point2D::distance(Point2D* pt) {
	double var$0 = $nc(pt)->getX();
	double px = var$0 - this->getX();
	double var$1 = pt->getY();
	double py = var$1 - this->getY();
	return $Math::sqrt(px * px + py * py);
}

$Object* Point2D::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

int32_t Point2D::hashCode() {
	int64_t bits = $Double::doubleToLongBits(getX());
	bits ^= $Double::doubleToLongBits(getY()) * 31;
	return (((int32_t)bits) ^ ((int32_t)(bits >> 32)));
}

bool Point2D::equals(Object$* obj) {
	if ($instanceOf(Point2D, obj)) {
		$var(Point2D, p2d, $cast(Point2D, obj));
		double var$1 = getX();
		bool var$0 = (var$1 == $nc(p2d)->getX());
		if (var$0) {
			double var$2 = getY();
			var$0 = (var$2 == p2d->getY());
		}
		return var$0;
	}
	return $Cloneable::equals(obj);
}

Point2D::Point2D() {
}

$Class* Point2D::load$($String* name, bool initialize) {
	$loadClass(Point2D, name, initialize, &_Point2D_ClassInfo_, allocate$Point2D);
	return class$;
}

$Class* Point2D::class$ = nullptr;

		} // geom
	} // awt
} // java