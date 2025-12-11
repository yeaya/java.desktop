#ifndef _sun_font_CStrike$GlyphInfoCache_h_
#define _sun_font_CStrike$GlyphInfoCache_h_
//$ class sun.font.CStrike$GlyphInfoCache
//$ extends sun.font.CStrikeDisposer

#include <java/lang/Array.h>
#include <sun/font/CStrikeDisposer.h>

#pragma push_macro("FIRST_LAYER_SIZE")
#undef FIRST_LAYER_SIZE
#pragma push_macro("SECOND_LAYER_SIZE")
#undef SECOND_LAYER_SIZE

namespace java {
	namespace util {
		class HashMap;
	}
}
namespace sun {
	namespace font {
		class CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray;
		class Font2D;
		class FontStrikeDesc;
	}
}

namespace sun {
	namespace font {

class CStrike$GlyphInfoCache : public ::sun::font::CStrikeDisposer {
	$class(CStrike$GlyphInfoCache, $NO_CLASS_INIT, ::sun::font::CStrikeDisposer)
public:
	CStrike$GlyphInfoCache();
	void init$(::sun::font::Font2D* nativeFont, ::sun::font::FontStrikeDesc* desc);
	virtual void dispose() override;
	static void disposeLongArray($longs* longArray);
	virtual int64_t get(int32_t index);
	virtual void put(int32_t index, int64_t value);
	static const int32_t FIRST_LAYER_SIZE = 256;
	static const int32_t SECOND_LAYER_SIZE = 16384;
	bool disposed = false;
	$longs* firstLayerCache = nullptr;
	::sun::font::CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray* secondLayerCache = nullptr;
	::java::util::HashMap* generalCache = nullptr;
};

	} // font
} // sun

#pragma pop_macro("FIRST_LAYER_SIZE")
#pragma pop_macro("SECOND_LAYER_SIZE")

#endif // _sun_font_CStrike$GlyphInfoCache_h_