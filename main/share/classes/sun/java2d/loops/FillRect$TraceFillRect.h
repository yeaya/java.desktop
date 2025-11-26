#ifndef _sun_java2d_loops_FillRect$TraceFillRect_h_
#define _sun_java2d_loops_FillRect$TraceFillRect_h_
//$ class sun.java2d.loops.FillRect$TraceFillRect
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
			class GraphicsPrimitive;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class FillRect$TraceFillRect : public ::sun::java2d::loops::FillRect {
	$class(FillRect$TraceFillRect, $NO_CLASS_INIT, ::sun::java2d::loops::FillRect)
public:
	FillRect$TraceFillRect();
	void init$(::sun::java2d::loops::FillRect* target);
	virtual void FillRect$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::FillRect* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_FillRect$TraceFillRect_h_