#ifndef _sun_java2d_xr_XRDrawLine_h_
#define _sun_java2d_xr_XRDrawLine_h_
//$ class sun.java2d.xr.XRDrawLine
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BIG_MAX")
#undef BIG_MAX
#pragma push_macro("BIG_MIN")
#undef BIG_MIN
#pragma push_macro("OUTCODE_BOTTOM")
#undef OUTCODE_BOTTOM
#pragma push_macro("OUTCODE_LEFT")
#undef OUTCODE_LEFT
#pragma push_macro("OUTCODE_RIGHT")
#undef OUTCODE_RIGHT
#pragma push_macro("OUTCODE_TOP")
#undef OUTCODE_TOP

namespace sun {
	namespace java2d {
		namespace xr {
			class DirtyRegion;
			class GrowableRectArray;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRDrawLine : public ::java::lang::Object {
	$class(XRDrawLine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XRDrawLine();
	void init$();
	bool OverflowsBig(int32_t v);
	bool clipCoordinates(int32_t cxmin, int32_t cymin, int32_t cxmax, int32_t cymax, bool xmajor, int32_t dx, int32_t dy, int32_t ax, int32_t ay);
	void initCoordinates(int32_t x1, int32_t y1, int32_t x2, int32_t y2, bool checkOverflow);
	void lineToPoints(::sun::java2d::xr::GrowableRectArray* rectBuffer, int32_t steps, int32_t error, int32_t errmajor, int32_t errminor, int32_t xStep, int32_t yStep, int32_t orthogonalXStep, int32_t orthogonalYStep);
	void lineToRects(::sun::java2d::xr::GrowableRectArray* rectBuffer, int32_t steps, int32_t error, int32_t errmajor, int32_t errminor, int32_t xStep, int32_t yStep, int32_t orthogonalXStep, int32_t orthogonalYStep);
	int32_t out(int32_t v, int32_t vmin, int32_t vmax, int32_t cmin, int32_t cmax);
	int32_t outcode(int32_t x, int32_t y, int32_t xmin, int32_t ymin, int32_t xmax, int32_t ymax);
	virtual void rasterizeLine(::sun::java2d::xr::GrowableRectArray* rectBuffer, int32_t _x1, int32_t _y1, int32_t _x2, int32_t _y2, int32_t cxmin, int32_t cymin, int32_t cxmax, int32_t cymax, bool clip, bool overflowCheck);
	static const int32_t BIG_MAX = 0x1FFFFFFF; // ((1 << 29) - 1)
	static const int32_t BIG_MIN = 0xE0000000; // (-(1 << 29))
	static const int32_t OUTCODE_TOP = 1;
	static const int32_t OUTCODE_BOTTOM = 2;
	static const int32_t OUTCODE_LEFT = 4;
	static const int32_t OUTCODE_RIGHT = 8;
	int32_t x1 = 0;
	int32_t y1 = 0;
	int32_t x2 = 0;
	int32_t y2 = 0;
	int32_t ucX1 = 0;
	int32_t ucY1 = 0;
	int32_t ucX2 = 0;
	int32_t ucY2 = 0;
	::sun::java2d::xr::DirtyRegion* region = nullptr;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("BIG_MAX")
#pragma pop_macro("BIG_MIN")
#pragma pop_macro("OUTCODE_BOTTOM")
#pragma pop_macro("OUTCODE_LEFT")
#pragma pop_macro("OUTCODE_RIGHT")
#pragma pop_macro("OUTCODE_TOP")

#endif // _sun_java2d_xr_XRDrawLine_h_