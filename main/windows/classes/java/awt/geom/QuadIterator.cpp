#include <java/awt/geom/QuadIterator.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/QuadCurve2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef SEG_MOVETO
#undef SEG_QUADTO
#undef WIND_NON_ZERO

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $QuadCurve2D = ::java::awt::geom::QuadCurve2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _QuadIterator_FieldInfo_[] = {
	{"quad", "Ljava/awt/geom/QuadCurve2D;", nullptr, 0, $field(QuadIterator, quad)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(QuadIterator, affine)},
	{"index", "I", nullptr, 0, $field(QuadIterator, index)},
	{}
};

$MethodInfo _QuadIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/QuadCurve2D;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(QuadIterator::*)($QuadCurve2D*,$AffineTransform*)>(&QuadIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _QuadIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.QuadIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_QuadIterator_FieldInfo_,
	_QuadIterator_MethodInfo_
};

$Object* allocate$QuadIterator($Class* clazz) {
	return $of($alloc(QuadIterator));
}

void QuadIterator::init$($QuadCurve2D* q, $AffineTransform* at) {
	$set(this, quad, q);
	$set(this, affine, at);
}

int32_t QuadIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool QuadIterator::isDone() {
	return (this->index > 1);
}

void QuadIterator::next() {
	++this->index;
}

int32_t QuadIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "quad iterator iterator out of bounds"_s);
	}
	int32_t type = 0;
	if (this->index == 0) {
		$nc(coords)->set(0, (float)$nc(this->quad)->getX1());
		coords->set(1, (float)$nc(this->quad)->getY1());
		type = $PathIterator::SEG_MOVETO;
	} else {
		$nc(coords)->set(0, (float)$nc(this->quad)->getCtrlX());
		coords->set(1, (float)$nc(this->quad)->getCtrlY());
		coords->set(2, (float)$nc(this->quad)->getX2());
		coords->set(3, (float)$nc(this->quad)->getY2());
		type = $PathIterator::SEG_QUADTO;
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, this->index == 0 ? 1 : 2);
	}
	return type;
}

int32_t QuadIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "quad iterator iterator out of bounds"_s);
	}
	int32_t type = 0;
	if (this->index == 0) {
		$nc(coords)->set(0, $nc(this->quad)->getX1());
		coords->set(1, $nc(this->quad)->getY1());
		type = $PathIterator::SEG_MOVETO;
	} else {
		$nc(coords)->set(0, $nc(this->quad)->getCtrlX());
		coords->set(1, $nc(this->quad)->getCtrlY());
		coords->set(2, $nc(this->quad)->getX2());
		coords->set(3, $nc(this->quad)->getY2());
		type = $PathIterator::SEG_QUADTO;
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, this->index == 0 ? 1 : 2);
	}
	return type;
}

QuadIterator::QuadIterator() {
}

$Class* QuadIterator::load$($String* name, bool initialize) {
	$loadClass(QuadIterator, name, initialize, &_QuadIterator_ClassInfo_, allocate$QuadIterator);
	return class$;
}

$Class* QuadIterator::class$ = nullptr;

		} // geom
	} // awt
} // java