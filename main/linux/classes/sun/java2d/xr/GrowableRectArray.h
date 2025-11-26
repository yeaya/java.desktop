#ifndef _sun_java2d_xr_GrowableRectArray_h_
#define _sun_java2d_xr_GrowableRectArray_h_
//$ class sun.java2d.xr.GrowableRectArray
//$ extends sun.java2d.xr.GrowableIntArray

#include <sun/java2d/xr/GrowableIntArray.h>

#pragma push_macro("RECT_SIZE")
#undef RECT_SIZE

namespace sun {
	namespace java2d {
		namespace xr {

class GrowableRectArray : public ::sun::java2d::xr::GrowableIntArray {
	$class(GrowableRectArray, $NO_CLASS_INIT, ::sun::java2d::xr::GrowableIntArray)
public:
	GrowableRectArray();
	void init$(int32_t initialSize);
	int32_t getHeight(int32_t index);
	int32_t getWidth(int32_t index);
	int32_t getX(int32_t index);
	int32_t getY(int32_t index);
	void pushRectValues(int32_t x, int32_t y, int32_t width, int32_t height);
	void setHeight(int32_t index, int32_t height);
	void setWidth(int32_t index, int32_t width);
	void setX(int32_t index, int32_t x);
	void setY(int32_t index, int32_t y);
	void translateRects(int32_t x, int32_t y);
	static const int32_t RECT_SIZE = 4;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("RECT_SIZE")

#endif // _sun_java2d_xr_GrowableRectArray_h_