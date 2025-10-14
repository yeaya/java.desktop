#ifndef _sun_java2d_loops_Blit$GeneralMaskBlit_h_
#define _sun_java2d_loops_Blit$GeneralMaskBlit_h_
//$ class sun.java2d.loops.Blit$GeneralMaskBlit
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
			class CompositeType;
			class MaskBlit;
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
		namespace loops {

class Blit$GeneralMaskBlit : public ::sun::java2d::loops::Blit {
	$class(Blit$GeneralMaskBlit, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	Blit$GeneralMaskBlit();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void Blit$(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	::sun::java2d::loops::MaskBlit* performop = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_Blit$GeneralMaskBlit_h_