#include <sun/java2d/xr/XRUtils.h>

#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/lang/InternalError.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

#undef BEST
#undef BEST_NAME
#undef BITMASK
#undef FAST
#undef FAST_NAME
#undef GOOD
#undef GOOD_NAME
#undef MAX_VALUE
#undef MIN_VALUE
#undef NO_CYCLE
#undef OPAQUE
#undef REFLECT
#undef REPEAT
#undef TRANSLUCENT
#undef TYPE_BICUBIC
#undef TYPE_BILINEAR
#undef TYPE_GENERAL_ROTATION
#undef TYPE_GENERAL_TRANSFORM
#undef TYPE_NEAREST_NEIGHBOR

using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRUtils_FieldInfo_[] = {
	{"None", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, None)},
	{"PictOpClear", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpClear)},
	{"PictOpSrc", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpSrc)},
	{"PictOpDst", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpDst)},
	{"PictOpOver", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpOver)},
	{"PictOpOverReverse", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpOverReverse)},
	{"PictOpIn", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpIn)},
	{"PictOpInReverse", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpInReverse)},
	{"PictOpOut", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpOut)},
	{"PictOpOutReverse", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpOutReverse)},
	{"PictOpAtop", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpAtop)},
	{"PictOpAtopReverse", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpAtopReverse)},
	{"PictOpXor", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpXor)},
	{"PictOpAdd", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpAdd)},
	{"PictOpSaturate", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictOpSaturate)},
	{"RepeatNone", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, RepeatNone)},
	{"RepeatNormal", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, RepeatNormal)},
	{"RepeatPad", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, RepeatPad)},
	{"RepeatReflect", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, RepeatReflect)},
	{"FAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, FAST)},
	{"GOOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, GOOD)},
	{"BEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, BEST)},
	{"FAST_NAME", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRUtils, FAST_NAME)},
	{"GOOD_NAME", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRUtils, GOOD_NAME)},
	{"BEST_NAME", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRUtils, BEST_NAME)},
	{"PictStandardARGB32", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictStandardARGB32)},
	{"PictStandardRGB24", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictStandardRGB24)},
	{"PictStandardA8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictStandardA8)},
	{"PictStandardA4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictStandardA4)},
	{"PictStandardA1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XRUtils, PictStandardA1)},
	{}
};

$MethodInfo _XRUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XRUtils::*)()>(&XRUtils::init$))},
	{"ATransOpToXRQuality", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&XRUtils::ATransOpToXRQuality))},
	{"ATransOpToXRQualityName", "(I)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)(int32_t)>(&XRUtils::ATransOpToXRQualityName))},
	{"XDoubleToFixed", "(D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double)>(&XRUtils::XDoubleToFixed))},
	{"XFixedToDouble", "(I)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(int32_t)>(&XRUtils::XFixedToDouble))},
	{"clampToShort", "(I)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)(int32_t)>(&XRUtils::clampToShort))},
	{"clampToUShort", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&XRUtils::clampToUShort))},
	{"convertFloatsToFixed", "([F)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($floats*)>(&XRUtils::convertFloatsToFixed))},
	{"getFilterName", "(I)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)(int32_t)>(&XRUtils::getFilterName))},
	{"getPictureFormatForTransparency", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&XRUtils::getPictureFormatForTransparency))},
	{"getRepeatForCycleMethod", "(Ljava/awt/MultipleGradientPaint$CycleMethod;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($MultipleGradientPaint$CycleMethod*)>(&XRUtils::getRepeatForCycleMethod))},
	{"getXRSurfaceTypeForTransparency", "(I)Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceType*(*)(int32_t)>(&XRUtils::getXRSurfaceTypeForTransparency))},
	{"intToULong", "(I)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&XRUtils::intToULong))},
	{"isDoubleInShortRange", "(D)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(double)>(&XRUtils::isDoubleInShortRange))},
	{"isMaskEvaluated", "(B)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int8_t)>(&XRUtils::isMaskEvaluated))},
	{"isPointCoordInShortRange", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Point2D*)>(&XRUtils::isPointCoordInShortRange))},
	{"isTransformQuadrantRotated", "(Ljava/awt/geom/AffineTransform;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AffineTransform*)>(&XRUtils::isTransformQuadrantRotated))},
	{"j2dAlphaCompToXR", "(I)B", nullptr, $PUBLIC | $STATIC, $method(static_cast<int8_t(*)(int32_t)>(&XRUtils::j2dAlphaCompToXR))},
	{}
};

$ClassInfo _XRUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRUtils",
	"java.lang.Object",
	nullptr,
	_XRUtils_FieldInfo_,
	_XRUtils_MethodInfo_
};

$Object* allocate$XRUtils($Class* clazz) {
	return $of($alloc(XRUtils));
}

$bytes* XRUtils::FAST_NAME = nullptr;
$bytes* XRUtils::GOOD_NAME = nullptr;
$bytes* XRUtils::BEST_NAME = nullptr;

void XRUtils::init$() {
}

int32_t XRUtils::ATransOpToXRQuality(int32_t affineTranformOp) {
	$init(XRUtils);
	switch (affineTranformOp) {
	case $AffineTransformOp::TYPE_NEAREST_NEIGHBOR:
		{
			return XRUtils::FAST;
		}
	case $AffineTransformOp::TYPE_BILINEAR:
		{
			return XRUtils::GOOD;
		}
	case $AffineTransformOp::TYPE_BICUBIC:
		{
			return XRUtils::BEST;
		}
	}
	return -1;
}

$bytes* XRUtils::ATransOpToXRQualityName(int32_t affineTranformOp) {
	$init(XRUtils);
	switch (affineTranformOp) {
	case $AffineTransformOp::TYPE_NEAREST_NEIGHBOR:
		{
			return XRUtils::FAST_NAME;
		}
	case $AffineTransformOp::TYPE_BILINEAR:
		{
			return XRUtils::GOOD_NAME;
		}
	case $AffineTransformOp::TYPE_BICUBIC:
		{
			return XRUtils::BEST_NAME;
		}
	}
	return nullptr;
}

$bytes* XRUtils::getFilterName(int32_t filterType) {
	$init(XRUtils);
	switch (filterType) {
	case XRUtils::FAST:
		{
			return XRUtils::FAST_NAME;
		}
	case XRUtils::GOOD:
		{
			return XRUtils::GOOD_NAME;
		}
	case XRUtils::BEST:
		{
			return XRUtils::BEST_NAME;
		}
	}
	return nullptr;
}

int32_t XRUtils::getPictureFormatForTransparency(int32_t transparency) {
	$init(XRUtils);
	switch (transparency) {
	case $Transparency::OPAQUE:
		{
			return XRUtils::PictStandardRGB24;
		}
	case $Transparency::BITMASK:
		{}
	case $Transparency::TRANSLUCENT:
		{
			return XRUtils::PictStandardARGB32;
		}
	}
	return -1;
}

$SurfaceType* XRUtils::getXRSurfaceTypeForTransparency(int32_t transparency) {
	$init(XRUtils);
	if (transparency == $Transparency::OPAQUE) {
		$init($SurfaceType);
		return $SurfaceType::IntRgb;
	} else {
		$init($SurfaceType);
		return $SurfaceType::IntArgbPre;
	}
}

int32_t XRUtils::getRepeatForCycleMethod($MultipleGradientPaint$CycleMethod* cycleMethod) {
	$init(XRUtils);
	$init($MultipleGradientPaint$CycleMethod);
	if ($nc(cycleMethod)->equals($MultipleGradientPaint$CycleMethod::NO_CYCLE)) {
		return XRUtils::RepeatPad;
	} else {
		if (cycleMethod->equals($MultipleGradientPaint$CycleMethod::REFLECT)) {
			return XRUtils::RepeatReflect;
		} else {
			if (cycleMethod->equals($MultipleGradientPaint$CycleMethod::REPEAT)) {
				return XRUtils::RepeatNormal;
			}
		}
	}
	return XRUtils::RepeatNone;
}

int32_t XRUtils::XDoubleToFixed(double dbl) {
	$init(XRUtils);
	return $cast(int32_t, (dbl * 0x00010000));
}

double XRUtils::XFixedToDouble(int32_t fixed) {
	$init(XRUtils);
	return ((double)fixed) / 0x00010000;
}

$ints* XRUtils::convertFloatsToFixed($floats* values) {
	$init(XRUtils);
	$var($ints, fixed, $new($ints, $nc(values)->length));
	for (int32_t i = 0; i < values->length; ++i) {
		fixed->set(i, XDoubleToFixed(values->get(i)));
	}
	return fixed;
}

int64_t XRUtils::intToULong(int32_t signed$) {
	$init(XRUtils);
	if (signed$ < 0) {
		return ((int64_t)signed$) + (((int64_t)$Integer::MAX_VALUE) - ((int64_t)$Integer::MIN_VALUE) + 1);
	}
	return signed$;
}

int8_t XRUtils::j2dAlphaCompToXR(int32_t j2dRule) {
	$init(XRUtils);
	$useLocalCurrentObjectStackCache();
	switch (j2dRule) {
	case 1:
		{
			return XRUtils::PictOpClear;
		}
	case 2:
		{
			return XRUtils::PictOpSrc;
		}
	case 9:
		{
			return XRUtils::PictOpDst;
		}
	case 3:
		{
			return XRUtils::PictOpOver;
		}
	case 4:
		{
			return XRUtils::PictOpOverReverse;
		}
	case 5:
		{
			return XRUtils::PictOpIn;
		}
	case 6:
		{
			return XRUtils::PictOpInReverse;
		}
	case 7:
		{
			return XRUtils::PictOpOut;
		}
	case 8:
		{
			return XRUtils::PictOpOutReverse;
		}
	case 10:
		{
			return XRUtils::PictOpAtop;
		}
	case 11:
		{
			return XRUtils::PictOpAtopReverse;
		}
	case 12:
		{
			return XRUtils::PictOpXor;
		}
	}
	$throwNew($InternalError, $$str({"No XRender equivalent available for requested java2d composition rule: "_s, $$str(j2dRule)}));
}

int16_t XRUtils::clampToShort(int32_t x) {
	$init(XRUtils);
	return (int16_t)(x > $Short::MAX_VALUE ? (int32_t)$Short::MAX_VALUE : (x < $Short::MIN_VALUE ? (int32_t)$Short::MIN_VALUE : x));
}

int32_t XRUtils::clampToUShort(int32_t x) {
	$init(XRUtils);
	return (x > 0x0000FFFF ? 0x0000FFFF : (x < 0) ? 0 : x);
}

bool XRUtils::isDoubleInShortRange(double dbl) {
	$init(XRUtils);
	return dbl <= $Short::MAX_VALUE && dbl >= $Short::MIN_VALUE;
}

bool XRUtils::isPointCoordInShortRange($Point2D* p) {
	$init(XRUtils);
	bool var$0 = isDoubleInShortRange($nc(p)->getX());
	return var$0 && isDoubleInShortRange($nc(p)->getY());
}

bool XRUtils::isTransformQuadrantRotated($AffineTransform* tr) {
	$init(XRUtils);
	return (((int32_t)($nc(tr)->getType() & (uint32_t)($AffineTransform::TYPE_GENERAL_ROTATION | $AffineTransform::TYPE_GENERAL_TRANSFORM))) == 0);
}

bool XRUtils::isMaskEvaluated(int8_t xrCompRule) {
	$init(XRUtils);
	switch (xrCompRule) {
	case XRUtils::PictOpOver:
		{}
	case XRUtils::PictOpOverReverse:
		{}
	case XRUtils::PictOpAtop:
		{}
	case XRUtils::PictOpXor:
		{
			return true;
		}
	}
	return false;
}

void clinit$XRUtils($Class* class$) {
	$assignStatic(XRUtils::FAST_NAME, "fast"_s->getBytes());
	$assignStatic(XRUtils::GOOD_NAME, "good"_s->getBytes());
	$assignStatic(XRUtils::BEST_NAME, "best"_s->getBytes());
}

XRUtils::XRUtils() {
}

$Class* XRUtils::load$($String* name, bool initialize) {
	$loadClass(XRUtils, name, initialize, &_XRUtils_ClassInfo_, clinit$XRUtils, allocate$XRUtils);
	return class$;
}

$Class* XRUtils::class$ = nullptr;

		} // xr
	} // java2d
} // sun