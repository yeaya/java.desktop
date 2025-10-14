#ifndef _sun_java2d_loops_DrawPolygons_h_
#define _sun_java2d_loops_DrawPolygons_h_
//$ class sun.java2d.loops.DrawPolygons
//$ extends sun.java2d.loops.GraphicsPrimitive

#include <java/lang/Array.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class DrawPolygons : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(DrawPolygons, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	DrawPolygons();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void DrawPolygons$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, $ints* xPoints, $ints* yPoints, $ints* nPoints, int32_t numPolys, int32_t transX, int32_t transY, bool close);
	static ::sun::java2d::loops::DrawPolygons* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawPolygons_h_