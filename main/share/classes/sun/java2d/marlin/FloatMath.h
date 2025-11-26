#ifndef _sun_java2d_marlin_FloatMath_h_
#define _sun_java2d_marlin_FloatMath_h_
//$ class sun.java2d.marlin.FloatMath
//$ extends sun.java2d.marlin.MarlinConst

#include <sun/java2d/marlin/MarlinConst.h>

#pragma push_macro("CHECK_NAN")
#undef CHECK_NAN
#pragma push_macro("CHECK_OVERFLOW")
#undef CHECK_OVERFLOW
#pragma push_macro("FLOAT_EXP_BIAS")
#undef FLOAT_EXP_BIAS
#pragma push_macro("FLOAT_EXP_BIT_MASK")
#undef FLOAT_EXP_BIT_MASK
#pragma push_macro("FLOAT_SIGNIFICAND_WIDTH")
#undef FLOAT_SIGNIFICAND_WIDTH
#pragma push_macro("FLOAT_SIGNIF_BIT_MASK")
#undef FLOAT_SIGNIF_BIT_MASK

namespace sun {
	namespace java2d {
		namespace marlin {

class FloatMath : public ::sun::java2d::marlin::MarlinConst {
	$class(FloatMath, 0, ::sun::java2d::marlin::MarlinConst)
public:
	FloatMath();
	void init$();
	static float ceil_f(float a);
	static int32_t ceil_int(float a);
	static int32_t ceil_int(double a);
	static float floor_f(float a);
	static int32_t floor_int(float a);
	static int32_t floor_int(double a);
	static int32_t max(int32_t a, int32_t b);
	static int32_t min(int32_t a, int32_t b);
	static bool $assertionsDisabled;
	static const bool CHECK_OVERFLOW = true;
	static const bool CHECK_NAN = true;
	static const int32_t FLOAT_SIGNIFICAND_WIDTH = 24;
	static const int32_t FLOAT_EXP_BIAS = 127;
	static const int32_t FLOAT_EXP_BIT_MASK = 0x7F800000;
	static const int32_t FLOAT_SIGNIF_BIT_MASK = 0x007FFFFF;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("CHECK_NAN")
#pragma pop_macro("CHECK_OVERFLOW")
#pragma pop_macro("FLOAT_EXP_BIAS")
#pragma pop_macro("FLOAT_EXP_BIT_MASK")
#pragma pop_macro("FLOAT_SIGNIFICAND_WIDTH")
#pragma pop_macro("FLOAT_SIGNIF_BIT_MASK")

#endif // _sun_java2d_marlin_FloatMath_h_