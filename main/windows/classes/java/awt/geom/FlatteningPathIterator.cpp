#include <java/awt/geom/FlatteningPathIterator.h>

#include <java/awt/geom/CubicCurve2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/QuadCurve2D.h>
#include <java/lang/Math.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef GROW_SIZE
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO

using $CubicCurve2D = ::java::awt::geom::CubicCurve2D;
using $PathIterator = ::java::awt::geom::PathIterator;
using $QuadCurve2D = ::java::awt::geom::QuadCurve2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _FlatteningPathIterator_FieldInfo_[] = {
	{"GROW_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(FlatteningPathIterator, GROW_SIZE)},
	{"src", "Ljava/awt/geom/PathIterator;", nullptr, 0, $field(FlatteningPathIterator, src)},
	{"squareflat", "D", nullptr, 0, $field(FlatteningPathIterator, squareflat)},
	{"limit", "I", nullptr, 0, $field(FlatteningPathIterator, limit)},
	{"hold", "[D", nullptr, 0, $field(FlatteningPathIterator, hold)},
	{"curx", "D", nullptr, 0, $field(FlatteningPathIterator, curx)},
	{"cury", "D", nullptr, 0, $field(FlatteningPathIterator, cury)},
	{"movx", "D", nullptr, 0, $field(FlatteningPathIterator, movx)},
	{"movy", "D", nullptr, 0, $field(FlatteningPathIterator, movy)},
	{"holdType", "I", nullptr, 0, $field(FlatteningPathIterator, holdType)},
	{"holdEnd", "I", nullptr, 0, $field(FlatteningPathIterator, holdEnd)},
	{"holdIndex", "I", nullptr, 0, $field(FlatteningPathIterator, holdIndex)},
	{"levels", "[I", nullptr, 0, $field(FlatteningPathIterator, levels)},
	{"levelIndex", "I", nullptr, 0, $field(FlatteningPathIterator, levelIndex)},
	{"done", "Z", nullptr, 0, $field(FlatteningPathIterator, done)},
	{}
};

$MethodInfo _FlatteningPathIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/PathIterator;D)V", nullptr, $PUBLIC, $method(static_cast<void(FlatteningPathIterator::*)($PathIterator*,double)>(&FlatteningPathIterator::init$))},
	{"<init>", "(Ljava/awt/geom/PathIterator;DI)V", nullptr, $PUBLIC, $method(static_cast<void(FlatteningPathIterator::*)($PathIterator*,double,int32_t)>(&FlatteningPathIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"ensureHoldCapacity", "(I)V", nullptr, 0},
	{"getFlatness", "()D", nullptr, $PUBLIC},
	{"getRecursionLimit", "()I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{"next", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(FlatteningPathIterator::*)(bool)>(&FlatteningPathIterator::next))},
	{}
};

$ClassInfo _FlatteningPathIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.FlatteningPathIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_FlatteningPathIterator_FieldInfo_,
	_FlatteningPathIterator_MethodInfo_
};

$Object* allocate$FlatteningPathIterator($Class* clazz) {
	return $of($alloc(FlatteningPathIterator));
}

void FlatteningPathIterator::init$($PathIterator* src, double flatness) {
	FlatteningPathIterator::init$(src, flatness, 10);
}

void FlatteningPathIterator::init$($PathIterator* src, double flatness, int32_t limit) {
	$set(this, hold, $new($doubles, 14));
	if (flatness < 0.0) {
		$throwNew($IllegalArgumentException, "flatness must be >= 0"_s);
	}
	if (limit < 0) {
		$throwNew($IllegalArgumentException, "limit must be >= 0"_s);
	}
	$set(this, src, src);
	this->squareflat = flatness * flatness;
	this->limit = limit;
	$set(this, levels, $new($ints, limit + 1));
	next(false);
}

double FlatteningPathIterator::getFlatness() {
	return $Math::sqrt(this->squareflat);
}

int32_t FlatteningPathIterator::getRecursionLimit() {
	return this->limit;
}

int32_t FlatteningPathIterator::getWindingRule() {
	return $nc(this->src)->getWindingRule();
}

bool FlatteningPathIterator::isDone() {
	return this->done;
}

void FlatteningPathIterator::ensureHoldCapacity(int32_t want) {
	if (this->holdIndex - want < 0) {
		int32_t have = $nc(this->hold)->length - this->holdIndex;
		int32_t newsize = $nc(this->hold)->length + FlatteningPathIterator::GROW_SIZE;
		$var($doubles, newhold, $new($doubles, newsize));
		$System::arraycopy(this->hold, this->holdIndex, newhold, this->holdIndex + FlatteningPathIterator::GROW_SIZE, have);
		$set(this, hold, newhold);
		this->holdIndex += FlatteningPathIterator::GROW_SIZE;
		this->holdEnd += FlatteningPathIterator::GROW_SIZE;
	}
}

void FlatteningPathIterator::next() {
	next(true);
}

void FlatteningPathIterator::next(bool doNext) {
	int32_t level = 0;
	if (this->holdIndex >= this->holdEnd) {
		if (doNext) {
			$nc(this->src)->next();
		}
		if ($nc(this->src)->isDone()) {
			this->done = true;
			return;
		}
		this->holdType = $nc(this->src)->currentSegment(this->hold);
		this->levelIndex = 0;
		$nc(this->levels)->set(0, 0);
	}
	switch (this->holdType) {
	case $PathIterator::SEG_MOVETO:
		{}
	case $PathIterator::SEG_LINETO:
		{
			this->curx = $nc(this->hold)->get(0);
			this->cury = $nc(this->hold)->get(1);
			if (this->holdType == $PathIterator::SEG_MOVETO) {
				this->movx = this->curx;
				this->movy = this->cury;
			}
			this->holdIndex = 0;
			this->holdEnd = 0;
			break;
		}
	case $PathIterator::SEG_CLOSE:
		{
			this->curx = this->movx;
			this->cury = this->movy;
			this->holdIndex = 0;
			this->holdEnd = 0;
			break;
		}
	case $PathIterator::SEG_QUADTO:
		{
			if (this->holdIndex >= this->holdEnd) {
				this->holdIndex = $nc(this->hold)->length - 6;
				this->holdEnd = $nc(this->hold)->length - 2;
				$nc(this->hold)->set(this->holdIndex + 0, this->curx);
				$nc(this->hold)->set(this->holdIndex + 1, this->cury);
				$nc(this->hold)->set(this->holdIndex + 2, $nc(this->hold)->get(0));
				$nc(this->hold)->set(this->holdIndex + 3, $nc(this->hold)->get(1));
				$nc(this->hold)->set(this->holdIndex + 4, this->curx = $nc(this->hold)->get(2));
				$nc(this->hold)->set(this->holdIndex + 5, this->cury = $nc(this->hold)->get(3));
			}
			level = $nc(this->levels)->get(this->levelIndex);
			while (level < this->limit) {
				if ($QuadCurve2D::getFlatnessSq(this->hold, this->holdIndex) < this->squareflat) {
					break;
				}
				ensureHoldCapacity(4);
				$QuadCurve2D::subdivide(this->hold, this->holdIndex, this->hold, this->holdIndex - 4, this->hold, this->holdIndex);
				this->holdIndex -= 4;
				++level;
				$nc(this->levels)->set(this->levelIndex, level);
				++this->levelIndex;
				$nc(this->levels)->set(this->levelIndex, level);
			}
			this->holdIndex += 4;
			--this->levelIndex;
			break;
		}
	case $PathIterator::SEG_CUBICTO:
		{
			if (this->holdIndex >= this->holdEnd) {
				this->holdIndex = $nc(this->hold)->length - 8;
				this->holdEnd = $nc(this->hold)->length - 2;
				$nc(this->hold)->set(this->holdIndex + 0, this->curx);
				$nc(this->hold)->set(this->holdIndex + 1, this->cury);
				$nc(this->hold)->set(this->holdIndex + 2, $nc(this->hold)->get(0));
				$nc(this->hold)->set(this->holdIndex + 3, $nc(this->hold)->get(1));
				$nc(this->hold)->set(this->holdIndex + 4, $nc(this->hold)->get(2));
				$nc(this->hold)->set(this->holdIndex + 5, $nc(this->hold)->get(3));
				$nc(this->hold)->set(this->holdIndex + 6, this->curx = $nc(this->hold)->get(4));
				$nc(this->hold)->set(this->holdIndex + 7, this->cury = $nc(this->hold)->get(5));
			}
			level = $nc(this->levels)->get(this->levelIndex);
			while (level < this->limit) {
				if ($CubicCurve2D::getFlatnessSq(this->hold, this->holdIndex) < this->squareflat) {
					break;
				}
				ensureHoldCapacity(6);
				$CubicCurve2D::subdivide(this->hold, this->holdIndex, this->hold, this->holdIndex - 6, this->hold, this->holdIndex);
				this->holdIndex -= 6;
				++level;
				$nc(this->levels)->set(this->levelIndex, level);
				++this->levelIndex;
				$nc(this->levels)->set(this->levelIndex, level);
			}
			this->holdIndex += 6;
			--this->levelIndex;
			break;
		}
	}
}

int32_t FlatteningPathIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "flattening iterator out of bounds"_s);
	}
	int32_t type = this->holdType;
	if (type != $PathIterator::SEG_CLOSE) {
		$nc(coords)->set(0, (float)$nc(this->hold)->get(this->holdIndex + 0));
		coords->set(1, (float)$nc(this->hold)->get(this->holdIndex + 1));
		if (type != $PathIterator::SEG_MOVETO) {
			type = $PathIterator::SEG_LINETO;
		}
	}
	return type;
}

int32_t FlatteningPathIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "flattening iterator out of bounds"_s);
	}
	int32_t type = this->holdType;
	if (type != $PathIterator::SEG_CLOSE) {
		$nc(coords)->set(0, $nc(this->hold)->get(this->holdIndex + 0));
		coords->set(1, $nc(this->hold)->get(this->holdIndex + 1));
		if (type != $PathIterator::SEG_MOVETO) {
			type = $PathIterator::SEG_LINETO;
		}
	}
	return type;
}

FlatteningPathIterator::FlatteningPathIterator() {
}

$Class* FlatteningPathIterator::load$($String* name, bool initialize) {
	$loadClass(FlatteningPathIterator, name, initialize, &_FlatteningPathIterator_ClassInfo_, allocate$FlatteningPathIterator);
	return class$;
}

$Class* FlatteningPathIterator::class$ = nullptr;

		} // geom
	} // awt
} // java