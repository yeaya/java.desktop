#ifndef _sun_java2d_opengl_OGLContext_h_
#define _sun_java2d_opengl_OGLContext_h_
//$ class sun.java2d.opengl.OGLContext
//$ extends sun.java2d.pipe.BufferedContext

#include <sun/java2d/pipe/BufferedContext.h>

namespace sun {
	namespace java2d {
		namespace opengl {
			class OGLGraphicsConfig;
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
		namespace opengl {

class OGLContext : public ::sun::java2d::pipe::BufferedContext {
	$class(OGLContext, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedContext)
public:
	OGLContext();
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	static $String* getOGLIdString();
	static void invalidateCurrentContext();
	static void setScratchSurface(::sun::java2d::opengl::OGLGraphicsConfig* gc);
	static void setScratchSurface(int64_t pConfigInfo);
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLContext_h_