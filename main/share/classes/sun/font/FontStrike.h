#ifndef _sun_font_FontStrike_h_
#define _sun_font_FontStrike_h_
//$ class sun.font.FontStrike
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class GeneralPath;
			class Point2D$Float;
			class Rectangle2D$Float;
		}
	}
}
namespace sun {
	namespace font {
		class FontStrikeDesc;
		class FontStrikeDisposer;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class FontStrike : public ::java::lang::Object {
	$class(FontStrike, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontStrike();
	void init$();
	virtual ::java::awt::geom::Point2D$Float* getCharMetrics(char16_t ch) {return nullptr;}
	virtual float getCodePointAdvance(int32_t cp) {return 0.0;}
	virtual ::sun::font::StrikeMetrics* getFontMetrics() {return nullptr;}
	virtual float getGlyphAdvance(int32_t glyphCode) {return 0.0;}
	virtual void getGlyphImageBounds(int32_t glyphcode, ::java::awt::geom::Point2D$Float* pt, ::java::awt::Rectangle* result) {}
	virtual int64_t getGlyphImagePtr(int32_t glyphcode) {return 0;}
	virtual void getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {}
	virtual ::java::awt::geom::Point2D$Float* getGlyphMetrics(int32_t glyphcode) {return nullptr;}
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int32_t glyphCode, float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int32_t glyphCode) {return nullptr;}
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline($ints* glyphs, float x, float y) {return nullptr;}
	virtual int32_t getNumGlyphs() {return 0;}
	::sun::font::FontStrikeDisposer* disposer = nullptr;
	::sun::font::FontStrikeDesc* desc = nullptr;
	::sun::font::StrikeMetrics* strikeMetrics = nullptr;
	bool algoStyle = false;
	float boldness = 0.0;
	float italic = 0.0;
};

	} // font
} // sun

#endif // _sun_font_FontStrike_h_