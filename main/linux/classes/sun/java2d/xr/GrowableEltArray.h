#ifndef _sun_java2d_xr_GrowableEltArray_h_
#define _sun_java2d_xr_GrowableEltArray_h_
//$ class sun.java2d.xr.GrowableEltArray
//$ extends sun.java2d.xr.GrowableIntArray

#include <sun/java2d/xr/GrowableIntArray.h>

#pragma push_macro("ELT_SIZE")
#undef ELT_SIZE

namespace sun {
	namespace java2d {
		namespace xr {

class GrowableEltArray : public ::sun::java2d::xr::GrowableIntArray {
	$class(GrowableEltArray, $NO_CLASS_INIT, ::sun::java2d::xr::GrowableIntArray)
public:
	GrowableEltArray();
	void init$(int32_t initialSize);
	virtual void clear() override;
	int32_t getCharCnt(int32_t index);
	int32_t getGlyphSet(int32_t index);
	virtual ::sun::java2d::xr::GrowableIntArray* getGlyphs();
	int32_t getXOff(int32_t index);
	int32_t getYOff(int32_t index);
	void setCharCnt(int32_t index, int32_t cnt);
	void setGlyphSet(int32_t index, int32_t glyphSet);
	void setXOff(int32_t index, int32_t xOff);
	void setYOff(int32_t index, int32_t yOff);
	static const int32_t ELT_SIZE = 4;
	::sun::java2d::xr::GrowableIntArray* glyphs = nullptr;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("ELT_SIZE")

#endif // _sun_java2d_xr_GrowableEltArray_h_