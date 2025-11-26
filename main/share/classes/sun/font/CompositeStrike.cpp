#include <sun/font/CompositeStrike.h>

#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

#undef BOLD
#undef ITALIC
#undef SLOTMASK

using $PhysicalStrikeArray = $Array<::sun::font::PhysicalStrike>;
using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $Font2D = ::sun::font::Font2D;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _CompositeStrike_FieldInfo_[] = {
	{"SLOTMASK", "I", nullptr, $STATIC | $FINAL, $constField(CompositeStrike, SLOTMASK)},
	{"compFont", "Lsun/font/CompositeFont;", nullptr, $PRIVATE, $field(CompositeStrike, compFont)},
	{"strikes", "[Lsun/font/PhysicalStrike;", nullptr, $PRIVATE, $field(CompositeStrike, strikes)},
	{"numGlyphs", "I", nullptr, 0, $field(CompositeStrike, numGlyphs)},
	{}
};

$MethodInfo _CompositeStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/CompositeFont;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(static_cast<void(CompositeStrike::*)($CompositeFont*,$FontStrikeDesc*)>(&CompositeStrike::init$))},
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
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"getStrikeForGlyph", "(I)Lsun/font/PhysicalStrike;", nullptr, 0, $method(static_cast<$PhysicalStrike*(CompositeStrike::*)(int32_t)>(&CompositeStrike::getStrikeForGlyph))},
	{"getStrikeForSlot", "(I)Lsun/font/PhysicalStrike;", nullptr, 0, $method(static_cast<$PhysicalStrike*(CompositeStrike::*)(int32_t)>(&CompositeStrike::getStrikeForSlot))},
	{}
};

$ClassInfo _CompositeStrike_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.CompositeStrike",
	"sun.font.FontStrike",
	nullptr,
	_CompositeStrike_FieldInfo_,
	_CompositeStrike_MethodInfo_
};

$Object* allocate$CompositeStrike($Class* clazz) {
	return $of($alloc(CompositeStrike));
}

void CompositeStrike::init$($CompositeFont* font2D, $FontStrikeDesc* desc) {
	$FontStrike::init$();
	this->numGlyphs = 0;
	$set(this, compFont, font2D);
	$set(this, desc, desc);
	$set(this, disposer, $new($FontStrikeDisposer, this->compFont, desc));
	if ($nc(desc)->style != $nc(this->compFont)->style) {
		this->algoStyle = true;
		if (((int32_t)(desc->style & (uint32_t)$Font::BOLD)) == $Font::BOLD && (((int32_t)($nc(this->compFont)->style & (uint32_t)$Font::BOLD)) == 0)) {
			this->boldness = 1.33f;
		}
		if (((int32_t)(desc->style & (uint32_t)$Font::ITALIC)) == $Font::ITALIC && ((int32_t)($nc(this->compFont)->style & (uint32_t)$Font::ITALIC)) == 0) {
			this->italic = 0.7f;
		}
	}
	$set(this, strikes, $new($PhysicalStrikeArray, $nc(this->compFont)->numSlots));
}

$PhysicalStrike* CompositeStrike::getStrikeForGlyph(int32_t glyphCode) {
	return getStrikeForSlot((int32_t)((uint32_t)glyphCode >> 24));
}

$PhysicalStrike* CompositeStrike::getStrikeForSlot(int32_t slot) {
	$useLocalCurrentObjectStackCache();
	if (slot >= $nc(this->strikes)->length) {
		slot = 0;
	}
	$var($PhysicalStrike, strike, $nc(this->strikes)->get(slot));
	if (strike == nullptr) {
		$assign(strike, ($cast($PhysicalStrike, $nc($($nc(this->compFont)->getSlotFont(slot)))->getStrike(this->desc))));
		$nc(this->strikes)->set(slot, strike);
	}
	return strike;
}

int32_t CompositeStrike::getNumGlyphs() {
	return $nc(this->compFont)->getNumGlyphs();
}

$StrikeMetrics* CompositeStrike::getFontMetrics() {
	$useLocalCurrentObjectStackCache();
	if (this->strikeMetrics == nullptr) {
		$var($StrikeMetrics, compMetrics, $new($StrikeMetrics));
		for (int32_t s = 0; s < $nc(this->compFont)->numMetricsSlots; ++s) {
			compMetrics->merge($($nc($(getStrikeForSlot(s)))->getFontMetrics()));
		}
		$set(this, strikeMetrics, compMetrics);
	}
	return this->strikeMetrics;
}

void CompositeStrike::getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
	$var($PhysicalStrike, strike, getStrikeForSlot(0));
	int32_t numptrs = $nc(strike)->getSlot0GlyphImagePtrs(glyphCodes, images, len);
	if (numptrs == len) {
		return;
	}
	for (int32_t i = numptrs; i < len; ++i) {
		$assign(strike, getStrikeForGlyph($nc(glyphCodes)->get(i)));
		$nc(images)->set(i, $nc(strike)->getGlyphImagePtr((int32_t)($nc(glyphCodes)->get(i) & (uint32_t)CompositeStrike::SLOTMASK)));
	}
}

int64_t CompositeStrike::getGlyphImagePtr(int32_t glyphCode) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	return $nc(strike)->getGlyphImagePtr((int32_t)(glyphCode & (uint32_t)CompositeStrike::SLOTMASK));
}

void CompositeStrike::getGlyphImageBounds(int32_t glyphCode, $Point2D$Float* pt, $Rectangle* result) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	$nc(strike)->getGlyphImageBounds((int32_t)(glyphCode & (uint32_t)CompositeStrike::SLOTMASK), pt, result);
}

$Point2D$Float* CompositeStrike::getGlyphMetrics(int32_t glyphCode) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	return $nc(strike)->getGlyphMetrics((int32_t)(glyphCode & (uint32_t)CompositeStrike::SLOTMASK));
}

$Point2D$Float* CompositeStrike::getCharMetrics(char16_t ch) {
	return getGlyphMetrics($nc($($nc(this->compFont)->getMapper()))->charToGlyph(ch));
}

float CompositeStrike::getGlyphAdvance(int32_t glyphCode) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	return $nc(strike)->getGlyphAdvance((int32_t)(glyphCode & (uint32_t)CompositeStrike::SLOTMASK));
}

float CompositeStrike::getCodePointAdvance(int32_t cp) {
	return getGlyphAdvance($nc($($nc(this->compFont)->getMapper()))->charToGlyph(cp));
}

$Rectangle2D$Float* CompositeStrike::getGlyphOutlineBounds(int32_t glyphCode) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	return $nc(strike)->getGlyphOutlineBounds((int32_t)(glyphCode & (uint32_t)CompositeStrike::SLOTMASK));
}

$GeneralPath* CompositeStrike::getGlyphOutline(int32_t glyphCode, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	$var($GeneralPath, path, $nc(strike)->getGlyphOutline((int32_t)(glyphCode & (uint32_t)CompositeStrike::SLOTMASK), x, y));
	if (path == nullptr) {
		return $new($GeneralPath);
	} else {
		return path;
	}
}

$GeneralPath* CompositeStrike::getGlyphVectorOutline($ints* glyphs, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($GeneralPath, path, nullptr);
	$var($GeneralPath, gp, nullptr);
	int32_t glyphIndex = 0;
	$var($ints, tmpGlyphs, nullptr);
	while (glyphIndex < $nc(glyphs)->length) {
		int32_t start = glyphIndex;
		int32_t slot = (int32_t)((uint32_t)glyphs->get(glyphIndex) >> 24);
		while (glyphIndex < glyphs->length && ((int32_t)((uint32_t)glyphs->get(glyphIndex + 1) >> 24)) == slot) {
			++glyphIndex;
		}
		int32_t tmpLen = glyphIndex - start + 1;
		$assign(tmpGlyphs, $new($ints, tmpLen));
		for (int32_t i = 0; i < tmpLen; ++i) {
			tmpGlyphs->set(i, (int32_t)(glyphs->get(i) & (uint32_t)CompositeStrike::SLOTMASK));
		}
		$assign(gp, $nc($(getStrikeForSlot(slot)))->getGlyphVectorOutline(tmpGlyphs, x, y));
		if (path == nullptr) {
			$assign(path, gp);
		} else if (gp != nullptr) {
			$nc(path)->append(static_cast<$Shape*>(gp), false);
		}
	}
	if (path == nullptr) {
		return $new($GeneralPath);
	} else {
		return path;
	}
}

CompositeStrike::CompositeStrike() {
}

$Class* CompositeStrike::load$($String* name, bool initialize) {
	$loadClass(CompositeStrike, name, initialize, &_CompositeStrike_ClassInfo_, allocate$CompositeStrike);
	return class$;
}

$Class* CompositeStrike::class$ = nullptr;

	} // font
} // sun