#ifndef _sun_java2d_loops_DrawGlyphListColor$TraceDrawGlyphListColor_h_
#define _sun_java2d_loops_DrawGlyphListColor$TraceDrawGlyphListColor_h_
//$ class sun.java2d.loops.DrawGlyphListColor$TraceDrawGlyphListColor
//$ extends sun.java2d.loops.DrawGlyphListColor

#include <sun/java2d/loops/DrawGlyphListColor.h>

namespace sun {
	namespace font {
		class GlyphList;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class GraphicsPrimitive;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class DrawGlyphListColor$TraceDrawGlyphListColor : public ::sun::java2d::loops::DrawGlyphListColor {
	$class(DrawGlyphListColor$TraceDrawGlyphListColor, $NO_CLASS_INIT, ::sun::java2d::loops::DrawGlyphListColor)
public:
	DrawGlyphListColor$TraceDrawGlyphListColor();
	void init$(::sun::java2d::loops::DrawGlyphListColor* target);
	virtual void DrawGlyphListColor$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::font::GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawGlyphListColor* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawGlyphListColor$TraceDrawGlyphListColor_h_