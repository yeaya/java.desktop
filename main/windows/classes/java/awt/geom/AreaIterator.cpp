#include <java/awt/geom/AreaIterator.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Vector.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_QUADTO
#undef WIND_NON_ZERO

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Vector = ::java::util::Vector;
using $Curve = ::sun::awt::geom::Curve;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _AreaIterator_FieldInfo_[] = {
	{"transform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(AreaIterator, transform)},
	{"curves", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/geom/Curve;>;", $PRIVATE, $field(AreaIterator, curves)},
	{"index", "I", nullptr, $PRIVATE, $field(AreaIterator, index)},
	{"prevcurve", "Lsun/awt/geom/Curve;", nullptr, $PRIVATE, $field(AreaIterator, prevcurve)},
	{"thiscurve", "Lsun/awt/geom/Curve;", nullptr, $PRIVATE, $field(AreaIterator, thiscurve)},
	{}
};

$MethodInfo _AreaIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Vector;Ljava/awt/geom/AffineTransform;)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;Ljava/awt/geom/AffineTransform;)V", $PUBLIC, $method(static_cast<void(AreaIterator::*)($Vector*,$AffineTransform*)>(&AreaIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AreaIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.AreaIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_AreaIterator_FieldInfo_,
	_AreaIterator_MethodInfo_
};

$Object* allocate$AreaIterator($Class* clazz) {
	return $of($alloc(AreaIterator));
}

void AreaIterator::init$($Vector* curves, $AffineTransform* at) {
	$set(this, curves, curves);
	$set(this, transform, at);
	if ($nc(curves)->size() >= 1) {
		$set(this, thiscurve, $cast($Curve, curves->get(0)));
	}
}

int32_t AreaIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool AreaIterator::isDone() {
	return (this->prevcurve == nullptr && this->thiscurve == nullptr);
}

void AreaIterator::next() {
	if (this->prevcurve != nullptr) {
		$set(this, prevcurve, nullptr);
	} else {
		$set(this, prevcurve, this->thiscurve);
		++this->index;
		if (this->index < $nc(this->curves)->size()) {
			$set(this, thiscurve, $cast($Curve, $nc(this->curves)->get(this->index)));
			bool var$1 = $nc(this->thiscurve)->getOrder() != 0;
			if (var$1) {
				double var$2 = $nc(this->prevcurve)->getX1();
				var$1 = var$2 == $nc(this->thiscurve)->getX0();
			}
			bool var$0 = var$1;
			if (var$0) {
				double var$3 = $nc(this->prevcurve)->getY1();
				var$0 = var$3 == $nc(this->thiscurve)->getY0();
			}
			if (var$0) {
				$set(this, prevcurve, nullptr);
			}
		} else {
			$set(this, thiscurve, nullptr);
		}
	}
}

int32_t AreaIterator::currentSegment($floats* coords) {
	$var($doubles, dcoords, $new($doubles, 6));
	int32_t segtype = currentSegment(dcoords);
	int32_t numpoints = (segtype == $PathIterator::SEG_CLOSE ? 0 : (segtype == $PathIterator::SEG_QUADTO ? 2 : (segtype == $PathIterator::SEG_CUBICTO ? 3 : 1)));
	for (int32_t i = 0; i < numpoints * 2; ++i) {
		$nc(coords)->set(i, (float)dcoords->get(i));
	}
	return segtype;
}

int32_t AreaIterator::currentSegment($doubles* coords) {
	int32_t segtype = 0;
	int32_t numpoints = 0;
	if (this->prevcurve != nullptr) {
		if (this->thiscurve == nullptr || $nc(this->thiscurve)->getOrder() == 0) {
			return $PathIterator::SEG_CLOSE;
		}
		$nc(coords)->set(0, $nc(this->thiscurve)->getX0());
		coords->set(1, $nc(this->thiscurve)->getY0());
		segtype = $PathIterator::SEG_LINETO;
		numpoints = 1;
	} else if (this->thiscurve == nullptr) {
		$throwNew($NoSuchElementException, "area iterator out of bounds"_s);
	} else {
		segtype = $nc(this->thiscurve)->getSegment(coords);
		numpoints = $nc(this->thiscurve)->getOrder();
		if (numpoints == 0) {
			numpoints = 1;
		}
	}
	if (this->transform != nullptr) {
		$nc(this->transform)->transform(coords, 0, coords, 0, numpoints);
	}
	return segtype;
}

AreaIterator::AreaIterator() {
}

$Class* AreaIterator::load$($String* name, bool initialize) {
	$loadClass(AreaIterator, name, initialize, &_AreaIterator_ClassInfo_, allocate$AreaIterator);
	return class$;
}

$Class* AreaIterator::class$ = nullptr;

		} // geom
	} // awt
} // java