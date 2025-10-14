#ifndef _sun_java2d_opengl_OGLTextRenderer$Tracer_h_
#define _sun_java2d_opengl_OGLTextRenderer$Tracer_h_
//$ class sun.java2d.opengl.OGLTextRenderer$Tracer
//$ extends sun.java2d.opengl.OGLTextRenderer

#include <sun/java2d/opengl/OGLTextRenderer.h>

namespace sun {
	namespace font {
		class GlyphList;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLTextRenderer$Tracer : public ::sun::java2d::opengl::OGLTextRenderer {
	$class(OGLTextRenderer$Tracer, $NO_CLASS_INIT, ::sun::java2d::opengl::OGLTextRenderer)
public:
	OGLTextRenderer$Tracer();
	using ::sun::java2d::opengl::OGLTextRenderer::drawGlyphList;
	void init$(::sun::java2d::opengl::OGLTextRenderer* ogltr);
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLTextRenderer$Tracer_h_