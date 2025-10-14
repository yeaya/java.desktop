#ifndef _sun_java2d_loops_MaskBlit$TraceMaskBlit_h_
#define _sun_java2d_loops_MaskBlit$TraceMaskBlit_h_
//$ class sun.java2d.loops.MaskBlit$TraceMaskBlit
//$ extends sun.java2d.loops.MaskBlit

#include <java/lang/Array.h>
#include <sun/java2d/loops/MaskBlit.h>

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

class MaskBlit$TraceMaskBlit : public ::sun::java2d::loops::MaskBlit {
	$class(MaskBlit$TraceMaskBlit, $NO_CLASS_INIT, ::sun::java2d::loops::MaskBlit)
public:
	MaskBlit$TraceMaskBlit();
	void init$(::sun::java2d::loops::MaskBlit* target);
	virtual void MaskBlit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t maskoff, int32_t maskscan) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::MaskBlit* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_MaskBlit$TraceMaskBlit_h_