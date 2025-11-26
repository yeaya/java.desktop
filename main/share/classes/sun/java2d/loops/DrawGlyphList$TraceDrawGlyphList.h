#ifndef _sun_java2d_loops_DrawGlyphList$TraceDrawGlyphList_h_
#define _sun_java2d_loops_DrawGlyphList$TraceDrawGlyphList_h_
//$ class sun.java2d.loops.DrawGlyphList$TraceDrawGlyphList
//$ extends sun.java2d.loops.DrawGlyphList

#include <sun/java2d/loops/DrawGlyphList.h>

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

class DrawGlyphList$TraceDrawGlyphList : public ::sun::java2d::loops::DrawGlyphList {
	$class(DrawGlyphList$TraceDrawGlyphList, $NO_CLASS_INIT, ::sun::java2d::loops::DrawGlyphList)
public:
	DrawGlyphList$TraceDrawGlyphList();
	void init$(::sun::java2d::loops::DrawGlyphList* target);
	virtual void DrawGlyphList$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::font::GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::DrawGlyphList* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawGlyphList$TraceDrawGlyphList_h_