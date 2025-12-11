#ifndef _sun_font_CStrike$GlyphAdvanceCache_h_
#define _sun_font_CStrike$GlyphAdvanceCache_h_
//$ class sun.font.CStrike$GlyphAdvanceCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		class CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray;
	}
}

namespace sun {
	namespace font {

class CStrike$GlyphAdvanceCache : public ::java::lang::Object {
	$class(CStrike$GlyphAdvanceCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CStrike$GlyphAdvanceCache();
	void init$();
	virtual float get(int32_t index);
	virtual void put(int32_t index, float value);
	static const int32_t FIRST_LAYER_SIZE = 256;
	static const int32_t SECOND_LAYER_SIZE = 16384;
	$floats* firstLayerCache = nullptr;
	::sun::font::CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray* secondLayerCache = nullptr;
	::java::util::HashMap* generalCache = nullptr;
};

	} // font
} // sun

#pragma pop_macro("FIRST_LAYER_SIZE")
#pragma pop_macro("SECOND_LAYER_SIZE")

#endif // _sun_font_CStrike$GlyphAdvanceCache_h_