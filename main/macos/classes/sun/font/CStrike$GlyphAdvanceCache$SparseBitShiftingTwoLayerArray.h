#ifndef _sun_font_CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray_h_
#define _sun_font_CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray_h_
//$ class sun.font.CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {

class CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray : public ::java::lang::Object {
	$class(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray();
	void init$(int32_t size, int32_t shift);
	virtual float get(int32_t index);
	virtual void put(int32_t index, float value);
	$Array<float, 2>* cache = nullptr;
	int32_t shift = 0;
	int32_t secondLayerLength = 0;
};

	} // font
} // sun

#endif // _sun_font_CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray_h_