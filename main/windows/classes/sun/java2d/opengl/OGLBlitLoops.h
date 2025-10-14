#ifndef _sun_java2d_opengl_OGLBlitLoops_h_
#define _sun_java2d_opengl_OGLBlitLoops_h_
//$ class sun.java2d.opengl.OGLBlitLoops
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("OFFSET_HINT")
#undef OFFSET_HINT
#pragma push_macro("OFFSET_ISOBLIT")
#undef OFFSET_ISOBLIT
#pragma push_macro("OFFSET_RTT")
#undef OFFSET_RTT
#pragma push_macro("OFFSET_SRCTYPE")
#undef OFFSET_SRCTYPE
#pragma push_macro("OFFSET_TEXTURE")
#undef OFFSET_TEXTURE
#pragma push_macro("OFFSET_XFORM")
#undef OFFSET_XFORM

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
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class BufferedImageOp;
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
		namespace pipe {
			class Region;
			class RenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLBlitLoops : public ::java::lang::Object {
	$class(OGLBlitLoops, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OGLBlitLoops();
	void init$();
	static void Blit(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* xform, int32_t hint, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2, int32_t srctype, bool texture);
	static void IsoBlit(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, ::java::awt::image::BufferedImage* srcImg, ::java::awt::image::BufferedImageOp* biop, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, ::java::awt::geom::AffineTransform* xform, int32_t hint, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2, bool texture);
	static int32_t createPackedParams(bool isoblit, bool texture, bool rtt, bool xform, int32_t hint, int32_t srctype);
	static void enqueueBlit(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, int32_t packedParams, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2);
	static void register$();
	static const int32_t OFFSET_SRCTYPE = 16;
	static const int32_t OFFSET_HINT = 8;
	static const int32_t OFFSET_TEXTURE = 3;
	static const int32_t OFFSET_RTT = 2;
	static const int32_t OFFSET_XFORM = 1;
	static const int32_t OFFSET_ISOBLIT = 0;
};

		} // opengl
	} // java2d
} // sun

#pragma pop_macro("OFFSET_HINT")
#pragma pop_macro("OFFSET_ISOBLIT")
#pragma pop_macro("OFFSET_RTT")
#pragma pop_macro("OFFSET_SRCTYPE")
#pragma pop_macro("OFFSET_TEXTURE")
#pragma pop_macro("OFFSET_XFORM")

#endif // _sun_java2d_opengl_OGLBlitLoops_h_