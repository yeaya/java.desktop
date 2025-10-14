#include <sun/font/NullFontScaler.h>

#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontScaler.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $FontScaler = ::sun::font::FontScaler;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$MethodInfo _NullFontScaler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NullFontScaler::*)()>(&NullFontScaler::init$))},
	{"<init>", "(Lsun/font/Font2D;IZI)V", nullptr, $PUBLIC, $method(static_cast<void(NullFontScaler::*)($Font2D*,int32_t,bool,int32_t)>(&NullFontScaler::init$))},
	{"createScalerContext", "([DIIFF)J", nullptr, 0},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphAdvance", "(JI)F", nullptr, 0},
	{"getGlyphCode", "(C)I", nullptr, 0, nullptr, "sun.font.FontScalerException"},
	{"getGlyphImage", "(JI)J", nullptr, $NATIVE},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, 0},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphPoint", "(JII)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getMissingGlyphCode", "()I", nullptr, 0, nullptr, "sun.font.FontScalerException"},
	{"getNullScalerContext", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&NullFontScaler::getNullScalerContext))},
	{"getNumGlyphs", "()I", nullptr, 0, nullptr, "sun.font.FontScalerException"},
	{"getUnitsPerEm", "()J", nullptr, 0},
	{"invalidateScalerContext", "(J)V", nullptr, 0},
	{}
};

#define _METHOD_INDEX_getGlyphImage 6
#define _METHOD_INDEX_getNullScalerContext 13

$ClassInfo _NullFontScaler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.NullFontScaler",
	"sun.font.FontScaler",
	nullptr,
	nullptr,
	_NullFontScaler_MethodInfo_
};

$Object* allocate$NullFontScaler($Class* clazz) {
	return $of($alloc(NullFontScaler));
}

void NullFontScaler::init$() {
	$FontScaler::init$();
}

void NullFontScaler::init$($Font2D* font, int32_t indexInCollection, bool supportsCJK, int32_t filesize) {
	$FontScaler::init$();
}

$StrikeMetrics* NullFontScaler::getFontMetrics(int64_t pScalerContext) {
	return $new($StrikeMetrics, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}

float NullFontScaler::getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) {
	return 0.0f;
}

void NullFontScaler::getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, $Point2D$Float* metrics) {
	$nc(metrics)->x = (float)0;
	metrics->y = (float)0;
}

$Rectangle2D$Float* NullFontScaler::getGlyphOutlineBounds(int64_t pContext, int32_t glyphCode) {
	return $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0);
}

$GeneralPath* NullFontScaler::getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {
	return $new($GeneralPath);
}

$GeneralPath* NullFontScaler::getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {
	return $new($GeneralPath);
}

int64_t NullFontScaler::createScalerContext($doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic) {
	return getNullScalerContext();
}

void NullFontScaler::invalidateScalerContext(int64_t pScalerContext) {
}

int32_t NullFontScaler::getNumGlyphs() {
	return 1;
}

int32_t NullFontScaler::getMissingGlyphCode() {
	return 0;
}

int32_t NullFontScaler::getGlyphCode(char16_t charCode) {
	return 0;
}

int64_t NullFontScaler::getUnitsPerEm() {
	return 2048;
}

$Point2D$Float* NullFontScaler::getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) {
	return nullptr;
}

int64_t NullFontScaler::getNullScalerContext() {
	$init(NullFontScaler);
	int64_t $ret = 0;
	$prepareNativeStatic(NullFontScaler, getNullScalerContext, int64_t);
	$ret = $invokeNativeStatic(NullFontScaler, getNullScalerContext);
	$finishNativeStatic();
	return $ret;
}

int64_t NullFontScaler::getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {
	int64_t $ret = 0;
	$prepareNative(NullFontScaler, getGlyphImage, int64_t, int64_t pScalerContext, int32_t glyphCode);
	$ret = $invokeNative(NullFontScaler, getGlyphImage, pScalerContext, glyphCode);
	$finishNative();
	return $ret;
}

NullFontScaler::NullFontScaler() {
}

$Class* NullFontScaler::load$($String* name, bool initialize) {
	$loadClass(NullFontScaler, name, initialize, &_NullFontScaler_ClassInfo_, allocate$NullFontScaler);
	return class$;
}

$Class* NullFontScaler::class$ = nullptr;

	} // font
} // sun