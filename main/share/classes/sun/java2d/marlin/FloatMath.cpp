#include <sun/java2d/marlin/FloatMath.h>

#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef CHECK_NAN
#undef CHECK_OVERFLOW
#undef FLOAT_EXP_BIAS
#undef FLOAT_EXP_BIT_MASK
#undef FLOAT_SIGNIFICAND_WIDTH
#undef FLOAT_SIGNIF_BIT_MASK
#undef MAX_VALUE
#undef MIN_VALUE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _FloatMath_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FloatMath, $assertionsDisabled)},
	{"CHECK_OVERFLOW", "Z", nullptr, $STATIC | $FINAL, $constField(FloatMath, CHECK_OVERFLOW)},
	{"CHECK_NAN", "Z", nullptr, $STATIC | $FINAL, $constField(FloatMath, CHECK_NAN)},
	{"FLOAT_SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatMath, FLOAT_SIGNIFICAND_WIDTH)},
	{"FLOAT_EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatMath, FLOAT_EXP_BIAS)},
	{"FLOAT_EXP_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatMath, FLOAT_EXP_BIT_MASK)},
	{"FLOAT_SIGNIF_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatMath, FLOAT_SIGNIF_BIT_MASK)},
	{}
};

$MethodInfo _FloatMath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FloatMath::*)()>(&FloatMath::init$))},
	{"ceil_f", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&FloatMath::ceil_f))},
	{"ceil_int", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&FloatMath::ceil_int))},
	{"ceil_int", "(D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double)>(&FloatMath::ceil_int))},
	{"floor_f", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&FloatMath::floor_f))},
	{"floor_int", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&FloatMath::floor_int))},
	{"floor_int", "(D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double)>(&FloatMath::floor_int))},
	{"max", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&FloatMath::max))},
	{"min", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&FloatMath::min))},
	{}
};

$ClassInfo _FloatMath_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.FloatMath",
	"java.lang.Object",
	"sun.java2d.marlin.MarlinConst",
	_FloatMath_FieldInfo_,
	_FloatMath_MethodInfo_
};

$Object* allocate$FloatMath($Class* clazz) {
	return $of($alloc(FloatMath));
}

bool FloatMath::$assertionsDisabled = false;

void FloatMath::init$() {
}

int32_t FloatMath::max(int32_t a, int32_t b) {
	$init(FloatMath);
	return (a >= b) ? a : b;
}

int32_t FloatMath::min(int32_t a, int32_t b) {
	$init(FloatMath);
	return (a <= b) ? a : b;
}

float FloatMath::ceil_f(float a) {
	$init(FloatMath);
	int32_t doppel = $Float::floatToRawIntBits(a);
	int32_t exponent = ($sr((int32_t)(doppel & (uint32_t)FloatMath::FLOAT_EXP_BIT_MASK), FloatMath::FLOAT_SIGNIFICAND_WIDTH - 1)) - FloatMath::FLOAT_EXP_BIAS;
	if (exponent < 0) {
		return ((a == 0.0f) ? a : ((a < 0.0f) ? -0.0f : 1.0f));
	}
	if (exponent >= 23) {
		return a;
	}
	if (!FloatMath::$assertionsDisabled && !(exponent >= 0 && exponent <= 22)) {
		$throwNew($AssertionError);
	}
	int32_t intpart = (int32_t)(doppel & (uint32_t)(~($sr(FloatMath::FLOAT_SIGNIF_BIT_MASK, exponent))));
	if (intpart == doppel) {
		return a;
	}
	return $Float::intBitsToFloat(intpart) + ((int32_t)((uint32_t)(~intpart) >> 31));
}

float FloatMath::floor_f(float a) {
	$init(FloatMath);
	int32_t doppel = $Float::floatToRawIntBits(a);
	int32_t exponent = ($sr((int32_t)(doppel & (uint32_t)FloatMath::FLOAT_EXP_BIT_MASK), FloatMath::FLOAT_SIGNIFICAND_WIDTH - 1)) - FloatMath::FLOAT_EXP_BIAS;
	if (exponent < 0) {
		return ((a == 0.0f) ? a : ((a < 0.0f) ? -1.0f : 0.0f));
	}
	if (exponent >= 23) {
		return a;
	}
	if (!FloatMath::$assertionsDisabled && !(exponent >= 0 && exponent <= 22)) {
		$throwNew($AssertionError);
	}
	int32_t intpart = (int32_t)(doppel & (uint32_t)(~($sr(FloatMath::FLOAT_SIGNIF_BIT_MASK, exponent))));
	if (intpart == doppel) {
		return a;
	}
	return $Float::intBitsToFloat(intpart) + (intpart >> 31);
}

int32_t FloatMath::ceil_int(float a) {
	$init(FloatMath);
	int32_t intpart = $cast(int32_t, a);
	if (a <= intpart || intpart == $Integer::MAX_VALUE || $Float::isNaN(a)) {
		return intpart;
	}
	return intpart + 1;
}

int32_t FloatMath::ceil_int(double a) {
	$init(FloatMath);
	int32_t intpart = $cast(int32_t, a);
	if (a <= intpart || intpart == $Integer::MAX_VALUE || $Double::isNaN(a)) {
		return intpart;
	}
	return intpart + 1;
}

int32_t FloatMath::floor_int(float a) {
	$init(FloatMath);
	int32_t intpart = $cast(int32_t, a);
	if (a >= intpart || intpart == $Integer::MIN_VALUE || $Float::isNaN(a)) {
		return intpart;
	}
	return intpart - 1;
}

int32_t FloatMath::floor_int(double a) {
	$init(FloatMath);
	int32_t intpart = $cast(int32_t, a);
	if (a >= intpart || intpart == $Integer::MIN_VALUE || $Double::isNaN(a)) {
		return intpart;
	}
	return intpart - 1;
}

void clinit$FloatMath($Class* class$) {
	FloatMath::$assertionsDisabled = !FloatMath::class$->desiredAssertionStatus();
}

FloatMath::FloatMath() {
}

$Class* FloatMath::load$($String* name, bool initialize) {
	$loadClass(FloatMath, name, initialize, &_FloatMath_ClassInfo_, clinit$FloatMath, allocate$FloatMath);
	return class$;
}

$Class* FloatMath::class$ = nullptr;

		} // marlin
	} // java2d
} // sun