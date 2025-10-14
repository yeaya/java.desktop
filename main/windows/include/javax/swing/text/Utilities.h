#ifndef _javax_swing_text_Utilities_h_
#define _javax_swing_text_Utilities_h_
//$ class javax.swing.text.Utilities
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class FontMetrics;
		class Graphics;
		class Graphics2D;
		class Rectangle;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class Element;
			class GlyphView;
			class JTextComponent;
			class Position$Bias;
			class Segment;
			class TabExpander;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import Utilities : public ::java::lang::Object {
	$class(Utilities, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Utilities();
	void init$();
	static int32_t drawComposedText(::javax::swing::text::View* view, ::javax::swing::text::AttributeSet* attr, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1);
	static float drawComposedText(::javax::swing::text::View* view, ::javax::swing::text::AttributeSet* attr, ::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1);
	static float drawComposedText(::javax::swing::text::View* view, ::javax::swing::text::AttributeSet* attr, ::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI);
	static int32_t drawTabbedText(::javax::swing::text::Segment* s, int32_t x, int32_t y, ::java::awt::Graphics* g, ::javax::swing::text::TabExpander* e, int32_t startOffset);
	static float drawTabbedText(::javax::swing::text::Segment* s, float x, float y, ::java::awt::Graphics2D* g, ::javax::swing::text::TabExpander* e, int32_t startOffset);
	static int32_t drawTabbedText(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, int32_t x, int32_t y, ::java::awt::Graphics* g, ::javax::swing::text::TabExpander* e, int32_t startOffset);
	static int32_t drawTabbedText(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, int32_t x, int32_t y, ::java::awt::Graphics* g, ::javax::swing::text::TabExpander* e, int32_t startOffset, $ints* justificationData);
	static float drawTabbedText(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, float x, float y, ::java::awt::Graphics* g, ::javax::swing::text::TabExpander* e, int32_t startOffset, $ints* justificationData, bool useFPAPI);
	static int32_t getBreakLocation(::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, int32_t x0, int32_t x, ::javax::swing::text::TabExpander* e, int32_t startOffset);
	static int32_t getBreakLocation(::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, float x0, float x, ::javax::swing::text::TabExpander* e, int32_t startOffset, bool useFPIAPI);
	static int32_t getBreakLocation(::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, float x0, float x, ::javax::swing::text::TabExpander* e, int32_t startOffset);
	static ::javax::swing::JComponent* getJComponent(::javax::swing::text::View* view);
	static int32_t getNextVisualPositionFrom(::javax::swing::text::View* v, int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* alloc, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet);
	static int32_t getNextWord(::javax::swing::text::JTextComponent* c, int32_t offs);
	static int32_t getNextWordInParagraph(::javax::swing::text::JTextComponent* c, ::javax::swing::text::Element* line, int32_t offs, bool first);
	static ::javax::swing::text::Element* getParagraphElement(::javax::swing::text::JTextComponent* c, int32_t offs);
	static int32_t getPositionAbove(::javax::swing::text::JTextComponent* c, int32_t offs, int32_t x);
	static int32_t getPositionAbove(::javax::swing::text::JTextComponent* c, int32_t offs, float x, bool useFPAPI);
	static int32_t getPositionAbove(::javax::swing::text::JTextComponent* c, int32_t offs, float x);
	static int32_t getPositionBelow(::javax::swing::text::JTextComponent* c, int32_t offs, int32_t x);
	static int32_t getPositionBelow(::javax::swing::text::JTextComponent* c, int32_t offs, float x, bool useFPAPI);
	static int32_t getPositionBelow(::javax::swing::text::JTextComponent* c, int32_t offs, float x);
	static int32_t getPrevWordInParagraph(::javax::swing::text::JTextComponent* c, ::javax::swing::text::Element* line, int32_t offs);
	static int32_t getPreviousWord(::javax::swing::text::JTextComponent* c, int32_t offs);
	static int32_t getRowEnd(::javax::swing::text::JTextComponent* c, int32_t offs);
	static int32_t getRowStart(::javax::swing::text::JTextComponent* c, int32_t offs);
	static int32_t getTabbedTextOffset(::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, int32_t x0, int32_t x, ::javax::swing::text::TabExpander* e, int32_t startOffset);
	static int32_t getTabbedTextOffset(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, int32_t x0, int32_t x, ::javax::swing::text::TabExpander* e, int32_t startOffset, $ints* justificationData);
	static int32_t getTabbedTextOffset(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, float x0, float x, ::javax::swing::text::TabExpander* e, int32_t startOffset, $ints* justificationData);
	static int32_t getTabbedTextOffset(::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, int32_t x0, int32_t x, ::javax::swing::text::TabExpander* e, int32_t startOffset, bool round);
	static int32_t getTabbedTextOffset(::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, float x0, float x, ::javax::swing::text::TabExpander* e, int32_t startOffset, bool round);
	static int32_t getTabbedTextOffset(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, float x0, float x, ::javax::swing::text::TabExpander* e, int32_t startOffset, bool round, $ints* justificationData, bool useFPAPI);
	static int32_t getTabbedTextWidth(::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, int32_t x, ::javax::swing::text::TabExpander* e, int32_t startOffset);
	static float getTabbedTextWidth(::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, float x, ::javax::swing::text::TabExpander* e, int32_t startOffset);
	static int32_t getTabbedTextWidth(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, int32_t x, ::javax::swing::text::TabExpander* e, int32_t startOffset, $ints* justificationData);
	static float getTabbedTextWidth(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, float x, ::javax::swing::text::TabExpander* e, int32_t startOffset, $ints* justificationData);
	static float getTabbedTextWidth(::javax::swing::text::View* view, ::javax::swing::text::Segment* s, ::java::awt::FontMetrics* metrics, float x, ::javax::swing::text::TabExpander* e, int32_t startOffset, $ints* justificationData, bool useFPAPI);
	static int32_t getWordEnd(::javax::swing::text::JTextComponent* c, int32_t offs);
	static int32_t getWordStart(::javax::swing::text::JTextComponent* c, int32_t offs);
	static bool isComposedTextAttributeDefined(::javax::swing::text::AttributeSet* as);
	static bool isComposedTextElement(::javax::swing::text::Document* doc, int32_t offset);
	static bool isComposedTextElement(::javax::swing::text::Element* elem);
	static bool isLeftToRight(::java::awt::Component* c);
	static void paintComposedText(::java::awt::Graphics* g, ::java::awt::Rectangle* alloc, ::javax::swing::text::GlyphView* v);
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Utilities_h_