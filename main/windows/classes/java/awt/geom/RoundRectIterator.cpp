#include <java/awt/geom/RoundRectIterator.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef PI
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef WIND_NON_ZERO

using $doubleArray2 = $Array<double, 2>;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _RoundRectIterator_FieldInfo_[] = {
	{"x", "D", nullptr, 0, $field(RoundRectIterator, x)},
	{"y", "D", nullptr, 0, $field(RoundRectIterator, y)},
	{"w", "D", nullptr, 0, $field(RoundRectIterator, w)},
	{"h", "D", nullptr, 0, $field(RoundRectIterator, h)},
	{"aw", "D", nullptr, 0, $field(RoundRectIterator, aw)},
	{"ah", "D", nullptr, 0, $field(RoundRectIterator, ah)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(RoundRectIterator, affine)},
	{"index", "I", nullptr, 0, $field(RoundRectIterator, index)},
	{"angle", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoundRectIterator, angle)},
	{"a", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoundRectIterator, a)},
	{"b", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoundRectIterator, b)},
	{"c", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoundRectIterator, c)},
	{"cv", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoundRectIterator, cv)},
	{"acv", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RoundRectIterator, acv)},
	{"ctrlpts", "[[D", nullptr, $PRIVATE | $STATIC, $staticField(RoundRectIterator, ctrlpts)},
	{"types", "[I", nullptr, $PRIVATE | $STATIC, $staticField(RoundRectIterator, types)},
	{}
};

$MethodInfo _RoundRectIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/RoundRectangle2D;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(RoundRectIterator::*)($RoundRectangle2D*,$AffineTransform*)>(&RoundRectIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RoundRectIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.RoundRectIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_RoundRectIterator_FieldInfo_,
	_RoundRectIterator_MethodInfo_
};

$Object* allocate$RoundRectIterator($Class* clazz) {
	return $of($alloc(RoundRectIterator));
}

double RoundRectIterator::angle = 0.0;
double RoundRectIterator::a = 0.0;
double RoundRectIterator::b = 0.0;
double RoundRectIterator::c = 0.0;
double RoundRectIterator::cv = 0.0;
double RoundRectIterator::acv = 0.0;
$doubleArray2* RoundRectIterator::ctrlpts = nullptr;
$ints* RoundRectIterator::types = nullptr;

void RoundRectIterator::init$($RoundRectangle2D* rr, $AffineTransform* at) {
	this->x = $nc(rr)->getX();
	this->y = rr->getY();
	this->w = rr->getWidth();
	this->h = rr->getHeight();
	this->aw = $Math::min(this->w, $Math::abs(rr->getArcWidth()));
	this->ah = $Math::min(this->h, $Math::abs(rr->getArcHeight()));
	$set(this, affine, at);
	if (this->aw < 0 || this->ah < 0) {
		this->index = $nc(RoundRectIterator::ctrlpts)->length;
	}
}

int32_t RoundRectIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool RoundRectIterator::isDone() {
	return this->index >= $nc(RoundRectIterator::ctrlpts)->length;
}

void RoundRectIterator::next() {
	++this->index;
}

int32_t RoundRectIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "roundrect iterator out of bounds"_s);
	}
	$var($doubles, ctrls, $nc(RoundRectIterator::ctrlpts)->get(this->index));
	int32_t nc = 0;
	for (int32_t i = 0; i < $nc(ctrls)->length; i += 4) {
		$nc(coords)->set(nc++, (float)(this->x + ctrls->get(i + 0) * this->w + ctrls->get(i + 1) * this->aw));
		coords->set(nc++, (float)(this->y + ctrls->get(i + 2) * this->h + ctrls->get(i + 3) * this->ah));
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, nc / 2);
	}
	return $nc(RoundRectIterator::types)->get(this->index);
}

int32_t RoundRectIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "roundrect iterator out of bounds"_s);
	}
	$var($doubles, ctrls, $nc(RoundRectIterator::ctrlpts)->get(this->index));
	int32_t nc = 0;
	for (int32_t i = 0; i < $nc(ctrls)->length; i += 4) {
		$nc(coords)->set(nc++, (this->x + ctrls->get(i + 0) * this->w + ctrls->get(i + 1) * this->aw));
		coords->set(nc++, (this->y + ctrls->get(i + 2) * this->h + ctrls->get(i + 3) * this->ah));
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, nc / 2);
	}
	return $nc(RoundRectIterator::types)->get(this->index);
}

void clinit$RoundRectIterator($Class* class$) {
	$init($Math);
	RoundRectIterator::angle = $Math::PI / 4.0;
	RoundRectIterator::a = 1.0 - $Math::cos(RoundRectIterator::angle);
	RoundRectIterator::b = $Math::tan(RoundRectIterator::angle);
	RoundRectIterator::c = $Math::sqrt(1.0 + RoundRectIterator::b * RoundRectIterator::b) - 1 + RoundRectIterator::a;
	RoundRectIterator::cv = 4.0 / 3.0 * RoundRectIterator::a * RoundRectIterator::b / RoundRectIterator::c;
	RoundRectIterator::acv = (1.0 - RoundRectIterator::cv) / 2.0;
	$assignStatic(RoundRectIterator::ctrlpts, $new($doubleArray2, {
		$$new($doubles, {
			0.0,
			0.0,
			0.0,
			0.5
		}),
		$$new($doubles, {
			0.0,
			0.0,
			1.0,
			-0.5
		}),
		$$new($doubles, {
			0.0,
			0.0,
			1.0,
			-RoundRectIterator::acv,
			0.0,
			RoundRectIterator::acv,
			1.0,
			0.0,
			0.0,
			0.5,
			1.0,
			0.0
		}),
		$$new($doubles, {
			1.0,
			-0.5,
			1.0,
			0.0
		}),
		$$new($doubles, {
			1.0,
			-RoundRectIterator::acv,
			1.0,
			0.0,
			1.0,
			0.0,
			1.0,
			-RoundRectIterator::acv,
			1.0,
			0.0,
			1.0,
			-0.5
		}),
		$$new($doubles, {
			1.0,
			0.0,
			0.0,
			0.5
		}),
		$$new($doubles, {
			1.0,
			0.0,
			0.0,
			RoundRectIterator::acv,
			1.0,
			-RoundRectIterator::acv,
			0.0,
			0.0,
			1.0,
			-0.5,
			0.0,
			0.0
		}),
		$$new($doubles, {
			0.0,
			0.5,
			0.0,
			0.0
		}),
		$$new($doubles, {
			0.0,
			RoundRectIterator::acv,
			0.0,
			0.0,
			0.0,
			0.0,
			0.0,
			RoundRectIterator::acv,
			0.0,
			0.0,
			0.0,
			0.5
		}),
		$$new($doubles, 0)
	}));
	$assignStatic(RoundRectIterator::types, $new($ints, {
		$PathIterator::SEG_MOVETO,
		$PathIterator::SEG_LINETO,
		$PathIterator::SEG_CUBICTO,
		$PathIterator::SEG_LINETO,
		$PathIterator::SEG_CUBICTO,
		$PathIterator::SEG_LINETO,
		$PathIterator::SEG_CUBICTO,
		$PathIterator::SEG_LINETO,
		$PathIterator::SEG_CUBICTO,
		$PathIterator::SEG_CLOSE
	}));
}

RoundRectIterator::RoundRectIterator() {
}

$Class* RoundRectIterator::load$($String* name, bool initialize) {
	$loadClass(RoundRectIterator, name, initialize, &_RoundRectIterator_ClassInfo_, clinit$RoundRectIterator, allocate$RoundRectIterator);
	return class$;
}

$Class* RoundRectIterator::class$ = nullptr;

		} // geom
	} // awt
} // java