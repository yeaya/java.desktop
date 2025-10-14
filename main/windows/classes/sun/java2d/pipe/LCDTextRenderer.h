#ifndef _sun_java2d_pipe_LCDTextRenderer_h_
#define _sun_java2d_pipe_LCDTextRenderer_h_
//$ class sun.java2d.pipe.LCDTextRenderer
//$ extends sun.java2d.pipe.GlyphListLoopPipe

#include <sun/java2d/pipe/GlyphListLoopPipe.h>

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

class LCDTextRenderer : public ::sun::java2d::pipe::GlyphListLoopPipe {
	$class(LCDTextRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::GlyphListLoopPipe)
public:
	LCDTextRenderer();
	using ::sun::java2d::pipe::GlyphListLoopPipe::drawGlyphList;
	void init$();
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) override;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_LCDTextRenderer_h_