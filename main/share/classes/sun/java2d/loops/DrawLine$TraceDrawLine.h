#ifndef _sun_java2d_loops_DrawLine$TraceDrawLine_h_
#define _sun_java2d_loops_DrawLine$TraceDrawLine_h_
//$ class sun.java2d.loops.DrawLine$TraceDrawLine
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
			class GraphicsPrimitive;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class DrawLine$TraceDrawLine : public ::sun::java2d::loops::DrawLine {
	$class(DrawLine$TraceDrawLine, $NO_CLASS_INIT, ::sun::java2d::loops::DrawLine)
public:
	DrawLine$TraceDrawLine();
	void init$(::sun::java2d::loops::DrawLine* target);
	virtual void DrawLine$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawLine* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawLine$TraceDrawLine_h_