#ifndef _sun_java2d_pipe_BufferedContext_h_
#define _sun_java2d_pipe_BufferedContext_h_
//$ class sun.java2d.pipe.BufferedContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NO_CONTEXT_FLAGS")
#undef NO_CONTEXT_FLAGS
#pragma push_macro("SRC_IS_OPAQUE")
#undef SRC_IS_OPAQUE
#pragma push_macro("USE_MASK")
#undef USE_MASK

namespace java {
	namespace awt {
		class Composite;
		class Paint;
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
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
			class RenderBuffer;
			class RenderQueue;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {
				class AccelSurface;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedContext : public ::java::lang::Object {
	$class(BufferedContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BufferedContext();
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	::sun::java2d::pipe::RenderQueue* getRenderQueue();
	void invalidateContext();
	void resetClip();
	void resetComposite();
	void resetTransform();
	void setClip(::sun::java2d::pipe::Region* clip);
	void setComposite(::java::awt::Composite* comp, int32_t flags);
	void setSurfaces(::sun::java2d::pipe::hw::AccelSurface* srcData, ::sun::java2d::pipe::hw::AccelSurface* dstData);
	void setTransform(::java::awt::geom::AffineTransform* xform);
	void validate(::sun::java2d::pipe::hw::AccelSurface* srcData, ::sun::java2d::pipe::hw::AccelSurface* dstData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, ::java::awt::geom::AffineTransform* xform, ::java::awt::Paint* paint, ::sun::java2d::SunGraphics2D* sg2d, int32_t flags);
	static void validateContext(::sun::java2d::pipe::hw::AccelSurface* srcData, ::sun::java2d::pipe::hw::AccelSurface* dstData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, ::java::awt::geom::AffineTransform* xform, ::java::awt::Paint* paint, ::sun::java2d::SunGraphics2D* sg2d, int32_t flags);
	static void validateContext(::sun::java2d::pipe::hw::AccelSurface* surface);
	static const int32_t NO_CONTEXT_FLAGS = (0 << 0);
	static const int32_t SRC_IS_OPAQUE = (1 << 0);
	static const int32_t USE_MASK = (1 << 1);
	::sun::java2d::pipe::RenderQueue* rq = nullptr;
	::sun::java2d::pipe::RenderBuffer* buf = nullptr;
	static ::sun::java2d::pipe::BufferedContext* currentContext;
	::java::lang::ref::Reference* validSrcDataRef = nullptr;
	::java::lang::ref::Reference* validDstDataRef = nullptr;
	::java::lang::ref::Reference* validClipRef = nullptr;
	::java::lang::ref::Reference* validCompRef = nullptr;
	::java::lang::ref::Reference* validPaintRef = nullptr;
	bool isValidatedPaintJustAColor = false;
	int32_t validatedRGB = 0;
	int32_t validatedFlags = 0;
	bool xformInUse = false;
	::java::awt::geom::AffineTransform* transform = nullptr;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("NO_CONTEXT_FLAGS")
#pragma pop_macro("SRC_IS_OPAQUE")
#pragma pop_macro("USE_MASK")

#endif // _sun_java2d_pipe_BufferedContext_h_