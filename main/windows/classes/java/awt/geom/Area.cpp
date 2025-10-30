#include <java/awt/geom/Area.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/AreaIterator.h>
#include <java/awt/geom/FlatteningPathIterator.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <sun/awt/geom/AreaOp$AddOp.h>
#include <sun/awt/geom/AreaOp$EOWindOp.h>
#include <sun/awt/geom/AreaOp$IntOp.h>
#include <sun/awt/geom/AreaOp$NZWindOp.h>
#include <sun/awt/geom/AreaOp$SubOp.h>
#include <sun/awt/geom/AreaOp$XorOp.h>
#include <sun/awt/geom/AreaOp.h>
#include <sun/awt/geom/Crossings.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef WIND_EVEN_ODD

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AreaIterator = ::java::awt::geom::AreaIterator;
using $FlatteningPathIterator = ::java::awt::geom::FlatteningPathIterator;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AreaOp = ::sun::awt::geom::AreaOp;
using $AreaOp$AddOp = ::sun::awt::geom::AreaOp$AddOp;
using $AreaOp$EOWindOp = ::sun::awt::geom::AreaOp$EOWindOp;
using $AreaOp$IntOp = ::sun::awt::geom::AreaOp$IntOp;
using $AreaOp$NZWindOp = ::sun::awt::geom::AreaOp$NZWindOp;
using $AreaOp$SubOp = ::sun::awt::geom::AreaOp$SubOp;
using $AreaOp$XorOp = ::sun::awt::geom::AreaOp$XorOp;
using $Crossings = ::sun::awt::geom::Crossings;
using $Curve = ::sun::awt::geom::Curve;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Area_FieldInfo_[] = {
	{"EmptyCurves", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/geom/Curve;>;", $PRIVATE | $STATIC, $staticField(Area, EmptyCurves)},
	{"curves", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/geom/Curve;>;", $PRIVATE, $field(Area, curves)},
	{"cachedBounds", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(Area, cachedBounds)},
	{}
};

$MethodInfo _Area_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Area::*)()>(&Area::init$))},
	{"<init>", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $method(static_cast<void(Area::*)($Shape*)>(&Area::init$))},
	{"add", "(Ljava/awt/geom/Area;)V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"createTransformedArea", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/Area;", nullptr, $PUBLIC},
	{"equals", "(Ljava/awt/geom/Area;)Z", nullptr, $PUBLIC},
	{"exclusiveOr", "(Ljava/awt/geom/Area;)V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getCachedBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(Area::*)()>(&Area::getCachedBounds))},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"intersect", "(Ljava/awt/geom/Area;)V", nullptr, $PUBLIC},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"invalidateBounds", "()V", nullptr, $PRIVATE, $method(static_cast<void(Area::*)()>(&Area::invalidateBounds))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isPolygonal", "()Z", nullptr, $PUBLIC},
	{"isRectangular", "()Z", nullptr, $PUBLIC},
	{"isSingular", "()Z", nullptr, $PUBLIC},
	{"pathToCurves", "(Ljava/awt/geom/PathIterator;)Ljava/util/Vector;", "(Ljava/awt/geom/PathIterator;)Ljava/util/Vector<Lsun/awt/geom/Curve;>;", $PRIVATE | $STATIC, $method(static_cast<$Vector*(*)($PathIterator*)>(&Area::pathToCurves))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"subtract", "(Ljava/awt/geom/Area;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Area_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Area",
	"java.lang.Object",
	"java.awt.Shape,java.lang.Cloneable",
	_Area_FieldInfo_,
	_Area_MethodInfo_
};

$Object* allocate$Area($Class* clazz) {
	return $of($alloc(Area));
}

int32_t Area::hashCode() {
	 return this->$Shape::hashCode();
}

bool Area::equals(Object$* arg0) {
	 return this->$Shape::equals(arg0);
}

$String* Area::toString() {
	 return this->$Shape::toString();
}

void Area::finalize() {
	this->$Shape::finalize();
}

$Vector* Area::EmptyCurves = nullptr;

void Area::init$() {
	$set(this, curves, Area::EmptyCurves);
}

void Area::init$($Shape* s) {
	if ($instanceOf(Area, s)) {
		$set(this, curves, $nc(($cast(Area, s)))->curves);
	} else {
		$set(this, curves, pathToCurves($($nc(s)->getPathIterator(nullptr))));
	}
}

$Vector* Area::pathToCurves($PathIterator* pi) {
	$init(Area);
	$useLocalCurrentObjectStackCache();
	$var($Vector, curves, $new($Vector));
	int32_t windingRule = $nc(pi)->getWindingRule();
	$var($doubles, coords, $new($doubles, 23));
	double movx = (double)0;
	double movy = (double)0;
	double curx = (double)0;
	double cury = (double)0;
	double newx = 0.0;
	double newy = 0.0;
	while (!pi->isDone()) {
		switch (pi->currentSegment(coords)) {
		case $PathIterator::SEG_MOVETO:
			{
				$Curve::insertLine(curves, curx, cury, movx, movy);
				curx = (movx = coords->get(0));
				cury = (movy = coords->get(1));
				$Curve::insertMove(curves, movx, movy);
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				newx = coords->get(0);
				newy = coords->get(1);
				$Curve::insertLine(curves, curx, cury, newx, newy);
				curx = newx;
				cury = newy;
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				newx = coords->get(2);
				newy = coords->get(3);
				$Curve::insertQuad(curves, curx, cury, coords);
				curx = newx;
				cury = newy;
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				newx = coords->get(4);
				newy = coords->get(5);
				$Curve::insertCubic(curves, curx, cury, coords);
				curx = newx;
				cury = newy;
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				$Curve::insertLine(curves, curx, cury, movx, movy);
				curx = movx;
				cury = movy;
				break;
			}
		}
		pi->next();
	}
	$Curve::insertLine(curves, curx, cury, movx, movy);
	$var($AreaOp, operator$, nullptr);
	if (windingRule == $PathIterator::WIND_EVEN_ODD) {
		$assign(operator$, $new($AreaOp$EOWindOp));
	} else {
		$assign(operator$, $new($AreaOp$NZWindOp));
	}
	return $nc(operator$)->calculate(curves, Area::EmptyCurves);
}

void Area::add(Area* rhs) {
	$set(this, curves, $$new($AreaOp$AddOp)->calculate(this->curves, $nc(rhs)->curves));
	invalidateBounds();
}

void Area::subtract(Area* rhs) {
	$set(this, curves, $$new($AreaOp$SubOp)->calculate(this->curves, $nc(rhs)->curves));
	invalidateBounds();
}

void Area::intersect(Area* rhs) {
	$set(this, curves, $$new($AreaOp$IntOp)->calculate(this->curves, $nc(rhs)->curves));
	invalidateBounds();
}

void Area::exclusiveOr(Area* rhs) {
	$set(this, curves, $$new($AreaOp$XorOp)->calculate(this->curves, $nc(rhs)->curves));
	invalidateBounds();
}

void Area::reset() {
	$set(this, curves, $new($Vector));
	invalidateBounds();
}

bool Area::isEmpty() {
	return ($nc(this->curves)->size() == 0);
}

bool Area::isPolygonal() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, enum_, $nc(this->curves)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		if ($nc(($cast($Curve, $(enum_->nextElement()))))->getOrder() > 1) {
			return false;
		}
	}
	return true;
}

bool Area::isRectangular() {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->curves)->size();
	if (size == 0) {
		return true;
	}
	if (size > 3) {
		return false;
	}
	$var($Curve, c1, $cast($Curve, $nc(this->curves)->get(1)));
	$var($Curve, c2, $cast($Curve, $nc(this->curves)->get(2)));
	bool var$0 = $nc(c1)->getOrder() != 1;
	if (var$0 || $nc(c2)->getOrder() != 1) {
		return false;
	}
	double var$2 = $nc(c1)->getXTop();
	bool var$1 = var$2 != c1->getXBot();
	if (!var$1) {
		double var$3 = $nc(c2)->getXTop();
		var$1 = var$3 != c2->getXBot();
	}
	if (var$1) {
		return false;
	}
	double var$5 = $nc(c1)->getYTop();
	bool var$4 = var$5 != $nc(c2)->getYTop();
	if (!var$4) {
		double var$6 = $nc(c1)->getYBot();
		var$4 = var$6 != $nc(c2)->getYBot();
	}
	if (var$4) {
		return false;
	}
	return true;
}

bool Area::isSingular() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->curves)->size() < 3) {
		return true;
	}
	$var($Enumeration, enum_, $nc(this->curves)->elements());
	$nc(enum_)->nextElement();
	while (enum_->hasMoreElements()) {
		if ($nc(($cast($Curve, $(enum_->nextElement()))))->getOrder() == 0) {
			return false;
		}
	}
	return true;
}

void Area::invalidateBounds() {
	$set(this, cachedBounds, nullptr);
}

$Rectangle2D* Area::getCachedBounds() {
	$useLocalCurrentObjectStackCache();
	if (this->cachedBounds != nullptr) {
		return this->cachedBounds;
	}
	$var($Rectangle2D, r, $new($Rectangle2D$Double));
	if ($nc(this->curves)->size() > 0) {
		$var($Curve, c, $cast($Curve, $nc(this->curves)->get(0)));
		double var$0 = $nc(c)->getX0();
		r->setRect(var$0, c->getY0(), (double)0, (double)0);
		for (int32_t i = 1; i < $nc(this->curves)->size(); ++i) {
			$nc(($cast($Curve, $($nc(this->curves)->get(i)))))->enlarge(r);
		}
	}
	return ($set(this, cachedBounds, r));
}

$Rectangle2D* Area::getBounds2D() {
	return $nc($(getCachedBounds()))->getBounds2D();
}

$Rectangle* Area::getBounds() {
	return $nc($(getCachedBounds()))->getBounds();
}

$Object* Area::clone() {
	return $of($new(Area, this));
}

bool Area::equals(Area* other) {
	$useLocalCurrentObjectStackCache();
	if (other == this) {
		return true;
	}
	if (other == nullptr) {
		return false;
	}
	$var($Vector, c, $$new($AreaOp$XorOp)->calculate(this->curves, $nc(other)->curves));
	return $nc(c)->isEmpty();
}

void Area::transform($AffineTransform* t) {
	if (t == nullptr) {
		$throwNew($NullPointerException, "transform must not be null"_s);
	}
	$set(this, curves, pathToCurves($(getPathIterator(t))));
	invalidateBounds();
}

Area* Area::createTransformedArea($AffineTransform* t) {
	$var(Area, a, $new(Area, this));
	a->transform(t);
	return a;
}

bool Area::contains(double x, double y) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($(getCachedBounds()))->contains(x, y)) {
		return false;
	}
	$var($Enumeration, enum_, $nc(this->curves)->elements());
	int32_t crossings = 0;
	while ($nc(enum_)->hasMoreElements()) {
		$var($Curve, c, $cast($Curve, enum_->nextElement()));
		crossings += $nc(c)->crossingsFor(x, y);
	}
	return (((int32_t)(crossings & (uint32_t)1)) == 1);
}

bool Area::contains($Point2D* p) {
	double var$0 = $nc(p)->getX();
	return contains(var$0, p->getY());
}

bool Area::contains(double x, double y, double w, double h) {
	$useLocalCurrentObjectStackCache();
	if (w < 0 || h < 0) {
		return false;
	}
	if (!$nc($(getCachedBounds()))->contains(x, y, w, h)) {
		return false;
	}
	$var($Crossings, c, $Crossings::findCrossings(this->curves, x, y, x + w, y + h));
	return (c != nullptr && c->covers(y, y + h));
}

bool Area::contains($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return contains(var$0, var$1, var$2, r->getHeight());
}

bool Area::intersects(double x, double y, double w, double h) {
	$useLocalCurrentObjectStackCache();
	if (w < 0 || h < 0) {
		return false;
	}
	if (!$nc($(getCachedBounds()))->intersects(x, y, w, h)) {
		return false;
	}
	$var($Crossings, c, $Crossings::findCrossings(this->curves, x, y, x + w, y + h));
	return (c == nullptr || !$nc(c)->isEmpty());
}

bool Area::intersects($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return intersects(var$0, var$1, var$2, r->getHeight());
}

$PathIterator* Area::getPathIterator($AffineTransform* at) {
	return $new($AreaIterator, this->curves, at);
}

$PathIterator* Area::getPathIterator($AffineTransform* at, double flatness) {
	return $new($FlatteningPathIterator, $(getPathIterator(at)), flatness);
}

void clinit$Area($Class* class$) {
	$assignStatic(Area::EmptyCurves, $new($Vector));
}

Area::Area() {
}

$Class* Area::load$($String* name, bool initialize) {
	$loadClass(Area, name, initialize, &_Area_ClassInfo_, clinit$Area, allocate$Area);
	return class$;
}

$Class* Area::class$ = nullptr;

		} // geom
	} // awt
} // java