#ifndef _sun_java2d_metal_MTLAnyCompositeBlit_h_
#define _sun_java2d_metal_MTLAnyCompositeBlit_h_
//$ class sun.java2d.metal.MTLAnyCompositeBlit
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
		namespace metal {

class MTLAnyCompositeBlit : public ::sun::java2d::loops::Blit {
	$class(MTLAnyCompositeBlit, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	MTLAnyCompositeBlit();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::Blit* convertsrc, ::sun::java2d::loops::Blit* convertdst, ::sun::java2d::loops::Blit* convertresult);
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
	::java::lang::ref::WeakReference* dstTmp = nullptr;
	::java::lang::ref::WeakReference* srcTmp = nullptr;
	::sun::java2d::loops::Blit* convertsrc = nullptr;
	::sun::java2d::loops::Blit* convertdst = nullptr;
	::sun::java2d::loops::Blit* convertresult = nullptr;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLAnyCompositeBlit_h_