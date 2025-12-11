#include <java/awt/geom/Rectangle2D$Float.h>

#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <jcpp.h>

#undef OUT_BOTTOM
#undef OUT_LEFT
#undef OUT_RIGHT
#undef OUT_TOP

using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Rectangle2D$Float_FieldInfo_[] = {
	{"x", "F", nullptr, $PUBLIC, $field(Rectangle2D$Float, x)},
	{"y", "F", nullptr, $PUBLIC, $field(Rectangle2D$Float, y)},
	{"width", "F", nullptr, $PUBLIC, $field(Rectangle2D$Float, width)},
	{"height", "F", nullptr, $PUBLIC, $field(Rectangle2D$Float, height)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Rectangle2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _Rectangle2D$Float_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle2D$Float::*)()>(&Rectangle2D$Float::init$))},
	{"<init>", "(FFFF)V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle2D$Float::*)(float,float,float,float)>(&Rectangle2D$Float::init$))},
	{"createIntersection", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"createUnion", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"outcode", "(DD)I", nullptr, $PUBLIC},
	{"setRect", "(FFFF)V", nullptr, $PUBLIC},
	{"setRect", "(DDDD)V", nullptr, $PUBLIC},
	{"setRect", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Rectangle2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.Rectangle2D$Float", "java.awt.geom.Rectangle2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Rectangle2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Rectangle2D$Float",
	"java.awt.geom.Rectangle2D",
	"java.io.Serializable",
	_Rectangle2D$Float_FieldInfo_,
	_Rectangle2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_Rectangle2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Rectangle2D"
};

$Object* allocate$Rectangle2D$Float($Class* clazz) {
	return $of($alloc(Rectangle2D$Float));
}

int32_t Rectangle2D$Float::hashCode() {
	 return this->$Rectangle2D::hashCode();
}

bool Rectangle2D$Float::equals(Object$* obj) {
	 return this->$Rectangle2D::equals(obj);
}

$Object* Rectangle2D$Float::clone() {
	 return this->$Rectangle2D::clone();
}

void Rectangle2D$Float::finalize() {
	this->$Rectangle2D::finalize();
}

void Rectangle2D$Float::init$() {
	$Rectangle2D::init$();
}

void Rectangle2D$Float::init$(float x, float y, float w, float h) {
	$Rectangle2D::init$();
	setRect(x, y, w, h);
}

double Rectangle2D$Float::getX() {
	return (double)this->x;
}

double Rectangle2D$Float::getY() {
	return (double)this->y;
}

double Rectangle2D$Float::getWidth() {
	return (double)this->width;
}

double Rectangle2D$Float::getHeight() {
	return (double)this->height;
}

bool Rectangle2D$Float::isEmpty() {
	return (this->width <= 0.0f) || (this->height <= 0.0f);
}

void Rectangle2D$Float::setRect(float x, float y, float w, float h) {
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
}

void Rectangle2D$Float::setRect(double x, double y, double w, double h) {
	this->x = (float)x;
	this->y = (float)y;
	this->width = (float)w;
	this->height = (float)h;
}

void Rectangle2D$Float::setRect($Rectangle2D* r) {
	this->x = (float)$nc(r)->getX();
	this->y = (float)r->getY();
	this->width = (float)r->getWidth();
	this->height = (float)r->getHeight();
}

int32_t Rectangle2D$Float::outcode(double x, double y) {
	int32_t out = 0;
	if (this->width <= 0) {
		out |= $Rectangle2D::OUT_LEFT | $Rectangle2D::OUT_RIGHT;
	} else if (x < this->x) {
		out |= $Rectangle2D::OUT_LEFT;
	} else if (x > this->x + (double)this->width) {
		out |= $Rectangle2D::OUT_RIGHT;
	}
	if (this->height <= 0) {
		out |= $Rectangle2D::OUT_TOP | $Rectangle2D::OUT_BOTTOM;
	} else if (y < this->y) {
		out |= $Rectangle2D::OUT_TOP;
	} else if (y > this->y + (double)this->height) {
		out |= $Rectangle2D::OUT_BOTTOM;
	}
	return out;
}

$Rectangle2D* Rectangle2D$Float::getBounds2D() {
	return $new(Rectangle2D$Float, this->x, this->y, this->width, this->height);
}

$Rectangle2D* Rectangle2D$Float::createIntersection($Rectangle2D* r) {
	$var($Rectangle2D, dest, nullptr);
	if ($instanceOf(Rectangle2D$Float, r)) {
		$assign(dest, $new(Rectangle2D$Float));
	} else {
		$assign(dest, $new($Rectangle2D$Double));
	}
	$Rectangle2D::intersect(this, r, dest);
	return dest;
}

$Rectangle2D* Rectangle2D$Float::createUnion($Rectangle2D* r) {
	$var($Rectangle2D, dest, nullptr);
	if ($instanceOf(Rectangle2D$Float, r)) {
		$assign(dest, $new(Rectangle2D$Float));
	} else {
		$assign(dest, $new($Rectangle2D$Double));
	}
	$Rectangle2D::union$(this, r, dest);
	return dest;
}

$String* Rectangle2D$Float::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[x="_s, $$str(this->x), ",y="_s, $$str(this->y), ",w="_s, $$str(this->width), ",h="_s, $$str(this->height), "]"_s});
}

Rectangle2D$Float::Rectangle2D$Float() {
}

$Class* Rectangle2D$Float::load$($String* name, bool initialize) {
	$loadClass(Rectangle2D$Float, name, initialize, &_Rectangle2D$Float_ClassInfo_, allocate$Rectangle2D$Float);
	return class$;
}

$Class* Rectangle2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java