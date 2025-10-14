#ifndef _sun_java2d_loops_DrawRect_h_
#define _sun_java2d_loops_DrawRect_h_
//$ class sun.java2d.loops.DrawRect
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

class DrawRect : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(DrawRect, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	DrawRect();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void DrawRect$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, int32_t x1, int32_t y1, int32_t w, int32_t h);
	static ::sun::java2d::loops::DrawRect* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawRect_h_