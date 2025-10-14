#ifndef _sun_java2d_d3d_D3DMaskBlit_h_
#define _sun_java2d_d3d_D3DMaskBlit_h_
//$ class sun.java2d.d3d.D3DMaskBlit
//$ extends sun.java2d.pipe.BufferedMaskBlit

#include <sun/java2d/pipe/BufferedMaskBlit.h>

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

class D3DMaskBlit : public ::sun::java2d::pipe::BufferedMaskBlit {
	$class(D3DMaskBlit, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedMaskBlit)
public:
	D3DMaskBlit();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::CompositeType* compType);
	static void register$();
	virtual void validateContext(::sun::java2d::SurfaceData* dstData, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DMaskBlit_h_