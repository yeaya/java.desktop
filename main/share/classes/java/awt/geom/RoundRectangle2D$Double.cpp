#include <java/awt/geom/RoundRectangle2D$Double.h>

#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <jcpp.h>

using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _RoundRectangle2D$Double_FieldInfo_[] = {
	{"x", "D", nullptr, $PUBLIC, $field(RoundRectangle2D$Double, x)},
	{"y", "D", nullptr, $PUBLIC, $field(RoundRectangle2D$Double, y)},
	{"width", "D", nullptr, $PUBLIC, $field(RoundRectangle2D$Double, width)},
	{"height", "D", nullptr, $PUBLIC, $field(RoundRectangle2D$Double, height)},
	{"arcwidth", "D", nullptr, $PUBLIC, $field(RoundRectangle2D$Double, arcwidth)},
	{"archeight", "D", nullptr, $PUBLIC, $field(RoundRectangle2D$Double, archeight)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoundRectangle2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _RoundRectangle2D$Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RoundRectangle2D$Double::*)()>(&RoundRectangle2D$Double::init$))},
	{"<init>", "(DDDDDD)V", nullptr, $PUBLIC, $method(static_cast<void(RoundRectangle2D$Double::*)(double,double,double,double,double,double)>(&RoundRectangle2D$Double::init$))},
	{"getArcHeight", "()D", nullptr, $PUBLIC},
	{"getArcWidth", "()D", nullptr, $PUBLIC},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"setRoundRect", "(DDDDDD)V", nullptr, $PUBLIC},
	{"setRoundRect", "(Ljava/awt/geom/RoundRectangle2D;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RoundRectangle2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.RoundRectangle2D$Double", "java.awt.geom.RoundRectangle2D", "Double", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _RoundRectangle2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.RoundRectangle2D$Double",
	"java.awt.geom.RoundRectangle2D",
	"java.io.Serializable",
	_RoundRectangle2D$Double_FieldInfo_,
	_RoundRectangle2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_RoundRectangle2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.RoundRectangle2D"
};

$Object* allocate$RoundRectangle2D$Double($Class* clazz) {
	return $of($alloc(RoundRectangle2D$Double));
}

int32_t RoundRectangle2D$Double::hashCode() {
	 return this->$RoundRectangle2D::hashCode();
}

bool RoundRectangle2D$Double::equals(Object$* obj) {
	 return this->$RoundRectangle2D::equals(obj);
}

$Object* RoundRectangle2D$Double::clone() {
	 return this->$RoundRectangle2D::clone();
}

$String* RoundRectangle2D$Double::toString() {
	 return this->$RoundRectangle2D::toString();
}

void RoundRectangle2D$Double::finalize() {
	this->$RoundRectangle2D::finalize();
}

void RoundRectangle2D$Double::init$() {
	$RoundRectangle2D::init$();
}

void RoundRectangle2D$Double::init$(double x, double y, double w, double h, double arcw, double arch) {
	$RoundRectangle2D::init$();
	setRoundRect(x, y, w, h, arcw, arch);
}

double RoundRectangle2D$Double::getX() {
	return this->x;
}

double RoundRectangle2D$Double::getY() {
	return this->y;
}

double RoundRectangle2D$Double::getWidth() {
	return this->width;
}

double RoundRectangle2D$Double::getHeight() {
	return this->height;
}

double RoundRectangle2D$Double::getArcWidth() {
	return this->arcwidth;
}

double RoundRectangle2D$Double::getArcHeight() {
	return this->archeight;
}

bool RoundRectangle2D$Double::isEmpty() {
	return (this->width <= 0.0f) || (this->height <= 0.0f);
}

void RoundRectangle2D$Double::setRoundRect(double x, double y, double w, double h, double arcw, double arch) {
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
	this->arcwidth = arcw;
	this->archeight = arch;
}

void RoundRectangle2D$Double::setRoundRect($RoundRectangle2D* rr) {
	this->x = $nc(rr)->getX();
	this->y = rr->getY();
	this->width = rr->getWidth();
	this->height = rr->getHeight();
	this->arcwidth = rr->getArcWidth();
	this->archeight = rr->getArcHeight();
}

$Rectangle2D* RoundRectangle2D$Double::getBounds2D() {
	return $new($Rectangle2D$Double, this->x, this->y, this->width, this->height);
}

RoundRectangle2D$Double::RoundRectangle2D$Double() {
}

$Class* RoundRectangle2D$Double::load$($String* name, bool initialize) {
	$loadClass(RoundRectangle2D$Double, name, initialize, &_RoundRectangle2D$Double_ClassInfo_, allocate$RoundRectangle2D$Double);
	return class$;
}

$Class* RoundRectangle2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java