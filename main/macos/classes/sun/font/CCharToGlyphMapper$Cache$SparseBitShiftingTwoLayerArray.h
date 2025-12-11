#ifndef _sun_font_CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray_h_
#define _sun_font_CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray_h_
//$ class sun.font.CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {
		class CCharToGlyphMapper$Cache;
	}
}

namespace sun {
	namespace font {

class CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray : public ::java::lang::Object {
	$class(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray();
	void init$(::sun::font::CCharToGlyphMapper$Cache* this$1, int32_t size, int32_t shift);
	virtual int32_t get(int32_t index);
	virtual void put(int32_t index, int32_t value);
	::sun::font::CCharToGlyphMapper$Cache* this$1 = nullptr;
	$Array<int32_t, 2>* cache = nullptr;
	int32_t shift = 0;
	int32_t secondLayerLength = 0;
};

	} // font
} // sun

#endif // _sun_font_CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray_h_