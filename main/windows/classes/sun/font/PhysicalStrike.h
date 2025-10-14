#ifndef _sun_font_PhysicalStrike_h_
#define _sun_font_PhysicalStrike_h_
//$ class sun.font.PhysicalStrike
//$ extends sun.font.FontStrike

#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <sun/font/FontStrike.h>

#pragma push_macro("INTMASK")
#undef INTMASK
#pragma push_macro("TYPE_FLIP")
#undef TYPE_FLIP
#pragma push_macro("TYPE_GENERAL_ROTATION")
#undef TYPE_GENERAL_ROTATION
#pragma push_macro("TYPE_GENERAL_SCALE")
#undef TYPE_GENERAL_SCALE
#pragma push_macro("TYPE_GENERAL_TRANSFORM")
#undef TYPE_GENERAL_TRANSFORM
#pragma push_macro("TYPE_QUADRANT_ROTATION")
#undef TYPE_QUADRANT_ROTATION

namespace java {
	namespace awt {
		namespace geom {
			class Point2D$Float;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace sun {
	namespace font {
		class CharToGlyphMapper;
		class FontStrikeDesc;
		class PhysicalFont;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class PhysicalStrike : public ::sun::font::FontStrike {
	$class(PhysicalStrike, 0, ::sun::font::FontStrike)
public:
	PhysicalStrike();
	void init$(::sun::font::PhysicalFont* physicalFont, ::sun::font::FontStrikeDesc* desc);
	void init$();
	virtual void adjustPoint(::java::awt::geom::Point2D$Float* pt);
	virtual ::java::awt::geom::Point2D$Float* getCharMetrics(char16_t ch) override;
	virtual float getCodePointAdvance(int32_t cp) override;
	virtual ::sun::font::StrikeMetrics* getFontMetrics() override;
	virtual ::java::awt::geom::Point2D$Float* getGlyphPoint(int32_t glyphCode, int32_t ptNumber);
	virtual int32_t getNumGlyphs() override;
	virtual int32_t getSlot0GlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len);
	static const int64_t INTMASK = (int64_t)0x00000000FFFFFFFF;
	static bool longAddresses;
	::sun::font::PhysicalFont* physicalFont = nullptr;
	::sun::font::CharToGlyphMapper* mapper = nullptr;
	int64_t pScalerContext = 0;
	$longs* longGlyphImages = nullptr;
	$ints* intGlyphImages = nullptr;
	::java::util::concurrent::ConcurrentHashMap* glyphPointMapCache = nullptr;
	bool getImageWithAdvance = false;
	static const int32_t complexTX = 124; // ::java::awt::geom::AffineTransform::TYPE_FLIP | ::java::awt::geom::AffineTransform::TYPE_GENERAL_SCALE | ::java::awt::geom::AffineTransform::TYPE_GENERAL_ROTATION | ::java::awt::geom::AffineTransform::TYPE_GENERAL_TRANSFORM | ::java::awt::geom::AffineTransform::TYPE_QUADRANT_ROTATION
};

	} // font
} // sun

#pragma pop_macro("INTMASK")
#pragma pop_macro("TYPE_FLIP")
#pragma pop_macro("TYPE_GENERAL_ROTATION")
#pragma pop_macro("TYPE_GENERAL_SCALE")
#pragma pop_macro("TYPE_GENERAL_TRANSFORM")
#pragma pop_macro("TYPE_QUADRANT_ROTATION")

#endif // _sun_font_PhysicalStrike_h_