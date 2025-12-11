#ifndef _sun_java2d_metal_MTLContext_h_
#define _sun_java2d_metal_MTLContext_h_
//$ class sun.java2d.metal.MTLContext
//$ extends sun.java2d.pipe.BufferedContext

#include <sun/java2d/pipe/BufferedContext.h>

namespace sun {
	namespace java2d {
		namespace metal {
			class MTLGraphicsConfig;
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
		namespace metal {

class MTLContext : public ::sun::java2d::pipe::BufferedContext {
	$class(MTLContext, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedContext)
public:
	MTLContext();
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	static void setScratchSurface(::sun::java2d::metal::MTLGraphicsConfig* gc);
	static void setScratchSurface(int64_t pConfigInfo);
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLContext_h_