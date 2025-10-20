#include <java/awt/geom/Arc2D$Double.h>

#include <java/awt/geom/Arc2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef OPEN

using $Arc2D = ::java::awt::geom::Arc2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
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

$FieldInfo _Arc2D$Double_FieldInfo_[] = {
	{"x", "D", nullptr, $PUBLIC, $field(Arc2D$Double, x)},
	{"y", "D", nullptr, $PUBLIC, $field(Arc2D$Double, y)},
	{"width", "D", nullptr, $PUBLIC, $field(Arc2D$Double, width)},
	{"height", "D", nullptr, $PUBLIC, $field(Arc2D$Double, height)},
	{"start", "D", nullptr, $PUBLIC, $field(Arc2D$Double, start)},
	{"extent", "D", nullptr, $PUBLIC, $field(Arc2D$Double, extent)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Arc2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _Arc2D$Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Arc2D$Double::*)()>(&Arc2D$Double::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Arc2D$Double::*)(int32_t)>(&Arc2D$Double::init$))},
	{"<init>", "(DDDDDDI)V", nullptr, $PUBLIC, $method(static_cast<void(Arc2D$Double::*)(double,double,double,double,double,double,int32_t)>(&Arc2D$Double::init$))},
	{"<init>", "(Ljava/awt/geom/Rectangle2D;DDI)V", nullptr, $PUBLIC, $method(static_cast<void(Arc2D$Double::*)($Rectangle2D*,double,double,int32_t)>(&Arc2D$Double::init$))},
	{"getAngleExtent", "()D", nullptr, $PUBLIC},
	{"getAngleStart", "()D", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"makeBounds", "(DDDD)Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Arc2D$Double::*)($ObjectInputStream*)>(&Arc2D$Double::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"setAngleExtent", "(D)V", nullptr, $PUBLIC},
	{"setAngleStart", "(D)V", nullptr, $PUBLIC},
	{"setArc", "(DDDDDDI)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Arc2D$Double::*)($ObjectOutputStream*)>(&Arc2D$Double::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Arc2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.Arc2D$Double", "java.awt.geom.Arc2D", "Double", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Arc2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Arc2D$Double",
	"java.awt.geom.Arc2D",
	"java.io.Serializable",
	_Arc2D$Double_FieldInfo_,
	_Arc2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_Arc2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Arc2D"
};

$Object* allocate$Arc2D$Double($Class* clazz) {
	return $of($alloc(Arc2D$Double));
}

int32_t Arc2D$Double::hashCode() {
	 return this->$Arc2D::hashCode();
}

bool Arc2D$Double::equals(Object$* obj) {
	 return this->$Arc2D::equals(obj);
}

$Object* Arc2D$Double::clone() {
	 return this->$Arc2D::clone();
}

$String* Arc2D$Double::toString() {
	 return this->$Arc2D::toString();
}

void Arc2D$Double::finalize() {
	this->$Arc2D::finalize();
}

void Arc2D$Double::init$() {
	$Arc2D::init$($Arc2D::OPEN);
}

void Arc2D$Double::init$(int32_t type) {
	$Arc2D::init$(type);
}

void Arc2D$Double::init$(double x, double y, double w, double h, double start, double extent, int32_t type) {
	$Arc2D::init$(type);
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
	this->start = start;
	this->extent = extent;
}

void Arc2D$Double::init$($Rectangle2D* ellipseBounds, double start, double extent, int32_t type) {
	$Arc2D::init$(type);
	this->x = $nc(ellipseBounds)->getX();
	this->y = ellipseBounds->getY();
	this->width = ellipseBounds->getWidth();
	this->height = ellipseBounds->getHeight();
	this->start = start;
	this->extent = extent;
}

double Arc2D$Double::getX() {
	return this->x;
}

double Arc2D$Double::getY() {
	return this->y;
}

double Arc2D$Double::getWidth() {
	return this->width;
}

double Arc2D$Double::getHeight() {
	return this->height;
}

double Arc2D$Double::getAngleStart() {
	return this->start;
}

double Arc2D$Double::getAngleExtent() {
	return this->extent;
}

bool Arc2D$Double::isEmpty() {
	return (this->width <= 0.0 || this->height <= 0.0);
}

void Arc2D$Double::setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure) {
	this->setArcType(closure);
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
	this->start = angSt;
	this->extent = angExt;
}

void Arc2D$Double::setAngleStart(double angSt) {
	this->start = angSt;
}

void Arc2D$Double::setAngleExtent(double angExt) {
	this->extent = angExt;
}

$Rectangle2D* Arc2D$Double::makeBounds(double x, double y, double w, double h) {
	return $new($Rectangle2D$Double, x, y, w, h);
}

void Arc2D$Double::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeByte(getArcType());
}

void Arc2D$Double::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	try {
		setArcType(s->readByte());
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		$throwNew($InvalidObjectException, $(iae->getMessage()));
	}
}

Arc2D$Double::Arc2D$Double() {
}

$Class* Arc2D$Double::load$($String* name, bool initialize) {
	$loadClass(Arc2D$Double, name, initialize, &_Arc2D$Double_ClassInfo_, allocate$Arc2D$Double);
	return class$;
}

$Class* Arc2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java