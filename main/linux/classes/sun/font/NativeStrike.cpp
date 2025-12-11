#include <sun/font/NativeStrike.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/lang/Math.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/NativeFont.h>
#include <sun/font/NativeStrikeDisposer.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeCache.h>
#include <sun/font/StrikeMetrics.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef INTMASK
#undef TYPE_TRANSLATION
#undef TYPE_UNIFORM_SCALE

using $Rectangle = ::java::awt::Rectangle;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $Font2D = ::sun::font::Font2D;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $FontUtilities = ::sun::font::FontUtilities;
using $NativeFont = ::sun::font::NativeFont;
using $NativeStrikeDisposer = ::sun::font::NativeStrikeDisposer;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeCache = ::sun::font::StrikeCache;
using $StrikeMetrics = ::sun::font::StrikeMetrics;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _NativeStrike_FieldInfo_[] = {
	{"nativeFont", "Lsun/font/NativeFont;", nullptr, 0, $field(NativeStrike, nativeFont)},
	{"numGlyphs", "I", nullptr, 0, $field(NativeStrike, numGlyphs)},
	{"invertDevTx", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(NativeStrike, invertDevTx)},
	{"fontTx", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(NativeStrike, fontTx)},
	{}
};

$MethodInfo _NativeStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/NativeFont;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(static_cast<void(NativeStrike::*)($NativeFont*,$FontStrikeDesc*)>(&NativeStrike::init$))},
	{"<init>", "(Lsun/font/NativeFont;Lsun/font/FontStrikeDesc;Z)V", nullptr, 0, $method(static_cast<void(NativeStrike::*)($NativeFont*,$FontStrikeDesc*,bool)>(&NativeStrike::init$))},
	{"createNullScalerContext", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(NativeStrike::*)()>(&NativeStrike::createNullScalerContext))},
	{"createScalerContext", "([BID)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(NativeStrike::*)($bytes*,int32_t,double)>(&NativeStrike::createScalerContext))},
	{"getFontMetrics", "()Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphAdvance", "(I)F", nullptr, 0},
	{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, 0},
	{"getGlyphImagePtr", "(I)J", nullptr, 0},
	{"getGlyphImagePtrNoCache", "(I)J", nullptr, 0},
	{"getGlyphImagePtrs", "([I[JI)V", nullptr, 0},
	{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getLongGlyphImages", "()[J", nullptr, $PRIVATE, $method(static_cast<$longs*(NativeStrike::*)()>(&NativeStrike::getLongGlyphImages))},
	{"getMaxGlyph", "(J)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(NativeStrike::*)(int64_t)>(&NativeStrike::getMaxGlyph))},
	{"getNativePointSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(NativeStrike::*)()>(&NativeStrike::getNativePointSize))},
	{"usingIntGlyphImages", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(NativeStrike::*)()>(&NativeStrike::usingIntGlyphImages))},
	{}
};

#define _METHOD_INDEX_createNullScalerContext 2
#define _METHOD_INDEX_createScalerContext 3
#define _METHOD_INDEX_getMaxGlyph 15

$ClassInfo _NativeStrike_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.NativeStrike",
	"sun.font.PhysicalStrike",
	nullptr,
	_NativeStrike_FieldInfo_,
	_NativeStrike_MethodInfo_
};

$Object* allocate$NativeStrike($Class* clazz) {
	return $of($alloc(NativeStrike));
}

int32_t NativeStrike::getNativePointSize() {
	$useLocalCurrentObjectStackCache();
	$var($doubles, mat, $new($doubles, 4));
	$nc($nc(this->desc)->glyphTx)->getMatrix(mat);
	$set(this, fontTx, $new($AffineTransform, mat));
	bool var$0 = !$nc($nc(this->desc)->devTx)->isIdentity();
	if (var$0 && $nc($nc(this->desc)->devTx)->getType() != $AffineTransform::TYPE_TRANSLATION) {
		try {
			$set(this, invertDevTx, $nc($nc(this->desc)->devTx)->createInverse());
			$nc(this->fontTx)->concatenate(this->invertDevTx);
		} catch ($NoninvertibleTransformException& e) {
			e->printStackTrace();
		}
	}
	$var($Point2D$Float, pt, $new($Point2D$Float, 1.0f, 1.0f));
	$nc(this->fontTx)->deltaTransform(pt, pt);
	double ptSize = $Math::abs(pt->y);
	int32_t ttype = $nc(this->fontTx)->getType();
	if (((int32_t)(ttype & (uint32_t)~$AffineTransform::TYPE_UNIFORM_SCALE)) != 0 || $nc(this->fontTx)->getScaleY() <= 0) {
		$nc(this->fontTx)->scale(1 / ptSize, 1 / ptSize);
	} else {
		$set(this, fontTx, nullptr);
	}
	return $cast(int32_t, ptSize);
}

void NativeStrike::init$($NativeFont* nativeFont, $FontStrikeDesc* desc) {
	$useLocalCurrentObjectStackCache();
	$PhysicalStrike::init$(nativeFont, desc);
	$set(this, nativeFont, nativeFont);
	if ($nc(nativeFont)->isBitmapDelegate) {
		int32_t ttype = $nc($nc(desc)->glyphTx)->getType();
		if (((int32_t)(ttype & (uint32_t)~$AffineTransform::TYPE_UNIFORM_SCALE)) != 0 || $nc(desc->glyphTx)->getScaleX() <= 0) {
			this->numGlyphs = 0;
			return;
		}
	}
	int32_t ptSize = getNativePointSize();
	$var($bytes, nameBytes, $nc(nativeFont)->getPlatformNameBytes(ptSize));
	double scale = $Math::abs($nc($nc(desc)->devTx)->getScaleX());
	this->pScalerContext = createScalerContext(nameBytes, ptSize, scale);
	if (this->pScalerContext == (int64_t)0) {
		$nc($($SunFontManager::getInstance()))->deRegisterBadFont(nativeFont);
		this->pScalerContext = createNullScalerContext();
		this->numGlyphs = 0;
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logSevere($$str({"Could not create native strike "_s, $$new($String, nameBytes)}));
		}
		return;
	}
	this->numGlyphs = $nc($(nativeFont->getMapper()))->getNumGlyphs();
	$set(this, disposer, $new($NativeStrikeDisposer, nativeFont, desc, this->pScalerContext));
}

bool NativeStrike::usingIntGlyphImages() {
	if (this->intGlyphImages != nullptr) {
		return true;
	} else {
		$init($PhysicalStrike);
		if ($PhysicalStrike::longAddresses) {
			return false;
		} else {
			int32_t glyphLenArray = getMaxGlyph(this->pScalerContext);
			if (glyphLenArray < this->numGlyphs) {
				glyphLenArray = this->numGlyphs;
			}
			$set(this, intGlyphImages, $new($ints, glyphLenArray));
			$set($nc(this->disposer), intGlyphImages, this->intGlyphImages);
			return true;
		}
	}
}

$longs* NativeStrike::getLongGlyphImages() {
	$init($PhysicalStrike);
	if (this->longGlyphImages == nullptr && $PhysicalStrike::longAddresses) {
		int32_t glyphLenArray = getMaxGlyph(this->pScalerContext);
		if (glyphLenArray < this->numGlyphs) {
			glyphLenArray = this->numGlyphs;
		}
		$set(this, longGlyphImages, $new($longs, glyphLenArray));
		$set($nc(this->disposer), longGlyphImages, this->longGlyphImages);
	}
	return this->longGlyphImages;
}

void NativeStrike::init$($NativeFont* nativeFont, $FontStrikeDesc* desc, bool nocache) {
	$useLocalCurrentObjectStackCache();
	$PhysicalStrike::init$(nativeFont, desc);
	$set(this, nativeFont, nativeFont);
	int32_t ptSize = $cast(int32_t, $nc($nc(desc)->glyphTx)->getScaleY());
	double scale = $nc(desc->devTx)->getScaleX();
	$var($bytes, nameBytes, $nc(nativeFont)->getPlatformNameBytes(ptSize));
	this->pScalerContext = createScalerContext(nameBytes, ptSize, scale);
	int32_t numGlyphs = $nc($(nativeFont->getMapper()))->getNumGlyphs();
}

$StrikeMetrics* NativeStrike::getFontMetrics() {
	if (this->strikeMetrics == nullptr) {
		if (this->pScalerContext != 0) {
			$set(this, strikeMetrics, $nc(this->nativeFont)->getFontMetrics(this->pScalerContext));
		}
		if (this->strikeMetrics != nullptr && this->fontTx != nullptr) {
			$nc(this->strikeMetrics)->convertToUserSpace(this->fontTx);
		}
	}
	return this->strikeMetrics;
}

int64_t NativeStrike::createScalerContext($bytes* nameBytes, int32_t ptSize, double scale) {
	int64_t $ret = 0;
	$prepareNative(NativeStrike, createScalerContext, int64_t, $bytes* nameBytes, int32_t ptSize, double scale);
	$ret = $invokeNative(nameBytes, ptSize, scale);
	$finishNative();
	return $ret;
}

int32_t NativeStrike::getMaxGlyph(int64_t pScalerContext) {
	int32_t $ret = 0;
	$prepareNative(NativeStrike, getMaxGlyph, int32_t, int64_t pScalerContext);
	$ret = $invokeNative(pScalerContext);
	$finishNative();
	return $ret;
}

int64_t NativeStrike::createNullScalerContext() {
	int64_t $ret = 0;
	$prepareNative(NativeStrike, createNullScalerContext, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void NativeStrike::getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
	for (int32_t i = 0; i < len; ++i) {
		$nc(images)->set(i, getGlyphImagePtr($nc(glyphCodes)->get(i)));
	}
}

int64_t NativeStrike::getGlyphImagePtr(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	int64_t glyphPtr = 0;
	if (usingIntGlyphImages()) {
		if ((glyphPtr = (int64_t)($nc(this->intGlyphImages)->get(glyphCode) & (uint64_t)$PhysicalStrike::INTMASK)) != (int64_t)0) {
			return glyphPtr;
		} else {
			glyphPtr = $nc(this->nativeFont)->getGlyphImage(this->pScalerContext, glyphCode);
			$synchronized(this) {
				if ($nc(this->intGlyphImages)->get(glyphCode) == 0) {
					$nc(this->intGlyphImages)->set(glyphCode, (int32_t)glyphPtr);
					return glyphPtr;
				} else {
					$StrikeCache::freeIntPointer((int32_t)glyphPtr);
					return (int64_t)($nc(this->intGlyphImages)->get(glyphCode) & (uint64_t)$PhysicalStrike::INTMASK);
				}
			}
		}
	} else if ((glyphPtr = $nc($(getLongGlyphImages()))->get(glyphCode)) != (int64_t)0) {
		return glyphPtr;
	} else {
		glyphPtr = $nc(this->nativeFont)->getGlyphImage(this->pScalerContext, glyphCode);
		$synchronized(this) {
			if ($nc(this->longGlyphImages)->get(glyphCode) == (int64_t)0) {
				$nc(this->longGlyphImages)->set(glyphCode, glyphPtr);
				return glyphPtr;
			} else {
				$StrikeCache::freeLongPointer(glyphPtr);
				return $nc(this->longGlyphImages)->get(glyphCode);
			}
		}
	}
}

int64_t NativeStrike::getGlyphImagePtrNoCache(int32_t glyphCode) {
	return $nc(this->nativeFont)->getGlyphImageNoDefault(this->pScalerContext, glyphCode);
}

void NativeStrike::getGlyphImageBounds(int32_t glyphcode, $Point2D$Float* pt, $Rectangle* result) {
}

$Point2D$Float* NativeStrike::getGlyphMetrics(int32_t glyphCode) {
	$var($Point2D$Float, pt, $new($Point2D$Float, getGlyphAdvance(glyphCode), 0.0f));
	return pt;
}

float NativeStrike::getGlyphAdvance(int32_t glyphCode) {
	return $nc(this->nativeFont)->getGlyphAdvance(this->pScalerContext, glyphCode);
}

$Rectangle2D$Float* NativeStrike::getGlyphOutlineBounds(int32_t glyphCode) {
	return $nc(this->nativeFont)->getGlyphOutlineBounds(this->pScalerContext, glyphCode);
}

$GeneralPath* NativeStrike::getGlyphOutline(int32_t glyphCode, float x, float y) {
	return $new($GeneralPath);
}

$GeneralPath* NativeStrike::getGlyphVectorOutline($ints* glyphs, float x, float y) {
	return $new($GeneralPath);
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