#ifndef _sun_java2d_opengl_OGLPaints$Texture_h_
#define _sun_java2d_opengl_OGLPaints$Texture_h_
//$ class sun.java2d.opengl.OGLPaints$Texture
//$ extends sun.java2d.opengl.OGLPaints

#include <sun/java2d/opengl/OGLPaints.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLPaints$Texture : public ::sun::java2d::opengl::OGLPaints {
	$class(OGLPaints$Texture, $NO_CLASS_INIT, ::sun::java2d::opengl::OGLPaints)
public:
	OGLPaints$Texture();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLPaints$Texture_h_