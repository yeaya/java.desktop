#include <java/awt/geom/Point2D$Float.h>

#include <java/awt/geom/Point2D.h>
#include <jcpp.h>

using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Point2D$Float_FieldInfo_[] = {
	{"x", "F", nullptr, $PUBLIC, $field(Point2D$Float, x)},
	{"y", "F", nullptr, $PUBLIC, $field(Point2D$Float, y)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Point2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _Point2D$Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Point2D$Float::*)()>(&Point2D$Float::init$))},
	{"<init>", "(FF)V", nullptr, $PUBLIC, $method(static_cast<void(Point2D$Float::*)(float,float)>(&Point2D$Float::init$))},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"setLocation", "(DD)V", nullptr, $PUBLIC},
	{"setLocation", "(FF)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Point2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.Point2D$Float", "java.awt.geom.Point2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Point2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Point2D$Float",
	"java.awt.geom.Point2D",
	"java.io.Serializable",
	_Point2D$Float_FieldInfo_,
	_Point2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_Point2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Point2D"
};

$Object* allocate$Point2D$Float($Class* clazz) {
	return $of($alloc(Point2D$Float));
}

$Object* Point2D$Float::clone() {
	 return this->$Point2D::clone();
}

int32_t Point2D$Float::hashCode() {
	 return this->$Point2D::hashCode();
}

bool Point2D$Float::equals(Object$* obj) {
	 return this->$Point2D::equals(obj);
}

void Point2D$Float::finalize() {
	this->$Point2D::finalize();
}

void Point2D$Float::init$() {
	$Point2D::init$();
}

void Point2D$Float::init$(float x, float y) {
	$Point2D::init$();
	this->x = x;
	this->y = y;
}

double Point2D$Float::getX() {
	return (double)this->x;
}

double Point2D$Float::getY() {
	return (double)this->y;
}

void Point2D$Float::setLocation(double x, double y) {
	this->x = (float)x;
	this->y = (float)y;
}

void Point2D$Float::setLocation(float x, float y) {
	this->x = x;
	this->y = y;
}

$String* Point2D$Float::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"Point2D.Float["_s, $$str(this->x), ", "_s, $$str(this->y), "]"_s});
}

Point2D$Float::Point2D$Float() {
}

$Class* Point2D$Float::load$($String* name, bool initialize) {
	$loadClass(Point2D$Float, name, initialize, &_Point2D$Float_ClassInfo_, allocate$Point2D$Float);
	return class$;
}

$Class* Point2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java