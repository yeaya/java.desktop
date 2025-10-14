#ifndef _sun_java2d_loops_DrawGlyphListAA$TraceDrawGlyphListAA_h_
#define _sun_java2d_loops_DrawGlyphListAA$TraceDrawGlyphListAA_h_
//$ class sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA
//$ extends sun.java2d.loops.DrawGlyphListAA

#include <sun/java2d/loops/DrawGlyphListAA.h>

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

class DrawGlyphListAA$TraceDrawGlyphListAA : public ::sun::java2d::loops::DrawGlyphListAA {
	$class(DrawGlyphListAA$TraceDrawGlyphListAA, $NO_CLASS_INIT, ::sun::java2d::loops::DrawGlyphListAA)
public:
	DrawGlyphListAA$TraceDrawGlyphListAA();
	void init$(::sun::java2d::loops::DrawGlyphListAA* target);
	virtual void DrawGlyphListAA$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::font::GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawGlyphListAA* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawGlyphListAA$TraceDrawGlyphListAA_h_