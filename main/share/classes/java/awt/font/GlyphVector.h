#ifndef _java_awt_font_GlyphVector_h_
#define _java_awt_font_GlyphVector_h_
//$ class java.awt.font.GlyphVector
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("FLAG_COMPLEX_GLYPHS")
#undef FLAG_COMPLEX_GLYPHS
#pragma push_macro("FLAG_HAS_POSITION_ADJUSTMENTS")
#undef FLAG_HAS_POSITION_ADJUSTMENTS
#pragma push_macro("FLAG_HAS_TRANSFORMS")
#undef FLAG_HAS_TRANSFORMS
#pragma push_macro("FLAG_MASK")
#undef FLAG_MASK
#pragma push_macro("FLAG_RUN_RTL")
#undef FLAG_RUN_RTL

namespace java {
	namespace awt {
		class Font;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class GlyphJustificationInfo;
			class GlyphMetrics;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
			class Rectangle2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export GlyphVector : public ::java::lang::Cloneable {
	$class(GlyphVector, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	GlyphVector();
	using ::java::lang::Cloneable::equals;
	void init$();
	virtual bool equals(::java::awt::font::GlyphVector* set) {return false;}
	virtual ::java::awt::Font* getFont() {return nullptr;}
	virtual ::java::awt::font::FontRenderContext* getFontRenderContext() {return nullptr;}
	virtual int32_t getGlyphCharIndex(int32_t glyphIndex);
	virtual $ints* getGlyphCharIndices(int32_t beginGlyphIndex, int32_t numEntries, $ints* codeReturn);
	virtual int32_t getGlyphCode(int32_t glyphIndex) {return 0;}
	virtual $ints* getGlyphCodes(int32_t beginGlyphIndex, int32_t numEntries, $ints* codeReturn) {return nullptr;}
	virtual ::java::awt::font::GlyphJustificationInfo* getGlyphJustificationInfo(int32_t glyphIndex) {return nullptr;}
	virtual ::java::awt::Shape* getGlyphLogicalBounds(int32_t glyphIndex) {return nullptr;}
	virtual ::java::awt::font::GlyphMetrics* getGlyphMetrics(int32_t glyphIndex) {return nullptr;}
	virtual ::java::awt::Shape* getGlyphOutline(int32_t glyphIndex) {return nullptr;}
	virtual ::java::awt::Shape* getGlyphOutline(int32_t glyphIndex, float x, float y);
	virtual ::java::awt::Rectangle* getGlyphPixelBounds(int32_t index, ::java::awt::font::FontRenderContext* renderFRC, float x, float y);
	virtual ::java::awt::geom::Point2D* getGlyphPosition(int32_t glyphIndex) {return nullptr;}
	virtual $floats* getGlyphPositions(int32_t beginGlyphIndex, int32_t numEntries, $floats* positionReturn) {return nullptr;}
	virtual ::java::awt::geom::AffineTransform* getGlyphTransform(int32_t glyphIndex) {return nullptr;}
	virtual ::java::awt::Shape* getGlyphVisualBounds(int32_t glyphIndex) {return nullptr;}
	virtual int32_t getLayoutFlags();
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds() {return nullptr;}
	virtual int32_t getNumGlyphs() {return 0;}
	virtual ::java::awt::Shape* getOutline() {return nullptr;}
	virtual ::java::awt::Shape* getOutline(float x, float y) {return nullptr;}
	virtual ::java::awt::Rectangle* getPixelBounds(::java::awt::font::FontRenderContext* renderFRC, float x, float y);
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds() {return nullptr;}
	virtual void performDefaultLayout() {}
	virtual void setGlyphPosition(int32_t glyphIndex, ::java::awt::geom::Point2D* newPos) {}
	virtual void setGlyphTransform(int32_t glyphIndex, ::java::awt::geom::AffineTransform* newTX) {}
	static const int32_t FLAG_HAS_TRANSFORMS = 1;
	static const int32_t FLAG_HAS_POSITION_ADJUSTMENTS = 2;
	static const int32_t FLAG_RUN_RTL = 4;
	static const int32_t FLAG_COMPLEX_GLYPHS = 8;
	static const int32_t FLAG_MASK = 15; // FLAG_HAS_TRANSFORMS | FLAG_HAS_POSITION_ADJUSTMENTS | FLAG_RUN_RTL | FLAG_COMPLEX_GLYPHS
};

		} // font
	} // awt
} // java

#pragma pop_macro("FLAG_COMPLEX_GLYPHS")
#pragma pop_macro("FLAG_HAS_POSITION_ADJUSTMENTS")
#pragma pop_macro("FLAG_HAS_TRANSFORMS")
#pragma pop_macro("FLAG_MASK")
#pragma pop_macro("FLAG_RUN_RTL")

#endif // _java_awt_font_GlyphVector_h_