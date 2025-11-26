#include <java/awt/geom/Arc2D$Float.h>

#include <java/awt/geom/Arc2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <jcpp.h>

#undef OPEN

using $Arc2D = ::java::awt::geom::Arc2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Arc2D$Float_FieldInfo_[] = {
	{"x", "F", nullptr, $PUBLIC, $field(Arc2D$Float, x)},
	{"y", "F", nullptr, $PUBLIC, $field(Arc2D$Float, y)},
	{"width", "F", nullptr, $PUBLIC, $field(Arc2D$Float, width)},
	{"height", "F", nullptr, $PUBLIC, $field(Arc2D$Float, height)},
	{"start", "F", nullptr, $PUBLIC, $field(Arc2D$Float, start)},
	{"extent", "F", nullptr, $PUBLIC, $field(Arc2D$Float, extent)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Arc2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _Arc2D$Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Arc2D$Float::*)()>(&Arc2D$Float::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Arc2D$Float::*)(int32_t)>(&Arc2D$Float::init$))},
	{"<init>", "(FFFFFFI)V", nullptr, $PUBLIC, $method(static_cast<void(Arc2D$Float::*)(float,float,float,float,float,float,int32_t)>(&Arc2D$Float::init$))},
	{"<init>", "(Ljava/awt/geom/Rectangle2D;FFI)V", nullptr, $PUBLIC, $method(static_cast<void(Arc2D$Float::*)($Rectangle2D*,float,float,int32_t)>(&Arc2D$Float::init$))},
	{"getAngleExtent", "()D", nullptr, $PUBLIC},
	{"getAngleStart", "()D", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"makeBounds", "(DDDD)Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Arc2D$Float::*)($ObjectInputStream*)>(&Arc2D$Float::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"setAngleExtent", "(D)V", nullptr, $PUBLIC},
	{"setAngleStart", "(D)V", nullptr, $PUBLIC},
	{"setArc", "(DDDDDDI)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Arc2D$Float::*)($ObjectOutputStream*)>(&Arc2D$Float::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Arc2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.Arc2D$Float", "java.awt.geom.Arc2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Arc2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Arc2D$Float",
	"java.awt.geom.Arc2D",
	"java.io.Serializable",
	_Arc2D$Float_FieldInfo_,
	_Arc2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_Arc2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Arc2D"
};

$Object* allocate$Arc2D$Float($Class* clazz) {
	return $of($alloc(Arc2D$Float));
}

int32_t Arc2D$Float::hashCode() {
	 return this->$Arc2D::hashCode();
}

bool Arc2D$Float::equals(Object$* obj) {
	 return this->$Arc2D::equals(obj);
}

$Object* Arc2D$Float::clone() {
	 return this->$Arc2D::clone();
}

$String* Arc2D$Float::toString() {
	 return this->$Arc2D::toString();
}

void Arc2D$Float::finalize() {
	this->$Arc2D::finalize();
}

void Arc2D$Float::init$() {
	$Arc2D::init$($Arc2D::OPEN);
}

void Arc2D$Float::init$(int32_t type) {
	$Arc2D::init$(type);
}

void Arc2D$Float::init$(float x, float y, float w, float h, float start, float extent, int32_t type) {
	$Arc2D::init$(type);
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
	this->start = start;
	this->extent = extent;
}

void Arc2D$Float::init$($Rectangle2D* ellipseBounds, float start, float extent, int32_t type) {
	$Arc2D::init$(type);
	this->x = (float)$nc(ellipseBounds)->getX();
	this->y = (float)ellipseBounds->getY();
	this->width = (float)ellipseBounds->getWidth();
	this->height = (float)ellipseBounds->getHeight();
	this->start = start;
	this->extent = extent;
}

double Arc2D$Float::getX() {
	return (double)this->x;
}

double Arc2D$Float::getY() {
	return (double)this->y;
}

double Arc2D$Float::getWidth() {
	return (double)this->width;
}

double Arc2D$Float::getHeight() {
	return (double)this->height;
}

double Arc2D$Float::getAngleStart() {
	return (double)this->start;
}

double Arc2D$Float::getAngleExtent() {
	return (double)this->extent;
}

bool Arc2D$Float::isEmpty() {
	return (this->width <= 0.0 || this->height <= 0.0);
}

void Arc2D$Float::setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure) {
	this->setArcType(closure);
	this->x = (float)x;
	this->y = (float)y;
	this->width = (float)w;
	this->height = (float)h;
	this->start = (float)angSt;
	this->extent = (float)angExt;
}

void Arc2D$Float::setAngleStart(double angSt) {
	this->start = (float)angSt;
}

void Arc2D$Float::setAngleExtent(double angExt) {
	this->extent = (float)angExt;
}

$Rectangle2D* Arc2D$Float::makeBounds(double x, double y, double w, double h) {
	return $new($Rectangle2D$Float, (float)x, (float)y, (float)w, (float)h);
}

void Arc2D$Float::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeByte(getArcType());
}

void Arc2D$Float::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	try {
		setArcType(s->readByte());
	} catch ($IllegalArgumentException& iae) {
		$throwNew($InvalidObjectException, $(iae->getMessage()));
	}
}

Arc2D$Float::Arc2D$Float() {
}

$Class* Arc2D$Float::load$($String* name, bool initialize) {
	$loadClass(Arc2D$Float, name, initialize, &_Arc2D$Float_ClassInfo_, allocate$Arc2D$Float);
	return class$;
}

$Class* Arc2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java