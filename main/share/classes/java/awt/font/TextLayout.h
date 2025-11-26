#ifndef _java_awt_font_TextLayout_h_
#define _java_awt_font_TextLayout_h_
//$ class java.awt.font.TextLayout
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("ALREADY_JUSTIFIED")
#undef ALREADY_JUSTIFIED
#pragma push_macro("DEFAULT_CARET_POLICY")
#undef DEFAULT_CARET_POLICY

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
			class GraphicAttribute;
			class LayoutPath;
			class TextHitInfo;
			class TextLayout$CaretPolicy;
			class TextLine;
			class TextLine$TextLineMetrics;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class GeneralPath;
			class Point2D;
			class Rectangle2D;
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
		class LayoutPathImpl;
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export TextLayout : public ::java::lang::Cloneable {
	$class(TextLayout, 0, ::java::lang::Cloneable)
public:
	TextLayout();
	using ::java::lang::Cloneable::equals;
	void init$($String* string, ::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	void init$($String* string, ::java::util::Map* attributes, ::java::awt::font::FontRenderContext* frc);
	void init$(::java::text::AttributedCharacterIterator* text, ::java::awt::font::FontRenderContext* frc);
	void init$(::java::awt::font::TextLine* textLine, int8_t baseline, $floats* baselineOffsets, float justifyRatio);
	::java::awt::geom::GeneralPath* boundingShape($doubles* path0, $doubles* path1);
	void buildCache();
	::java::awt::geom::GeneralPath* caretBoundingShape(int32_t caret0, int32_t caret1, ::java::awt::geom::Rectangle2D* bounds);
	bool caretIsValid(int32_t caret);
	::java::awt::font::TextHitInfo* caretToHit(int32_t caret);
	float caretToPointDistance($floats* caretInfo, float x, float y);
	void checkTextHit(::java::awt::font::TextHitInfo* hit);
	virtual $Object* clone() override;
	void draw(::java::awt::Graphics2D* g2, float x, float y);
	void ensureCache();
	bool equals(::java::awt::font::TextLayout* rhs);
	void fastInit($chars* chars, ::java::awt::Font* font, ::java::util::Map* attrs, ::java::awt::font::FontRenderContext* frc);
	float getAdvance();
	float getAscent();
	int8_t getBaseline();
	static int8_t getBaselineFromGraphic(::java::awt::font::GraphicAttribute* graphic);
	$floats* getBaselineOffsets();
	::java::awt::Shape* getBlackBoxBounds(int32_t firstEndpoint, int32_t secondEndpoint);
	::java::awt::geom::Rectangle2D* getBounds();
	$floats* getCaretInfo(int32_t caret, ::java::awt::geom::Rectangle2D* bounds, $floats* info);
	$floats* getCaretInfo(::java::awt::font::TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds);
	$floats* getCaretInfo(::java::awt::font::TextHitInfo* hit);
	$floats* getCaretInfoTestInternal(::java::awt::font::TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds);
	$doubles* getCaretPath(::java::awt::font::TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds);
	$doubles* getCaretPath(int32_t caret, ::java::awt::geom::Rectangle2D* bounds, bool clipToBounds);
	::java::awt::Shape* getCaretShape(::java::awt::font::TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds);
	::java::awt::Shape* getCaretShape(::java::awt::font::TextHitInfo* hit);
	$Array<::java::awt::Shape>* getCaretShapes(int32_t offset, ::java::awt::geom::Rectangle2D* bounds, ::java::awt::font::TextLayout$CaretPolicy* policy);
	$Array<::java::awt::Shape>* getCaretShapes(int32_t offset, ::java::awt::geom::Rectangle2D* bounds);
	$Array<::java::awt::Shape>* getCaretShapes(int32_t offset);
	int32_t getCharacterCount();
	int8_t getCharacterLevel(int32_t index);
	float getDescent();
	::java::awt::font::TextLayout* getJustifiedLayout(float justificationWidth);
	::java::awt::font::LayoutPath* getLayoutPath();
	float getLeading();
	::java::awt::Shape* getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint, ::java::awt::geom::Rectangle2D* bounds);
	::java::awt::Shape* getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint);
	$ints* getLogicalRangesForVisualSelection(::java::awt::font::TextHitInfo* firstEndpoint, ::java::awt::font::TextHitInfo* secondEndpoint);
	::java::awt::geom::Rectangle2D* getNaturalBounds();
	::java::awt::font::TextHitInfo* getNextLeftHit(::java::awt::font::TextHitInfo* hit);
	::java::awt::font::TextHitInfo* getNextLeftHit(int32_t offset, ::java::awt::font::TextLayout$CaretPolicy* policy);
	::java::awt::font::TextHitInfo* getNextLeftHit(int32_t offset);
	::java::awt::font::TextHitInfo* getNextRightHit(::java::awt::font::TextHitInfo* hit);
	::java::awt::font::TextHitInfo* getNextRightHit(int32_t offset, ::java::awt::font::TextLayout$CaretPolicy* policy);
	::java::awt::font::TextHitInfo* getNextRightHit(int32_t offset);
	::java::awt::Shape* getOutline(::java::awt::geom::AffineTransform* tx);
	::java::awt::Rectangle* getPixelBounds(::java::awt::font::FontRenderContext* frc, float x, float y);
	::java::awt::font::TextHitInfo* getStrongHit(::java::awt::font::TextHitInfo* hit1, ::java::awt::font::TextHitInfo* hit2);
	::java::awt::font::TextLine* getTextLineForTesting();
	float getVisibleAdvance();
	::java::awt::Shape* getVisualHighlightShape(::java::awt::font::TextHitInfo* firstEndpoint, ::java::awt::font::TextHitInfo* secondEndpoint, ::java::awt::geom::Rectangle2D* bounds);
	::java::awt::Shape* getVisualHighlightShape(::java::awt::font::TextHitInfo* firstEndpoint, ::java::awt::font::TextHitInfo* secondEndpoint);
	::java::awt::font::TextHitInfo* getVisualOtherHit(::java::awt::font::TextHitInfo* hit);
	void handleJustify(float justificationWidth);
	::java::awt::font::TextHitInfo* hitTestChar(float x, float y, ::java::awt::geom::Rectangle2D* bounds);
	::java::awt::font::TextHitInfo* hitTestChar(float x, float y);
	int32_t hitToCaret(::java::awt::font::TextHitInfo* hit);
	void hitToPoint(::java::awt::font::TextHitInfo* hit, ::java::awt::geom::Point2D* point);
	bool isLeftToRight();
	bool isVertical();
	::java::awt::geom::GeneralPath* leftShape(::java::awt::geom::Rectangle2D* bounds);
	void paragraphInit(int8_t aBaseline, ::sun::font::CoreMetrics* lm, ::java::util::Map* paragraphAttrs, $chars* text);
	static ::java::awt::geom::GeneralPath* pathToShape($doubles* path, bool close, ::sun::font::LayoutPathImpl* lp);
	::java::awt::geom::GeneralPath* rightShape(::java::awt::geom::Rectangle2D* bounds);
	static int32_t sameBaselineUpTo(::java::awt::Font* font, $chars* text, int32_t start, int32_t limit);
	static ::java::awt::Font* singleFont($chars* text, int32_t start, int32_t limit, ::java::util::Map* attributes);
	void standardInit(::java::text::AttributedCharacterIterator* text, $chars* chars, ::java::awt::font::FontRenderContext* frc);
	virtual $String* toString() override;
	int32_t characterCount = 0;
	bool isVerticalLine = false;
	int8_t baseline = 0;
	$floats* baselineOffsets = nullptr;
	::java::awt::font::TextLine* textLine = nullptr;
	::java::awt::font::TextLine$TextLineMetrics* lineMetrics = nullptr;
	float visibleAdvance = 0.0;
	bool cacheIsValid = false;
	float justifyRatio = 0.0;
	static float ALREADY_JUSTIFIED;
	static float dx;
	static float dy;
	::java::awt::geom::Rectangle2D* naturalBounds = nullptr;
	::java::awt::geom::Rectangle2D* boundsRect = nullptr;
	bool caretsInLigaturesAreAllowed = false;
	static ::java::awt::font::TextLayout$CaretPolicy* DEFAULT_CARET_POLICY;
};

		} // font
	} // awt
} // java

#pragma pop_macro("ALREADY_JUSTIFIED")
#pragma pop_macro("DEFAULT_CARET_POLICY")

#endif // _java_awt_font_TextLayout_h_