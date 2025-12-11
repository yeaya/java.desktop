#include <java/awt/Polygon.h>

#include <java/awt/Point.h>
#include <java/awt/Polygon$PolygonPathIterator.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/NegativeArraySizeException.h>
#include <java/util/Arrays.h>
#include <sun/awt/geom/Crossings$EvenOdd.h>
#include <sun/awt/geom/Crossings.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_LENGTH
#undef MIN_VALUE

using $Point = ::java::awt::Point;
using $Polygon$PolygonPathIterator = ::java::awt::Polygon$PolygonPathIterator;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NegativeArraySizeException = ::java::lang::NegativeArraySizeException;
using $Arrays = ::java::util::Arrays;
using $Crossings = ::sun::awt::geom::Crossings;
using $Crossings$EvenOdd = ::sun::awt::geom::Crossings$EvenOdd;

namespace java {
	namespace awt {

$CompoundAttribute _Polygon_MethodAnnotations_getBoundingBox10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Polygon_MethodAnnotations_inside16[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Polygon_FieldInfo_[] = {
	{"npoints", "I", nullptr, $PUBLIC, $field(Polygon, npoints)},
	{"xpoints", "[I", nullptr, $PUBLIC, $field(Polygon, xpoints)},
	{"ypoints", "[I", nullptr, $PUBLIC, $field(Polygon, ypoints)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(Polygon, bounds)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Polygon, serialVersionUID)},
	{"MIN_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Polygon, MIN_LENGTH)},
	{}
};

$MethodInfo _Polygon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Polygon::*)()>(&Polygon::init$))},
	{"<init>", "([I[II)V", nullptr, $PUBLIC, $method(static_cast<void(Polygon::*)($ints*,$ints*,int32_t)>(&Polygon::init$))},
	{"addPoint", "(II)V", nullptr, $PUBLIC},
	{"calculateBounds", "([I[II)V", nullptr, 0},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"contains", "(II)Z", nullptr, $PUBLIC},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"getBoundingBox", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Polygon_MethodAnnotations_getBoundingBox10},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getCrossings", "(DDDD)Lsun/awt/geom/Crossings;", nullptr, $PRIVATE, $method(static_cast<$Crossings*(Polygon::*)(double,double,double,double)>(&Polygon::getCrossings))},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"inside", "(II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Polygon_MethodAnnotations_inside16},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{"updateBounds", "(II)V", nullptr, 0},
	{}
};

$InnerClassInfo _Polygon_InnerClassesInfo_[] = {
	{"java.awt.Polygon$PolygonPathIterator", "java.awt.Polygon", "PolygonPathIterator", 0},
	{}
};

$ClassInfo _Polygon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Polygon",
	"java.lang.Object",
	"java.awt.Shape,java.io.Serializable",
	_Polygon_FieldInfo_,
	_Polygon_MethodInfo_,
	nullptr,
	nullptr,
	_Polygon_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Polygon$PolygonPathIterator"
};

$Object* allocate$Polygon($Class* clazz) {
	return $of($alloc(Polygon));
}

int32_t Polygon::hashCode() {
	 return this->$Shape::hashCode();
}

bool Polygon::equals(Object$* arg0) {
	 return this->$Shape::equals(arg0);
}

$Object* Polygon::clone() {
	 return this->$Shape::clone();
}

$String* Polygon::toString() {
	 return this->$Shape::toString();
}

void Polygon::finalize() {
	this->$Shape::finalize();
}

void Polygon::init$() {
	$set(this, xpoints, $new($ints, Polygon::MIN_LENGTH));
	$set(this, ypoints, $new($ints, Polygon::MIN_LENGTH));
}

void Polygon::init$($ints* xpoints, $ints* ypoints, int32_t npoints) {
	if (npoints > $nc(xpoints)->length || npoints > $nc(ypoints)->length) {
		$throwNew($IndexOutOfBoundsException, "npoints > xpoints.length || npoints > ypoints.length"_s);
	}
	if (npoints < 0) {
		$throwNew($NegativeArraySizeException, "npoints < 0"_s);
	}
	this->npoints = npoints;
	$set(this, xpoints, $Arrays::copyOf(xpoints, npoints));
	$set(this, ypoints, $Arrays::copyOf(ypoints, npoints));
}

void Polygon::reset() {
	this->npoints = 0;
	$set(this, bounds, nullptr);
}

void Polygon::invalidate() {
	$set(this, bounds, nullptr);
}

void Polygon::translate(int32_t deltaX, int32_t deltaY) {
	for (int32_t i = 0; i < this->npoints; ++i) {
		(*$nc(this->xpoints))[i] += deltaX;
		(*$nc(this->ypoints))[i] += deltaY;
	}
	if (this->bounds != nullptr) {
		$nc(this->bounds)->translate(deltaX, deltaY);
	}
}

void Polygon::calculateBounds($ints* xpoints, $ints* ypoints, int32_t npoints) {
	int32_t boundsMinX = $Integer::MAX_VALUE;
	int32_t boundsMinY = $Integer::MAX_VALUE;
	int32_t boundsMaxX = $Integer::MIN_VALUE;
	int32_t boundsMaxY = $Integer::MIN_VALUE;
	for (int32_t i = 0; i < npoints; ++i) {
		int32_t x = $nc(xpoints)->get(i);
		boundsMinX = $Math::min(boundsMinX, x);
		boundsMaxX = $Math::max(boundsMaxX, x);
		int32_t y = $nc(ypoints)->get(i);
		boundsMinY = $Math::min(boundsMinY, y);
		boundsMaxY = $Math::max(boundsMaxY, y);
	}
	$set(this, bounds, $new($Rectangle, boundsMinX, boundsMinY, boundsMaxX - boundsMinX, boundsMaxY - boundsMinY));
}

void Polygon::updateBounds(int32_t x, int32_t y) {
	if (x < $nc(this->bounds)->x) {
		$nc(this->bounds)->width = $nc(this->bounds)->width + ($nc(this->bounds)->x - x);
		$nc(this->bounds)->x = x;
	} else {
		$nc(this->bounds)->width = $Math::max($nc(this->bounds)->width, x - $nc(this->bounds)->x);
	}
	if (y < $nc(this->bounds)->y) {
		$nc(this->bounds)->height = $nc(this->bounds)->height + ($nc(this->bounds)->y - y);
		$nc(this->bounds)->y = y;
	} else {
		$nc(this->bounds)->height = $Math::max($nc(this->bounds)->height, y - $nc(this->bounds)->y);
	}
}

void Polygon::addPoint(int32_t x, int32_t y) {
	if (this->npoints >= $nc(this->xpoints)->length || this->npoints >= $nc(this->ypoints)->length) {
		int32_t newLength = this->npoints * 2;
		if (newLength < Polygon::MIN_LENGTH) {
			newLength = Polygon::MIN_LENGTH;
		} else if (((int32_t)(newLength & (uint32_t)(newLength - 1))) != 0) {
			newLength = $Integer::highestOneBit(newLength);
		}
		$set(this, xpoints, $Arrays::copyOf(this->xpoints, newLength));
		$set(this, ypoints, $Arrays::copyOf(this->ypoints, newLength));
	}
	$nc(this->xpoints)->set(this->npoints, x);
	$nc(this->ypoints)->set(this->npoints, y);
	++this->npoints;
	if (this->bounds != nullptr) {
		updateBounds(x, y);
	}
}

$Rectangle* Polygon::getBounds() {
	return getBoundingBox();
}

$Rectangle* Polygon::getBoundingBox() {
	if (this->npoints == 0) {
		return $new($Rectangle);
	}
	if (this->bounds == nullptr) {
		calculateBounds(this->xpoints, this->ypoints, this->npoints);
	}
	return $nc(this->bounds)->getBounds();
}

bool Polygon::contains($Point* p) {
	return contains($nc(p)->x, p->y);
}

bool Polygon::contains(int32_t x, int32_t y) {
	return contains((double)x, (double)y);
}

bool Polygon::inside(int32_t x, int32_t y) {
	return contains((double)x, (double)y);
}

$Rectangle2D* Polygon::getBounds2D() {
	return getBounds();
}

bool Polygon::contains(double x, double y) {
	if (this->npoints <= 2 || !$nc($(getBoundingBox()))->contains(x, y)) {
		return false;
	}
	int32_t hits = 0;
	int32_t lastx = $nc(this->xpoints)->get(this->npoints - 1);
	int32_t lasty = $nc(this->ypoints)->get(this->npoints - 1);
	int32_t curx = 0;
	int32_t cury = 0;
	for (int32_t i = 0; i < this->npoints; lastx = curx, lasty = cury, ++i) {
		curx = $nc(this->xpoints)->get(i);
		cury = $nc(this->ypoints)->get(i);
		if (cury == lasty) {
			continue;
		}
		int32_t leftx = 0;
		if (curx < lastx) {
			if (x >= lastx) {
				continue;
			}
			leftx = curx;
		} else {
			if (x >= curx) {
				continue;
			}
			leftx = lastx;
		}
		double test1 = 0.0;
		double test2 = 0.0;
		if (cury < lasty) {
			if (y < cury || y >= lasty) {
				continue;
			}
			if (x < leftx) {
				++hits;
				continue;
			}
			test1 = x - curx;
			test2 = y - cury;
		} else {
			if (y < lasty || y >= cury) {
				continue;
			}
			if (x < leftx) {
				++hits;
				continue;
			}
			test1 = x - lastx;
			test2 = y - lasty;
		}
		if (test1 < (test2 / (lasty - cury) * (lastx - curx))) {
			++hits;
		}
	}
	return (((int32_t)(hits & (uint32_t)1)) != 0);
}

$Crossings* Polygon::getCrossings(double xlo, double ylo, double xhi, double yhi) {
	$var($Crossings, cross, $new($Crossings$EvenOdd, xlo, ylo, xhi, yhi));
	int32_t lastx = $nc(this->xpoints)->get(this->npoints - 1);
	int32_t lasty = $nc(this->ypoints)->get(this->npoints - 1);
	int32_t curx = 0;
	int32_t cury = 0;
	for (int32_t i = 0; i < this->npoints; ++i) {
		curx = $nc(this->xpoints)->get(i);
		cury = $nc(this->ypoints)->get(i);
		if (cross->accumulateLine((double)lastx, (double)lasty, (double)curx, (double)cury)) {
			return nullptr;
		}
		lastx = curx;
		lasty = cury;
	}
	return cross;
}

bool Polygon::contains($Point2D* p) {
	double var$0 = $nc(p)->getX();
	return contains(var$0, p->getY());
}

bool Polygon::intersects(double x, double y, double w, double h) {
	$useLocalCurrentObjectStackCache();
	if (this->npoints <= 0 || !$nc($(getBoundingBox()))->intersects(x, y, w, h)) {
		return false;
	}
	$var($Crossings, cross, getCrossings(x, y, x + w, y + h));
	return (cross == nullptr || !$nc(cross)->isEmpty());
}

bool Polygon::intersects($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return intersects(var$0, var$1, var$2, r->getHeight());
}

bool Polygon::contains(double x, double y, double w, double h) {
	$useLocalCurrentObjectStackCache();
	if (this->npoints <= 0 || !$nc($(getBoundingBox()))->intersects(x, y, w, h)) {
		return false;
	}
	$var($Crossings, cross, getCrossings(x, y, x + w, y + h));
	return (cross != nullptr && cross->covers(y, y + h));
}

bool Polygon::contains($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return contains(var$0, var$1, var$2, r->getHeight());
}

$PathIterator* Polygon::getPathIterator($AffineTransform* at) {
	return $new($Polygon$PolygonPathIterator, this, this, at);
}

$PathIterator* Polygon::getPathIterator($AffineTransform* at, double flatness) {
	return getPathIterator(at);
}

Polygon::Polygon() {
}

$Class* Polygon::load$($String* name, bool initialize) {
	$loadClass(Polygon, name, initialize, &_Polygon_ClassInfo_, allocate$Polygon);
	return class$;
}

$Class* Polygon::class$ = nullptr;

	} // awt
} // java