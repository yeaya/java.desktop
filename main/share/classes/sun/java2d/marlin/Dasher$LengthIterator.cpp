#include <sun/java2d/marlin/Dasher$LengthIterator.h>

#include <sun/java2d/marlin/Dasher.h>
#include <sun/java2d/marlin/Helpers.h>
#include <jcpp.h>

#undef CURVE_LEN_ERR
#undef MAX_VALUE
#undef MIN_VALUE

using $doubleArray2 = $Array<double, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dasher = ::sun::java2d::marlin::Dasher;
using $Helpers = ::sun::java2d::marlin::Helpers;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _Dasher$LengthIterator_FieldInfo_[] = {
	{"recCurveStack", "[[D", nullptr, $PRIVATE | $FINAL, $field(Dasher$LengthIterator, recCurveStack)},
	{"sidesRight", "[Z", nullptr, $PRIVATE | $FINAL, $field(Dasher$LengthIterator, sidesRight)},
	{"curveType", "I", nullptr, $PRIVATE, $field(Dasher$LengthIterator, curveType)},
	{"nextT", "D", nullptr, $PRIVATE, $field(Dasher$LengthIterator, nextT)},
	{"lenAtNextT", "D", nullptr, $PRIVATE, $field(Dasher$LengthIterator, lenAtNextT)},
	{"lastT", "D", nullptr, $PRIVATE, $field(Dasher$LengthIterator, lastT)},
	{"lenAtLastT", "D", nullptr, $PRIVATE, $field(Dasher$LengthIterator, lenAtLastT)},
	{"lenAtLastSplit", "D", nullptr, $PRIVATE, $field(Dasher$LengthIterator, lenAtLastSplit)},
	{"lastSegLen", "D", nullptr, $PRIVATE, $field(Dasher$LengthIterator, lastSegLen$)},
	{"recLevel", "I", nullptr, $PRIVATE, $field(Dasher$LengthIterator, recLevel)},
	{"done", "Z", nullptr, $PRIVATE, $field(Dasher$LengthIterator, done)},
	{"curLeafCtrlPolyLengths", "[D", nullptr, $PRIVATE | $FINAL, $field(Dasher$LengthIterator, curLeafCtrlPolyLengths)},
	{"cachedHaveLowAcceleration", "I", nullptr, $PRIVATE, $field(Dasher$LengthIterator, cachedHaveLowAcceleration)},
	{"nextRoots", "[D", nullptr, $PRIVATE | $FINAL, $field(Dasher$LengthIterator, nextRoots)},
	{"flatLeafCoefCache", "[D", nullptr, $PRIVATE | $FINAL, $field(Dasher$LengthIterator, flatLeafCoefCache)},
	{}
};

$MethodInfo _Dasher$LengthIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Dasher$LengthIterator::*)()>(&Dasher$LengthIterator::init$))},
	{"goLeft", "()V", nullptr, $PRIVATE, $method(static_cast<void(Dasher$LengthIterator::*)()>(&Dasher$LengthIterator::goLeft))},
	{"goToNextLeaf", "()V", nullptr, $PRIVATE, $method(static_cast<void(Dasher$LengthIterator::*)()>(&Dasher$LengthIterator::goToNextLeaf))},
	{"haveLowAcceleration", "(D)Z", nullptr, $PRIVATE, $method(static_cast<bool(Dasher$LengthIterator::*)(double)>(&Dasher$LengthIterator::haveLowAcceleration))},
	{"initializeIterationOnCurve", "([DI)V", nullptr, 0, $method(static_cast<void(Dasher$LengthIterator::*)($doubles*,int32_t)>(&Dasher$LengthIterator::initializeIterationOnCurve))},
	{"lastSegLen", "()D", nullptr, 0, $method(static_cast<double(Dasher$LengthIterator::*)()>(&Dasher$LengthIterator::lastSegLen))},
	{"next", "(D)D", nullptr, 0, $method(static_cast<double(Dasher$LengthIterator::*)(double)>(&Dasher$LengthIterator::next))},
	{"onLeaf", "()D", nullptr, $PRIVATE, $method(static_cast<double(Dasher$LengthIterator::*)()>(&Dasher$LengthIterator::onLeaf))},
	{"reset", "()V", nullptr, 0, $method(static_cast<void(Dasher$LengthIterator::*)()>(&Dasher$LengthIterator::reset))},
	{"totalLength", "()D", nullptr, 0, $method(static_cast<double(Dasher$LengthIterator::*)()>(&Dasher$LengthIterator::totalLength))},
	{}
};

$InnerClassInfo _Dasher$LengthIterator_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.Dasher$LengthIterator", "sun.java2d.marlin.Dasher", "LengthIterator", $STATIC | $FINAL},
	{}
};

$ClassInfo _Dasher$LengthIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Dasher$LengthIterator",
	"java.lang.Object",
	nullptr,
	_Dasher$LengthIterator_FieldInfo_,
	_Dasher$LengthIterator_MethodInfo_,
	nullptr,
	nullptr,
	_Dasher$LengthIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.Dasher"
};

$Object* allocate$Dasher$LengthIterator($Class* clazz) {
	return $of($alloc(Dasher$LengthIterator));
}

void Dasher$LengthIterator::init$() {
	$set(this, curLeafCtrlPolyLengths, $new($doubles, 3));
	this->cachedHaveLowAcceleration = -1;
	$set(this, nextRoots, $new($doubles, 4));
	$set(this, flatLeafCoefCache, $new($doubles, {
		0.0,
		0.0,
		-1.0,
		0.0
	}));
	$set(this, recCurveStack, $new($doubleArray2, 16 + 1, 8));
	$set(this, sidesRight, $new($booleans, 16));
	$init($Double);
	this->nextT = $Double::MAX_VALUE;
	this->lenAtNextT = $Double::MAX_VALUE;
	this->lenAtLastSplit = $Double::MIN_VALUE;
	this->recLevel = $Integer::MIN_VALUE;
	this->lastSegLen$ = $Double::MAX_VALUE;
	this->done = true;
}

void Dasher$LengthIterator::reset() {
}

void Dasher$LengthIterator::initializeIterationOnCurve($doubles* pts, int32_t type) {
	$System::arraycopy(pts, 0, $nc(this->recCurveStack)->get(0), 0, 8);
	this->curveType = type;
	this->recLevel = 0;
	this->lastT = 0.0;
	this->lenAtLastT = 0.0;
	this->nextT = 0.0;
	this->lenAtNextT = 0.0;
	goLeft();
	this->lenAtLastSplit = 0.0;
	if (this->recLevel > 0) {
		$nc(this->sidesRight)->set(0, false);
		this->done = false;
	} else {
		$nc(this->sidesRight)->set(0, true);
		this->done = true;
	}
	this->lastSegLen$ = 0.0;
}

bool Dasher$LengthIterator::haveLowAcceleration(double err) {
	if (this->cachedHaveLowAcceleration == -1) {
		double len1 = $nc(this->curLeafCtrlPolyLengths)->get(0);
		double len2 = $nc(this->curLeafCtrlPolyLengths)->get(1);
		if (!$Helpers::within(len1, len2, err * len2)) {
			this->cachedHaveLowAcceleration = 0;
			return false;
		}
		if (this->curveType == 8) {
			double len3 = $nc(this->curLeafCtrlPolyLengths)->get(2);
			double errLen3 = err * len3;
			bool var$0 = $Helpers::within(len2, len3, errLen3);
			if (!(var$0 && $Helpers::within(len1, len3, errLen3))) {
				this->cachedHaveLowAcceleration = 0;
				return false;
			}
		}
		this->cachedHaveLowAcceleration = 1;
		return true;
	}
	return (this->cachedHaveLowAcceleration == 1);
}

double Dasher$LengthIterator::next(double len) {
	double targetLength = this->lenAtLastSplit + len;
	while (this->lenAtNextT < targetLength) {
		if (this->done) {
			this->lastSegLen$ = this->lenAtNextT - this->lenAtLastSplit;
			return 1.0;
		}
		goToNextLeaf();
	}
	this->lenAtLastSplit = targetLength;
	double leaflen = this->lenAtNextT - this->lenAtLastT;
	double t = (targetLength - this->lenAtLastT) / leaflen;
	if (!haveLowAcceleration(0.05)) {
		$var($doubles, _flatLeafCoefCache, this->flatLeafCoefCache);
		if ($nc(_flatLeafCoefCache)->get(2) < 0.0) {
			double x = $nc(this->curLeafCtrlPolyLengths)->get(0);
			double y = x + $nc(this->curLeafCtrlPolyLengths)->get(1);
			if (this->curveType == 8) {
				double z = y + $nc(this->curLeafCtrlPolyLengths)->get(2);
				_flatLeafCoefCache->set(0, 3.0 * (x - y) + z);
				_flatLeafCoefCache->set(1, 3.0 * (y - 2.0 * x));
				_flatLeafCoefCache->set(2, 3.0 * x);
				_flatLeafCoefCache->set(3, -z);
			} else if (this->curveType == 6) {
				_flatLeafCoefCache->set(0, 0.0);
				_flatLeafCoefCache->set(1, y - 2.0 * x);
				_flatLeafCoefCache->set(2, 2.0 * x);
				_flatLeafCoefCache->set(3, -y);
			}
		}
		double a = $nc(_flatLeafCoefCache)->get(0);
		double b = _flatLeafCoefCache->get(1);
		double c = _flatLeafCoefCache->get(2);
		double d = t * _flatLeafCoefCache->get(3);
		int32_t n = $Helpers::cubicRootsInAB(a, b, c, d, this->nextRoots, 0, 0.0, 1.0);
		if (n == 1 && !$Double::isNaN($nc(this->nextRoots)->get(0))) {
			t = $nc(this->nextRoots)->get(0);
		}
	}
	t = t * (this->nextT - this->lastT) + this->lastT;
	if (t >= 1.0) {
		t = 1.0;
		this->done = true;
	}
	this->lastSegLen$ = len;
	return t;
}

double Dasher$LengthIterator::totalLength() {
	while (!this->done) {
		goToNextLeaf();
	}
	reset();
	return this->lenAtNextT;
}

double Dasher$LengthIterator::lastSegLen() {
	return this->lastSegLen$;
}

void Dasher$LengthIterator::goToNextLeaf() {
	$useLocalCurrentObjectStackCache();
	$var($booleans, _sides, this->sidesRight);
	int32_t _recLevel = this->recLevel;
	--_recLevel;
	while ($nc(_sides)->get(_recLevel)) {
		if (_recLevel == 0) {
			this->recLevel = 0;
			this->done = true;
			return;
		}
		--_recLevel;
	}
	$nc(_sides)->set(_recLevel, true);
	$var($Object, var$0, $of($nc(this->recCurveStack)->get(_recLevel++)));
	$System::arraycopy(var$0, 0, $nc(this->recCurveStack)->get(_recLevel), 0, 8);
	this->recLevel = _recLevel;
	goLeft();
}

void Dasher$LengthIterator::goLeft() {
	double len = onLeaf();
	if (len >= 0.0) {
		this->lastT = this->nextT;
		this->lenAtLastT = this->lenAtNextT;
		this->nextT += ($sl(1, 16 - this->recLevel)) * 1.52587890625E-5;
		this->lenAtNextT += len;
		$nc(this->flatLeafCoefCache)->set(2, -1.0);
		this->cachedHaveLowAcceleration = -1;
	} else {
		$Helpers::subdivide($nc(this->recCurveStack)->get(this->recLevel), $nc(this->recCurveStack)->get(this->recLevel + 1), $nc(this->recCurveStack)->get(this->recLevel), this->curveType);
		$nc(this->sidesRight)->set(this->recLevel, false);
		++this->recLevel;
		goLeft();
	}
}

double Dasher$LengthIterator::onLeaf() {
	$var($doubles, curve, $nc(this->recCurveStack)->get(this->recLevel));
	int32_t _curveType = this->curveType;
	double polyLen = 0.0;
	double x0 = $nc(curve)->get(0);
	double y0 = curve->get(1);
	for (int32_t i = 2; i < _curveType; i += 2) {
		double x1 = curve->get(i);
		double y1 = curve->get(i + 1);
		double len = $Helpers::linelen(x0, y0, x1, y1);
		polyLen += len;
		$nc(this->curLeafCtrlPolyLengths)->set((i >> 1) - 1, len);
		x0 = x1;
		y0 = y1;
	}
	double lineLen = $Helpers::linelen(curve->get(0), curve->get(1), x0, y0);
	$init($Dasher);
	if ((polyLen - lineLen) < $Dasher::CURVE_LEN_ERR || this->recLevel == 16) {
		return (polyLen + lineLen) / 2.0;
	}
	return -1.0;
}

Dasher$LengthIterator::Dasher$LengthIterator() {
}

$Class* Dasher$LengthIterator::load$($String* name, bool initialize) {
	$loadClass(Dasher$LengthIterator, name, initialize, &_Dasher$LengthIterator_ClassInfo_, allocate$Dasher$LengthIterator);
	return class$;
}

$Class* Dasher$LengthIterator::class$ = nullptr;

		} // marlin
	} // java2d
} // sun