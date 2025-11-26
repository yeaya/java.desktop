#ifndef _sun_font_StandardGlyphVector$GlyphStrike_h_
#define _sun_font_StandardGlyphVector$GlyphStrike_h_
//$ class sun.font.StandardGlyphVector$GlyphStrike
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class GeneralPath;
			class Point2D$Float;
			class Rectangle2D;
		}
	}
}
namespace sun {
	namespace font {
		class FontStrike;
		class StandardGlyphVector;
		class StandardGlyphVector$ADL;
	}
}

namespace sun {
	namespace font {

class StandardGlyphVector$GlyphStrike : public ::java::lang::Object {
	$class(StandardGlyphVector$GlyphStrike, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StandardGlyphVector$GlyphStrike();
	void init$(::sun::font::StandardGlyphVector* sgv, ::sun::font::FontStrike* strike, float dx, float dy);
	void addDefaultGlyphAdvance(int32_t glyphID, ::java::awt::geom::Point2D$Float* result);
	void appendGlyphOutline(int32_t glyphID, ::java::awt::geom::GeneralPath* result, float x, float y);
	static ::sun::font::StandardGlyphVector$GlyphStrike* create(::sun::font::StandardGlyphVector* sgv, ::java::awt::geom::AffineTransform* dtx, ::java::awt::geom::AffineTransform* gtx);
	void getADL(::sun::font::StandardGlyphVector$ADL* result);
	::java::awt::geom::Rectangle2D* getGlyphOutlineBounds(int32_t glyphID, float x, float y);
	void getGlyphPosition(int32_t glyphID, int32_t ix, $floats* positions, $floats* result);
	::sun::font::StandardGlyphVector* sgv = nullptr;
	::sun::font::FontStrike* strike = nullptr;
	float dx = 0.0;
	float dy = 0.0;
};

	} // font
} // sun

#endif // _sun_font_StandardGlyphVector$GlyphStrike_h_