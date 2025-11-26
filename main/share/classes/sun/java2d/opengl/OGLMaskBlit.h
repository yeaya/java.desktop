#ifndef _sun_java2d_opengl_OGLMaskBlit_h_
#define _sun_java2d_opengl_OGLMaskBlit_h_
//$ class sun.java2d.opengl.OGLMaskBlit
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
		namespace opengl {

class OGLMaskBlit : public ::sun::java2d::pipe::BufferedMaskBlit {
	$class(OGLMaskBlit, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedMaskBlit)
public:
	OGLMaskBlit();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::CompositeType* compType);
	static void register$();
	virtual void validateContext(::sun::java2d::SurfaceData* dstData, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip) override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLMaskBlit_h_