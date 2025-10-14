#ifndef _sun_java2d_d3d_D3DGeneralBlit_h_
#define _sun_java2d_d3d_D3DGeneralBlit_h_
//$ class sun.java2d.d3d.D3DGeneralBlit
//$ extends sun.java2d.loops.Blit

#include <sun/java2d/loops/Blit.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
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
		namespace d3d {

class D3DGeneralBlit : public ::sun::java2d::loops::Blit {
	$class(D3DGeneralBlit, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	D3DGeneralBlit();
	void init$(::sun::java2d::loops::SurfaceType* dstType, ::sun::java2d::loops::CompositeType* compType, ::sun::java2d::loops::Blit* performop);
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
	::sun::java2d::loops::Blit* performop = nullptr;
	::java::lang::ref::WeakReference* srcTmp = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGeneralBlit_h_