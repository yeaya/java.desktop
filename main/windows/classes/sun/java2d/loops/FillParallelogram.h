#ifndef _sun_java2d_loops_FillParallelogram_h_
#define _sun_java2d_loops_FillParallelogram_h_
//$ class sun.java2d.loops.FillParallelogram
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

class FillParallelogram : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(FillParallelogram, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	FillParallelogram();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void FillParallelogram$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, double x0, double y0, double dx1, double dy1, double dx2, double dy2);
	static ::sun::java2d::loops::FillParallelogram* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_FillParallelogram_h_