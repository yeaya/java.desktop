#include <java/awt/geom/RoundRectangle2D$Float.h>

#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _RoundRectangle2D$Float_FieldInfo_[] = {
	{"x", "F", nullptr, $PUBLIC, $field(RoundRectangle2D$Float, x)},
	{"y", "F", nullptr, $PUBLIC, $field(RoundRectangle2D$Float, y)},
	{"width", "F", nullptr, $PUBLIC, $field(RoundRectangle2D$Float, width)},
	{"height", "F", nullptr, $PUBLIC, $field(RoundRectangle2D$Float, height)},
	{"arcwidth", "F", nullptr, $PUBLIC, $field(RoundRectangle2D$Float, arcwidth)},
	{"archeight", "F", nullptr, $PUBLIC, $field(RoundRectangle2D$Float, archeight)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoundRectangle2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _RoundRectangle2D$Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RoundRectangle2D$Float::*)()>(&RoundRectangle2D$Float::init$))},
	{"<init>", "(FFFFFF)V", nullptr, $PUBLIC, $method(static_cast<void(RoundRectangle2D$Float::*)(float,float,float,float,float,float)>(&RoundRectangle2D$Float::init$))},
	{"getArcHeight", "()D", nullptr, $PUBLIC},
	{"getArcWidth", "()D", nullptr, $PUBLIC},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"setRoundRect", "(FFFFFF)V", nullptr, $PUBLIC},
	{"setRoundRect", "(DDDDDD)V", nullptr, $PUBLIC},
	{"setRoundRect", "(Ljava/awt/geom/RoundRectangle2D;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RoundRectangle2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.RoundRectangle2D$Float", "java.awt.geom.RoundRectangle2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _RoundRectangle2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.RoundRectangle2D$Float",
	"java.awt.geom.RoundRectangle2D",
	"java.io.Serializable",
	_RoundRectangle2D$Float_FieldInfo_,
	_RoundRectangle2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_RoundRectangle2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.RoundRectangle2D"
};

$Object* allocate$RoundRectangle2D$Float($Class* clazz) {
	return $of($alloc(RoundRectangle2D$Float));
}

int32_t RoundRectangle2D$Float::hashCode() {
	 return this->$RoundRectangle2D::hashCode();
}

bool RoundRectangle2D$Float::equals(Object$* obj) {
	 return this->$RoundRectangle2D::equals(obj);
}

$Object* RoundRectangle2D$Float::clone() {
	 return this->$RoundRectangle2D::clone();
}

$String* RoundRectangle2D$Float::toString() {
	 return this->$RoundRectangle2D::toString();
}

void RoundRectangle2D$Float::finalize() {
	this->$RoundRectangle2D::finalize();
}

void RoundRectangle2D$Float::init$() {
	$RoundRectangle2D::init$();
}

void RoundRectangle2D$Float::init$(float x, float y, float w, float h, float arcw, float arch) {
	$RoundRectangle2D::init$();
	setRoundRect(x, y, w, h, arcw, arch);
}

double RoundRectangle2D$Float::getX() {
	return (double)this->x;
}

double RoundRectangle2D$Float::getY() {
	return (double)this->y;
}

double RoundRectangle2D$Float::getWidth() {
	return (double)this->width;
}

double RoundRectangle2D$Float::getHeight() {
	return (double)this->height;
}

double RoundRectangle2D$Float::getArcWidth() {
	return (double)this->arcwidth;
}

double RoundRectangle2D$Float::getArcHeight() {
	return (double)this->archeight;
}

bool RoundRectangle2D$Float::isEmpty() {
	return (this->width <= 0.0f) || (this->height <= 0.0f);
}

void RoundRectangle2D$Float::setRoundRect(float x, float y, float w, float h, float arcw, float arch) {
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
	this->arcwidth = arcw;
	this->archeight = arch;
}

void RoundRectangle2D$Float::setRoundRect(double x, double y, double w, double h, double arcw, double arch) {
	this->x = (float)x;
	this->y = (float)y;
	this->width = (float)w;
	this->height = (float)h;
	this->arcwidth = (float)arcw;
	this->archeight = (float)arch;
}

void RoundRectangle2D$Float::setRoundRect($RoundRectangle2D* rr) {
	this->x = (float)$nc(rr)->getX();
	this->y = (float)rr->getY();
	this->width = (float)rr->getWidth();
	this->height = (float)rr->getHeight();
	this->arcwidth = (float)rr->getArcWidth();
	this->archeight = (float)rr->getArcHeight();
}

$Rectangle2D* RoundRectangle2D$Float::getBounds2D() {
	return $new($Rectangle2D$Float, this->x, this->y, this->width, this->height);
}

RoundRectangle2D$Float::RoundRectangle2D$Float() {
}

$Class* RoundRectangle2D$Float::load$($String* name, bool initialize) {
	$loadClass(RoundRectangle2D$Float, name, initialize, &_RoundRectangle2D$Float_ClassInfo_, allocate$RoundRectangle2D$Float);
	return class$;
}

$Class* RoundRectangle2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java