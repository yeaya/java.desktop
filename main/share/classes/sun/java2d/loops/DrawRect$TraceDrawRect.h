#ifndef _sun_java2d_loops_DrawRect$TraceDrawRect_h_
#define _sun_java2d_loops_DrawRect$TraceDrawRect_h_
//$ class sun.java2d.loops.DrawRect$TraceDrawRect
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
			class GraphicsPrimitive;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class DrawRect$TraceDrawRect : public ::sun::java2d::loops::DrawRect {
	$class(DrawRect$TraceDrawRect, $NO_CLASS_INIT, ::sun::java2d::loops::DrawRect)
public:
	DrawRect$TraceDrawRect();
	void init$(::sun::java2d::loops::DrawRect* target);
	virtual void DrawRect$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, int32_t x1, int32_t y1, int32_t w, int32_t h) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawRect* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawRect$TraceDrawRect_h_