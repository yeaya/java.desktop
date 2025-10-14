#ifndef _sun_java2d_loops_OpaqueCopyAnyToArgb_h_
#define _sun_java2d_loops_OpaqueCopyAnyToArgb_h_
//$ class sun.java2d.loops.OpaqueCopyAnyToArgb
//$ extends sun.java2d.loops.Blit

#include <sun/java2d/loops/Blit.h>

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
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class OpaqueCopyAnyToArgb : public ::sun::java2d::loops::Blit {
	$class(OpaqueCopyAnyToArgb, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	OpaqueCopyAnyToArgb();
	void init$();
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_OpaqueCopyAnyToArgb_h_