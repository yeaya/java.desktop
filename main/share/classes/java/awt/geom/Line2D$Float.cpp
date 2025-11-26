#include <java/awt/geom/Line2D$Float.h>

#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <jcpp.h>

using $Line2D = ::java::awt::geom::Line2D;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Line2D$Float_FieldInfo_[] = {
	{"x1", "F", nullptr, $PUBLIC, $field(Line2D$Float, x1)},
	{"y1", "F", nullptr, $PUBLIC, $field(Line2D$Float, y1)},
	{"x2", "F", nullptr, $PUBLIC, $field(Line2D$Float, x2)},
	{"y2", "F", nullptr, $PUBLIC, $field(Line2D$Float, y2)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Line2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _Line2D$Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Line2D$Float::*)()>(&Line2D$Float::init$))},
	{"<init>", "(FFFF)V", nullptr, $PUBLIC, $method(static_cast<void(Line2D$Float::*)(float,float,float,float)>(&Line2D$Float::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC, $method(static_cast<void(Line2D$Float::*)($Point2D*,$Point2D*)>(&Line2D$Float::init$))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getX1", "()D", nullptr, $PUBLIC},
	{"getX2", "()D", nullptr, $PUBLIC},
	{"getY1", "()D", nullptr, $PUBLIC},
	{"getY2", "()D", nullptr, $PUBLIC},
	{"setLine", "(DDDD)V", nullptr, $PUBLIC},
	{"setLine", "(FFFF)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Line2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.Line2D$Float", "java.awt.geom.Line2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Line2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Line2D$Float",
	"java.awt.geom.Line2D",
	"java.io.Serializable",
	_Line2D$Float_FieldInfo_,
	_Line2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_Line2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Line2D"
};

$Object* allocate$Line2D$Float($Class* clazz) {
	return $of($alloc(Line2D$Float));
}

$Object* Line2D$Float::clone() {
	 return this->$Line2D::clone();
}

int32_t Line2D$Float::hashCode() {
	 return this->$Line2D::hashCode();
}

bool Line2D$Float::equals(Object$* arg0) {
	 return this->$Line2D::equals(arg0);
}

$String* Line2D$Float::toString() {
	 return this->$Line2D::toString();
}

void Line2D$Float::finalize() {
	this->$Line2D::finalize();
}

void Line2D$Float::init$() {
	$Line2D::init$();
}

void Line2D$Float::init$(float x1, float y1, float x2, float y2) {
	$Line2D::init$();
	setLine(x1, y1, x2, y2);
}

void Line2D$Float::init$($Point2D* p1, $Point2D* p2) {
	$Line2D::init$();
	setLine(p1, p2);
}

double Line2D$Float::getX1() {
	return (double)this->x1;
}

double Line2D$Float::getY1() {
	return (double)this->y1;
}

$Point2D* Line2D$Float::getP1() {
	return $new($Point2D$Float, this->x1, this->y1);
}

double Line2D$Float::getX2() {
	return (double)this->x2;
}

double Line2D$Float::getY2() {
	return (double)this->y2;
}

$Point2D* Line2D$Float::getP2() {
	return $new($Point2D$Float, this->x2, this->y2);
}

void Line2D$Float::setLine(double x1, double y1, double x2, double y2) {
	this->x1 = (float)x1;
	this->y1 = (float)y1;
	this->x2 = (float)x2;
	this->y2 = (float)y2;
}

void Line2D$Float::setLine(float x1, float y1, float x2, float y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

$Rectangle2D* Line2D$Float::getBounds2D() {
	float x = 0.0;
	float y = 0.0;
	float w = 0.0;
	float h = 0.0;
	if (this->x1 < this->x2) {
		x = this->x1;
		w = this->x2 - this->x1;
	} else {
		x = this->x2;
		w = this->x1 - this->x2;
	}
	if (this->y1 < this->y2) {
		y = this->y1;
		h = this->y2 - this->y1;
	} else {
		y = this->y2;
		h = this->y1 - this->y2;
	}
	return $new($Rectangle2D$Float, x, y, w, h);
}

Line2D$Float::Line2D$Float() {
}

$Class* Line2D$Float::load$($String* name, bool initialize) {
	$loadClass(Line2D$Float, name, initialize, &_Line2D$Float_ClassInfo_, allocate$Line2D$Float);
	return class$;
}

$Class* Line2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java