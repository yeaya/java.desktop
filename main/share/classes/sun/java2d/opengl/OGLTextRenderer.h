#ifndef _sun_java2d_opengl_OGLTextRenderer_h_
#define _sun_java2d_opengl_OGLTextRenderer_h_
//$ class sun.java2d.opengl.OGLTextRenderer
//$ extends sun.java2d.pipe.BufferedTextPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
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

class OGLTextRenderer : public ::sun::java2d::pipe::BufferedTextPipe {
	$class(OGLTextRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedTextPipe)
public:
	OGLTextRenderer();
	using ::sun::java2d::pipe::BufferedTextPipe::drawGlyphList;
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	static ::sun::java2d::pipe::RenderQueue* access$000(::sun::java2d::opengl::OGLTextRenderer* x0);
	virtual void drawGlyphList(int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions) override;
	virtual ::sun::java2d::opengl::OGLTextRenderer* traceWrap();
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Composite* comp) override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLTextRenderer_h_