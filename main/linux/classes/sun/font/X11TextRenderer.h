#ifndef _sun_font_X11TextRenderer_h_
#define _sun_font_X11TextRenderer_h_
//$ class sun.font.X11TextRenderer
//$ extends sun.java2d.pipe.GlyphListPipe

#include <sun/java2d/pipe/GlyphListPipe.h>

namespace java {
	namespace awt {
		namespace font {
			class GlyphVector;
		}
	}
}
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
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace font {

class X11TextRenderer : public ::sun::java2d::pipe::GlyphListPipe {
	$class(X11TextRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::GlyphListPipe)
public:
	X11TextRenderer();
	using ::sun::java2d::pipe::GlyphListPipe::drawGlyphList;
	void init$();
	virtual void doDrawGlyphList(int64_t dstData, int64_t xgc, ::sun::java2d::pipe::Region* clip, ::sun::font::GlyphList* gl);
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) override;
	virtual void drawGlyphVector(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::font::GlyphVector* g, float x, float y) override;
	virtual ::sun::font::X11TextRenderer* traceWrap();
};

	} // font
} // sun

#endif // _sun_font_X11TextRenderer_h_