#include <sun/font/NativeStrike.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/NativeFont.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $NativeFont = ::sun::font::NativeFont;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;

namespace sun {
	namespace font {

$FieldInfo _NativeStrike_FieldInfo_[] = {
	{"nativeFont", "Lsun/font/NativeFont;", nullptr, 0, $field(NativeStrike, nativeFont)},
	{}
};

$MethodInfo _NativeStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/NativeFont;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(static_cast<void(NativeStrike::*)($NativeFont*,$FontStrikeDesc*)>(&NativeStrike::init$))},
	{"<init>", "(Lsun/font/NativeFont;Lsun/font/FontStrikeDesc;Z)V", nullptr, 0, $method(static_cast<void(NativeStrike::*)($NativeFont*,$FontStrikeDesc*,bool)>(&NativeStrike::init$))},
	{"getGlyphAdvance", "(I)F", nullptr, 0},
	{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, 0},
	{"getGlyphImagePtr", "(I)J", nullptr, 0},
	{"getGlyphImagePtrNoCache", "(I)J", nullptr, 0},
	{"getGlyphImagePtrs", "([I[JI)V", nullptr, 0},
	{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{}
};

$ClassInfo _NativeStrike_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.NativeStrike",
	"sun.font.PhysicalStrike",
	nullptr,
	_NativeStrike_FieldInfo_,
	_NativeStrike_MethodInfo_
};

$Object* allocate$NativeStrike($Class* clazz) {
	return $of($alloc(NativeStrike));
}

void NativeStrike::init$($NativeFont* nativeFont, $FontStrikeDesc* desc) {
	$PhysicalStrike::init$(nativeFont, desc);
	$throwNew($RuntimeException, "NativeFont not used on Windows"_s);
}

void NativeStrike::init$($NativeFont* nativeFont, $FontStrikeDesc* desc, bool nocache) {
	$PhysicalStrike::init$(nativeFont, desc);
	$throwNew($RuntimeException, "NativeFont not used on Windows"_s);
}

void NativeStrike::getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
}

int64_t NativeStrike::getGlyphImagePtr(int32_t glyphCode) {
	return 0;
}

int64_t NativeStrike::getGlyphImagePtrNoCache(int32_t glyphCode) {
	return 0;
}

void NativeStrike::getGlyphImageBounds(int32_t glyphcode, $Point2D$Float* pt, $Rectangle* result) {
}

$Point2D$Float* NativeStrike::getGlyphMetrics(int32_t glyphCode) {
	return nullptr;
}

float NativeStrike::getGlyphAdvance(int32_t glyphCode) {
	return 0.0f;
}

$Rectangle2D$Float* NativeStrike::getGlyphOutlineBounds(int32_t glyphCode) {
	return nullptr;
}

$GeneralPath* NativeStrike::getGlyphOutline(int32_t glyphCode, float x, float y) {
	return nullptr;
}

$GeneralPath* NativeStrike::getGlyphVectorOutline($ints* glyphs, float x, float y) {
	return nullptr;
}

NativeStrike::NativeStrike() {
}

$Class* NativeStrike::load$($String* name, bool initialize) {
	$loadClass(NativeStrike, name, initialize, &_NativeStrike_ClassInfo_, allocate$NativeStrike);
	return class$;
}

$Class* NativeStrike::class$ = nullptr;

	} // font
} // sun