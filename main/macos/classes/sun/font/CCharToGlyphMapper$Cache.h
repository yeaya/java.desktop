#ifndef _sun_font_CCharToGlyphMapper$Cache_h_
#define _sun_font_CCharToGlyphMapper$Cache_h_
//$ class sun.font.CCharToGlyphMapper$Cache
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
		class CCharToGlyphMapper;
		class CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray;
	}
}

namespace sun {
	namespace font {

class CCharToGlyphMapper$Cache : public ::java::lang::Object {
	$class(CCharToGlyphMapper$Cache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CCharToGlyphMapper$Cache();
	void init$(::sun::font::CCharToGlyphMapper* this$0);
	virtual int32_t get(int32_t index);
	virtual void get(int32_t count, $chars* indicies, $ints* values);
	virtual void put(int32_t index, int32_t value);
	::sun::font::CCharToGlyphMapper* this$0 = nullptr;
	static const int32_t FIRST_LAYER_SIZE = 256;
	static const int32_t SECOND_LAYER_SIZE = 16384;
	$ints* firstLayerCache = nullptr;
	::sun::font::CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray* secondLayerCache = nullptr;
	::java::util::HashMap* generalCache = nullptr;
};

	} // font
} // sun

#pragma pop_macro("FIRST_LAYER_SIZE")
#pragma pop_macro("SECOND_LAYER_SIZE")

#endif // _sun_font_CCharToGlyphMapper$Cache_h_