#include <java/awt/Rectangle.h>

#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef H
#undef MAX_VALUE
#undef MIN_VALUE
#undef OUT_BOTTOM
#undef OUT_LEFT
#undef OUT_RIGHT
#undef OUT_TOP
#undef W
#undef X
#undef Y

using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$CompoundAttribute _Rectangle_MethodAnnotations_getBounds18[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _Rectangle_MethodAnnotations_inside28[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Rectangle_MethodAnnotations_move32[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Rectangle_MethodAnnotations_reshape34[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Rectangle_MethodAnnotations_resize35[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Rectangle_FieldInfo_[] = {
	{"x", "I", nullptr, $PUBLIC, $field(Rectangle, x)},
	{"y", "I", nullptr, $PUBLIC, $field(Rectangle, y)},
	{"width", "I", nullptr, $PUBLIC, $field(Rectangle, width)},
	{"height", "I", nullptr, $PUBLIC, $field(Rectangle, height)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Rectangle, serialVersionUID)},
	{}
};

$MethodInfo _Rectangle_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle::*)()>(&Rectangle::init$))},
	{"<init>", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle::*)(Rectangle*)>(&Rectangle::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle::*)(int32_t,int32_t,int32_t,int32_t)>(&Rectangle::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle::*)(int32_t,int32_t)>(&Rectangle::init$))},
	{"<init>", "(Ljava/awt/Point;Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle::*)($Point*,$Dimension*)>(&Rectangle::init$))},
	{"<init>", "(Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle::*)($Point*)>(&Rectangle::init$))},
	{"<init>", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $method(static_cast<void(Rectangle::*)($Dimension*)>(&Rectangle::init$))},
	{"add", "(II)V", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"clip", "(DZ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(double,bool)>(&Rectangle::clip))},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"contains", "(II)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/Rectangle;)Z", nullptr, $PUBLIC},
	{"contains", "(IIII)Z", nullptr, $PUBLIC},
	{"createIntersection", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"createUnion", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Rectangle_MethodAnnotations_getBounds18},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"getX", "()D", nullptr, $PUBLIC},
	{"getY", "()D", nullptr, $PUBLIC},
	{"grow", "(II)V", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Rectangle::initIDs))},
	{"inside", "(II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Rectangle_MethodAnnotations_inside28},
	{"intersection", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"intersects", "(Ljava/awt/Rectangle;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"move", "(II)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Rectangle_MethodAnnotations_move32},
	{"outcode", "(DD)I", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Rectangle_MethodAnnotations_reshape34},
	{"resize", "(II)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Rectangle_MethodAnnotations_resize35},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setLocation", "(II)V", nullptr, $PUBLIC},
	{"setRect", "(DDDD)V", nullptr, $PUBLIC},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setSize", "(II)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{"union", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 30

$ClassInfo _Rectangle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Rectangle",
	"java.awt.geom.Rectangle2D",
	"java.io.Serializable",
	_Rectangle_FieldInfo_,
	_Rectangle_MethodInfo_
};

$Object* allocate$Rectangle($Class* clazz) {
	return $of($alloc(Rectangle));
}

int32_t Rectangle::hashCode() {
	 return this->$Rectangle2D::hashCode();
}

$Object* Rectangle::clone() {
	 return this->$Rectangle2D::clone();
}

void Rectangle::finalize() {
	this->$Rectangle2D::finalize();
}

void Rectangle::initIDs() {
	$init(Rectangle);
	$prepareNativeStatic(Rectangle, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Rectangle::init$() {
	Rectangle::init$(0, 0, 0, 0);
}

void Rectangle::init$(Rectangle* r) {
	Rectangle::init$($nc(r)->x, r->y, r->width, r->height);
}

void Rectangle::init$(int32_t x, int32_t y, int32_t width, int32_t height) {
	$Rectangle2D::init$();
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

void Rectangle::init$(int32_t width, int32_t height) {
	Rectangle::init$(0, 0, width, height);
}

void Rectangle::init$($Point* p, $Dimension* d) {
	Rectangle::init$($nc(p)->x, p->y, $nc(d)->width, d->height);
}

void Rectangle::init$($Point* p) {
	Rectangle::init$($nc(p)->x, p->y, 0, 0);
}

void Rectangle::init$($Dimension* d) {
	Rectangle::init$(0, 0, $nc(d)->width, d->height);
}

double Rectangle::getX() {
	return (double)this->x;
}

double Rectangle::getY() {
	return (double)this->y;
}

double Rectangle::getWidth() {
	return (double)this->width;
}

double Rectangle::getHeight() {
	return (double)this->height;
}

Rectangle* Rectangle::getBounds() {
	return $new(Rectangle, this->x, this->y, this->width, this->height);
}

$Rectangle2D* Rectangle::getBounds2D() {
	return $new(Rectangle, this->x, this->y, this->width, this->height);
}

void Rectangle::setBounds(Rectangle* r) {
	setBounds($nc(r)->x, r->y, r->width, r->height);
}

void Rectangle::setBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	reshape(x, y, width, height);
}

void Rectangle::setRect(double x, double y, double width, double height) {
	int32_t newx = 0;
	int32_t newy = 0;
	int32_t neww = 0;
	int32_t newh = 0;
	if (x > 2.0 * $Integer::MAX_VALUE) {
		newx = $Integer::MAX_VALUE;
		neww = -1;
	} else {
		newx = clip(x, false);
		if (width >= 0) {
			width += x - newx;
		}
		neww = clip(width, width >= 0);
	}
	if (y > 2.0 * $Integer::MAX_VALUE) {
		newy = $Integer::MAX_VALUE;
		newh = -1;
	} else {
		newy = clip(y, false);
		if (height >= 0) {
			height += y - newy;
		}
		newh = clip(height, height >= 0);
	}
	reshape(newx, newy, neww, newh);
}

int32_t Rectangle::clip(double v, bool doceil) {
	$init(Rectangle);
	if (v <= $Integer::MIN_VALUE) {
		return $Integer::MIN_VALUE;
	}
	if (v >= $Integer::MAX_VALUE) {
		return $Integer::MAX_VALUE;
	}
	return $cast(int32_t, (doceil ? $Math::ceil(v) : $Math::floor(v)));
}

void Rectangle::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

$Point* Rectangle::getLocation() {
	return $new($Point, this->x, this->y);
}

void Rectangle::setLocation($Point* p) {
	setLocation($nc(p)->x, p->y);
}

void Rectangle::setLocation(int32_t x, int32_t y) {
	move(x, y);
}

void Rectangle::move(int32_t x, int32_t y) {
	this->x = x;
	this->y = y;
}

void Rectangle::translate(int32_t dx, int32_t dy) {
	int32_t oldv = this->x;
	int32_t newv = oldv + dx;
	if (dx < 0) {
		if (newv > oldv) {
			if (this->width >= 0) {
				this->width += newv - $Integer::MIN_VALUE;
			}
			newv = $Integer::MIN_VALUE;
		}
	} else if (newv < oldv) {
		if (this->width >= 0) {
			this->width += newv - $Integer::MAX_VALUE;
			if (this->width < 0) {
				this->width = $Integer::MAX_VALUE;
			}
		}
		newv = $Integer::MAX_VALUE;
	}
	this->x = newv;
	oldv = this->y;
	newv = oldv + dy;
	if (dy < 0) {
		if (newv > oldv) {
			if (this->height >= 0) {
				this->height += newv - $Integer::MIN_VALUE;
			}
			newv = $Integer::MIN_VALUE;
		}
	} else if (newv < oldv) {
		if (this->height >= 0) {
			this->height += newv - $Integer::MAX_VALUE;
			if (this->height < 0) {
				this->height = $Integer::MAX_VALUE;
			}
		}
		newv = $Integer::MAX_VALUE;
	}
	this->y = newv;
}

$Dimension* Rectangle::getSize() {
	return $new($Dimension, this->width, this->height);
}

void Rectangle::setSize($Dimension* d) {
	setSize($nc(d)->width, d->height);
}

void Rectangle::setSize(int32_t width, int32_t height) {
	resize(width, height);
}

void Rectangle::resize(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
}

bool Rectangle::contains($Point* p) {
	return contains($nc(p)->x, p->y);
}

bool Rectangle::contains(int32_t x, int32_t y) {
	return inside(x, y);
}

bool Rectangle::contains(Rectangle* r) {
	return contains($nc(r)->x, r->y, r->width, r->height);
}

bool Rectangle::contains(int32_t X, int32_t Y, int32_t W, int32_t H) {
	int32_t w = this->width;
	int32_t h = this->height;
	if ((((w | h) | W) | H) < 0) {
		return false;
	}
	int32_t x = this->x;
	int32_t y = this->y;
	if (X < x || Y < y) {
		return false;
	}
	w += x;
	W += X;
	if (W <= X) {
		if (w >= x || W > w) {
			return false;
		}
	} else if (w >= x && W > w) {
		return false;
	}
	h += y;
	H += Y;
	if (H <= Y) {
		if (h >= y || H > h) {
			return false;
		}
	} else if (h >= y && H > h) {
		return false;
	}
	return true;
}

bool Rectangle::inside(int32_t X, int32_t Y) {
	int32_t w = this->width;
	int32_t h = this->height;
	if ((w | h) < 0) {
		return false;
	}
	int32_t x = this->x;
	int32_t y = this->y;
	if (X < x || Y < y) {
		return false;
	}
	w += x;
	h += y;
	return ((w < x || w > X) && (h < y || h > Y));
}

bool Rectangle::intersects(Rectangle* r) {
	int32_t tw = this->width;
	int32_t th = this->height;
	int32_t rw = $nc(r)->width;
	int32_t rh = r->height;
	if (rw <= 0 || rh <= 0 || tw <= 0 || th <= 0) {
		return false;
	}
	int32_t tx = this->x;
	int32_t ty = this->y;
	int32_t rx = r->x;
	int32_t ry = r->y;
	rw += rx;
	rh += ry;
	tw += tx;
	th += ty;
	return ((rw < rx || rw > tx) && (rh < ry || rh > ty) && (tw < tx || tw > rx) && (th < ty || th > ry));
}

Rectangle* Rectangle::intersection(Rectangle* r) {
	int32_t tx1 = this->x;
	int32_t ty1 = this->y;
	int32_t rx1 = $nc(r)->x;
	int32_t ry1 = r->y;
	int64_t tx2 = tx1;
	tx2 += this->width;
	int64_t ty2 = ty1;
	ty2 += this->height;
	int64_t rx2 = rx1;
	rx2 += r->width;
	int64_t ry2 = ry1;
	ry2 += r->height;
	if (tx1 < rx1) {
		tx1 = rx1;
	}
	if (ty1 < ry1) {
		ty1 = ry1;
	}
	if (tx2 > rx2) {
		tx2 = rx2;
	}
	if (ty2 > ry2) {
		ty2 = ry2;
	}
	tx2 -= tx1;
	ty2 -= ty1;
	if (tx2 < $Integer::MIN_VALUE) {
		tx2 = $Integer::MIN_VALUE;
	}
	if (ty2 < $Integer::MIN_VALUE) {
		ty2 = $Integer::MIN_VALUE;
	}
	return $new(Rectangle, tx1, ty1, (int32_t)tx2, (int32_t)ty2);
}

Rectangle* Rectangle::union$(Rectangle* r) {
	int64_t tx2 = this->width;
	int64_t ty2 = this->height;
	if ((tx2 | ty2) < 0) {
		return $new(Rectangle, r);
	}
	int64_t rx2 = $nc(r)->width;
	int64_t ry2 = r->height;
	if ((rx2 | ry2) < 0) {
		return $new(Rectangle, this);
	}
	int32_t tx1 = this->x;
	int32_t ty1 = this->y;
	tx2 += tx1;
	ty2 += ty1;
	int32_t rx1 = r->x;
	int32_t ry1 = r->y;
	rx2 += rx1;
	ry2 += ry1;
	if (tx1 > rx1) {
		tx1 = rx1;
	}
	if (ty1 > ry1) {
		ty1 = ry1;
	}
	if (tx2 < rx2) {
		tx2 = rx2;
	}
	if (ty2 < ry2) {
		ty2 = ry2;
	}
	tx2 -= tx1;
	ty2 -= ty1;
	if (tx2 > $Integer::MAX_VALUE) {
		tx2 = $Integer::MAX_VALUE;
	}
	if (ty2 > $Integer::MAX_VALUE) {
		ty2 = $Integer::MAX_VALUE;
	}
	return $new(Rectangle, tx1, ty1, (int32_t)tx2, (int32_t)ty2);
}

void Rectangle::add(int32_t newx, int32_t newy) {
	if ((this->width | this->height) < 0) {
		this->x = newx;
		this->y = newy;
		this->width = (this->height = 0);
		return;
	}
	int32_t x1 = this->x;
	int32_t y1 = this->y;
	int64_t x2 = this->width;
	int64_t y2 = this->height;
	x2 += x1;
	y2 += y1;
	if (x1 > newx) {
		x1 = newx;
	}
	if (y1 > newy) {
		y1 = newy;
	}
	if (x2 < newx) {
		x2 = newx;
	}
	if (y2 < newy) {
		y2 = newy;
	}
	x2 -= x1;
	y2 -= y1;
	if (x2 > $Integer::MAX_VALUE) {
		x2 = $Integer::MAX_VALUE;
	}
	if (y2 > $Integer::MAX_VALUE) {
		y2 = $Integer::MAX_VALUE;
	}
	reshape(x1, y1, (int32_t)x2, (int32_t)y2);
}

void Rectangle::add($Point* pt) {
	add($nc(pt)->x, pt->y);
}

void Rectangle::add(Rectangle* r) {
	int64_t tx2 = this->width;
	int64_t ty2 = this->height;
	if ((tx2 | ty2) < 0) {
		reshape($nc(r)->x, r->y, r->width, r->height);
	}
	int64_t rx2 = $nc(r)->width;
	int64_t ry2 = r->height;
	if ((rx2 | ry2) < 0) {
		return;
	}
	int32_t tx1 = this->x;
	int32_t ty1 = this->y;
	tx2 += tx1;
	ty2 += ty1;
	int32_t rx1 = r->x;
	int32_t ry1 = r->y;
	rx2 += rx1;
	ry2 += ry1;
	if (tx1 > rx1) {
		tx1 = rx1;
	}
	if (ty1 > ry1) {
		ty1 = ry1;
	}
	if (tx2 < rx2) {
		tx2 = rx2;
	}
	if (ty2 < ry2) {
		ty2 = ry2;
	}
	tx2 -= tx1;
	ty2 -= ty1;
	if (tx2 > $Integer::MAX_VALUE) {
		tx2 = $Integer::MAX_VALUE;
	}
	if (ty2 > $Integer::MAX_VALUE) {
		ty2 = $Integer::MAX_VALUE;
	}
	reshape(tx1, ty1, (int32_t)tx2, (int32_t)ty2);
}

void Rectangle::grow(int32_t h, int32_t v) {
	int64_t x0 = this->x;
	int64_t y0 = this->y;
	int64_t x1 = this->width;
	int64_t y1 = this->height;
	x1 += x0;
	y1 += y0;
	x0 -= h;
	y0 -= v;
	x1 += h;
	y1 += v;
	if (x1 < x0) {
		x1 -= x0;
		if (x1 < $Integer::MIN_VALUE) {
			x1 = $Integer::MIN_VALUE;
		}
		if (x0 < $Integer::MIN_VALUE) {
			x0 = $Integer::MIN_VALUE;
		} else if (x0 > $Integer::MAX_VALUE) {
			x0 = $Integer::MAX_VALUE;
		}
	} else {
		if (x0 < $Integer::MIN_VALUE) {
			x0 = $Integer::MIN_VALUE;
		} else if (x0 > $Integer::MAX_VALUE) {
			x0 = $Integer::MAX_VALUE;
		}
		x1 -= x0;
		if (x1 < $Integer::MIN_VALUE) {
			x1 = $Integer::MIN_VALUE;
		} else if (x1 > $Integer::MAX_VALUE) {
			x1 = $Integer::MAX_VALUE;
		}
	}
	if (y1 < y0) {
		y1 -= y0;
		if (y1 < $Integer::MIN_VALUE) {
			y1 = $Integer::MIN_VALUE;
		}
		if (y0 < $Integer::MIN_VALUE) {
			y0 = $Integer::MIN_VALUE;
		} else if (y0 > $Integer::MAX_VALUE) {
			y0 = $Integer::MAX_VALUE;
		}
	} else {
		if (y0 < $Integer::MIN_VALUE) {
			y0 = $Integer::MIN_VALUE;
		} else if (y0 > $Integer::MAX_VALUE) {
			y0 = $Integer::MAX_VALUE;
		}
		y1 -= y0;
		if (y1 < $Integer::MIN_VALUE) {
			y1 = $Integer::MIN_VALUE;
		} else if (y1 > $Integer::MAX_VALUE) {
			y1 = $Integer::MAX_VALUE;
		}
	}
	reshape((int32_t)x0, (int32_t)y0, (int32_t)x1, (int32_t)y1);
}

bool Rectangle::isEmpty() {
	return (this->width <= 0) || (this->height <= 0);
}

int32_t Rectangle::outcode(double x, double y) {
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

$Rectangle2D* Rectangle::createIntersection($Rectangle2D* r) {
	if ($instanceOf(Rectangle, r)) {
		return intersection($cast(Rectangle, r));
	}
	$var($Rectangle2D, dest, $new($Rectangle2D$Double));
	$Rectangle2D::intersect(this, r, dest);
	return dest;
}

$Rectangle2D* Rectangle::createUnion($Rectangle2D* r) {
	if ($instanceOf(Rectangle, r)) {
		return union$($cast(Rectangle, r));
	}
	$var($Rectangle2D, dest, $new($Rectangle2D$Double));
	$Rectangle2D::union$(this, r, dest);
	return dest;
}

bool Rectangle::equals(Object$* obj) {
	if ($instanceOf(Rectangle, obj)) {
		$var(Rectangle, r, $cast(Rectangle, obj));
		return ((this->x == $nc(r)->x) && (this->y == r->y) && (this->width == r->width) && (this->height == r->height));
	}
	return $Rectangle2D::equals(obj);
}

$String* Rectangle::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[x="_s, $$str(this->x), ",y="_s, $$str(this->y), ",width="_s, $$str(this->width), ",height="_s, $$str(this->height), "]"_s});
}

void clinit$Rectangle($Class* class$) {
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Rectangle::initIDs();
		}
	}
}

Rectangle::Rectangle() {
}

$Class* Rectangle::load$($String* name, bool initialize) {
	$loadClass(Rectangle, name, initialize, &_Rectangle_ClassInfo_, clinit$Rectangle, allocate$Rectangle);
	return class$;
}

$Class* Rectangle::class$ = nullptr;

	} // awt
} // java