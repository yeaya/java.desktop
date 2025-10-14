#ifndef _sun_java2d_loops_DrawLine_h_
#define _sun_java2d_loops_DrawLine_h_
//$ class sun.java2d.loops.DrawLine
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

class DrawLine : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(DrawLine, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	DrawLine();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void DrawLine$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	static ::sun::java2d::loops::DrawLine* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawLine_h_