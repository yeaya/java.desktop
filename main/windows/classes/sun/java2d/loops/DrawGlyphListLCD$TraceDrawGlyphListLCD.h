#ifndef _sun_java2d_loops_DrawGlyphListLCD$TraceDrawGlyphListLCD_h_
#define _sun_java2d_loops_DrawGlyphListLCD$TraceDrawGlyphListLCD_h_
//$ class sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD
//$ extends sun.java2d.loops.DrawGlyphListLCD

#include <sun/java2d/loops/DrawGlyphListLCD.h>

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

class DrawGlyphListLCD$TraceDrawGlyphListLCD : public ::sun::java2d::loops::DrawGlyphListLCD {
	$class(DrawGlyphListLCD$TraceDrawGlyphListLCD, $NO_CLASS_INIT, ::sun::java2d::loops::DrawGlyphListLCD)
public:
	DrawGlyphListLCD$TraceDrawGlyphListLCD();
	void init$(::sun::java2d::loops::DrawGlyphListLCD* target);
	virtual void DrawGlyphListLCD$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::font::GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawGlyphListLCD* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawGlyphListLCD$TraceDrawGlyphListLCD_h_