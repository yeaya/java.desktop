#ifndef _sun_java2d_loops_Blit$TraceBlit_h_
#define _sun_java2d_loops_Blit$TraceBlit_h_
//$ class sun.java2d.loops.Blit$TraceBlit
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

class Blit$TraceBlit : public ::sun::java2d::loops::Blit {
	$class(Blit$TraceBlit, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	Blit$TraceBlit();
	void init$(::sun::java2d::loops::Blit* target);
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::Blit* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_Blit$TraceBlit_h_