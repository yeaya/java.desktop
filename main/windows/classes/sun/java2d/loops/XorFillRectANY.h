#ifndef _sun_java2d_loops_XorFillRectANY_h_
#define _sun_java2d_loops_XorFillRectANY_h_
//$ class sun.java2d.loops.XorFillRectANY
//$ extends sun.java2d.loops.FillRect

#include <sun/java2d/loops/FillRect.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class XorFillRectANY : public ::sun::java2d::loops::FillRect {
	$class(XorFillRectANY, $NO_CLASS_INIT, ::sun::java2d::loops::FillRect)
public:
	XorFillRectANY();
	void init$();
	virtual void FillRect$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XorFillRectANY_h_