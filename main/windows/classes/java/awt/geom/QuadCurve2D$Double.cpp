#include <java/awt/geom/QuadCurve2D$Double.h>

#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/QuadCurve2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $QuadCurve2D = ::java::awt::geom::QuadCurve2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _QuadCurve2D$Double_FieldInfo_[] = {
	{"x1", "D", nullptr, $PUBLIC, $field(QuadCurve2D$Double, x1)},
	{"y1", "D", nullptr, $PUBLIC, $field(QuadCurve2D$Double, y1)},
	{"ctrlx", "D", nullptr, $PUBLIC, $field(QuadCurve2D$Double, ctrlx)},
	{"ctrly", "D", nullptr, $PUBLIC, $field(QuadCurve2D$Double, ctrly)},
	{"x2", "D", nullptr, $PUBLIC, $field(QuadCurve2D$Double, x2)},
	{"y2", "D", nullptr, $PUBLIC, $field(QuadCurve2D$Double, y2)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuadCurve2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _QuadCurve2D$Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(QuadCurve2D$Double::*)()>(&QuadCurve2D$Double::init$))},
	{"<init>", "(DDDDDD)V", nullptr, $PUBLIC, $method(static_cast<void(QuadCurve2D$Double::*)(double,double,double,double,double,double)>(&QuadCurve2D$Double::init$))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getCtrlPt", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getCtrlX", "()D", nullptr, $PUBLIC},
	{"getCtrlY", "()D", nullptr, $PUBLIC},
	{"getP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getX1", "()D", nullptr, $PUBLIC},
	{"getX2", "()D", nullptr, $PUBLIC},
	{"getY1", "()D", nullptr, $PUBLIC},
	{"getY2", "()D", nullptr, $PUBLIC},
	{"setCurve", "(DDDDDD)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _QuadCurve2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.QuadCurve2D$Double", "java.awt.geom.QuadCurve2D", "Double", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _QuadCurve2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.QuadCurve2D$Double",
	"java.awt.geom.QuadCurve2D",
	"java.io.Serializable",
	_QuadCurve2D$Double_FieldInfo_,
	_QuadCurve2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_QuadCurve2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.QuadCurve2D"
};

$Object* allocate$QuadCurve2D$Double($Class* clazz) {
	return $of($alloc(QuadCurve2D$Double));
}

$Object* QuadCurve2D$Double::clone() {
	 return this->$QuadCurve2D::clone();
}

int32_t QuadCurve2D$Double::hashCode() {
	 return this->$QuadCurve2D::hashCode();
}

bool QuadCurve2D$Double::equals(Object$* arg0) {
	 return this->$QuadCurve2D::equals(arg0);
}

$String* QuadCurve2D$Double::toString() {
	 return this->$QuadCurve2D::toString();
}

void QuadCurve2D$Double::finalize() {
	this->$QuadCurve2D::finalize();
}

void QuadCurve2D$Double::init$() {
	$QuadCurve2D::init$();
}

void QuadCurve2D$Double::init$(double x1, double y1, double ctrlx, double ctrly, double x2, double y2) {
	$QuadCurve2D::init$();
	setCurve(x1, y1, ctrlx, ctrly, x2, y2);
}

double QuadCurve2D$Double::getX1() {
	return this->x1;
}

double QuadCurve2D$Double::getY1() {
	return this->y1;
}

$Point2D* QuadCurve2D$Double::getP1() {
	return $new($Point2D$Double, this->x1, this->y1);
}

double QuadCurve2D$Double::getCtrlX() {
	return this->ctrlx;
}

double QuadCurve2D$Double::getCtrlY() {
	return this->ctrly;
}

$Point2D* QuadCurve2D$Double::getCtrlPt() {
	return $new($Point2D$Double, this->ctrlx, this->ctrly);
}

double QuadCurve2D$Double::getX2() {
	return this->x2;
}

double QuadCurve2D$Double::getY2() {
	return this->y2;
}

$Point2D* QuadCurve2D$Double::getP2() {
	return $new($Point2D$Double, this->x2, this->y2);
}

void QuadCurve2D$Double::setCurve(double x1, double y1, double ctrlx, double ctrly, double x2, double y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->ctrlx = ctrlx;
	this->ctrly = ctrly;
	this->x2 = x2;
	this->y2 = y2;
}

$Rectangle2D* QuadCurve2D$Double::getBounds2D() {
	double left = $Math::min($Math::min(this->x1, this->x2), this->ctrlx);
	double top = $Math::min($Math::min(this->y1, this->y2), this->ctrly);
	double right = $Math::max($Math::max(this->x1, this->x2), this->ctrlx);
	double bottom = $Math::max($Math::max(this->y1, this->y2), this->ctrly);
	return $new($Rectangle2D$Double, left, top, right - left, bottom - top);
}

QuadCurve2D$Double::QuadCurve2D$Double() {
}

$Class* QuadCurve2D$Double::load$($String* name, bool initialize) {
	$loadClass(QuadCurve2D$Double, name, initialize, &_QuadCurve2D$Double_ClassInfo_, allocate$QuadCurve2D$Double);
	return class$;
}

$Class* QuadCurve2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java