#ifndef _sun_java2d_loops_SetDrawPolygonsANY_h_
#define _sun_java2d_loops_SetDrawPolygonsANY_h_
//$ class sun.java2d.loops.SetDrawPolygonsANY
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

class SetDrawPolygonsANY : public ::sun::java2d::loops::DrawPolygons {
	$class(SetDrawPolygonsANY, $NO_CLASS_INIT, ::sun::java2d::loops::DrawPolygons)
public:
	SetDrawPolygonsANY();
	void init$();
	virtual void DrawPolygons$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, $ints* xPoints, $ints* yPoints, $ints* nPoints, int32_t numPolys, int32_t transx, int32_t transy, bool close) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_SetDrawPolygonsANY_h_