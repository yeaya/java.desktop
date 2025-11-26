#ifndef _sun_java2d_loops_Blit$AnyBlit_h_
#define _sun_java2d_loops_Blit$AnyBlit_h_
//$ class sun.java2d.loops.Blit$AnyBlit
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

class Blit$AnyBlit : public ::sun::java2d::loops::Blit {
	$class(Blit$AnyBlit, 0, ::sun::java2d::loops::Blit)
public:
	Blit$AnyBlit();
	void init$();
	virtual void Blit$(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	static ::sun::java2d::loops::Blit$AnyBlit* instance;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_Blit$AnyBlit_h_