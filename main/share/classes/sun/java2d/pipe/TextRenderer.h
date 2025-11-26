#ifndef _sun_java2d_pipe_TextRenderer_h_
#define _sun_java2d_pipe_TextRenderer_h_
//$ class sun.java2d.pipe.TextRenderer
//$ extends sun.java2d.pipe.GlyphListPipe

#include <sun/java2d/pipe/GlyphListPipe.h>

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
			class CompositePipe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class TextRenderer : public ::sun::java2d::pipe::GlyphListPipe {
	$class(TextRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::GlyphListPipe)
public:
	TextRenderer();
	using ::sun::java2d::pipe::GlyphListPipe::drawGlyphList;
	void init$(::sun::java2d::pipe::CompositePipe* pipe);
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) override;
	::sun::java2d::pipe::CompositePipe* outpipe = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_TextRenderer_h_