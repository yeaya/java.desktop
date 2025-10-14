#ifndef _java_awt_font_LineBreakMeasurer_h_
#define _java_awt_font_LineBreakMeasurer_h_
//$ class java.awt.font.LineBreakMeasurer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace font {
			class CharArrayIterator;
			class FontRenderContext;
			class TextLayout;
			class TextMeasurer;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class BreakIterator;
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export LineBreakMeasurer : public ::java::lang::Object {
	$class(LineBreakMeasurer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LineBreakMeasurer();
	void init$(::java::text::AttributedCharacterIterator* text, ::java::awt::font::FontRenderContext* frc);
	void init$(::java::text::AttributedCharacterIterator* text, ::java::text::BreakIterator* breakIter, ::java::awt::font::FontRenderContext* frc);
	void deleteChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t deletePos);
	int32_t getPosition();
	void insertChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t insertPos);
	::java::awt::font::TextLayout* nextLayout(float wrappingWidth);
	::java::awt::font::TextLayout* nextLayout(float wrappingWidth, int32_t offsetLimit, bool requireNextWord);
	int32_t nextOffset(float wrappingWidth);
	int32_t nextOffset(float wrappingWidth, int32_t offsetLimit, bool requireNextWord);
	void setPosition(int32_t newPosition);
	::java::text::BreakIterator* breakIter = nullptr;
	int32_t start = 0;
	int32_t pos = 0;
	int32_t limit = 0;
	::java::awt::font::TextMeasurer* measurer = nullptr;
	::java::awt::font::CharArrayIterator* charIter = nullptr;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_LineBreakMeasurer_h_