#include <java/awt/geom/LineIterator.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef SEG_LINETO
#undef SEG_MOVETO
#undef WIND_NON_ZERO

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Line2D = ::java::awt::geom::Line2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _LineIterator_FieldInfo_[] = {
	{"line", "Ljava/awt/geom/Line2D;", nullptr, 0, $field(LineIterator, line)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(LineIterator, affine)},
	{"index", "I", nullptr, 0, $field(LineIterator, index)},
	{}
};

$MethodInfo _LineIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/Line2D;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(LineIterator::*)($Line2D*,$AffineTransform*)>(&LineIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LineIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.LineIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_LineIterator_FieldInfo_,
	_LineIterator_MethodInfo_
};

$Object* allocate$LineIterator($Class* clazz) {
	return $of($alloc(LineIterator));
}

void LineIterator::init$($Line2D* l, $AffineTransform* at) {
	$set(this, line, l);
	$set(this, affine, at);
}

int32_t LineIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool LineIterator::isDone() {
	return (this->index > 1);
}

void LineIterator::next() {
	++this->index;
}

int32_t LineIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "line iterator out of bounds"_s);
	}
	int32_t type = 0;
	if (this->index == 0) {
		$nc(coords)->set(0, (float)$nc(this->line)->getX1());
		coords->set(1, (float)$nc(this->line)->getY1());
		type = $PathIterator::SEG_MOVETO;
	} else {
		$nc(coords)->set(0, (float)$nc(this->line)->getX2());
		coords->set(1, (float)$nc(this->line)->getY2());
		type = $PathIterator::SEG_LINETO;
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, 1);
	}
	return type;
}

int32_t LineIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "line iterator out of bounds"_s);
	}
	int32_t type = 0;
	if (this->index == 0) {
		$nc(coords)->set(0, $nc(this->line)->getX1());
		coords->set(1, $nc(this->line)->getY1());
		type = $PathIterator::SEG_MOVETO;
	} else {
		$nc(coords)->set(0, $nc(this->line)->getX2());
		coords->set(1, $nc(this->line)->getY2());
		type = $PathIterator::SEG_LINETO;
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, 1);
	}
	return type;
}

LineIterator::LineIterator() {
}

$Class* LineIterator::load$($String* name, bool initialize) {
	$loadClass(LineIterator, name, initialize, &_LineIterator_ClassInfo_, allocate$LineIterator);
	return class$;
}

$Class* LineIterator::class$ = nullptr;

		} // geom
	} // awt
} // java