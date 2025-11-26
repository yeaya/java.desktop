#ifndef _sun_java2d_pipe_GlyphListPipe_h_
#define _sun_java2d_pipe_GlyphListPipe_h_
//$ class sun.java2d.pipe.GlyphListPipe
//$ extends sun.java2d.pipe.TextPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/TextPipe.h>

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

class GlyphListPipe : public ::sun::java2d::pipe::TextPipe {
	$class(GlyphListPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::TextPipe)
public:
	GlyphListPipe();
	void init$();
	virtual void drawChars(::sun::java2d::SunGraphics2D* sg2d, $chars* data, int32_t offset, int32_t length, int32_t ix, int32_t iy) override;
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) {}
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl, int32_t aaHint);
	virtual void drawGlyphVector(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::font::GlyphVector* gv, float x, float y) override;
	virtual void drawString(::sun::java2d::SunGraphics2D* sg2d, $String* s, double x, double y) override;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_GlyphListPipe_h_