#ifndef _sun_font_TextLineComponent_h_
#define _sun_font_TextLineComponent_h_
//$ interface sun.font.TextLineComponent
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LEFT_TO_RIGHT")
#undef LEFT_TO_RIGHT
#pragma push_macro("RIGHT_TO_LEFT")
#undef RIGHT_TO_LEFT
#pragma push_macro("UNCHANGED")
#undef UNCHANGED

namespace java {
	namespace awt {
		class Graphics2D;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class GlyphJustificationInfo;
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
namespace sun {
	namespace font {
		class CoreMetrics;
	}
}

namespace sun {
	namespace font {

class TextLineComponent : public ::java::lang::Object {
	$interface(TextLineComponent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::font::TextLineComponent* applyJustificationDeltas($floats* deltas, int32_t deltaStart, $booleans* flags) {return nullptr;}
	virtual bool caretAtOffsetIsValid(int32_t index) {return false;}
	virtual void draw(::java::awt::Graphics2D* g2d, float x, float y) {}
	virtual float getAdvance() {return 0.0;}
	virtual float getAdvanceBetween(int32_t start, int32_t limit) {return 0.0;}
	virtual ::java::awt::geom::AffineTransform* getBaselineTransform() {return nullptr;}
	virtual float getCharAdvance(int32_t index) {return 0.0;}
	virtual ::java::awt::geom::Rectangle2D* getCharVisualBounds(int32_t index) {return nullptr;}
	virtual float getCharX(int32_t index) {return 0.0;}
	virtual float getCharY(int32_t index) {return 0.0;}
	virtual ::sun::font::CoreMetrics* getCoreMetrics() {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getItalicBounds() {return nullptr;}
	virtual void getJustificationInfos($Array<::java::awt::font::GlyphJustificationInfo>* infos, int32_t infoStart, int32_t charStart, int32_t charLimit) {}
	virtual int32_t getLineBreakIndex(int32_t start, float width) {return 0;}
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds() {return nullptr;}
	virtual int32_t getNumCharacters() {return 0;}
	virtual int32_t getNumJustificationInfos() {return 0;}
	virtual ::java::awt::Shape* getOutline(float x, float y) {return nullptr;}
	virtual ::java::awt::Rectangle* getPixelBounds(::java::awt::font::FontRenderContext* frc, float x, float y) {return nullptr;}
	virtual ::sun::font::TextLineComponent* getSubset(int32_t start, int32_t limit, int32_t dir) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds() {return nullptr;}
	virtual bool isSimple() {return false;}
	static const int32_t LEFT_TO_RIGHT = 0;
	static const int32_t RIGHT_TO_LEFT = 1;
	static const int32_t UNCHANGED = 2;
};

	} // font
} // sun

#pragma pop_macro("LEFT_TO_RIGHT")
#pragma pop_macro("RIGHT_TO_LEFT")
#pragma pop_macro("UNCHANGED")

#endif // _sun_font_TextLineComponent_h_