#ifndef _sun_font_DelegateStrike_h_
#define _sun_font_DelegateStrike_h_
//$ class sun.font.DelegateStrike
//$ extends sun.font.NativeStrike

#include <java/lang/Array.h>
#include <sun/font/NativeStrike.h>

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
		class FontStrike;
		class FontStrikeDesc;
		class NativeFont;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class DelegateStrike : public ::sun::font::NativeStrike {
	$class(DelegateStrike, $NO_CLASS_INIT, ::sun::font::NativeStrike)
public:
	DelegateStrike();
	void init$(::sun::font::NativeFont* nativeFont, ::sun::font::FontStrikeDesc* desc, ::sun::font::FontStrike* delegate);
	virtual ::java::awt::geom::Point2D$Float* getCharMetrics(char16_t ch) override;
	virtual float getCodePointAdvance(int32_t cp) override;
	virtual ::sun::font::StrikeMetrics* getFontMetrics() override;
	virtual float getGlyphAdvance(int32_t glyphCode) override;
	virtual void getGlyphImageBounds(int32_t glyphCode, ::java::awt::geom::Point2D$Float* pt, ::java::awt::Rectangle* result) override;
	virtual int64_t getGlyphImagePtr(int32_t glyphCode) override;
	virtual void getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) override;
	virtual ::java::awt::geom::Point2D$Float* getGlyphMetrics(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline($ints* glyphs, float x, float y) override;
	::sun::font::FontStrike* delegateStrike = nullptr;
};

	} // font
} // sun

#endif // _sun_font_DelegateStrike_h_