#ifndef _sun_java2d_pipe_BufferedMaskFill_h_
#define _sun_java2d_pipe_BufferedMaskFill_h_
//$ class sun.java2d.pipe.BufferedMaskFill
//$ extends sun.java2d.loops.MaskFill

#include <java/lang/Array.h>
#include <sun/java2d/loops/MaskFill.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
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
			class RenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedMaskFill : public ::sun::java2d::loops::MaskFill {
	$class(BufferedMaskFill, $NO_CLASS_INIT, ::sun::java2d::loops::MaskFill)
public:
	BufferedMaskFill();
	void init$(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::CompositeType* compType, ::sun::java2d::loops::SurfaceType* dstType);
	virtual void MaskFill$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::java::awt::Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan) override;
	virtual void maskFill(int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) {}
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Composite* comp, int32_t ctxflags) {}
	::sun::java2d::pipe::RenderQueue* rq = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_BufferedMaskFill_h_