#ifndef _sun_java2d_loops_XorDrawLineANY_h_
#define _sun_java2d_loops_XorDrawLineANY_h_
//$ class sun.java2d.loops.XorDrawLineANY
//$ extends sun.java2d.loops.DrawLine

#include <sun/java2d/loops/DrawLine.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class XorDrawLineANY : public ::sun::java2d::loops::DrawLine {
	$class(XorDrawLineANY, $NO_CLASS_INIT, ::sun::java2d::loops::DrawLine)
public:
	XorDrawLineANY();
	void init$();
	virtual void DrawLine$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XorDrawLineANY_h_