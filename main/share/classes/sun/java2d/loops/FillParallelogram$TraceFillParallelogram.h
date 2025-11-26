#ifndef _sun_java2d_loops_FillParallelogram$TraceFillParallelogram_h_
#define _sun_java2d_loops_FillParallelogram$TraceFillParallelogram_h_
//$ class sun.java2d.loops.FillParallelogram$TraceFillParallelogram
//$ extends sun.java2d.loops.FillParallelogram

#include <sun/java2d/loops/FillParallelogram.h>

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

class FillParallelogram$TraceFillParallelogram : public ::sun::java2d::loops::FillParallelogram {
	$class(FillParallelogram$TraceFillParallelogram, $NO_CLASS_INIT, ::sun::java2d::loops::FillParallelogram)
public:
	FillParallelogram$TraceFillParallelogram();
	void init$(::sun::java2d::loops::FillParallelogram* target);
	virtual void FillParallelogram$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, double x0, double y0, double dx1, double dy1, double dx2, double dy2) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::FillParallelogram* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_FillParallelogram$TraceFillParallelogram_h_