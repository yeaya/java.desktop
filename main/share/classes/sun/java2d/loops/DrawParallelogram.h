#ifndef _sun_java2d_loops_DrawParallelogram_h_
#define _sun_java2d_loops_DrawParallelogram_h_
//$ class sun.java2d.loops.DrawParallelogram
//$ extends sun.java2d.loops.GraphicsPrimitive

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

class DrawParallelogram : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(DrawParallelogram, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	DrawParallelogram();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void DrawParallelogram$(::sun::java2d::SunGraphics2D* sg, ::sun::java2d::SurfaceData* dest, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2);
	static ::sun::java2d::loops::DrawParallelogram* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawParallelogram_h_