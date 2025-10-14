#ifndef _java_awt_font_TextMeasurer_h_
#define _java_awt_font_TextMeasurer_h_
//$ class java.awt.font.TextMeasurer
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("EST_LINES")
#undef EST_LINES

namespace java {
	namespace awt {
		namespace font {
			class CharArrayIterator;
			class FontRenderContext;
			class StyledParagraph;
			class TextLayout;
			class TextLine;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class Bidi;
		class BreakIterator;
	}
}
namespace sun {
	namespace font {
		class TextLineComponent;
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export TextMeasurer : public ::java::lang::Cloneable {
	$class(TextMeasurer, 0, ::java::lang::Cloneable)
public:
	TextMeasurer();
	void init$(::java::text::AttributedCharacterIterator* text, ::java::awt::font::FontRenderContext* frc);
	int32_t calcLineBreak(int32_t pos, float maxAdvance);
	virtual $Object* clone() override;
	void deleteChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t deletePos);
	void ensureComponents(int32_t start, int32_t limit);
	void generateComponents(int32_t startingAt, int32_t endingAt);
	float getAdvanceBetween(int32_t start, int32_t limit);
	$chars* getChars();
	::java::awt::font::TextLayout* getLayout(int32_t start, int32_t limit);
	int32_t getLineBreakIndex(int32_t start, float maxAdvance);
	void initAll(::java::text::AttributedCharacterIterator* text);
	void insertChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t insertPos);
	void invalidateComponents();
	$Array<::sun::font::TextLineComponent>* makeComponentsOnRange(int32_t startPos, int32_t limitPos);
	void makeLayoutWindow(int32_t localStart);
	::java::awt::font::TextLine* makeTextLineOnRange(int32_t startPos, int32_t limitPos);
	void printStats();
	int32_t trailingCdWhitespaceStart(int32_t startPos, int32_t limitPos);
	static float EST_LINES;
	::java::awt::font::FontRenderContext* fFrc = nullptr;
	int32_t fStart = 0;
	$chars* fChars = nullptr;
	::java::text::Bidi* fBidi = nullptr;
	$bytes* fLevels = nullptr;
	$Array<::sun::font::TextLineComponent>* fComponents = nullptr;
	int32_t fComponentStart = 0;
	int32_t fComponentLimit = 0;
	bool haveLayoutWindow = false;
	::java::text::BreakIterator* fLineBreak = nullptr;
	::java::awt::font::CharArrayIterator* charIter = nullptr;
	int32_t layoutCount = 0;
	int32_t layoutCharCount = 0;
	::java::awt::font::StyledParagraph* fParagraph = nullptr;
	bool fIsDirectionLTR = false;
	int8_t fBaseline = 0;
	$floats* fBaselineOffsets = nullptr;
	float fJustifyRatio = 0.0;
	int32_t formattedChars = 0;
	static bool wantStats;
	bool collectStats = false;
};

		} // font
	} // awt
} // java

#pragma pop_macro("EST_LINES")

#endif // _java_awt_font_TextMeasurer_h_