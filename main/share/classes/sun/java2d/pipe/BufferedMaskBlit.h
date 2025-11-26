#ifndef _sun_java2d_pipe_BufferedMaskBlit_h_
#define _sun_java2d_pipe_BufferedMaskBlit_h_
//$ class sun.java2d.pipe.BufferedMaskBlit
//$ extends sun.java2d.loops.MaskBlit

#include <java/lang/Array.h>
#include <sun/java2d/loops/MaskBlit.h>

#pragma push_macro("ST_INT_ARGB")
#undef ST_INT_ARGB
#pragma push_macro("ST_INT_ARGB_PRE")
#undef ST_INT_ARGB_PRE
#pragma push_macro("ST_INT_BGR")
#undef ST_INT_BGR
#pragma push_macro("ST_INT_RGB")
#undef ST_INT_RGB

namespace java {
	namespace awt {
		class Composite;
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
			class Blit;
			class CompositeType;
			class SurfaceType;
		}
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
		namespace pipe {

class BufferedMaskBlit : public ::sun::java2d::loops::MaskBlit {
	$class(BufferedMaskBlit, $NO_CLASS_INIT, ::sun::java2d::loops::MaskBlit)
public:
	BufferedMaskBlit();
	void init$(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::CompositeType* compType, ::sun::java2d::loops::SurfaceType* dstType);
	virtual void MaskBlit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t maskoff, int32_t maskscan) override;
	int32_t enqueueTile(int64_t buf, int32_t bpos, ::sun::java2d::SurfaceData* srcData, int64_t pSrcOps, int32_t srcType, $bytes* mask, int32_t masklen, int32_t maskoff, int32_t maskscan, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height);
	virtual void validateContext(::sun::java2d::SurfaceData* dstData, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip) {}
	static const int32_t ST_INT_ARGB = 0;
	static const int32_t ST_INT_ARGB_PRE = 1;
	static const int32_t ST_INT_RGB = 2;
	static const int32_t ST_INT_BGR = 3;
	::sun::java2d::pipe::RenderQueue* rq = nullptr;
	int32_t srcTypeVal = 0;
	::sun::java2d::loops::Blit* blitop = nullptr;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("ST_INT_ARGB")
#pragma pop_macro("ST_INT_ARGB_PRE")
#pragma pop_macro("ST_INT_BGR")
#pragma pop_macro("ST_INT_RGB")

#endif // _sun_java2d_pipe_BufferedMaskBlit_h_