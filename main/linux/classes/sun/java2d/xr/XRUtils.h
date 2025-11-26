#ifndef _sun_java2d_xr_XRUtils_h_
#define _sun_java2d_xr_XRUtils_h_
//$ class sun.java2d.xr.XRUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BEST")
#undef BEST
#pragma push_macro("BEST_NAME")
#undef BEST_NAME
#pragma push_macro("FAST")
#undef FAST
#pragma push_macro("FAST_NAME")
#undef FAST_NAME
#pragma push_macro("GOOD")
#undef GOOD
#pragma push_macro("GOOD_NAME")
#undef GOOD_NAME

namespace java {
	namespace awt {
		class MultipleGradientPaint$CycleMethod;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRUtils : public ::java::lang::Object {
	$class(XRUtils, 0, ::java::lang::Object)
public:
	XRUtils();
	void init$();
	static int32_t ATransOpToXRQuality(int32_t affineTranformOp);
	static $bytes* ATransOpToXRQualityName(int32_t affineTranformOp);
	static int32_t XDoubleToFixed(double dbl);
	static double XFixedToDouble(int32_t fixed);
	static int16_t clampToShort(int32_t x);
	static int32_t clampToUShort(int32_t x);
	static $ints* convertFloatsToFixed($floats* values);
	static $bytes* getFilterName(int32_t filterType);
	static int32_t getPictureFormatForTransparency(int32_t transparency);
	static int32_t getRepeatForCycleMethod(::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod);
	static ::sun::java2d::loops::SurfaceType* getXRSurfaceTypeForTransparency(int32_t transparency);
	static int64_t intToULong(int32_t signed$);
	static bool isDoubleInShortRange(double dbl);
	static bool isMaskEvaluated(int8_t xrCompRule);
	static bool isPointCoordInShortRange(::java::awt::geom::Point2D* p);
	static bool isTransformQuadrantRotated(::java::awt::geom::AffineTransform* tr);
	static int8_t j2dAlphaCompToXR(int32_t j2dRule);
	static const int32_t None = 0;
	static const int8_t PictOpClear = 0;
	static const int8_t PictOpSrc = 1;
	static const int8_t PictOpDst = 2;
	static const int8_t PictOpOver = 3;
	static const int8_t PictOpOverReverse = 4;
	static const int8_t PictOpIn = 5;
	static const int8_t PictOpInReverse = 6;
	static const int8_t PictOpOut = 7;
	static const int8_t PictOpOutReverse = 8;
	static const int8_t PictOpAtop = 9;
	static const int8_t PictOpAtopReverse = 10;
	static const int8_t PictOpXor = 11;
	static const int8_t PictOpAdd = 12;
	static const int8_t PictOpSaturate = 13;
	static const int32_t RepeatNone = 0;
	static const int32_t RepeatNormal = 1;
	static const int32_t RepeatPad = 2;
	static const int32_t RepeatReflect = 3;
	static const int32_t FAST = 0;
	static const int32_t GOOD = 1;
	static const int32_t BEST = 2;
	static $bytes* FAST_NAME;
	static $bytes* GOOD_NAME;
	static $bytes* BEST_NAME;
	static const int32_t PictStandardARGB32 = 0;
	static const int32_t PictStandardRGB24 = 1;
	static const int32_t PictStandardA8 = 2;
	static const int32_t PictStandardA4 = 3;
	static const int32_t PictStandardA1 = 4;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("BEST")
#pragma pop_macro("BEST_NAME")
#pragma pop_macro("FAST")
#pragma pop_macro("FAST_NAME")
#pragma pop_macro("GOOD")
#pragma pop_macro("GOOD_NAME")

#endif // _sun_java2d_xr_XRUtils_h_