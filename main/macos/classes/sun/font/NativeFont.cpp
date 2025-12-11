#include <sun/font/NativeFont.h>

#include <java/awt/FontFormatException.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

using $FontFormatException = ::java::awt::FontFormatException;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$MethodInfo _NativeFont_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(NativeFont::*)($String*,bool)>(&NativeFont::init$)), "java.awt.FontFormatException"},
	{"createStrike", "(Lsun/font/FontStrikeDesc;)Lsun/font/FontStrike;", nullptr, 0},
	{"getDelegateFont", "()Lsun/font/PhysicalFont;", nullptr, 0},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphAdvance", "(JI)F", nullptr, 0},
	{"getGlyphImage", "(JI)J", nullptr, 0},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, 0},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, $PUBLIC},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, $PUBLIC},
	{"getMapper", "()Lsun/font/CharToGlyphMapper;", nullptr, $PUBLIC},
	{"getMaxCharBounds", "(Ljava/awt/font/FontRenderContext;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"hasExternalBitmaps", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&NativeFont::hasExternalBitmaps))},
	{}
};

$ClassInfo _NativeFont_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.NativeFont",
	"sun.font.PhysicalFont",
	nullptr,
	nullptr,
	_NativeFont_MethodInfo_
};

$Object* allocate$NativeFont($Class* clazz) {
	return $of($alloc(NativeFont));
}

void NativeFont::init$($String* platName, bool isBitmapDelegate) {
	$PhysicalFont::init$();
	$throwNew($FontFormatException, "NativeFont not used on OS X"_s);
}

bool NativeFont::hasExternalBitmaps($String* platName) {
	$init(NativeFont);
	return false;
}

$CharToGlyphMapper* NativeFont::getMapper() {
	return nullptr;
}

$PhysicalFont* NativeFont::getDelegateFont() {
	return nullptr;
}

$FontStrike* NativeFont::createStrike($FontStrikeDesc* desc) {
	return nullptr;
}

$Rectangle2D* NativeFont::getMaxCharBounds($FontRenderContext* frc) {
	return nullptr;
}

$StrikeMetrics* NativeFont::getFontMetrics(int64_t pScalerContext) {
	return nullptr;
}

$GeneralPath* NativeFont::getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {
	return nullptr;
}

$GeneralPath* NativeFont::getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {
	return nullptr;
}

int64_t NativeFont::getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {
	return 0;
}

void NativeFont::getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, $Point2D$Float* metrics) {
}

float NativeFont::getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) {
	return 0.0f;
}

$Rectangle2D$Float* NativeFont::getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) {
	return $new($Rectangle2D$Float, 0.0f, 0.0f, 0.0f, 0.0f);
}

NativeFont::NativeFont() {
}

$Class* NativeFont::load$($String* name, bool initialize) {
	$loadClass(NativeFont, name, initialize, &_NativeFont_ClassInfo_, allocate$NativeFont);
	return class$;
}

$Class* NativeFont::class$ = nullptr;

	} // font
} // sun