#ifndef _sun_font_X11TextRenderer$Tracer_h_
#define _sun_font_X11TextRenderer$Tracer_h_
//$ class sun.font.X11TextRenderer$Tracer
//$ extends sun.font.X11TextRenderer

#include <sun/font/X11TextRenderer.h>

namespace sun {
	namespace font {
		class GlyphList;
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
	namespace font {

class X11TextRenderer$Tracer : public ::sun::font::X11TextRenderer {
	$class(X11TextRenderer$Tracer, $NO_CLASS_INIT, ::sun::font::X11TextRenderer)
public:
	X11TextRenderer$Tracer();
	using ::sun::font::X11TextRenderer::drawGlyphList;
	void init$();
	virtual void doDrawGlyphList(int64_t dstData, int64_t xgc, ::sun::java2d::pipe::Region* clip, ::sun::font::GlyphList* gl) override;
};

	} // font
} // sun

#endif // _sun_font_X11TextRenderer$Tracer_h_