#include <java/awt/geom/CubicCurve2D$Float.h>

#include <java/awt/geom/CubicCurve2D.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $CubicCurve2D = ::java::awt::geom::CubicCurve2D;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _CubicCurve2D$Float_FieldInfo_[] = {
	{"x1", "F", nullptr, $PUBLIC, $field(CubicCurve2D$Float, x1)},
	{"y1", "F", nullptr, $PUBLIC, $field(CubicCurve2D$Float, y1)},
	{"ctrlx1", "F", nullptr, $PUBLIC, $field(CubicCurve2D$Float, ctrlx1)},
	{"ctrly1", "F", nullptr, $PUBLIC, $field(CubicCurve2D$Float, ctrly1)},
	{"ctrlx2", "F", nullptr, $PUBLIC, $field(CubicCurve2D$Float, ctrlx2)},
	{"ctrly2", "F", nullptr, $PUBLIC, $field(CubicCurve2D$Float, ctrly2)},
	{"x2", "F", nullptr, $PUBLIC, $field(CubicCurve2D$Float, x2)},
	{"y2", "F", nullptr, $PUBLIC, $field(CubicCurve2D$Float, y2)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CubicCurve2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _CubicCurve2D$Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CubicCurve2D$Float::*)()>(&CubicCurve2D$Float::init$))},
	{"<init>", "(FFFFFFFF)V", nullptr, $PUBLIC, $method(static_cast<void(CubicCurve2D$Float::*)(float,float,float,float,float,float,float,float)>(&CubicCurve2D$Float::init$))},
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
	{"setCurve", "(FFFFFFFF)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CubicCurve2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.CubicCurve2D$Float", "java.awt.geom.CubicCurve2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CubicCurve2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.CubicCurve2D$Float",
	"java.awt.geom.CubicCurve2D",
	"java.io.Serializable",
	_CubicCurve2D$Float_FieldInfo_,
	_CubicCurve2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_CubicCurve2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.CubicCurve2D"
};

$Object* allocate$CubicCurve2D$Float($Class* clazz) {
	return $of($alloc(CubicCurve2D$Float));
}

$Object* CubicCurve2D$Float::clone() {
	 return this->$CubicCurve2D::clone();
}

int32_t CubicCurve2D$Float::hashCode() {
	 return this->$CubicCurve2D::hashCode();
}

bool CubicCurve2D$Float::equals(Object$* arg0) {
	 return this->$CubicCurve2D::equals(arg0);
}

$String* CubicCurve2D$Float::toString() {
	 return this->$CubicCurve2D::toString();
}

void CubicCurve2D$Float::finalize() {
	this->$CubicCurve2D::finalize();
}

void CubicCurve2D$Float::init$() {
	$CubicCurve2D::init$();
}

void CubicCurve2D$Float::init$(float x1, float y1, float ctrlx1, float ctrly1, float ctrlx2, float ctrly2, float x2, float y2) {
	$CubicCurve2D::init$();
	setCurve(x1, y1, ctrlx1, ctrly1, ctrlx2, ctrly2, x2, y2);
}

double CubicCurve2D$Float::getX1() {
	return (double)this->x1;
}

double CubicCurve2D$Float::getY1() {
	return (double)this->y1;
}

$Point2D* CubicCurve2D$Float::getP1() {
	return $new($Point2D$Float, this->x1, this->y1);
}

double CubicCurve2D$Float::getCtrlX1() {
	return (double)this->ctrlx1;
}

double CubicCurve2D$Float::getCtrlY1() {
	return (double)this->ctrly1;
}

$Point2D* CubicCurve2D$Float::getCtrlP1() {
	return $new($Point2D$Float, this->ctrlx1, this->ctrly1);
}

double CubicCurve2D$Float::getCtrlX2() {
	return (double)this->ctrlx2;
}

double CubicCurve2D$Float::getCtrlY2() {
	return (double)this->ctrly2;
}

$Point2D* CubicCurve2D$Float::getCtrlP2() {
	return $new($Point2D$Float, this->ctrlx2, this->ctrly2);
}

double CubicCurve2D$Float::getX2() {
	return (double)this->x2;
}

double CubicCurve2D$Float::getY2() {
	return (double)this->y2;
}

$Point2D* CubicCurve2D$Float::getP2() {
	return $new($Point2D$Float, this->x2, this->y2);
}

void CubicCurve2D$Float::setCurve(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2) {
	this->x1 = (float)x1;
	this->y1 = (float)y1;
	this->ctrlx1 = (float)ctrlx1;
	this->ctrly1 = (float)ctrly1;
	this->ctrlx2 = (float)ctrlx2;
	this->ctrly2 = (float)ctrly2;
	this->x2 = (float)x2;
	this->y2 = (float)y2;
}

void CubicCurve2D$Float::setCurve(float x1, float y1, float ctrlx1, float ctrly1, float ctrlx2, float ctrly2, float x2, float y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->ctrlx1 = ctrlx1;
	this->ctrly1 = ctrly1;
	this->ctrlx2 = ctrlx2;
	this->ctrly2 = ctrly2;
	this->x2 = x2;
	this->y2 = y2;
}

$Rectangle2D* CubicCurve2D$Float::getBounds2D() {
	float var$0 = $Math::min(this->x1, this->x2);
	float left = $Math::min(var$0, $Math::min(this->ctrlx1, this->ctrlx2));
	float var$1 = $Math::min(this->y1, this->y2);
	float top = $Math::min(var$1, $Math::min(this->ctrly1, this->ctrly2));
	float var$2 = $Math::max(this->x1, this->x2);
	float right = $Math::max(var$2, $Math::max(this->ctrlx1, this->ctrlx2));
	float var$3 = $Math::max(this->y1, this->y2);
	float bottom = $Math::max(var$3, $Math::max(this->ctrly1, this->ctrly2));
	return $new($Rectangle2D$Float, left, top, right - left, bottom - top);
}

CubicCurve2D$Float::CubicCurve2D$Float() {
}

$Class* CubicCurve2D$Float::load$($String* name, bool initialize) {
	$loadClass(CubicCurve2D$Float, name, initialize, &_CubicCurve2D$Float_ClassInfo_, allocate$CubicCurve2D$Float);
	return class$;
}

$Class* CubicCurve2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java