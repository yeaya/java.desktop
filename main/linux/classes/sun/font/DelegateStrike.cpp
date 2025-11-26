#include <sun/font/DelegateStrike.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/NativeFont.h>
#include <sun/font/NativeStrike.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $NativeFont = ::sun::font::NativeFont;
using $NativeStrike = ::sun::font::NativeStrike;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _DelegateStrike_FieldInfo_[] = {
	{"delegateStrike", "Lsun/font/FontStrike;", nullptr, $PRIVATE, $field(DelegateStrike, delegateStrike)},
	{}
};

$MethodInfo _DelegateStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/NativeFont;Lsun/font/FontStrikeDesc;Lsun/font/FontStrike;)V", nullptr, 0, $method(static_cast<void(DelegateStrike::*)($NativeFont*,$FontStrikeDesc*,$FontStrike*)>(&DelegateStrike::init$))},
	{"getCharMetrics", "(C)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getCodePointAdvance", "(I)F", nullptr, 0},
	{"getFontMetrics", "()Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphAdvance", "(I)F", nullptr, 0},
	{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, 0},
	{"getGlyphImagePtr", "(I)J", nullptr, 0},
	{"getGlyphImagePtrs", "([I[JI)V", nullptr, 0},
	{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{}
};

$ClassInfo _DelegateStrike_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.DelegateStrike",
	"sun.font.NativeStrike",
	nullptr,
	_DelegateStrike_FieldInfo_,
	_DelegateStrike_MethodInfo_
};

$Object* allocate$DelegateStrike($Class* clazz) {
	return $of($alloc(DelegateStrike));
}

void DelegateStrike::init$($NativeFont* nativeFont, $FontStrikeDesc* desc, $FontStrike* delegate) {
	$NativeStrike::init$(nativeFont, desc);
	$set(this, delegateStrike, delegate);
}

$StrikeMetrics* DelegateStrike::getFontMetrics() {
	if (this->strikeMetrics == nullptr) {
		if (this->pScalerContext != 0) {
			$set(this, strikeMetrics, $NativeStrike::getFontMetrics());
		}
		if (this->strikeMetrics == nullptr) {
			$set(this, strikeMetrics, $nc(this->delegateStrike)->getFontMetrics());
		}
	}
	return this->strikeMetrics;
}

void DelegateStrike::getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
	$nc(this->delegateStrike)->getGlyphImagePtrs(glyphCodes, images, len);
}

int64_t DelegateStrike::getGlyphImagePtr(int32_t glyphCode) {
	return $nc(this->delegateStrike)->getGlyphImagePtr(glyphCode);
}

void DelegateStrike::getGlyphImageBounds(int32_t glyphCode, $Point2D$Float* pt, $Rectangle* result) {
	$nc(this->delegateStrike)->getGlyphImageBounds(glyphCode, pt, result);
}

$Point2D$Float* DelegateStrike::getGlyphMetrics(int32_t glyphCode) {
	return $nc(this->delegateStrike)->getGlyphMetrics(glyphCode);
}

float DelegateStrike::getGlyphAdvance(int32_t glyphCode) {
	return $nc(this->delegateStrike)->getGlyphAdvance(glyphCode);
}

$Point2D$Float* DelegateStrike::getCharMetrics(char16_t ch) {
	return $nc(this->delegateStrike)->getCharMetrics(ch);
}

float DelegateStrike::getCodePointAdvance(int32_t cp) {
	if (cp < 0 || cp >= 0x00010000) {
		cp = 0x0000FFFF;
	}
	return $nc(this->delegateStrike)->getGlyphAdvance(cp);
}

$Rectangle2D$Float* DelegateStrike::getGlyphOutlineBounds(int32_t glyphCode) {
	return $nc(this->delegateStrike)->getGlyphOutlineBounds(glyphCode);
}

$GeneralPath* DelegateStrike::getGlyphOutline(int32_t glyphCode, float x, float y) {
	return $nc(this->delegateStrike)->getGlyphOutline(glyphCode, x, y);
}

$GeneralPath* DelegateStrike::getGlyphVectorOutline($ints* glyphs, float x, float y) {
	return $nc(this->delegateStrike)->getGlyphVectorOutline(glyphs, x, y);
}

DelegateStrike::DelegateStrike() {
}

$Class* DelegateStrike::load$($String* name, bool initialize) {
	$loadClass(DelegateStrike, name, initialize, &_DelegateStrike_ClassInfo_, allocate$DelegateStrike);
	return class$;
}

$Class* DelegateStrike::class$ = nullptr;

	} // font
} // sun