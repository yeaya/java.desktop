#ifndef _sun_font_StandardGlyphVector_h_
#define _sun_font_StandardGlyphVector_h_
//$ class sun.font.StandardGlyphVector
//$ extends java.awt.font.GlyphVector

#include <java/awt/font/GlyphVector.h>
#include <java/lang/Array.h>

#pragma push_macro("FLAG_USES_ALTERNATE_ORIENTATION")
#undef FLAG_USES_ALTERNATE_ORIENTATION
#pragma push_macro("FLAG_USES_VERTICAL_BASELINE")
#undef FLAG_USES_VERTICAL_BASELINE
#pragma push_macro("FLAG_USES_VERTICAL_METRICS")
#undef FLAG_USES_VERTICAL_METRICS
#pragma push_macro("UNINITIALIZED_FLAGS")
#undef UNINITIALIZED_FLAGS

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
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
	}
}
namespace sun {
	namespace font {
		class Font2D;
		class StandardGlyphVector$GlyphStrike;
		class StandardGlyphVector$GlyphTransformInfo;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class FontInfo;
		}
	}
}

namespace sun {
	namespace font {

class StandardGlyphVector : public ::java::awt::font::GlyphVector {
	$class(StandardGlyphVector, 0, ::java::awt::font::GlyphVector)
public:
	StandardGlyphVector();
	void init$(::java::awt::Font* font, $String* str, ::java::awt::font::FontRenderContext* frc);
	void init$(::java::awt::Font* font, $chars* text, ::java::awt::font::FontRenderContext* frc);
	void init$(::java::awt::Font* font, $chars* text, int32_t start, int32_t count, ::java::awt::font::FontRenderContext* frc);
	void init$(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, $ints* glyphs, $floats* positions, $ints* indices, int32_t flags);
	void init$(::java::awt::Font* font, ::java::text::CharacterIterator* iter, ::java::awt::font::FontRenderContext* frc);
	void init$(::java::awt::Font* font, $ints* glyphs, ::java::awt::font::FontRenderContext* frc);
	void init$(::java::awt::font::GlyphVector* gv, ::java::awt::font::FontRenderContext* frc);
	void addFlags(int32_t newflags);
	virtual ::java::lang::StringBuffer* appendString(::java::lang::StringBuffer* buf);
	void clearCaches(int32_t ix);
	void clearCaches();
	void clearFlags(int32_t clearedFlags);
	virtual $Object* clone() override;
	virtual ::sun::font::StandardGlyphVector* copy();
	static bool equalNonTranslateTX(::java::awt::geom::AffineTransform* lhs, ::java::awt::geom::AffineTransform* rhs);
	virtual bool equals(::java::awt::font::GlyphVector* rhs) override;
	virtual bool equals(Object$* rhs) override;
	::sun::font::StandardGlyphVector$GlyphStrike* getDefaultStrike();
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::font::FontRenderContext* getFontRenderContext() override;
	virtual int32_t getGlyphCharIndex(int32_t ix) override;
	virtual $ints* getGlyphCharIndices(int32_t start, int32_t count, $ints* result) override;
	virtual int32_t getGlyphCode(int32_t glyphIndex) override;
	virtual $ints* getGlyphCodes(int32_t start, int32_t count, $ints* result) override;
	virtual $floats* getGlyphInfo();
	virtual ::java::awt::font::GlyphJustificationInfo* getGlyphJustificationInfo(int32_t ix) override;
	virtual ::java::awt::Shape* getGlyphLogicalBounds(int32_t ix) override;
	virtual ::java::awt::font::GlyphMetrics* getGlyphMetrics(int32_t ix) override;
	virtual ::java::awt::Shape* getGlyphOutline(int32_t ix) override;
	virtual ::java::awt::Shape* getGlyphOutline(int32_t ix, float x, float y) override;
	::java::awt::geom::Rectangle2D* getGlyphOutlineBounds(int32_t ix);
	virtual ::java::awt::Rectangle* getGlyphPixelBounds(int32_t index, ::java::awt::font::FontRenderContext* renderFRC, float x, float y) override;
	virtual ::java::awt::geom::Point2D* getGlyphPosition(int32_t ix) override;
	virtual $floats* getGlyphPositions(int32_t start, int32_t count, $floats* result) override;
	virtual $floats* getGlyphPositions($floats* result);
	::sun::font::StandardGlyphVector$GlyphStrike* getGlyphStrike(int32_t ix);
	virtual ::java::awt::geom::AffineTransform* getGlyphTransform(int32_t ix) override;
	virtual $Array<::java::awt::geom::AffineTransform>* getGlyphTransforms(int32_t start, int32_t count, $Array<::java::awt::geom::AffineTransform>* result);
	virtual $Array<::java::awt::geom::AffineTransform>* getGlyphTransforms();
	virtual ::java::awt::Shape* getGlyphVisualBounds(int32_t ix) override;
	::java::awt::Shape* getGlyphsOutline(int32_t start, int32_t count, float x, float y);
	::java::awt::Rectangle* getGlyphsPixelBounds(::java::awt::font::FontRenderContext* frc, float x, float y, int32_t start, int32_t count);
	virtual int32_t getLayoutFlags() override;
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds() override;
	static ::java::awt::geom::AffineTransform* getNonTranslateTX(::java::awt::geom::AffineTransform* tx);
	virtual int32_t getNumGlyphs() override;
	virtual ::java::awt::Shape* getOutline() override;
	virtual ::java::awt::Shape* getOutline(float x, float y) override;
	virtual ::java::awt::Rectangle* getPixelBounds(::java::awt::font::FontRenderContext* renderFRC, float x, float y) override;
	static ::sun::font::StandardGlyphVector* getStandardGV(::java::awt::font::GlyphVector* gv, ::sun::java2d::loops::FontInfo* info);
	float getTracking(::java::awt::Font* font);
	virtual $ints* getValidatedGlyphs($ints* oglyphs);
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds() override;
	virtual int32_t hashCode() override;
	void init(::java::awt::Font* font, $chars* text, int32_t start, int32_t count, ::java::awt::font::FontRenderContext* frc, int32_t flags);
	void initFontData();
	virtual void initGlyphVector(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, $ints* glyphs, $floats* positions, $ints* indices, int32_t flags);
	void initPositions();
	$floats* internalGetGlyphPositions(int32_t start, int32_t count, int32_t offset, $floats* result);
	static bool matchTX($doubles* lhs, ::java::awt::geom::AffineTransform* rhs);
	virtual bool needsPositions($doubles* devTX);
	virtual void performDefaultLayout() override;
	void resetDTX(::java::awt::geom::AffineTransform* at);
	void setDTX(::java::awt::geom::AffineTransform* tx);
	void setFRCTX();
	virtual void setGlyphPosition(int32_t ix, ::java::awt::geom::Point2D* pos) override;
	virtual void setGlyphPositions($floats* srcPositions, int32_t srcStart, int32_t start, int32_t count);
	virtual void setGlyphPositions($floats* srcPositions);
	virtual void setGlyphTransform(int32_t ix, ::java::awt::geom::AffineTransform* newTX) override;
	virtual void setGlyphTransforms($Array<::java::awt::geom::AffineTransform>* srcTransforms, int32_t srcStart, int32_t start, int32_t count);
	virtual void setGlyphTransforms($Array<::java::awt::geom::AffineTransform>* srcTransforms);
	void setRenderTransform($doubles* devTX);
	virtual $Object* setupGlyphImages($longs* images, $floats* positions, $doubles* devTX);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::awt::Font* font = nullptr;
	::java::awt::font::FontRenderContext* frc = nullptr;
	$ints* glyphs = nullptr;
	$ints* userGlyphs = nullptr;
	$floats* positions = nullptr;
	$ints* charIndices = nullptr;
	int32_t flags = 0;
	static const int32_t UNINITIALIZED_FLAGS = (-1);
	::sun::font::StandardGlyphVector$GlyphTransformInfo* gti = nullptr;
	::java::awt::geom::AffineTransform* ftx = nullptr;
	::java::awt::geom::AffineTransform* dtx = nullptr;
	::java::awt::geom::AffineTransform* invdtx = nullptr;
	::java::awt::geom::AffineTransform* frctx = nullptr;
	::sun::font::Font2D* font2D = nullptr;
	::java::lang::ref::SoftReference* fsref = nullptr;
	::java::lang::ref::SoftReference* lbcacheRef = nullptr;
	::java::lang::ref::SoftReference* vbcacheRef = nullptr;
	static const int32_t FLAG_USES_VERTICAL_BASELINE = 128;
	static const int32_t FLAG_USES_VERTICAL_METRICS = 256;
	static const int32_t FLAG_USES_ALTERNATE_ORIENTATION = 512;
};

	} // font
} // sun

#pragma pop_macro("FLAG_USES_ALTERNATE_ORIENTATION")
#pragma pop_macro("FLAG_USES_VERTICAL_BASELINE")
#pragma pop_macro("FLAG_USES_VERTICAL_METRICS")
#pragma pop_macro("UNINITIALIZED_FLAGS")

#endif // _sun_font_StandardGlyphVector_h_