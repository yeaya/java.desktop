#include <sun/font/Font2D.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Locale.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontFamily.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/StrikeCache.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

#undef BOLD
#undef DEFAULT_FRC
#undef DEFAULT_RANK
#undef FONT_CONFIG_RANK
#undef FWEIGHT_BOLD
#undef FWEIGHT_NORMAL
#undef FWIDTH_NORMAL
#undef ITALIC
#undef JRE_RANK
#undef NATIVE_RANK
#undef PLAIN
#undef ROMAN_BASELINE
#undef TTF_RANK
#undef TYPE1_RANK
#undef TYPE_GENERAL_ROTATION
#undef TYPE_GENERAL_TRANSFORM
#undef UNKNOWN_RANK

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Locale = ::java::util::Locale;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $StrikeCache = ::sun::font::StrikeCache;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _Font2D_FieldInfo_[] = {
	{"FONT_CONFIG_RANK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, FONT_CONFIG_RANK)},
	{"JRE_RANK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, JRE_RANK)},
	{"TTF_RANK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, TTF_RANK)},
	{"TYPE1_RANK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, TYPE1_RANK)},
	{"NATIVE_RANK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, NATIVE_RANK)},
	{"UNKNOWN_RANK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, UNKNOWN_RANK)},
	{"DEFAULT_RANK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, DEFAULT_RANK)},
	{"boldNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font2D, boldNames)},
	{"italicNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font2D, italicNames)},
	{"boldItalicNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font2D, boldItalicNames)},
	{"DEFAULT_FRC", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font2D, DEFAULT_FRC)},
	{"handle", "Lsun/font/Font2DHandle;", nullptr, $PUBLIC, $field(Font2D, handle)},
	{"familyName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Font2D, familyName)},
	{"fullName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Font2D, fullName)},
	{"style", "I", nullptr, $PROTECTED, $field(Font2D, style)},
	{"family", "Lsun/font/FontFamily;", nullptr, $PROTECTED, $field(Font2D, family)},
	{"fontRank", "I", nullptr, $PROTECTED, $field(Font2D, fontRank)},
	{"mapper", "Lsun/font/CharToGlyphMapper;", nullptr, $PROTECTED, $field(Font2D, mapper)},
	{"strikeCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Lsun/font/FontStrikeDesc;Ljava/lang/ref/Reference<Lsun/font/FontStrike;>;>;", $PROTECTED, $field(Font2D, strikeCache)},
	{"lastFontStrike", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Lsun/font/FontStrike;>;", $PROTECTED, $field(Font2D, lastFontStrike)},
	{"strikeCacheMax", "I", nullptr, $PRIVATE, $field(Font2D, strikeCacheMax)},
	{"useWeak", "Z", nullptr, $PRIVATE, $field(Font2D, useWeak)},
	{"FWIDTH_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, FWIDTH_NORMAL)},
	{"FWEIGHT_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, FWEIGHT_NORMAL)},
	{"FWEIGHT_BOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font2D, FWEIGHT_BOLD)},
	{}
};

$MethodInfo _Font2D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Font2D::*)()>(&Font2D::init$))},
	{"canDisplay", "(C)Z", nullptr, $PUBLIC},
	{"canDisplay", "(I)Z", nullptr, $PUBLIC},
	{"canDoStyle", "(I)Z", nullptr, $PUBLIC},
	{"charToGlyph", "(I)I", nullptr, $PUBLIC},
	{"charToVariationGlyph", "(II)I", nullptr, $PUBLIC},
	{"createStrike", "(Lsun/font/FontStrikeDesc;)Lsun/font/FontStrike;", nullptr, $ABSTRACT},
	{"getBaselineFor", "(C)B", nullptr, $PUBLIC},
	{"getFamilyName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;Ljava/awt/geom/AffineTransform;Ljava/lang/Object;Ljava/lang/Object;[F)V", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;[F)V", nullptr, $PUBLIC},
	{"getFontName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getItalicAngle", "(Ljava/awt/Font;Ljava/awt/geom/AffineTransform;Ljava/lang/Object;Ljava/lang/Object;)F", nullptr, $PUBLIC},
	{"getMapper", "()Lsun/font/CharToGlyphMapper;", nullptr, $ABSTRACT},
	{"getMissingGlyphCode", "()I", nullptr, $PUBLIC},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"getPlatformNativeFontPtr", "()J", nullptr, $PROTECTED},
	{"getPostscriptName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRank", "()I", nullptr, 0},
	{"getStrike", "(Ljava/awt/Font;)Lsun/font/FontStrike;", nullptr, $PUBLIC},
	{"getStrike", "(Ljava/awt/Font;Ljava/awt/geom/AffineTransform;II)Lsun/font/FontStrike;", nullptr, $PUBLIC},
	{"getStrike", "(Ljava/awt/Font;Ljava/awt/geom/AffineTransform;Ljava/awt/geom/AffineTransform;II)Lsun/font/FontStrike;", nullptr, $PUBLIC},
	{"getStrike", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)Lsun/font/FontStrike;", nullptr, $PUBLIC},
	{"getStrike", "(Lsun/font/FontStrikeDesc;)Lsun/font/FontStrike;", nullptr, 0},
	{"getStrike", "(Lsun/font/FontStrikeDesc;Z)Lsun/font/FontStrike;", nullptr, $PRIVATE, $method(static_cast<$FontStrike*(Font2D::*)($FontStrikeDesc*,bool)>(&Font2D::getStrike))},
	{"getStyle", "()I", nullptr, $PUBLIC},
	{"getStyleMetrics", "(F[FI)V", nullptr, $PUBLIC},
	{"getTableBytes", "(I)[B", nullptr, $PROTECTED},
	{"getUnitsPerEm", "()J", nullptr, $PROTECTED},
	{"getValidatedGlyphCode", "(I)I", nullptr, $PROTECTED},
	{"getWeight", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"hasSupplementaryChars", "()Z", nullptr, $PUBLIC},
	{"setRank", "(I)V", nullptr, 0},
	{"setStyle", "()V", nullptr, $PROTECTED},
	{"setUseWeakRefs", "(ZI)V", nullptr, 0},
	{"supportsEncoding", "(Ljava/lang/String;)Z", nullptr, 0},
	{"updateLastStrikeRef", "(Lsun/font/FontStrike;)V", nullptr, 0},
	{"useAAForPtSize", "(I)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Font2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.Font2D",
	"java.lang.Object",
	nullptr,
	_Font2D_FieldInfo_,
	_Font2D_MethodInfo_
};

$Object* allocate$Font2D($Class* clazz) {
	return $of($alloc(Font2D));
}

$StringArray* Font2D::boldNames = nullptr;
$StringArray* Font2D::italicNames = nullptr;
$StringArray* Font2D::boldItalicNames = nullptr;
$FontRenderContext* Font2D::DEFAULT_FRC = nullptr;

void Font2D::init$() {
	this->style = $Font::PLAIN;
	this->fontRank = Font2D::DEFAULT_RANK;
	$set(this, strikeCache, $new($ConcurrentHashMap));
	$set(this, lastFontStrike, $new($WeakReference, nullptr));
	this->strikeCacheMax = 0;
}

void Font2D::setUseWeakRefs(bool weak, int32_t maxStrikes) {
	this->useWeak = weak;
	this->strikeCacheMax = weak && maxStrikes > 0 ? maxStrikes : 0;
}

int32_t Font2D::getStyle() {
	return this->style;
}

void Font2D::setStyle() {
	$var($String, fName, $nc(this->fullName)->toLowerCase());
	for (int32_t i = 0; i < $nc(Font2D::boldItalicNames)->length; ++i) {
		if (fName->indexOf($nc(Font2D::boldItalicNames)->get(i)) != -1) {
			this->style = $Font::BOLD | $Font::ITALIC;
			return;
		}
	}
	for (int32_t i = 0; i < $nc(Font2D::italicNames)->length; ++i) {
		if (fName->indexOf($nc(Font2D::italicNames)->get(i)) != -1) {
			this->style = $Font::ITALIC;
			return;
		}
	}
	for (int32_t i = 0; i < $nc(Font2D::boldNames)->length; ++i) {
		if (fName->indexOf($nc(Font2D::boldNames)->get(i)) != -1) {
			this->style = $Font::BOLD;
			return;
		}
	}
}

int32_t Font2D::getWidth() {
	return Font2D::FWIDTH_NORMAL;
}

int32_t Font2D::getWeight() {
	if (((int32_t)(this->style & (uint32_t)$Font::BOLD)) != 0) {
		return Font2D::FWEIGHT_BOLD;
	} else {
		return Font2D::FWEIGHT_NORMAL;
	}
}

int32_t Font2D::getRank() {
	return this->fontRank;
}

void Font2D::setRank(int32_t rank) {
	this->fontRank = rank;
}

int32_t Font2D::getValidatedGlyphCode(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	if (glyphCode < 0 || glyphCode >= $nc($(getMapper()))->getNumGlyphs()) {
		glyphCode = $nc($(getMapper()))->getMissingGlyphCode();
	}
	return glyphCode;
}

$FontStrike* Font2D::getStrike($Font* font) {
	$var($FontStrike, strike, $cast($FontStrike, $nc(this->lastFontStrike)->get()));
	if (strike != nullptr) {
		return strike;
	} else {
		return getStrike(font, Font2D::DEFAULT_FRC);
	}
}

$FontStrike* Font2D::getStrike($Font* font, $AffineTransform* devTx, int32_t aa, int32_t fm) {
	$useLocalCurrentObjectStackCache();
	double ptSize = $nc(font)->getSize2D();
	$var($AffineTransform, glyphTx, $cast($AffineTransform, $nc(devTx)->clone()));
	$nc(glyphTx)->scale(ptSize, ptSize);
	if (font->isTransformed()) {
		glyphTx->concatenate($(font->getTransform()));
	}
	bool var$0 = glyphTx->getTranslateX() != 0;
	if (var$0 || glyphTx->getTranslateY() != 0) {
		double var$1 = glyphTx->getScaleX();
		double var$2 = glyphTx->getShearY();
		double var$3 = glyphTx->getShearX();
		glyphTx->setTransform(var$1, var$2, var$3, glyphTx->getScaleY(), 0.0, 0.0);
	}
	$var($FontStrikeDesc, desc, $new($FontStrikeDesc, devTx, glyphTx, font->getStyle(), aa, fm));
	return getStrike(desc, false);
}

$FontStrike* Font2D::getStrike($Font* font, $AffineTransform* devTx, $AffineTransform* glyphTx, int32_t aa, int32_t fm) {
	$var($FontStrikeDesc, desc, $new($FontStrikeDesc, devTx, glyphTx, $nc(font)->getStyle(), aa, fm));
	return getStrike(desc, false);
}

$FontStrike* Font2D::getStrike($Font* font, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, at, $nc(frc)->getTransform());
	double ptSize = $nc(font)->getSize2D();
	$nc(at)->scale(ptSize, ptSize);
	if (font->isTransformed()) {
		at->concatenate($(font->getTransform()));
		bool var$0 = at->getTranslateX() != 0;
		if (var$0 || at->getTranslateY() != 0) {
			double var$1 = at->getScaleX();
			double var$2 = at->getShearY();
			double var$3 = at->getShearX();
			at->setTransform(var$1, var$2, var$3, at->getScaleY(), 0.0, 0.0);
		}
	}
	int32_t aa = $FontStrikeDesc::getAAHintIntVal(this, font, frc);
	int32_t fm = $FontStrikeDesc::getFMHintIntVal($(frc->getFractionalMetricsHint()));
	$var($AffineTransform, var$4, frc->getTransform());
	$var($AffineTransform, var$5, at);
	$var($FontStrikeDesc, desc, $new($FontStrikeDesc, var$4, var$5, font->getStyle(), aa, fm));
	return getStrike(desc, false);
}

void Font2D::updateLastStrikeRef($FontStrike* strike) {
	$nc(this->lastFontStrike)->clear();
	if (this->useWeak) {
		$set(this, lastFontStrike, $new($WeakReference, strike));
	} else {
		$set(this, lastFontStrike, $new($SoftReference, strike));
	}
}

$FontStrike* Font2D::getStrike($FontStrikeDesc* desc) {
	return getStrike(desc, true);
}

$FontStrike* Font2D::getStrike($FontStrikeDesc* desc$renamed, bool copy) {
	$useLocalCurrentObjectStackCache();
	$var($FontStrikeDesc, desc, desc$renamed);
	$var($FontStrike, strike, $cast($FontStrike, $nc(this->lastFontStrike)->get()));
	if (strike != nullptr && $nc(desc)->equals(strike->desc)) {
		return strike;
	} else {
		$var($Reference, strikeRef, $cast($Reference, $nc(this->strikeCache)->get(desc)));
		if (strikeRef != nullptr) {
			$assign(strike, $cast($FontStrike, strikeRef->get()));
			if (strike != nullptr) {
				updateLastStrikeRef(strike);
				$StrikeCache::refStrike(strike);
				return strike;
			}
		}
		if (copy) {
			$assign(desc, $new($FontStrikeDesc, desc));
		}
		$assign(strike, createStrike(desc));
		int32_t txType = $nc(desc->glyphTx)->getType();
		if (this->useWeak || txType == $AffineTransform::TYPE_GENERAL_TRANSFORM || ((int32_t)(txType & (uint32_t)$AffineTransform::TYPE_GENERAL_ROTATION)) != 0 && $nc(this->strikeCache)->size() > 10) {
			$assign(strikeRef, $StrikeCache::getStrikeRef(strike, true));
		} else {
			$assign(strikeRef, $StrikeCache::getStrikeRef(strike, this->useWeak));
		}
		$nc(this->strikeCache)->put(desc, strikeRef);
		updateLastStrikeRef(strike);
		$StrikeCache::refStrike(strike);
		return strike;
	}
}

void Font2D::getFontMetrics($Font* font, $AffineTransform* at, Object$* aaHint, Object$* fmHint, $floats* metrics) {
	$useLocalCurrentObjectStackCache();
	int32_t aa = $FontStrikeDesc::getAAHintIntVal(aaHint, this, $nc(font)->getSize());
	int32_t fm = $FontStrikeDesc::getFMHintIntVal(fmHint);
	$var($FontStrike, strike, getStrike(font, at, aa, fm));
	$var($StrikeMetrics, strikeMetrics, $nc(strike)->getFontMetrics());
	$nc(metrics)->set(0, $nc(strikeMetrics)->getAscent());
	metrics->set(1, strikeMetrics->getDescent());
	metrics->set(2, strikeMetrics->getLeading());
	metrics->set(3, strikeMetrics->getMaxAdvance());
	getStyleMetrics($nc(font)->getSize2D(), metrics, 4);
}

void Font2D::getStyleMetrics(float pointSize, $floats* metrics, int32_t offset) {
	$nc(metrics)->set(offset, -metrics->get(0) / 2.5f);
	metrics->set(offset + 1, pointSize / 12);
	metrics->set(offset + 2, metrics->get(offset + 1) / 1.5f);
	metrics->set(offset + 3, metrics->get(offset + 1));
}

void Font2D::getFontMetrics($Font* font, $FontRenderContext* frc, $floats* metrics) {
	$useLocalCurrentObjectStackCache();
	$var($StrikeMetrics, strikeMetrics, $nc($(getStrike(font, frc)))->getFontMetrics());
	$nc(metrics)->set(0, $nc(strikeMetrics)->getAscent());
	metrics->set(1, strikeMetrics->getDescent());
	metrics->set(2, strikeMetrics->getLeading());
	metrics->set(3, strikeMetrics->getMaxAdvance());
}

$bytes* Font2D::getTableBytes(int32_t tag) {
	return nullptr;
}

int64_t Font2D::getPlatformNativeFontPtr() {
	return 0;
}

int64_t Font2D::getUnitsPerEm() {
	return 2048;
}

bool Font2D::supportsEncoding($String* encoding) {
	return false;
}

bool Font2D::canDoStyle(int32_t style) {
	return (style == this->style);
}

bool Font2D::useAAForPtSize(int32_t ptsize) {
	return true;
}

bool Font2D::hasSupplementaryChars() {
	return false;
}

$String* Font2D::getPostscriptName() {
	return this->fullName;
}

$String* Font2D::getFontName($Locale* l) {
	return this->fullName;
}

$String* Font2D::getFamilyName($Locale* l) {
	return this->familyName;
}

int32_t Font2D::getNumGlyphs() {
	return $nc($(getMapper()))->getNumGlyphs();
}

int32_t Font2D::charToGlyph(int32_t wchar) {
	return $nc($(getMapper()))->charToGlyph(wchar);
}

int32_t Font2D::charToVariationGlyph(int32_t wchar, int32_t variationSelector) {
	return $nc($(getMapper()))->charToVariationGlyph(wchar, variationSelector);
}

int32_t Font2D::getMissingGlyphCode() {
	return $nc($(getMapper()))->getMissingGlyphCode();
}

bool Font2D::canDisplay(char16_t c) {
	return $nc($(getMapper()))->canDisplay(c);
}

bool Font2D::canDisplay(int32_t cp) {
	return $nc($(getMapper()))->canDisplay(cp);
}

int8_t Font2D::getBaselineFor(char16_t c) {
	return (int8_t)$Font::ROMAN_BASELINE;
}

float Font2D::getItalicAngle($Font* font, $AffineTransform* at, Object$* aaHint, Object$* fmHint) {
	$useLocalCurrentObjectStackCache();
	int32_t aa = $FontStrikeDesc::getAAHintIntVal(aaHint, this, 12);
	int32_t fm = $FontStrikeDesc::getFMHintIntVal(fmHint);
	$var($FontStrike, strike, getStrike(font, at, aa, fm));
	$var($StrikeMetrics, metrics, $nc(strike)->getFontMetrics());
	if ($nc(metrics)->ascentY == 0 || $nc(metrics)->ascentX == 0) {
		return 0.0f;
	} else {
		return metrics->ascentX / -metrics->ascentY;
	}
}

void clinit$Font2D($Class* class$) {
	$assignStatic(Font2D::boldNames, $new($StringArray, {
		"bold"_s,
		"demibold"_s,
		"demi-bold"_s,
		"demi bold"_s,
		"negreta"_s,
		"demi"_s
	}));
	$assignStatic(Font2D::italicNames, $new($StringArray, {
		"italic"_s,
		"cursiva"_s,
		"oblique"_s,
		"inclined"_s
	}));
	$assignStatic(Font2D::boldItalicNames, $new($StringArray, {
		"bolditalic"_s,
		"bold-italic"_s,
		"bold italic"_s,
		"boldoblique"_s,
		"bold-oblique"_s,
		"bold oblique"_s,
		"demibold italic"_s,
		"negreta cursiva"_s,
		"demi oblique"_s
	}));
	$assignStatic(Font2D::DEFAULT_FRC, $new($FontRenderContext, ($AffineTransform*)nullptr, false, false));
}

Font2D::Font2D() {
}

$Class* Font2D::load$($String* name, bool initialize) {
	$loadClass(Font2D, name, initialize, &_Font2D_ClassInfo_, clinit$Font2D, allocate$Font2D);
	return class$;
}

$Class* Font2D::class$ = nullptr;

	} // font
} // sun