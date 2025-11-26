#ifndef _sun_java2d_xr_GrowablePointArray_h_
#define _sun_java2d_xr_GrowablePointArray_h_
//$ class sun.java2d.xr.GrowablePointArray
//$ extends sun.java2d.xr.GrowableIntArray

#include <sun/java2d/xr/GrowableIntArray.h>

#pragma push_macro("POINT_SIZE")
#undef POINT_SIZE

namespace sun {
	namespace java2d {
		namespace xr {

class GrowablePointArray : public ::sun::java2d::xr::GrowableIntArray {
	$class(GrowablePointArray, $NO_CLASS_INIT, ::sun::java2d::xr::GrowableIntArray)
public:
	GrowablePointArray();
	void init$(int32_t initialSize);
	int32_t getX(int32_t index);
	int32_t getY(int32_t index);
	void setX(int32_t index, int32_t x);
	void setY(int32_t index, int32_t y);
	static const int32_t POINT_SIZE = 2;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("POINT_SIZE")

#endif // _sun_java2d_xr_GrowablePointArray_h_