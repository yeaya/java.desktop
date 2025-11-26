#ifndef _sun_java2d_loops_DrawParallelogram$TraceDrawParallelogram_h_
#define _sun_java2d_loops_DrawParallelogram$TraceDrawParallelogram_h_
//$ class sun.java2d.loops.DrawParallelogram$TraceDrawParallelogram
//$ extends sun.java2d.loops.DrawParallelogram

#include <sun/java2d/loops/DrawParallelogram.h>

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

class DrawParallelogram$TraceDrawParallelogram : public ::sun::java2d::loops::DrawParallelogram {
	$class(DrawParallelogram$TraceDrawParallelogram, $NO_CLASS_INIT, ::sun::java2d::loops::DrawParallelogram)
public:
	DrawParallelogram$TraceDrawParallelogram();
	void init$(::sun::java2d::loops::DrawParallelogram* target);
	virtual void DrawParallelogram$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawParallelogram* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawParallelogram$TraceDrawParallelogram_h_