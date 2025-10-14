#ifndef _sun_java2d_d3d_D3DContext_h_
#define _sun_java2d_d3d_D3DContext_h_
//$ class sun.java2d.d3d.D3DContext
//$ extends sun.java2d.pipe.BufferedContext

#include <sun/java2d/pipe/BufferedContext.h>

namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DGraphicsDevice;
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
		namespace d3d {

class D3DContext : public ::sun::java2d::pipe::BufferedContext {
	$class(D3DContext, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedContext)
public:
	D3DContext();
	void init$(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::d3d::D3DGraphicsDevice* device);
	::sun::java2d::d3d::D3DGraphicsDevice* getDevice();
	static void invalidateCurrentContext();
	static void setScratchSurface(::sun::java2d::d3d::D3DContext* d3dc);
	::sun::java2d::d3d::D3DGraphicsDevice* device = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DContext_h_