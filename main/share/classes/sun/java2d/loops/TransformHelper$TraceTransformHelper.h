#ifndef _sun_java2d_loops_TransformHelper$TraceTransformHelper_h_
#define _sun_java2d_loops_TransformHelper$TraceTransformHelper_h_
//$ class sun.java2d.loops.TransformHelper$TraceTransformHelper
//$ extends sun.java2d.loops.TransformHelper

#include <java/lang/Array.h>
#include <sun/java2d/loops/TransformHelper.h>

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
			class MaskBlit;
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

class TransformHelper$TraceTransformHelper : public ::sun::java2d::loops::TransformHelper {
	$class(TransformHelper$TraceTransformHelper, $NO_CLASS_INIT, ::sun::java2d::loops::TransformHelper)
public:
	TransformHelper$TraceTransformHelper();
	void init$(::sun::java2d::loops::TransformHelper* target);
	virtual void Transform(::sun::java2d::loops::MaskBlit* output, ::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* itx, int32_t txtype, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, $ints* edges, int32_t dxoff, int32_t dyoff) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::TransformHelper* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_TransformHelper$TraceTransformHelper_h_