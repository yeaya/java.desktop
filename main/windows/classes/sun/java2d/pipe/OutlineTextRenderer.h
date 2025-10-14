#ifndef _sun_java2d_pipe_OutlineTextRenderer_h_
#define _sun_java2d_pipe_OutlineTextRenderer_h_
//$ class sun.java2d.pipe.OutlineTextRenderer
//$ extends sun.java2d.pipe.TextPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/TextPipe.h>

#pragma push_macro("THRESHHOLD")
#undef THRESHHOLD

namespace java {
	namespace awt {
		namespace font {
			class GlyphVector;
		}
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

class OutlineTextRenderer : public ::sun::java2d::pipe::TextPipe {
	$class(OutlineTextRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::TextPipe)
public:
	OutlineTextRenderer();
	void init$();
	virtual void drawChars(::sun::java2d::SunGraphics2D* g2d, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual void drawGlyphVector(::sun::java2d::SunGraphics2D* g2d, ::java::awt::font::GlyphVector* gv, float x, float y) override;
	virtual void drawString(::sun::java2d::SunGraphics2D* g2d, $String* str, double x, double y) override;
	static const int32_t THRESHHOLD = 100;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("THRESHHOLD")

#endif // _sun_java2d_pipe_OutlineTextRenderer_h_