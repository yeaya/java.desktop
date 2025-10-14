#ifndef _sun_java2d_opengl_OGLSwToTextureBlit_h_
#define _sun_java2d_opengl_OGLSwToTextureBlit_h_
//$ class sun.java2d.opengl.OGLSwToTextureBlit
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
		namespace opengl {

class OGLSwToTextureBlit : public ::sun::java2d::loops::Blit {
	$class(OGLSwToTextureBlit, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	OGLSwToTextureBlit();
	void init$(::sun::java2d::loops::SurfaceType* srcType, int32_t typeval);
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
	int32_t typeval = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLSwToTextureBlit_h_