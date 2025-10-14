#ifndef _sun_java2d_loops_XorDrawPathANY_h_
#define _sun_java2d_loops_XorDrawPathANY_h_
//$ class sun.java2d.loops.XorDrawPathANY
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

class XorDrawPathANY : public ::sun::java2d::loops::DrawPath {
	$class(XorDrawPathANY, $NO_CLASS_INIT, ::sun::java2d::loops::DrawPath)
public:
	XorDrawPathANY();
	void init$();
	virtual void DrawPath$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, int32_t transx, int32_t transy, ::java::awt::geom::Path2D$Float* p2df) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XorDrawPathANY_h_