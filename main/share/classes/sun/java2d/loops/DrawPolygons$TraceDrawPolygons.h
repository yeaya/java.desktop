#ifndef _sun_java2d_loops_DrawPolygons$TraceDrawPolygons_h_
#define _sun_java2d_loops_DrawPolygons$TraceDrawPolygons_h_
//$ class sun.java2d.loops.DrawPolygons$TraceDrawPolygons
//$ extends sun.java2d.loops.DrawPolygons

#include <java/lang/Array.h>
#include <sun/java2d/loops/DrawPolygons.h>

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

class DrawPolygons$TraceDrawPolygons : public ::sun::java2d::loops::DrawPolygons {
	$class(DrawPolygons$TraceDrawPolygons, $NO_CLASS_INIT, ::sun::java2d::loops::DrawPolygons)
public:
	DrawPolygons$TraceDrawPolygons();
	void init$(::sun::java2d::loops::DrawPolygons* target);
	virtual void DrawPolygons$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, $ints* xPoints, $ints* yPoints, $ints* nPoints, int32_t numPolys, int32_t transX, int32_t transY, bool close) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawPolygons* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawPolygons$TraceDrawPolygons_h_