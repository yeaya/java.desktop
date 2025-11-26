#ifndef _sun_java2d_opengl_OGLPaints$Gradient_h_
#define _sun_java2d_opengl_OGLPaints$Gradient_h_
//$ class sun.java2d.opengl.OGLPaints$Gradient
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

class OGLPaints$Gradient : public ::sun::java2d::opengl::OGLPaints {
	$class(OGLPaints$Gradient, $NO_CLASS_INIT, ::sun::java2d::opengl::OGLPaints)
public:
	OGLPaints$Gradient();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLPaints$Gradient_h_