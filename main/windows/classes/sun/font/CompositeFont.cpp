#include <sun/font/CompositeFont.h>

#include <java/awt/Font.h>
#include <java/lang/ClassCastException.h>
#include <java/util/Locale.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeGlyphMapper.h>
#include <sun/font/CompositeStrike.h>
#include <sun/font/FileFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/SunFontManager.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

#undef BOLD
#undef FONT_CONFIG_RANK
#undef ITALIC
#undef PHYSICAL_FALLBACK
#undef PLAIN
#undef SLOTMASK

using $PhysicalFontArray = $Array<::sun::font::PhysicalFont>;
using $Font = ::java::awt::Font;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeGlyphMapper = ::sun::font::CompositeGlyphMapper;
using $CompositeStrike = ::sun::font::CompositeStrike;
using $FileFont = ::sun::font::FileFont;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $SunFontManager = ::sun::font::SunFontManager;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace font {

$FieldInfo _CompositeFont_FieldInfo_[] = {
	{"deferredInitialisation", "[Z", nullptr, $PRIVATE, $field(CompositeFont, deferredInitialisation)},
	{"componentFileNames", "[Ljava/lang/String;", nullptr, 0, $field(CompositeFont, componentFileNames)},
	{"componentNames", "[Ljava/lang/String;", nullptr, 0, $field(CompositeFont, componentNames)},
	{"components", "[Lsun/font/PhysicalFont;", nullptr, $PRIVATE, $field(CompositeFont, components)},
	{"numSlots", "I", nullptr, 0, $field(CompositeFont, numSlots)},
	{"numMetricsSlots", "I", nullptr, 0, $field(CompositeFont, numMetricsSlots)},
	{"exclusionRanges", "[I", nullptr, 0, $field(CompositeFont, exclusionRanges)},
	{"maxIndices", "[I", nullptr, 0, $field(CompositeFont, maxIndices)},
	{"numGlyphs", "I", nullptr, 0, $field(CompositeFont, numGlyphs)},
	{"localeSlot", "I", nullptr, 0, $field(CompositeFont, localeSlot)},
	{"isStdComposite", "Z", nullptr, 0, $field(CompositeFont, isStdComposite$)},
	{}
};

$MethodInfo _CompositeFont_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;I[I[IZLsun/font/SunFontManager;)V", nullptr, $PUBLIC, $method(static_cast<void(CompositeFont::*)($String*,$StringArray*,$StringArray*,int32_t,$ints*,$ints*,bool,$SunFontManager*)>(&CompositeFont::init$))},
	{"<init>", "([Lsun/font/PhysicalFont;)V", nullptr, 0, $method(static_cast<void(CompositeFont::*)($PhysicalFontArray*)>(&CompositeFont::init$))},
	{"<init>", "(Lsun/font/PhysicalFont;Lsun/font/CompositeFont;)V", nullptr, 0, $method(static_cast<void(CompositeFont::*)($PhysicalFont*,CompositeFont*)>(&CompositeFont::init$))},
	{"canDisplay", "(C)Z", nullptr, $PUBLIC},
	{"createStrike", "(Lsun/font/FontStrikeDesc;)Lsun/font/FontStrike;", nullptr, 0},
	{"doDeferredInitialisation", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CompositeFont::*)(int32_t)>(&CompositeFont::doDeferredInitialisation))},
	{"getMapper", "()Lsun/font/CharToGlyphMapper;", nullptr, $PUBLIC},
	{"getMissingGlyphCode", "()I", nullptr, $PUBLIC},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"getNumSlots", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CompositeFont::*)()>(&CompositeFont::getNumSlots))},
	{"getSlotFont", "(I)Lsun/font/PhysicalFont;", nullptr, $PUBLIC, $method(static_cast<$PhysicalFont*(CompositeFont::*)(int32_t)>(&CompositeFont::getSlotFont))},
	{"getStyleMetrics", "(F[FI)V", nullptr, $PUBLIC},
	{"getValidatedGlyphCode", "(I)I", nullptr, $PROTECTED},
	{"hasSupplementaryChars", "()Z", nullptr, $PUBLIC},
	{"isExcludedChar", "(II)Z", nullptr, $PUBLIC, $method(static_cast<bool(CompositeFont::*)(int32_t,int32_t)>(&CompositeFont::isExcludedChar))},
	{"isStdComposite", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CompositeFont::*)()>(&CompositeFont::isStdComposite))},
	{"replaceComponentFont", "(Lsun/font/PhysicalFont;Lsun/font/PhysicalFont;)V", nullptr, 0, $method(static_cast<void(CompositeFont::*)($PhysicalFont*,$PhysicalFont*)>(&CompositeFont::replaceComponentFont))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"useAAForPtSize", "(I)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompositeFont_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.CompositeFont",
	"sun.font.Font2D",
	nullptr,
	_CompositeFont_FieldInfo_,
	_CompositeFont_MethodInfo_
};

$Object* allocate$CompositeFont($Class* clazz) {
	return $of($alloc(CompositeFont));
}

void CompositeFont::init$($String* name, $StringArray* compFileNames, $StringArray* compNames, int32_t metricsSlotCnt, $ints* exclRanges, $ints* maxIndexes, bool defer, $SunFontManager* fm) {
	$useLocalCurrentObjectStackCache();
	$Font2D::init$();
	this->numGlyphs = 0;
	this->localeSlot = -1;
	this->isStdComposite$ = true;
	$set(this, handle, $new($Font2DHandle, this));
	$set(this, fullName, name);
	$set(this, componentFileNames, compFileNames);
	$set(this, componentNames, compNames);
	if (compNames == nullptr) {
		this->numSlots = $nc(this->componentFileNames)->length;
	} else {
		this->numSlots = $nc(this->componentNames)->length;
	}
	this->numSlots = (this->numSlots <= 254) ? this->numSlots : 254;
	this->numMetricsSlots = metricsSlotCnt;
	$set(this, exclusionRanges, exclRanges);
	$set(this, maxIndices, maxIndexes);
	if ($nc(fm)->getEUDCFont() != nullptr) {
		int32_t msCnt = this->numMetricsSlots;
		int32_t fbCnt = this->numSlots - msCnt;
		++this->numSlots;
		if (this->componentNames != nullptr) {
			$set(this, componentNames, $new($StringArray, this->numSlots));
			$System::arraycopy(compNames, 0, this->componentNames, 0, msCnt);
			$nc(this->componentNames)->set(msCnt, $($nc($(fm->getEUDCFont()))->getFontName(nullptr)));
			$System::arraycopy(compNames, msCnt, this->componentNames, msCnt + 1, fbCnt);
		}
		if (this->componentFileNames != nullptr) {
			$set(this, componentFileNames, $new($StringArray, this->numSlots));
			$System::arraycopy(compFileNames, 0, this->componentFileNames, 0, msCnt);
			$System::arraycopy(compFileNames, msCnt, this->componentFileNames, msCnt + 1, fbCnt);
		}
		$set(this, components, $new($PhysicalFontArray, this->numSlots));
		$nc(this->components)->set(msCnt, $(fm->getEUDCFont()));
		$set(this, deferredInitialisation, $new($booleans, this->numSlots));
		if (defer) {
			for (int32_t i = 0; i < this->numSlots - 1; ++i) {
				$nc(this->deferredInitialisation)->set(i, true);
			}
		}
	} else {
		$set(this, components, $new($PhysicalFontArray, this->numSlots));
		$set(this, deferredInitialisation, $new($booleans, this->numSlots));
		if (defer) {
			for (int32_t i = 0; i < this->numSlots; ++i) {
				$nc(this->deferredInitialisation)->set(i, true);
			}
		}
	}
	this->fontRank = $Font2D::FONT_CONFIG_RANK;
	int32_t index = $nc(this->fullName)->indexOf((int32_t)u'.');
	if (index > 0) {
		$set(this, familyName, $nc(this->fullName)->substring(0, index));
		if (index + 1 < $nc(this->fullName)->length()) {
			$var($String, styleStr, $nc(this->fullName)->substring(index + 1));
			if ("plain"_s->equals(styleStr)) {
				this->style = $Font::PLAIN;
			} else if ("bold"_s->equals(styleStr)) {
				this->style = $Font::BOLD;
			} else if ("italic"_s->equals(styleStr)) {
				this->style = $Font::ITALIC;
			} else if ("bolditalic"_s->equals(styleStr)) {
				this->style = $Font::BOLD | $Font::ITALIC;
			}
		}
	} else {
		$set(this, familyName, this->fullName);
	}
}

void CompositeFont::init$($PhysicalFontArray* slotFonts) {
	$Font2D::init$();
	this->numGlyphs = 0;
	this->localeSlot = -1;
	this->isStdComposite$ = true;
	this->isStdComposite$ = false;
	$set(this, handle, $new($Font2DHandle, this));
	$set(this, fullName, $nc($nc(slotFonts)->get(0))->fullName);
	$set(this, familyName, $nc(slotFonts->get(0))->familyName);
	this->style = $nc(slotFonts->get(0))->style;
	this->numMetricsSlots = 1;
	this->numSlots = slotFonts->length;
	$set(this, components, $new($PhysicalFontArray, this->numSlots));
	$System::arraycopy(slotFonts, 0, this->components, 0, this->numSlots);
	$set(this, deferredInitialisation, $new($booleans, this->numSlots));
}

void CompositeFont::init$($PhysicalFont* physFont, CompositeFont* compFont) {
	$Font2D::init$();
	this->numGlyphs = 0;
	this->localeSlot = -1;
	this->isStdComposite$ = true;
	this->isStdComposite$ = false;
	$set(this, handle, $new($Font2DHandle, this));
	$set(this, fullName, $nc(physFont)->fullName);
	$set(this, familyName, physFont->familyName);
	this->style = physFont->style;
	this->numMetricsSlots = 1;
	this->numSlots = $nc(compFont)->numSlots + 1;
	$synchronized($FontManagerFactory::getInstance()) {
		$set(this, components, $new($PhysicalFontArray, this->numSlots));
		$nc(this->components)->set(0, physFont);
		$System::arraycopy(compFont->components, 0, this->components, 1, compFont->numSlots);
		if (compFont->componentNames != nullptr) {
			$set(this, componentNames, $new($StringArray, this->numSlots));
			$nc(this->componentNames)->set(0, physFont->fullName);
			$System::arraycopy(compFont->componentNames, 0, this->componentNames, 1, compFont->numSlots);
		}
		if (compFont->componentFileNames != nullptr) {
			$set(this, componentFileNames, $new($StringArray, this->numSlots));
			$nc(this->componentFileNames)->set(0, nullptr);
			$System::arraycopy(compFont->componentFileNames, 0, this->componentFileNames, 1, compFont->numSlots);
		}
		$set(this, deferredInitialisation, $new($booleans, this->numSlots));
		$nc(this->deferredInitialisation)->set(0, false);
		$System::arraycopy(compFont->deferredInitialisation, 0, this->deferredInitialisation, 1, compFont->numSlots);
	}
}

void CompositeFont::doDeferredInitialisation(int32_t slot) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->deferredInitialisation)->get(slot) == false) {
		return;
	}
	$var($SunFontManager, fm, $SunFontManager::getInstance());
	$synchronized(fm) {
		if (this->componentNames == nullptr) {
			$set(this, componentNames, $new($StringArray, this->numSlots));
		}
		if ($nc(this->components)->get(slot) == nullptr) {
			if (this->componentFileNames != nullptr && $nc(this->componentFileNames)->get(slot) != nullptr) {
				$nc(this->components)->set(slot, $($nc(fm)->initialiseDeferredFont($nc(this->componentFileNames)->get(slot))));
			}
			if ($nc(this->components)->get(slot) == nullptr) {
				$nc(this->components)->set(slot, $($nc(fm)->getDefaultPhysicalFont()));
			}
			$var($String, name, $nc($nc(this->components)->get(slot))->getFontName(nullptr));
			if ($nc(this->componentNames)->get(slot) == nullptr) {
				$nc(this->componentNames)->set(slot, name);
			} else if (!$nc($nc(this->componentNames)->get(slot))->equalsIgnoreCase(name)) {
				try {
					$nc(this->components)->set(slot, $cast($PhysicalFont, $($nc(fm)->findFont2D($nc(this->componentNames)->get(slot), this->style, $FontManager::PHYSICAL_FALLBACK))));
				} catch ($ClassCastException& cce) {
					$nc(this->components)->set(slot, $($nc(fm)->getDefaultPhysicalFont()));
				}
			}
		}
		$nc(this->deferredInitialisation)->set(slot, false);
	}
}

void CompositeFont::replaceComponentFont($PhysicalFont* oldFont, $PhysicalFont* newFont) {
	$useLocalCurrentObjectStackCache();
	if (this->components == nullptr) {
		return;
	}
	for (int32_t slot = 0; slot < this->numSlots; ++slot) {
		if ($nc(this->components)->get(slot) == oldFont) {
			$nc(this->components)->set(slot, newFont);
			if (this->componentNames != nullptr) {
				$nc(this->componentNames)->set(slot, $($nc(newFont)->getFontName(nullptr)));
			}
		}
	}
}

bool CompositeFont::isExcludedChar(int32_t slot, int32_t charcode) {
	if (this->exclusionRanges == nullptr || this->maxIndices == nullptr || slot >= this->numMetricsSlots) {
		return false;
	}
	int32_t minIndex = 0;
	int32_t maxIndex = $nc(this->maxIndices)->get(slot);
	if (slot > 0) {
		minIndex = $nc(this->maxIndices)->get(slot - 1);
	}
	int32_t curIndex = minIndex;
	while (maxIndex > curIndex) {
		if ((charcode >= $nc(this->exclusionRanges)->get(curIndex)) && (charcode <= $nc(this->exclusionRanges)->get(curIndex + 1))) {
			return true;
		}
		curIndex += 2;
	}
	return false;
}

void CompositeFont::getStyleMetrics(float pointSize, $floats* metrics, int32_t offset) {
	$var($PhysicalFont, font, getSlotFont(0));
	if (font == nullptr) {
		$Font2D::getStyleMetrics(pointSize, metrics, offset);
	} else {
		$nc(font)->getStyleMetrics(pointSize, metrics, offset);
	}
}

int32_t CompositeFont::getNumSlots() {
	return this->numSlots;
}

$PhysicalFont* CompositeFont::getSlotFont(int32_t slot) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->deferredInitialisation)->get(slot)) {
		doDeferredInitialisation(slot);
	}
	$var($SunFontManager, fm, $SunFontManager::getInstance());
	try {
		$var($PhysicalFont, font, $nc(this->components)->get(slot));
		if (font == nullptr) {
			try {
				$assign(font, $cast($PhysicalFont, $nc(fm)->findFont2D($nc(this->componentNames)->get(slot), this->style, $FontManager::PHYSICAL_FALLBACK)));
				$nc(this->components)->set(slot, font);
			} catch ($ClassCastException& cce) {
				$assign(font, $nc(fm)->getDefaultPhysicalFont());
			}
		}
		return font;
	} catch ($Exception& e) {
		return $nc(fm)->getDefaultPhysicalFont();
	}
	$shouldNotReachHere();
}

$FontStrike* CompositeFont::createStrike($FontStrikeDesc* desc) {
	return $new($CompositeStrike, this, desc);
}

bool CompositeFont::isStdComposite() {
	return this->isStdComposite$;
}

int32_t CompositeFont::getValidatedGlyphCode(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	int32_t slot = (int32_t)((uint32_t)glyphCode >> 24);
	if (slot >= this->numSlots) {
		return $nc($(getMapper()))->getMissingGlyphCode();
	}
	int32_t slotglyphCode = (int32_t)(glyphCode & (uint32_t)$CompositeStrike::SLOTMASK);
	$var($PhysicalFont, slotFont, getSlotFont(slot));
	int32_t var$0 = $nc(slotFont)->getValidatedGlyphCode(slotglyphCode);
	if (var$0 == slotFont->getMissingGlyphCode()) {
		return $nc($(getMapper()))->getMissingGlyphCode();
	} else {
		return glyphCode;
	}
}

$CharToGlyphMapper* CompositeFont::getMapper() {
	if (this->mapper == nullptr) {
		$set(this, mapper, $new($CompositeGlyphMapper, this));
	}
	return this->mapper;
}

bool CompositeFont::hasSupplementaryChars() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->numSlots; ++i) {
		if ($nc($(getSlotFont(i)))->hasSupplementaryChars()) {
			return true;
		}
	}
	return false;
}

int32_t CompositeFont::getNumGlyphs() {
	if (this->numGlyphs == 0) {
		this->numGlyphs = $nc($(getMapper()))->getNumGlyphs();
	}
	return this->numGlyphs;
}

int32_t CompositeFont::getMissingGlyphCode() {
	return $nc($(getMapper()))->getMissingGlyphCode();
}

bool CompositeFont::canDisplay(char16_t c) {
	return $nc($(getMapper()))->canDisplay(c);
}

bool CompositeFont::useAAForPtSize(int32_t ptsize) {
	$useLocalCurrentObjectStackCache();
	if (this->localeSlot == -1) {
		int32_t numCoreSlots = this->numMetricsSlots;
		if (numCoreSlots == 1 && !isStdComposite()) {
			numCoreSlots = this->numSlots;
		}
		for (int32_t slot = 0; slot < numCoreSlots; ++slot) {
			if ($nc($(getSlotFont(slot)))->supportsEncoding(nullptr)) {
				this->localeSlot = slot;
				break;
			}
		}
		if (this->localeSlot == -1) {
			this->localeSlot = 0;
		}
	}
	return $nc($(getSlotFont(this->localeSlot)))->useAAForPtSize(ptsize);
}

$String* CompositeFont::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, ls, $System::lineSeparator());
	$var($String, componentsStr, ""_s);
	for (int32_t i = 0; i < this->numSlots; ++i) {
		$plusAssign(componentsStr, $$str({"    Slot["_s, $$str(i), "]="_s, $(getSlotFont(i)), ls}));
	}
	return $str({"** Composite Font: Family="_s, this->familyName, " Name="_s, this->fullName, " style="_s, $$str(this->style), ls, componentsStr});
}

CompositeFont::CompositeFont() {
}

$Class* CompositeFont::load$($String* name, bool initialize) {
	$loadClass(CompositeFont, name, initialize, &_CompositeFont_ClassInfo_, allocate$CompositeFont);
	return class$;
}

$Class* CompositeFont::class$ = nullptr;

	} // font
} // sun