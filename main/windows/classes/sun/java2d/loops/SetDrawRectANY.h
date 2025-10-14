#ifndef _sun_java2d_loops_SetDrawRectANY_h_
#define _sun_java2d_loops_SetDrawRectANY_h_
//$ class sun.java2d.loops.SetDrawRectANY
//$ extends sun.java2d.loops.DrawRect

#include <sun/java2d/loops/DrawRect.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class SetDrawRectANY : public ::sun::java2d::loops::DrawRect {
	$class(SetDrawRectANY, $NO_CLASS_INIT, ::sun::java2d::loops::DrawRect)
public:
	SetDrawRectANY();
	void init$();
	virtual void DrawRect$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_SetDrawRectANY_h_