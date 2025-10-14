#ifndef _sun_font_CompositeFont_h_
#define _sun_font_CompositeFont_h_
//$ class sun.font.CompositeFont
//$ extends sun.font.Font2D

#include <java/lang/Array.h>
#include <sun/font/Font2D.h>

namespace sun {
	namespace font {
		class CharToGlyphMapper;
		class FontStrike;
		class FontStrikeDesc;
		class PhysicalFont;
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class CompositeFont : public ::sun::font::Font2D {
	$class(CompositeFont, $NO_CLASS_INIT, ::sun::font::Font2D)
public:
	CompositeFont();
	using ::sun::font::Font2D::canDisplay;
	void init$($String* name, $StringArray* compFileNames, $StringArray* compNames, int32_t metricsSlotCnt, $ints* exclRanges, $ints* maxIndexes, bool defer, ::sun::font::SunFontManager* fm);
	void init$($Array<::sun::font::PhysicalFont>* slotFonts);
	void init$(::sun::font::PhysicalFont* physFont, ::sun::font::CompositeFont* compFont);
	virtual bool canDisplay(char16_t c) override;
	virtual ::sun::font::FontStrike* createStrike(::sun::font::FontStrikeDesc* desc) override;
	void doDeferredInitialisation(int32_t slot);
	virtual ::sun::font::CharToGlyphMapper* getMapper() override;
	virtual int32_t getMissingGlyphCode() override;
	virtual int32_t getNumGlyphs() override;
	int32_t getNumSlots();
	::sun::font::PhysicalFont* getSlotFont(int32_t slot);
	virtual void getStyleMetrics(float pointSize, $floats* metrics, int32_t offset) override;
	virtual int32_t getValidatedGlyphCode(int32_t glyphCode) override;
	virtual bool hasSupplementaryChars() override;
	bool isExcludedChar(int32_t slot, int32_t charcode);
	bool isStdComposite();
	void replaceComponentFont(::sun::font::PhysicalFont* oldFont, ::sun::font::PhysicalFont* newFont);
	virtual $String* toString() override;
	virtual bool useAAForPtSize(int32_t ptsize) override;
	$booleans* deferredInitialisation = nullptr;
	$StringArray* componentFileNames = nullptr;
	$StringArray* componentNames = nullptr;
	$Array<::sun::font::PhysicalFont>* components = nullptr;
	int32_t numSlots = 0;
	int32_t numMetricsSlots = 0;
	$ints* exclusionRanges = nullptr;
	$ints* maxIndices = nullptr;
	int32_t numGlyphs = 0;
	int32_t localeSlot = 0;
	bool isStdComposite$ = false;
};

	} // font
} // sun

#endif // _sun_font_CompositeFont_h_