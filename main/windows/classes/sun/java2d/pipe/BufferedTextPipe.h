#ifndef _sun_java2d_pipe_BufferedTextPipe_h_
#define _sun_java2d_pipe_BufferedTextPipe_h_
//$ class sun.java2d.pipe.BufferedTextPipe
//$ extends sun.java2d.pipe.GlyphListPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/GlyphListPipe.h>

#pragma push_macro("BYTES_PER_GLYPH_IMAGE")
#undef BYTES_PER_GLYPH_IMAGE
#pragma push_macro("BYTES_PER_GLYPH_POSITION")
#undef BYTES_PER_GLYPH_POSITION
#pragma push_macro("OFFSET_CONTRAST")
#undef OFFSET_CONTRAST
#pragma push_macro("OFFSET_POSITIONS")
#undef OFFSET_POSITIONS
#pragma push_macro("OFFSET_RGBORDER")
#undef OFFSET_RGBORDER
#pragma push_macro("OFFSET_SUBPIXPOS")
#undef OFFSET_SUBPIXPOS

namespace java {
	namespace awt {
		class Composite;
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
			class RenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedTextPipe : public ::sun::java2d::pipe::GlyphListPipe {
	$class(BufferedTextPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::GlyphListPipe)
public:
	BufferedTextPipe();
	using ::sun::java2d::pipe::GlyphListPipe::drawGlyphList;
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	static int32_t createPackedParams(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl);
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) override;
	virtual void drawGlyphList(int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions) {}
	void enqueueGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl);
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Composite* comp) {}
	static const int32_t BYTES_PER_GLYPH_IMAGE = 8;
	static const int32_t BYTES_PER_GLYPH_POSITION = 8;
	static const int32_t OFFSET_CONTRAST = 8;
	static const int32_t OFFSET_RGBORDER = 2;
	static const int32_t OFFSET_SUBPIXPOS = 1;
	static const int32_t OFFSET_POSITIONS = 0;
	::sun::java2d::pipe::RenderQueue* rq = nullptr;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("BYTES_PER_GLYPH_IMAGE")
#pragma pop_macro("BYTES_PER_GLYPH_POSITION")
#pragma pop_macro("OFFSET_CONTRAST")
#pragma pop_macro("OFFSET_POSITIONS")
#pragma pop_macro("OFFSET_RGBORDER")
#pragma pop_macro("OFFSET_SUBPIXPOS")

#endif // _sun_java2d_pipe_BufferedTextPipe_h_