#include <java/awt/Point.h>

#include <java/awt/geom/Point2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Point2D = ::java::awt::geom::Point2D;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$CompoundAttribute _Point_MethodAnnotations_getLocation4[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$FieldInfo _Point_FieldInfo_[] = {
	{"x", "I", nullptr, $PUBLIC, $field(Point, x)},
	{"y", "I", nullptr, $PUBLIC, $field(Point, y)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Point, serialVersionUID)},
	{}
};

$MethodInfo _Point_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Point::*)()>(&Point::init$))},
	{"<init>", "(Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(Point::*)(Point*)>(&Point::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(Point::*)(int32_t,int32_t)>(&Point::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Point_MethodAnnotations_getLocation4},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"move", "(II)V", nullptr, $PUBLIC},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setLocation", "(II)V", nullptr, $PUBLIC},
	{"setLocation", "(DD)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Point_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Point",
	"java.awt.geom.Point2D",
	"java.io.Serializable",
	_Point_FieldInfo_,
	_Point_MethodInfo_
};

$Object* allocate$Point($Class* clazz) {
	return $of($alloc(Point));
}

$Object* Point::clone() {
	 return this->$Point2D::clone();
}

int32_t Point::hashCode() {
	 return this->$Point2D::hashCode();
}

void Point::finalize() {
	this->$Point2D::finalize();
}

void Point::init$() {
	Point::init$(0, 0);
}

void Point::init$(Point* p) {
	Point::init$($nc(p)->x, p->y);
}

void Point::init$(int32_t x, int32_t y) {
	$Point2D::init$();
	this->x = x;
	this->y = y;
}

double Point::getX() {
	return (double)this->x;
}

double Point::getY() {
	return (double)this->y;
}

Point* Point::getLocation() {
	return $new(Point, this->x, this->y);
}

void Point::setLocation(Point* p) {
	setLocation($nc(p)->x, p->y);
}

void Point::setLocation(int32_t x, int32_t y) {
	move(x, y);
}

void Point::setLocation(double x, double y) {
	this->x = $cast(int32_t, $Math::floor(x + 0.5));
	this->y = $cast(int32_t, $Math::floor(y + 0.5));
}

void Point::move(int32_t x, int32_t y) {
	this->x = x;
	this->y = y;
}

void Point::translate(int32_t dx, int32_t dy) {
	this->x += dx;
	this->y += dy;
}

bool Point::equals(Object$* obj) {
	if ($instanceOf(Point, obj)) {
		$var(Point, pt, $cast(Point, obj));
		return (this->x == $nc(pt)->x) && (this->y == pt->y);
	}
	return $Point2D::equals(obj);
}

$String* Point::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[x="_s, $$str(this->x), ",y="_s, $$str(this->y), "]"_s});
}

Point::Point() {
}

$Class* Point::load$($String* name, bool initialize) {
	$loadClass(Point, name, initialize, &_Point_ClassInfo_, allocate$Point);
	return class$;
}

$Class* Point::class$ = nullptr;

	} // awt
} // java