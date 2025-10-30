#include <java/awt/geom/CubicIterator.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/CubicCurve2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef SEG_CUBICTO
#undef SEG_MOVETO
#undef WIND_NON_ZERO

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $CubicCurve2D = ::java::awt::geom::CubicCurve2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _CubicIterator_FieldInfo_[] = {
	{"cubic", "Ljava/awt/geom/CubicCurve2D;", nullptr, 0, $field(CubicIterator, cubic)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(CubicIterator, affine)},
	{"index", "I", nullptr, 0, $field(CubicIterator, index)},
	{}
};

$MethodInfo _CubicIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/CubicCurve2D;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(CubicIterator::*)($CubicCurve2D*,$AffineTransform*)>(&CubicIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CubicIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.CubicIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_CubicIterator_FieldInfo_,
	_CubicIterator_MethodInfo_
};

$Object* allocate$CubicIterator($Class* clazz) {
	return $of($alloc(CubicIterator));
}

void CubicIterator::init$($CubicCurve2D* q, $AffineTransform* at) {
	$set(this, cubic, q);
	$set(this, affine, at);
}

int32_t CubicIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool CubicIterator::isDone() {
	return (this->index > 1);
}

void CubicIterator::next() {
	++this->index;
}

int32_t CubicIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "cubic iterator iterator out of bounds"_s);
	}
	int32_t type = 0;
	if (this->index == 0) {
		$nc(coords)->set(0, (float)$nc(this->cubic)->getX1());
		coords->set(1, (float)$nc(this->cubic)->getY1());
		type = $PathIterator::SEG_MOVETO;
	} else {
		$nc(coords)->set(0, (float)$nc(this->cubic)->getCtrlX1());
		coords->set(1, (float)$nc(this->cubic)->getCtrlY1());
		coords->set(2, (float)$nc(this->cubic)->getCtrlX2());
		coords->set(3, (float)$nc(this->cubic)->getCtrlY2());
		coords->set(4, (float)$nc(this->cubic)->getX2());
		coords->set(5, (float)$nc(this->cubic)->getY2());
		type = $PathIterator::SEG_CUBICTO;
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, this->index == 0 ? 1 : 3);
	}
	return type;
}

int32_t CubicIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "cubic iterator iterator out of bounds"_s);
	}
	int32_t type = 0;
	if (this->index == 0) {
		$nc(coords)->set(0, $nc(this->cubic)->getX1());
		coords->set(1, $nc(this->cubic)->getY1());
		type = $PathIterator::SEG_MOVETO;
	} else {
		$nc(coords)->set(0, $nc(this->cubic)->getCtrlX1());
		coords->set(1, $nc(this->cubic)->getCtrlY1());
		coords->set(2, $nc(this->cubic)->getCtrlX2());
		coords->set(3, $nc(this->cubic)->getCtrlY2());
		coords->set(4, $nc(this->cubic)->getX2());
		coords->set(5, $nc(this->cubic)->getY2());
		type = $PathIterator::SEG_CUBICTO;
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, this->index == 0 ? 1 : 3);
	}
	return type;
}

CubicIterator::CubicIterator() {
}

$Class* CubicIterator::load$($String* name, bool initialize) {
	$loadClass(CubicIterator, name, initialize, &_CubicIterator_ClassInfo_, allocate$CubicIterator);
	return class$;
}

$Class* CubicIterator::class$ = nullptr;

		} // geom
	} // awt
} // java