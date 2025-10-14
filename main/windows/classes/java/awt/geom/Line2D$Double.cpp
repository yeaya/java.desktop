#include <java/awt/geom/Line2D$Double.h>

#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Line2D = ::java::awt::geom::Line2D;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Line2D$Double_FieldInfo_[] = {
	{"x1", "D", nullptr, $PUBLIC, $field(Line2D$Double, x1)},
	{"y1", "D", nullptr, $PUBLIC, $field(Line2D$Double, y1)},
	{"x2", "D", nullptr, $PUBLIC, $field(Line2D$Double, x2)},
	{"y2", "D", nullptr, $PUBLIC, $field(Line2D$Double, y2)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Line2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _Line2D$Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Line2D$Double::*)()>(&Line2D$Double::init$))},
	{"<init>", "(DDDD)V", nullptr, $PUBLIC, $method(static_cast<void(Line2D$Double::*)(double,double,double,double)>(&Line2D$Double::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC, $method(static_cast<void(Line2D$Double::*)($Point2D*,$Point2D*)>(&Line2D$Double::init$))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getX1", "()D", nullptr, $PUBLIC},
	{"getX2", "()D", nullptr, $PUBLIC},
	{"getY1", "()D", nullptr, $PUBLIC},
	{"getY2", "()D", nullptr, $PUBLIC},
	{"setLine", "(DDDD)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Line2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.Line2D$Double", "java.awt.geom.Line2D", "Double", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Line2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Line2D$Double",
	"java.awt.geom.Line2D",
	"java.io.Serializable",
	_Line2D$Double_FieldInfo_,
	_Line2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_Line2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Line2D"
};

$Object* allocate$Line2D$Double($Class* clazz) {
	return $of($alloc(Line2D$Double));
}

$Object* Line2D$Double::clone() {
	 return this->$Line2D::clone();
}

int32_t Line2D$Double::hashCode() {
	 return this->$Line2D::hashCode();
}

bool Line2D$Double::equals(Object$* arg0) {
	 return this->$Line2D::equals(arg0);
}

$String* Line2D$Double::toString() {
	 return this->$Line2D::toString();
}

void Line2D$Double::finalize() {
	this->$Line2D::finalize();
}

void Line2D$Double::init$() {
	$Line2D::init$();
}

void Line2D$Double::init$(double x1, double y1, double x2, double y2) {
	$Line2D::init$();
	setLine(x1, y1, x2, y2);
}

void Line2D$Double::init$($Point2D* p1, $Point2D* p2) {
	$Line2D::init$();
	setLine(p1, p2);
}

double Line2D$Double::getX1() {
	return this->x1;
}

double Line2D$Double::getY1() {
	return this->y1;
}

$Point2D* Line2D$Double::getP1() {
	return $new($Point2D$Double, this->x1, this->y1);
}

double Line2D$Double::getX2() {
	return this->x2;
}

double Line2D$Double::getY2() {
	return this->y2;
}

$Point2D* Line2D$Double::getP2() {
	return $new($Point2D$Double, this->x2, this->y2);
}

void Line2D$Double::setLine(double x1, double y1, double x2, double y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

$Rectangle2D* Line2D$Double::getBounds2D() {
	double x = 0.0;
	double y = 0.0;
	double w = 0.0;
	double h = 0.0;
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
	return $new($Rectangle2D$Double, x, y, w, h);
}

Line2D$Double::Line2D$Double() {
}

$Class* Line2D$Double::load$($String* name, bool initialize) {
	$loadClass(Line2D$Double, name, initialize, &_Line2D$Double_ClassInfo_, allocate$Line2D$Double);
	return class$;
}

$Class* Line2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java