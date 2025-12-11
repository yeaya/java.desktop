#ifndef _sun_font_CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_h_
#define _sun_font_CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_h_
//$ class sun.font.CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {

class CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray : public ::java::lang::Object {
	$class(CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray();
	void init$(int32_t size, int32_t shift);
	virtual int64_t get(int32_t index);
	virtual void put(int32_t index, int64_t value);
	$Array<int64_t, 2>* cache = nullptr;
	int32_t shift = 0;
	int32_t secondLayerLength = 0;
};

	} // font
} // sun

#endif // _sun_font_CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_h_