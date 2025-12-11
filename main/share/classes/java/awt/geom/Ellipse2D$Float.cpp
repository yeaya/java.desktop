#include <java/awt/geom/Ellipse2D$Float.h>

#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <jcpp.h>

using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Ellipse2D$Float_FieldInfo_[] = {
	{"x", "F", nullptr, $PUBLIC, $field(Ellipse2D$Float, x)},
	{"y", "F", nullptr, $PUBLIC, $field(Ellipse2D$Float, y)},
	{"width", "F", nullptr, $PUBLIC, $field(Ellipse2D$Float, width)},
	{"height", "F", nullptr, $PUBLIC, $field(Ellipse2D$Float, height)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Ellipse2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _Ellipse2D$Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Ellipse2D$Float::*)()>(&Ellipse2D$Float::init$))},
	{"<init>", "(FFFF)V", nullptr, $PUBLIC, $method(static_cast<void(Ellipse2D$Float::*)(float,float,float,float)>(&Ellipse2D$Float::init$))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"setFrame", "(FFFF)V", nullptr, $PUBLIC},
	{"setFrame", "(DDDD)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Ellipse2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.Ellipse2D$Float", "java.awt.geom.Ellipse2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Ellipse2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Ellipse2D$Float",
	"java.awt.geom.Ellipse2D",
	"java.io.Serializable",
	_Ellipse2D$Float_FieldInfo_,
	_Ellipse2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_Ellipse2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Ellipse2D"
};

$Object* allocate$Ellipse2D$Float($Class* clazz) {
	return $of($alloc(Ellipse2D$Float));
}

int32_t Ellipse2D$Float::hashCode() {
	 return this->$Ellipse2D::hashCode();
}

bool Ellipse2D$Float::equals(Object$* obj) {
	 return this->$Ellipse2D::equals(obj);
}

$Object* Ellipse2D$Float::clone() {
	 return this->$Ellipse2D::clone();
}

$String* Ellipse2D$Float::toString() {
	 return this->$Ellipse2D::toString();
}

void Ellipse2D$Float::finalize() {
	this->$Ellipse2D::finalize();
}

void Ellipse2D$Float::init$() {
	$Ellipse2D::init$();
}

void Ellipse2D$Float::init$(float x, float y, float w, float h) {
	$Ellipse2D::init$();
	setFrame(x, y, w, h);
}

double Ellipse2D$Float::getX() {
	return (double)this->x;
}

double Ellipse2D$Float::getY() {
	return (double)this->y;
}

double Ellipse2D$Float::getWidth() {
	return (double)this->width;
}

double Ellipse2D$Float::getHeight() {
	return (double)this->height;
}

bool Ellipse2D$Float::isEmpty() {
	return (this->width <= 0.0 || this->height <= 0.0);
}

void Ellipse2D$Float::setFrame(float x, float y, float w, float h) {
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
}

void Ellipse2D$Float::setFrame(double x, double y, double w, double h) {
	this->x = (float)x;
	this->y = (float)y;
	this->width = (float)w;
	this->height = (float)h;
}

$Rectangle2D* Ellipse2D$Float::getBounds2D() {
	return $new($Rectangle2D$Float, this->x, this->y, this->width, this->height);
}

Ellipse2D$Float::Ellipse2D$Float() {
}

$Class* Ellipse2D$Float::load$($String* name, bool initialize) {
	$loadClass(Ellipse2D$Float, name, initialize, &_Ellipse2D$Float_ClassInfo_, allocate$Ellipse2D$Float);
	return class$;
}

$Class* Ellipse2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java