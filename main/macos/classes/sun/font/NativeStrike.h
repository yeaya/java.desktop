#ifndef _sun_font_NativeStrike_h_
#define _sun_font_NativeStrike_h_
//$ class sun.font.NativeStrike
//$ extends sun.font.PhysicalStrike

#include <java/lang/Array.h>
#include <sun/font/PhysicalStrike.h>

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
		class NativeFont;
	}
}

namespace sun {
	namespace font {

class NativeStrike : public ::sun::font::PhysicalStrike {
	$class(NativeStrike, $NO_CLASS_INIT, ::sun::font::PhysicalStrike)
public:
	NativeStrike();
	void init$(::sun::font::NativeFont* nativeFont, ::sun::font::FontStrikeDesc* desc);
	void init$(::sun::font::NativeFont* nativeFont, ::sun::font::FontStrikeDesc* desc, bool nocache);
	virtual float getGlyphAdvance(int32_t glyphCode) override;
	virtual void getGlyphImageBounds(int32_t glyphcode, ::java::awt::geom::Point2D$Float* pt, ::java::awt::Rectangle* result) override;
	virtual int64_t getGlyphImagePtr(int32_t glyphCode) override;
	virtual int64_t getGlyphImagePtrNoCache(int32_t glyphCode);
	virtual void getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) override;
	virtual ::java::awt::geom::Point2D$Float* getGlyphMetrics(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline($ints* glyphs, float x, float y) override;
	::sun::font::NativeFont* nativeFont = nullptr;
};

	} // font
} // sun

#endif // _sun_font_NativeStrike_h_