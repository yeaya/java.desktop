#include <java/awt/geom/Rectangle2D$Double.h>

#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <jcpp.h>

#undef OUT_BOTTOM
#undef OUT_LEFT
#undef OUT_RIGHT
#undef OUT_TOP

using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Rectangle2D$Double_FieldInfo_[] = {
	{"x", "D", nullptr, $PUBLIC, $field(Rectangle2D$Double, x)},
	{"y", "D", nullptr, $PUBLIC, $field(Rectangle2D$Double, y)},
	{"width", "D", nullptr, $PUBLIC, $field(Rectangle2D$Double, width)},
	{"height", "D", nullptr, $PUBLIC, $field(Rectangle2D$Double, height)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Rectangle2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _Rectangle2D$Double_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle2D$Double::*)()>(&Rectangle2D$Double::init$))},
	{"<init>", "(DDDD)V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle2D$Double::*)(double,double,double,double)>(&Rectangle2D$Double::init$))},
	{"createIntersection", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"createUnion", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"outcode", "(DD)I", nullptr, $PUBLIC},
	{"setRect", "(DDDD)V", nullptr, $PUBLIC},
	{"setRect", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Rectangle2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.Rectangle2D$Double", "java.awt.geom.Rectangle2D", "Double", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Rectangle2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Rectangle2D$Double",
	"java.awt.geom.Rectangle2D",
	"java.io.Serializable",
	_Rectangle2D$Double_FieldInfo_,
	_Rectangle2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_Rectangle2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Rectangle2D"
};

$Object* allocate$Rectangle2D$Double($Class* clazz) {
	return $of($alloc(Rectangle2D$Double));
}

int32_t Rectangle2D$Double::hashCode() {
	 return this->$Rectangle2D::hashCode();
}

bool Rectangle2D$Double::equals(Object$* obj) {
	 return this->$Rectangle2D::equals(obj);
}

$Object* Rectangle2D$Double::clone() {
	 return this->$Rectangle2D::clone();
}

void Rectangle2D$Double::finalize() {
	this->$Rectangle2D::finalize();
}

void Rectangle2D$Double::init$() {
	$Rectangle2D::init$();
}

void Rectangle2D$Double::init$(double x, double y, double w, double h) {
	$Rectangle2D::init$();
	setRect(x, y, w, h);
}

double Rectangle2D$Double::getX() {
	return this->x;
}

double Rectangle2D$Double::getY() {
	return this->y;
}

double Rectangle2D$Double::getWidth() {
	return this->width;
}

double Rectangle2D$Double::getHeight() {
	return this->height;
}

bool Rectangle2D$Double::isEmpty() {
	return (this->width <= 0.0) || (this->height <= 0.0);
}

void Rectangle2D$Double::setRect(double x, double y, double w, double h) {
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
}

void Rectangle2D$Double::setRect($Rectangle2D* r) {
	this->x = $nc(r)->getX();
	this->y = r->getY();
	this->width = r->getWidth();
	this->height = r->getHeight();
}

int32_t Rectangle2D$Double::outcode(double x, double y) {
	int32_t out = 0;
	if (this->width <= 0) {
		out |= $Rectangle2D::OUT_LEFT | $Rectangle2D::OUT_RIGHT;
	} else if (x < this->x) {
		out |= $Rectangle2D::OUT_LEFT;
	} else if (x > this->x + this->width) {
		out |= $Rectangle2D::OUT_RIGHT;
	}
	if (this->height <= 0) {
		out |= $Rectangle2D::OUT_TOP | $Rectangle2D::OUT_BOTTOM;
	} else if (y < this->y) {
		out |= $Rectangle2D::OUT_TOP;
	} else if (y > this->y + this->height) {
		out |= $Rectangle2D::OUT_BOTTOM;
	}
	return out;
}

$Rectangle2D* Rectangle2D$Double::getBounds2D() {
	return $new(Rectangle2D$Double, this->x, this->y, this->width, this->height);
}

$Rectangle2D* Rectangle2D$Double::createIntersection($Rectangle2D* r) {
	$var($Rectangle2D, dest, $new(Rectangle2D$Double));
	$Rectangle2D::intersect(this, r, dest);
	return dest;
}

$Rectangle2D* Rectangle2D$Double::createUnion($Rectangle2D* r) {
	$var($Rectangle2D, dest, $new(Rectangle2D$Double));
	$Rectangle2D::union$(this, r, dest);
	return dest;
}

$String* Rectangle2D$Double::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[x="_s, $$str(this->x), ",y="_s, $$str(this->y), ",w="_s, $$str(this->width), ",h="_s, $$str(this->height), "]"_s});
}

Rectangle2D$Double::Rectangle2D$Double() {
}

$Class* Rectangle2D$Double::load$($String* name, bool initialize) {
	$loadClass(Rectangle2D$Double, name, initialize, &_Rectangle2D$Double_ClassInfo_, allocate$Rectangle2D$Double);
	return class$;
}

$Class* Rectangle2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java