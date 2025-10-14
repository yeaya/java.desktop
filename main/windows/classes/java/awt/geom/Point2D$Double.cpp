#include <java/awt/geom/Point2D$Double.h>

#include <java/awt/geom/Point2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Point2D = ::java::awt::geom::Point2D;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Point2D$Double_FieldInfo_[] = {
	{"x", "D", nullptr, $PUBLIC, $field(Point2D$Double, x)},
	{"y", "D", nullptr, $PUBLIC, $field(Point2D$Double, y)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Point2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _Point2D$Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Point2D$Double::*)()>(&Point2D$Double::init$))},
	{"<init>", "(DD)V", nullptr, $PUBLIC, $method(static_cast<void(Point2D$Double::*)(double,double)>(&Point2D$Double::init$))},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"setLocation", "(DD)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Point2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.Point2D$Double", "java.awt.geom.Point2D", "Double", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Point2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Point2D$Double",
	"java.awt.geom.Point2D",
	"java.io.Serializable",
	_Point2D$Double_FieldInfo_,
	_Point2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_Point2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Point2D"
};

$Object* allocate$Point2D$Double($Class* clazz) {
	return $of($alloc(Point2D$Double));
}

$Object* Point2D$Double::clone() {
	 return this->$Point2D::clone();
}

int32_t Point2D$Double::hashCode() {
	 return this->$Point2D::hashCode();
}

bool Point2D$Double::equals(Object$* obj) {
	 return this->$Point2D::equals(obj);
}

void Point2D$Double::finalize() {
	this->$Point2D::finalize();
}

void Point2D$Double::init$() {
	$Point2D::init$();
}

void Point2D$Double::init$(double x, double y) {
	$Point2D::init$();
	this->x = x;
	this->y = y;
}

double Point2D$Double::getX() {
	return this->x;
}

double Point2D$Double::getY() {
	return this->y;
}

void Point2D$Double::setLocation(double x, double y) {
	this->x = x;
	this->y = y;
}

$String* Point2D$Double::toString() {
	return $str({"Point2D.Double["_s, $$str(this->x), ", "_s, $$str(this->y), "]"_s});
}

Point2D$Double::Point2D$Double() {
}

$Class* Point2D$Double::load$($String* name, bool initialize) {
	$loadClass(Point2D$Double, name, initialize, &_Point2D$Double_ClassInfo_, allocate$Point2D$Double);
	return class$;
}

$Class* Point2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java