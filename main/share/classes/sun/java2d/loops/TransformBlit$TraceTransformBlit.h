#ifndef _sun_java2d_loops_TransformBlit$TraceTransformBlit_h_
#define _sun_java2d_loops_TransformBlit$TraceTransformBlit_h_
//$ class sun.java2d.loops.TransformBlit$TraceTransformBlit
//$ extends sun.java2d.loops.TransformBlit

#include <sun/java2d/loops/TransformBlit.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace sun {
	namespace java2d {
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
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class TransformBlit$TraceTransformBlit : public ::sun::java2d::loops::TransformBlit {
	$class(TransformBlit$TraceTransformBlit, $NO_CLASS_INIT, ::sun::java2d::loops::TransformBlit)
public:
	TransformBlit$TraceTransformBlit();
	void init$(::sun::java2d::loops::TransformBlit* target);
	virtual void Transform(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* at, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::TransformBlit* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_TransformBlit$TraceTransformBlit_h_