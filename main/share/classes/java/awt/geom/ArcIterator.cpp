#include <java/awt/geom/ArcIterator.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Arc2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/lang/Math.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef CHORD
#undef OPEN
#undef PI
#undef PIE
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef WIND_NON_ZERO

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Arc2D = ::java::awt::geom::Arc2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _ArcIterator_FieldInfo_[] = {
	{"x", "D", nullptr, 0, $field(ArcIterator, x)},
	{"y", "D", nullptr, 0, $field(ArcIterator, y)},
	{"w", "D", nullptr, 0, $field(ArcIterator, w)},
	{"h", "D", nullptr, 0, $field(ArcIterator, h)},
	{"angStRad", "D", nullptr, 0, $field(ArcIterator, angStRad)},
	{"increment", "D", nullptr, 0, $field(ArcIterator, increment)},
	{"cv", "D", nullptr, 0, $field(ArcIterator, cv)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(ArcIterator, affine)},
	{"index", "I", nullptr, 0, $field(ArcIterator, index)},
	{"arcSegs", "I", nullptr, 0, $field(ArcIterator, arcSegs)},
	{"lineSegs", "I", nullptr, 0, $field(ArcIterator, lineSegs)},
	{}
};

$MethodInfo _ArcIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/Arc2D;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(ArcIterator::*)($Arc2D*,$AffineTransform*)>(&ArcIterator::init$))},
	{"btan", "(D)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double)>(&ArcIterator::btan))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArcIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.ArcIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_ArcIterator_FieldInfo_,
	_ArcIterator_MethodInfo_
};

$Object* allocate$ArcIterator($Class* clazz) {
	return $of($alloc(ArcIterator));
}

void ArcIterator::init$($Arc2D* a, $AffineTransform* at) {
	this->w = $nc(a)->getWidth() / 2;
	this->h = a->getHeight() / 2;
	this->x = a->getX() + this->w;
	this->y = a->getY() + this->h;
	this->angStRad = -$Math::toRadians(a->getAngleStart());
	$set(this, affine, at);
	double ext = -a->getAngleExtent();
	if (ext >= 360.0 || ext <= -360) {
		this->arcSegs = 4;
		this->increment = $Math::PI / 2;
		this->cv = 0.5522847498307933;
		if (ext < 0) {
			this->increment = -this->increment;
			this->cv = -this->cv;
		}
	} else {
		this->arcSegs = $cast(int32_t, $Math::ceil($Math::abs(ext) / 90.0));
		this->increment = $Math::toRadians(ext / this->arcSegs);
		this->cv = btan(this->increment);
		if (this->cv == 0) {
			this->arcSegs = 0;
		}
	}
	switch (a->getArcType()) {
	case $Arc2D::OPEN:
		{
			this->lineSegs = 0;
			break;
		}
	case $Arc2D::CHORD:
		{
			this->lineSegs = 1;
			break;
		}
	case $Arc2D::PIE:
		{
			this->lineSegs = 2;
			break;
		}
	}
	if (this->w < 0 || this->h < 0) {
		this->arcSegs = (this->lineSegs = -1);
	}
}

int32_t ArcIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool ArcIterator::isDone() {
	return this->index > this->arcSegs + this->lineSegs;
}

void ArcIterator::next() {
	++this->index;
}

double ArcIterator::btan(double increment) {
	$init(ArcIterator);
	increment /= 2.0;
	double var$0 = 4.0 / 3.0 * $Math::sin(increment);
	return var$0 / (1.0 + $Math::cos(increment));
}

int32_t ArcIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "arc iterator out of bounds"_s);
	}
	double angle = this->angStRad;
	if (this->index == 0) {
		$nc(coords)->set(0, (float)(this->x + $Math::cos(angle) * this->w));
		coords->set(1, (float)(this->y + $Math::sin(angle) * this->h));
		if (this->affine != nullptr) {
			$nc(this->affine)->transform(coords, 0, coords, 0, 1);
		}
		return $PathIterator::SEG_MOVETO;
	}
	if (this->index > this->arcSegs) {
		if (this->index == this->arcSegs + this->lineSegs) {
			return $PathIterator::SEG_CLOSE;
		}
		$nc(coords)->set(0, (float)this->x);
		coords->set(1, (float)this->y);
		if (this->affine != nullptr) {
			$nc(this->affine)->transform(coords, 0, coords, 0, 1);
		}
		return $PathIterator::SEG_LINETO;
	}
	angle += this->increment * (this->index - 1);
	double relx = $Math::cos(angle);
	double rely = $Math::sin(angle);
	$nc(coords)->set(0, (float)(this->x + (relx - this->cv * rely) * this->w));
	coords->set(1, (float)(this->y + (rely + this->cv * relx) * this->h));
	angle += this->increment;
	relx = $Math::cos(angle);
	rely = $Math::sin(angle);
	coords->set(2, (float)(this->x + (relx + this->cv * rely) * this->w));
	coords->set(3, (float)(this->y + (rely - this->cv * relx) * this->h));
	coords->set(4, (float)(this->x + relx * this->w));
	coords->set(5, (float)(this->y + rely * this->h));
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, 3);
	}
	return $PathIterator::SEG_CUBICTO;
}

int32_t ArcIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "arc iterator out of bounds"_s);
	}
	double angle = this->angStRad;
	if (this->index == 0) {
		$nc(coords)->set(0, this->x + $Math::cos(angle) * this->w);
		coords->set(1, this->y + $Math::sin(angle) * this->h);
		if (this->affine != nullptr) {
			$nc(this->affine)->transform(coords, 0, coords, 0, 1);
		}
		return $PathIterator::SEG_MOVETO;
	}
	if (this->index > this->arcSegs) {
		if (this->index == this->arcSegs + this->lineSegs) {
			return $PathIterator::SEG_CLOSE;
		}
		$nc(coords)->set(0, this->x);
		coords->set(1, this->y);
		if (this->affine != nullptr) {
			$nc(this->affine)->transform(coords, 0, coords, 0, 1);
		}
		return $PathIterator::SEG_LINETO;
	}
	angle += this->increment * (this->index - 1);
	double relx = $Math::cos(angle);
	double rely = $Math::sin(angle);
	$nc(coords)->set(0, this->x + (relx - this->cv * rely) * this->w);
	coords->set(1, this->y + (rely + this->cv * relx) * this->h);
	angle += this->increment;
	relx = $Math::cos(angle);
	rely = $Math::sin(angle);
	coords->set(2, this->x + (relx + this->cv * rely) * this->w);
	coords->set(3, this->y + (rely - this->cv * relx) * this->h);
	coords->set(4, this->x + relx * this->w);
	coords->set(5, this->y + rely * this->h);
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, 3);
	}
	return $PathIterator::SEG_CUBICTO;
}

ArcIterator::ArcIterator() {
}

$Class* ArcIterator::load$($String* name, bool initialize) {
	$loadClass(ArcIterator, name, initialize, &_ArcIterator_ClassInfo_, allocate$ArcIterator);
	return class$;
}

$Class* ArcIterator::class$ = nullptr;

		} // geom
	} // awt
} // java