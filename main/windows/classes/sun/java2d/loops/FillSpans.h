#ifndef _sun_java2d_loops_FillSpans_h_
#define _sun_java2d_loops_FillSpans_h_
//$ class sun.java2d.loops.FillSpans
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
		namespace pipe {
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class FillSpans : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(FillSpans, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	FillSpans();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void FillSpans$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, int32_t pixel, int64_t pIterator, ::sun::java2d::pipe::SpanIterator* si);
	virtual void FillSpans$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::java2d::pipe::SpanIterator* si);
	static ::sun::java2d::loops::FillSpans* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_FillSpans_h_