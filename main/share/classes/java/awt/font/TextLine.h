#ifndef _java_awt_font_TextLine_h_
#define _java_awt_font_TextLine_h_
//$ class java.awt.font.TextLine
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Font;
		class Graphics2D;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class StyledParagraph;
			class TextLine$Function;
			class TextLine$TextLineMetrics;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace font {
		class CoreMetrics;
		class Decoration;
		class LayoutPathImpl;
		class TextLabelFactory;
		class TextLineComponent;
	}
}

namespace java {
	namespace awt {
		namespace font {

class TextLine : public ::java::lang::Object {
	$class(TextLine, 0, ::java::lang::Object)
public:
	TextLine();
	void init$(::java::awt::font::FontRenderContext* frc, $Array<::sun::font::TextLineComponent>* components, $floats* baselineOffsets, $chars* chars, int32_t charsStart, int32_t charsLimit, $ints* charLogicalOrder, $bytes* charLevels, bool isDirectionLTR);
	static bool advanceToFirstFont(::java::text::AttributedCharacterIterator* aci);
	float applyFunctionAtIndex(int32_t logicalIndex, ::java::awt::font::TextLine$Function* f);
	bool caretAtOffsetIsValid(int32_t offset);
	int32_t characterCount();
	void checkCtorArgs();
	static $ints* computeComponentOrder($Array<::sun::font::TextLineComponent>* components, $ints* charsLtoV);
	static ::java::awt::Rectangle* computePixelBounds(::java::awt::image::BufferedImage* im);
	static $Array<::sun::font::TextLineComponent>* createComponentsOnRun(int32_t runStart, int32_t runLimit, $chars* chars, $ints* charsLtoV, $bytes* levels, ::sun::font::TextLabelFactory* factory, ::java::awt::Font* font, ::sun::font::CoreMetrics* cm, ::java::awt::font::FontRenderContext* frc, ::sun::font::Decoration* decorator, $Array<::sun::font::TextLineComponent>* components, int32_t numComponents);
	static ::java::awt::font::TextLine* createLineFromText($chars* chars, ::java::awt::font::StyledParagraph* styledParagraph, ::sun::font::TextLabelFactory* factory, bool isDirectionLTR, $floats* baselineOffsets);
	void draw(::java::awt::Graphics2D* g2, float x, float y);
	static $Array<::sun::font::TextLineComponent>* expandArray($Array<::sun::font::TextLineComponent>* orig);
	static ::java::awt::font::TextLine* fastCreateTextLine(::java::awt::font::FontRenderContext* frc, $chars* chars, ::java::awt::Font* font, ::sun::font::CoreMetrics* lm, ::java::util::Map* attributes);
	static int32_t firstVisualChunk($ints* order, $bytes* direction, int32_t start, int32_t limit);
	static float getAdvanceBetween($Array<::sun::font::TextLineComponent>* components, int32_t start, int32_t limit);
	float getCharAdvance(int32_t logicalIndex);
	float getCharAngle(int32_t logicalIndex);
	float getCharAscent(int32_t logicalIndex);
	::java::awt::geom::Rectangle2D* getCharBounds(int32_t logicalIndex);
	float getCharDescent(int32_t logicalIndex);
	int8_t getCharLevel(int32_t logicalIndex);
	float getCharLinePosition(int32_t logicalIndex);
	float getCharLinePosition(int32_t logicalIndex, bool leading);
	float getCharShift(int32_t logicalIndex);
	int32_t getCharType(int32_t logicalIndex);
	float getCharXPosition(int32_t logicalIndex);
	float getCharYPosition(int32_t logicalIndex);
	int32_t getComponentLogicalIndex(int32_t vi);
	float getComponentShift(int32_t index);
	int32_t getComponentVisualIndex(int32_t li);
	static $Array<::sun::font::TextLineComponent>* getComponents(::java::awt::font::StyledParagraph* styledParagraph, $chars* chars, int32_t textStart, int32_t textLimit, $ints* charsLtoV, $bytes* levels, ::sun::font::TextLabelFactory* factory);
	::sun::font::CoreMetrics* getCoreMetricsAt(int32_t logicalIndex);
	static ::java::awt::Font* getFontAtCurrentPos(::java::text::AttributedCharacterIterator* aci);
	::java::awt::geom::Rectangle2D* getItalicBounds();
	::java::awt::font::TextLine* getJustifiedLine(float justificationWidth, float justifyRatio, int32_t justStart, int32_t justLimit);
	::sun::font::LayoutPathImpl* getLayoutPath();
	::java::awt::font::TextLine$TextLineMetrics* getMetrics();
	static $floats* getNormalizedOffsets($floats* baselineOffsets, int8_t baseline);
	::java::awt::Shape* getOutline(::java::awt::geom::AffineTransform* tx);
	::java::awt::Rectangle* getPixelBounds(::java::awt::font::FontRenderContext* frc, float x, float y);
	::java::awt::geom::Rectangle2D* getVisualBounds();
	void init();
	bool isCharLTR(int32_t logicalIndex);
	bool isCharSpace(int32_t logicalIndex);
	bool isCharWhitespace(int32_t logicalIndex);
	bool isDirectionLTR();
	int32_t logicalToVisual(int32_t logicalIndex);
	static ::java::awt::font::TextLine* standardCreateTextLine(::java::awt::font::FontRenderContext* frc, ::java::text::AttributedCharacterIterator* text, $chars* chars, $floats* baselineOffsets);
	virtual $String* toString() override;
	int32_t visualToLogical(int32_t visualIndex);
	$Array<::sun::font::TextLineComponent>* fComponents = nullptr;
	$floats* fBaselineOffsets = nullptr;
	$ints* fComponentVisualOrder = nullptr;
	$floats* locs = nullptr;
	$chars* fChars = nullptr;
	int32_t fCharsStart = 0;
	int32_t fCharsLimit = 0;
	$ints* fCharVisualOrder = nullptr;
	$ints* fCharLogicalOrder = nullptr;
	$bytes* fCharLevels = nullptr;
	bool fIsDirectionLTR = false;
	::sun::font::LayoutPathImpl* lp = nullptr;
	bool isSimple = false;
	::java::awt::Rectangle* pixelBounds = nullptr;
	::java::awt::font::FontRenderContext* frc = nullptr;
	::java::awt::font::TextLine$TextLineMetrics* fMetrics = nullptr;
	static ::java::awt::font::TextLine$Function* fgPosAdvF;
	static ::java::awt::font::TextLine$Function* fgAdvanceF;
	static ::java::awt::font::TextLine$Function* fgXPositionF;
	static ::java::awt::font::TextLine$Function* fgYPositionF;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_TextLine_h_