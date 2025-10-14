#ifndef _sun_java2d_loops_TransformHelper_h_
#define _sun_java2d_loops_TransformHelper_h_
//$ class sun.java2d.loops.TransformHelper
//$ extends sun.java2d.loops.GraphicsPrimitive

#include <java/lang/Array.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>

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
			class CompositeType;
			class MaskBlit;
			class RenderCache;
			class SurfaceType;
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

class TransformHelper : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(TransformHelper, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	TransformHelper();
	void init$(::sun::java2d::loops::SurfaceType* srctype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void Transform(::sun::java2d::loops::MaskBlit* output, ::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* itx, int32_t txtype, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, $ints* edges, int32_t dxoff, int32_t dyoff);
	static ::sun::java2d::loops::TransformHelper* getFromCache(::sun::java2d::loops::SurfaceType* src);
	static ::sun::java2d::loops::TransformHelper* locate(::sun::java2d::loops::SurfaceType* srctype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
	static ::sun::java2d::loops::RenderCache* helpercache;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_TransformHelper_h_