#include <java/awt/geom/Ellipse2D$Double.h>

#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <jcpp.h>

using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Ellipse2D$Double_FieldInfo_[] = {
	{"x", "D", nullptr, $PUBLIC, $field(Ellipse2D$Double, x)},
	{"y", "D", nullptr, $PUBLIC, $field(Ellipse2D$Double, y)},
	{"width", "D", nullptr, $PUBLIC, $field(Ellipse2D$Double, width)},
	{"height", "D", nullptr, $PUBLIC, $field(Ellipse2D$Double, height)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Ellipse2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _Ellipse2D$Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Ellipse2D$Double::*)()>(&Ellipse2D$Double::init$))},
	{"<init>", "(DDDD)V", nullptr, $PUBLIC, $method(static_cast<void(Ellipse2D$Double::*)(double,double,double,double)>(&Ellipse2D$Double::init$))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"setFrame", "(DDDD)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Ellipse2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.Ellipse2D$Double", "java.awt.geom.Ellipse2D", "Double", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Ellipse2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Ellipse2D$Double",
	"java.awt.geom.Ellipse2D",
	"java.io.Serializable",
	_Ellipse2D$Double_FieldInfo_,
	_Ellipse2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_Ellipse2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Ellipse2D"
};

$Object* allocate$Ellipse2D$Double($Class* clazz) {
	return $of($alloc(Ellipse2D$Double));
}

int32_t Ellipse2D$Double::hashCode() {
	 return this->$Ellipse2D::hashCode();
}

bool Ellipse2D$Double::equals(Object$* obj) {
	 return this->$Ellipse2D::equals(obj);
}

$Object* Ellipse2D$Double::clone() {
	 return this->$Ellipse2D::clone();
}

$String* Ellipse2D$Double::toString() {
	 return this->$Ellipse2D::toString();
}

void Ellipse2D$Double::finalize() {
	this->$Ellipse2D::finalize();
}

void Ellipse2D$Double::init$() {
	$Ellipse2D::init$();
}

void Ellipse2D$Double::init$(double x, double y, double w, double h) {
	$Ellipse2D::init$();
	setFrame(x, y, w, h);
}

double Ellipse2D$Double::getX() {
	return this->x;
}

double Ellipse2D$Double::getY() {
	return this->y;
}

double Ellipse2D$Double::getWidth() {
	return this->width;
}

double Ellipse2D$Double::getHeight() {
	return this->height;
}

bool Ellipse2D$Double::isEmpty() {
	return (this->width <= 0.0 || this->height <= 0.0);
}

void Ellipse2D$Double::setFrame(double x, double y, double w, double h) {
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
}

$Rectangle2D* Ellipse2D$Double::getBounds2D() {
	return $new($Rectangle2D$Double, this->x, this->y, this->width, this->height);
}

Ellipse2D$Double::Ellipse2D$Double() {
}

$Class* Ellipse2D$Double::load$($String* name, bool initialize) {
	$loadClass(Ellipse2D$Double, name, initialize, &_Ellipse2D$Double_ClassInfo_, allocate$Ellipse2D$Double);
	return class$;
}

$Class* Ellipse2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java