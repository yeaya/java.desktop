#ifndef _sun_java2d_opengl_OGLPaints$LinearGradient_h_
#define _sun_java2d_opengl_OGLPaints$LinearGradient_h_
//$ class sun.java2d.opengl.OGLPaints$LinearGradient
//$ extends sun.java2d.opengl.OGLPaints$MultiGradient

#include <sun/java2d/opengl/OGLPaints$MultiGradient.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLPaints$LinearGradient : public ::sun::java2d::opengl::OGLPaints$MultiGradient {
	$class(OGLPaints$LinearGradient, $NO_CLASS_INIT, ::sun::java2d::opengl::OGLPaints$MultiGradient)
public:
	OGLPaints$LinearGradient();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLPaints$LinearGradient_h_