#include <java/awt/geom/CubicCurve2D$Double.h>

#include <java/awt/geom/CubicCurve2D.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $CubicCurve2D = ::java::awt::geom::CubicCurve2D;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _CubicCurve2D$Double_FieldInfo_[] = {
	{"x1", "D", nullptr, $PUBLIC, $field(CubicCurve2D$Double, x1)},
	{"y1", "D", nullptr, $PUBLIC, $field(CubicCurve2D$Double, y1)},
	{"ctrlx1", "D", nullptr, $PUBLIC, $field(CubicCurve2D$Double, ctrlx1)},
	{"ctrly1", "D", nullptr, $PUBLIC, $field(CubicCurve2D$Double, ctrly1)},
	{"ctrlx2", "D", nullptr, $PUBLIC, $field(CubicCurve2D$Double, ctrlx2)},
	{"ctrly2", "D", nullptr, $PUBLIC, $field(CubicCurve2D$Double, ctrly2)},
	{"x2", "D", nullptr, $PUBLIC, $field(CubicCurve2D$Double, x2)},
	{"y2", "D", nullptr, $PUBLIC, $field(CubicCurve2D$Double, y2)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CubicCurve2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _CubicCurve2D$Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CubicCurve2D$Double::*)()>(&CubicCurve2D$Double::init$))},
	{"<init>", "(DDDDDDDD)V", nullptr, $PUBLIC, $method(static_cast<void(CubicCurve2D$Double::*)(double,double,double,double,double,double,double,double)>(&CubicCurve2D$Double::init$))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getCtrlP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getCtrlP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getCtrlX1", "()D", nullptr, $PUBLIC},
	{"getCtrlX2", "()D", nullptr, $PUBLIC},
	{"getCtrlY1", "()D", nullptr, $PUBLIC},
	{"getCtrlY2", "()D", nullptr, $PUBLIC},
	{"getP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getX1", "()D", nullptr, $PUBLIC},
	{"getX2", "()D", nullptr, $PUBLIC},
	{"getY1", "()D", nullptr, $PUBLIC},
	{"getY2", "()D", nullptr, $PUBLIC},
	{"setCurve", "(DDDDDDDD)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CubicCurve2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.CubicCurve2D$Double", "java.awt.geom.CubicCurve2D", "Double", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CubicCurve2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.CubicCurve2D$Double",
	"java.awt.geom.CubicCurve2D",
	"java.io.Serializable",
	_CubicCurve2D$Double_FieldInfo_,
	_CubicCurve2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_CubicCurve2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.CubicCurve2D"
};

$Object* allocate$CubicCurve2D$Double($Class* clazz) {
	return $of($alloc(CubicCurve2D$Double));
}

$Object* CubicCurve2D$Double::clone() {
	 return this->$CubicCurve2D::clone();
}

int32_t CubicCurve2D$Double::hashCode() {
	 return this->$CubicCurve2D::hashCode();
}

bool CubicCurve2D$Double::equals(Object$* arg0) {
	 return this->$CubicCurve2D::equals(arg0);
}

$String* CubicCurve2D$Double::toString() {
	 return this->$CubicCurve2D::toString();
}

void CubicCurve2D$Double::finalize() {
	this->$CubicCurve2D::finalize();
}

void CubicCurve2D$Double::init$() {
	$CubicCurve2D::init$();
}

void CubicCurve2D$Double::init$(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2) {
	$CubicCurve2D::init$();
	setCurve(x1, y1, ctrlx1, ctrly1, ctrlx2, ctrly2, x2, y2);
}

double CubicCurve2D$Double::getX1() {
	return this->x1;
}

double CubicCurve2D$Double::getY1() {
	return this->y1;
}

$Point2D* CubicCurve2D$Double::getP1() {
	return $new($Point2D$Double, this->x1, this->y1);
}

double CubicCurve2D$Double::getCtrlX1() {
	return this->ctrlx1;
}

double CubicCurve2D$Double::getCtrlY1() {
	return this->ctrly1;
}

$Point2D* CubicCurve2D$Double::getCtrlP1() {
	return $new($Point2D$Double, this->ctrlx1, this->ctrly1);
}

double CubicCurve2D$Double::getCtrlX2() {
	return this->ctrlx2;
}

double CubicCurve2D$Double::getCtrlY2() {
	return this->ctrly2;
}

$Point2D* CubicCurve2D$Double::getCtrlP2() {
	return $new($Point2D$Double, this->ctrlx2, this->ctrly2);
}

double CubicCurve2D$Double::getX2() {
	return this->x2;
}

double CubicCurve2D$Double::getY2() {
	return this->y2;
}

$Point2D* CubicCurve2D$Double::getP2() {
	return $new($Point2D$Double, this->x2, this->y2);
}

void CubicCurve2D$Double::setCurve(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->ctrlx1 = ctrlx1;
	this->ctrly1 = ctrly1;
	this->ctrlx2 = ctrlx2;
	this->ctrly2 = ctrly2;
	this->x2 = x2;
	this->y2 = y2;
}

$Rectangle2D* CubicCurve2D$Double::getBounds2D() {
	double var$0 = $Math::min(this->x1, this->x2);
	double left = $Math::min(var$0, $Math::min(this->ctrlx1, this->ctrlx2));
	double var$1 = $Math::min(this->y1, this->y2);
	double top = $Math::min(var$1, $Math::min(this->ctrly1, this->ctrly2));
	double var$2 = $Math::max(this->x1, this->x2);
	double right = $Math::max(var$2, $Math::max(this->ctrlx1, this->ctrlx2));
	double var$3 = $Math::max(this->y1, this->y2);
	double bottom = $Math::max(var$3, $Math::max(this->ctrly1, this->ctrly2));
	return $new($Rectangle2D$Double, left, top, right - left, bottom - top);
}

CubicCurve2D$Double::CubicCurve2D$Double() {
}

$Class* CubicCurve2D$Double::load$($String* name, bool initialize) {
	$loadClass(CubicCurve2D$Double, name, initialize, &_CubicCurve2D$Double_ClassInfo_, allocate$CubicCurve2D$Double);
	return class$;
}

$Class* CubicCurve2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java