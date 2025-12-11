#include <java/awt/geom/QuadCurve2D$Float.h>

#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/QuadCurve2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $QuadCurve2D = ::java::awt::geom::QuadCurve2D;
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

$FieldInfo _QuadCurve2D$Float_FieldInfo_[] = {
	{"x1", "F", nullptr, $PUBLIC, $field(QuadCurve2D$Float, x1)},
	{"y1", "F", nullptr, $PUBLIC, $field(QuadCurve2D$Float, y1)},
	{"ctrlx", "F", nullptr, $PUBLIC, $field(QuadCurve2D$Float, ctrlx)},
	{"ctrly", "F", nullptr, $PUBLIC, $field(QuadCurve2D$Float, ctrly)},
	{"x2", "F", nullptr, $PUBLIC, $field(QuadCurve2D$Float, x2)},
	{"y2", "F", nullptr, $PUBLIC, $field(QuadCurve2D$Float, y2)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuadCurve2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _QuadCurve2D$Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(QuadCurve2D$Float::*)()>(&QuadCurve2D$Float::init$))},
	{"<init>", "(FFFFFF)V", nullptr, $PUBLIC, $method(static_cast<void(QuadCurve2D$Float::*)(float,float,float,float,float,float)>(&QuadCurve2D$Float::init$))},
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
	{"setCurve", "(FFFFFF)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _QuadCurve2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.QuadCurve2D$Float", "java.awt.geom.QuadCurve2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _QuadCurve2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.QuadCurve2D$Float",
	"java.awt.geom.QuadCurve2D",
	"java.io.Serializable",
	_QuadCurve2D$Float_FieldInfo_,
	_QuadCurve2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_QuadCurve2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.QuadCurve2D"
};

$Object* allocate$QuadCurve2D$Float($Class* clazz) {
	return $of($alloc(QuadCurve2D$Float));
}

$Object* QuadCurve2D$Float::clone() {
	 return this->$QuadCurve2D::clone();
}

int32_t QuadCurve2D$Float::hashCode() {
	 return this->$QuadCurve2D::hashCode();
}

bool QuadCurve2D$Float::equals(Object$* arg0) {
	 return this->$QuadCurve2D::equals(arg0);
}

$String* QuadCurve2D$Float::toString() {
	 return this->$QuadCurve2D::toString();
}

void QuadCurve2D$Float::finalize() {
	this->$QuadCurve2D::finalize();
}

void QuadCurve2D$Float::init$() {
	$QuadCurve2D::init$();
}

void QuadCurve2D$Float::init$(float x1, float y1, float ctrlx, float ctrly, float x2, float y2) {
	$QuadCurve2D::init$();
	setCurve(x1, y1, ctrlx, ctrly, x2, y2);
}

double QuadCurve2D$Float::getX1() {
	return (double)this->x1;
}

double QuadCurve2D$Float::getY1() {
	return (double)this->y1;
}

$Point2D* QuadCurve2D$Float::getP1() {
	return $new($Point2D$Float, this->x1, this->y1);
}

double QuadCurve2D$Float::getCtrlX() {
	return (double)this->ctrlx;
}

double QuadCurve2D$Float::getCtrlY() {
	return (double)this->ctrly;
}

$Point2D* QuadCurve2D$Float::getCtrlPt() {
	return $new($Point2D$Float, this->ctrlx, this->ctrly);
}

double QuadCurve2D$Float::getX2() {
	return (double)this->x2;
}

double QuadCurve2D$Float::getY2() {
	return (double)this->y2;
}

$Point2D* QuadCurve2D$Float::getP2() {
	return $new($Point2D$Float, this->x2, this->y2);
}

void QuadCurve2D$Float::setCurve(double x1, double y1, double ctrlx, double ctrly, double x2, double y2) {
	this->x1 = (float)x1;
	this->y1 = (float)y1;
	this->ctrlx = (float)ctrlx;
	this->ctrly = (float)ctrly;
	this->x2 = (float)x2;
	this->y2 = (float)y2;
}

void QuadCurve2D$Float::setCurve(float x1, float y1, float ctrlx, float ctrly, float x2, float y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->ctrlx = ctrlx;
	this->ctrly = ctrly;
	this->x2 = x2;
	this->y2 = y2;
}

$Rectangle2D* QuadCurve2D$Float::getBounds2D() {
	float left = $Math::min($Math::min(this->x1, this->x2), this->ctrlx);
	float top = $Math::min($Math::min(this->y1, this->y2), this->ctrly);
	float right = $Math::max($Math::max(this->x1, this->x2), this->ctrlx);
	float bottom = $Math::max($Math::max(this->y1, this->y2), this->ctrly);
	return $new($Rectangle2D$Float, left, top, right - left, bottom - top);
}

QuadCurve2D$Float::QuadCurve2D$Float() {
}

$Class* QuadCurve2D$Float::load$($String* name, bool initialize) {
	$loadClass(QuadCurve2D$Float, name, initialize, &_QuadCurve2D$Float_ClassInfo_, allocate$QuadCurve2D$Float);
	return class$;
}

$Class* QuadCurve2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java