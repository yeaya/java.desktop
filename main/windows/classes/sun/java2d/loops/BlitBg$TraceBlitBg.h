#ifndef _sun_java2d_loops_BlitBg$TraceBlitBg_h_
#define _sun_java2d_loops_BlitBg$TraceBlitBg_h_
//$ class sun.java2d.loops.BlitBg$TraceBlitBg
//$ extends sun.java2d.loops.BlitBg

#include <sun/java2d/loops/BlitBg.h>

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

class BlitBg$TraceBlitBg : public ::sun::java2d::loops::BlitBg {
	$class(BlitBg$TraceBlitBg, $NO_CLASS_INIT, ::sun::java2d::loops::BlitBg)
public:
	BlitBg$TraceBlitBg();
	void init$(::sun::java2d::loops::BlitBg* target);
	virtual void BlitBg$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t bgColor, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::BlitBg* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_BlitBg$TraceBlitBg_h_