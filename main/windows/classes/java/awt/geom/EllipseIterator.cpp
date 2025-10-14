#include <java/awt/geom/EllipseIterator.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_MOVETO
#undef WIND_NON_ZERO

using $doubleArray2 = $Array<double, 2>;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _EllipseIterator_FieldInfo_[] = {
	{"x", "D", nullptr, 0, $field(EllipseIterator, x)},
	{"y", "D", nullptr, 0, $field(EllipseIterator, y)},
	{"w", "D", nullptr, 0, $field(EllipseIterator, w)},
	{"h", "D", nullptr, 0, $field(EllipseIterator, h)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(EllipseIterator, affine)},
	{"index", "I", nullptr, 0, $field(EllipseIterator, index)},
	{"CtrlVal", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EllipseIterator, CtrlVal)},
	{"pcv", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EllipseIterator, pcv)},
	{"ncv", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EllipseIterator, ncv)},
	{"ctrlpts", "[[D", nullptr, $PRIVATE | $STATIC, $staticField(EllipseIterator, ctrlpts)},
	{}
};

$MethodInfo _EllipseIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/Ellipse2D;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(EllipseIterator::*)($Ellipse2D*,$AffineTransform*)>(&EllipseIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EllipseIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.EllipseIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_EllipseIterator_FieldInfo_,
	_EllipseIterator_MethodInfo_
};

$Object* allocate$EllipseIterator($Class* clazz) {
	return $of($alloc(EllipseIterator));
}

double EllipseIterator::CtrlVal = 0.0;
double EllipseIterator::pcv = 0.0;
double EllipseIterator::ncv = 0.0;
$doubleArray2* EllipseIterator::ctrlpts = nullptr;

void EllipseIterator::init$($Ellipse2D* e, $AffineTransform* at) {
	this->x = $nc(e)->getX();
	this->y = e->getY();
	this->w = e->getWidth();
	this->h = e->getHeight();
	$set(this, affine, at);
	if (this->w < 0 || this->h < 0) {
		this->index = 6;
	}
}

int32_t EllipseIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool EllipseIterator::isDone() {
	return this->index > 5;
}

void EllipseIterator::next() {
	++this->index;
}

int32_t EllipseIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "ellipse iterator out of bounds"_s);
	}
	if (this->index == 5) {
		return $PathIterator::SEG_CLOSE;
	}
	if (this->index == 0) {
		$var($doubles, ctrls, $nc(EllipseIterator::ctrlpts)->get(3));
		$nc(coords)->set(0, (float)(this->x + $nc(ctrls)->get(4) * this->w));
		coords->set(1, (float)(this->y + ctrls->get(5) * this->h));
		if (this->affine != nullptr) {
			$nc(this->affine)->transform(coords, 0, coords, 0, 1);
		}
		return $PathIterator::SEG_MOVETO;
	}
	$var($doubles, ctrls, $nc(EllipseIterator::ctrlpts)->get(this->index - 1));
	$nc(coords)->set(0, (float)(this->x + $nc(ctrls)->get(0) * this->w));
	coords->set(1, (float)(this->y + ctrls->get(1) * this->h));
	coords->set(2, (float)(this->x + ctrls->get(2) * this->w));
	coords->set(3, (float)(this->y + ctrls->get(3) * this->h));
	coords->set(4, (float)(this->x + ctrls->get(4) * this->w));
	coords->set(5, (float)(this->y + ctrls->get(5) * this->h));
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, 3);
	}
	return $PathIterator::SEG_CUBICTO;
}

int32_t EllipseIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "ellipse iterator out of bounds"_s);
	}
	if (this->index == 5) {
		return $PathIterator::SEG_CLOSE;
	}
	if (this->index == 0) {
		$var($doubles, ctrls, $nc(EllipseIterator::ctrlpts)->get(3));
		$nc(coords)->set(0, this->x + $nc(ctrls)->get(4) * this->w);
		coords->set(1, this->y + ctrls->get(5) * this->h);
		if (this->affine != nullptr) {
			$nc(this->affine)->transform(coords, 0, coords, 0, 1);
		}
		return $PathIterator::SEG_MOVETO;
	}
	$var($doubles, ctrls, $nc(EllipseIterator::ctrlpts)->get(this->index - 1));
	$nc(coords)->set(0, this->x + $nc(ctrls)->get(0) * this->w);
	coords->set(1, this->y + ctrls->get(1) * this->h);
	coords->set(2, this->x + ctrls->get(2) * this->w);
	coords->set(3, this->y + ctrls->get(3) * this->h);
	coords->set(4, this->x + ctrls->get(4) * this->w);
	coords->set(5, this->y + ctrls->get(5) * this->h);
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, 3);
	}
	return $PathIterator::SEG_CUBICTO;
}

void clinit$EllipseIterator($Class* class$) {
	EllipseIterator::CtrlVal = 0.5522847498307933;
	EllipseIterator::pcv = 0.5 + EllipseIterator::CtrlVal * 0.5;
	EllipseIterator::ncv = 0.5 - EllipseIterator::CtrlVal * 0.5;
	$assignStatic(EllipseIterator::ctrlpts, $new($doubleArray2, {
		$$new($doubles, {
			1.0,
			EllipseIterator::pcv,
			EllipseIterator::pcv,
			1.0,
			0.5,
			1.0
		}),
		$$new($doubles, {
			EllipseIterator::ncv,
			1.0,
			0.0,
			EllipseIterator::pcv,
			0.0,
			0.5
		}),
		$$new($doubles, {
			0.0,
			EllipseIterator::ncv,
			EllipseIterator::ncv,
			0.0,
			0.5,
			0.0
		}),
		$$new($doubles, {
			EllipseIterator::pcv,
			0.0,
			1.0,
			EllipseIterator::ncv,
			1.0,
			0.5
		})
	}));
}

EllipseIterator::EllipseIterator() {
}

$Class* EllipseIterator::load$($String* name, bool initialize) {
	$loadClass(EllipseIterator, name, initialize, &_EllipseIterator_ClassInfo_, clinit$EllipseIterator, allocate$EllipseIterator);
	return class$;
}

$Class* EllipseIterator::class$ = nullptr;

		} // geom
	} // awt
} // java