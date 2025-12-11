#include <java/awt/geom/RectIterator.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_LINETO
#undef SEG_MOVETO
#undef WIND_NON_ZERO

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _RectIterator_FieldInfo_[] = {
	{"x", "D", nullptr, 0, $field(RectIterator, x)},
	{"y", "D", nullptr, 0, $field(RectIterator, y)},
	{"w", "D", nullptr, 0, $field(RectIterator, w)},
	{"h", "D", nullptr, 0, $field(RectIterator, h)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(RectIterator, affine)},
	{"index", "I", nullptr, 0, $field(RectIterator, index)},
	{}
};

$MethodInfo _RectIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(RectIterator::*)($Rectangle2D*,$AffineTransform*)>(&RectIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RectIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.RectIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_RectIterator_FieldInfo_,
	_RectIterator_MethodInfo_
};

$Object* allocate$RectIterator($Class* clazz) {
	return $of($alloc(RectIterator));
}

void RectIterator::init$($Rectangle2D* r, $AffineTransform* at) {
	this->x = $nc(r)->getX();
	this->y = r->getY();
	this->w = r->getWidth();
	this->h = r->getHeight();
	$set(this, affine, at);
	if (this->w < 0 || this->h < 0) {
		this->index = 6;
	}
}

int32_t RectIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool RectIterator::isDone() {
	return this->index > 5;
}

void RectIterator::next() {
	++this->index;
}

int32_t RectIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "rect iterator out of bounds"_s);
	}
	if (this->index == 5) {
		return $PathIterator::SEG_CLOSE;
	}
	$nc(coords)->set(0, (float)this->x);
	coords->set(1, (float)this->y);
	if (this->index == 1 || this->index == 2) {
		(*coords)[0] += (float)this->w;
	}
	if (this->index == 2 || this->index == 3) {
		(*coords)[1] += (float)this->h;
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, 1);
	}
	return (this->index == 0 ? $PathIterator::SEG_MOVETO : $PathIterator::SEG_LINETO);
}

int32_t RectIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "rect iterator out of bounds"_s);
	}
	if (this->index == 5) {
		return $PathIterator::SEG_CLOSE;
	}
	$nc(coords)->set(0, this->x);
	coords->set(1, this->y);
	if (this->index == 1 || this->index == 2) {
		(*coords)[0] += this->w;
	}
	if (this->index == 2 || this->index == 3) {
		(*coords)[1] += this->h;
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, 1);
	}
	return (this->index == 0 ? $PathIterator::SEG_MOVETO : $PathIterator::SEG_LINETO);
}

RectIterator::RectIterator() {
}

$Class* RectIterator::load$($String* name, bool initialize) {
	$loadClass(RectIterator, name, initialize, &_RectIterator_ClassInfo_, allocate$RectIterator);
	return class$;
}

$Class* RectIterator::class$ = nullptr;

		} // geom
	} // awt
} // java