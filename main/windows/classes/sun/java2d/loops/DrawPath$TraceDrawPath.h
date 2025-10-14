#ifndef _sun_java2d_loops_DrawPath$TraceDrawPath_h_
#define _sun_java2d_loops_DrawPath$TraceDrawPath_h_
//$ class sun.java2d.loops.DrawPath$TraceDrawPath
//$ extends sun.java2d.loops.DrawPath

#include <sun/java2d/loops/DrawPath.h>

namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Float;
		}
	}
}
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

class DrawPath$TraceDrawPath : public ::sun::java2d::loops::DrawPath {
	$class(DrawPath$TraceDrawPath, $NO_CLASS_INIT, ::sun::java2d::loops::DrawPath)
public:
	DrawPath$TraceDrawPath();
	void init$(::sun::java2d::loops::DrawPath* target);
	virtual void DrawPath$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, int32_t transX, int32_t transY, ::java::awt::geom::Path2D$Float* p2df) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawPath* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawPath$TraceDrawPath_h_