#ifndef _sun_java2d_loops_RenderLoops_h_
#define _sun_java2d_loops_RenderLoops_h_
//$ class sun.java2d.loops.RenderLoops
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class DrawGlyphList;
			class DrawGlyphListAA;
			class DrawGlyphListColor;
			class DrawGlyphListLCD;
			class DrawLine;
			class DrawParallelogram;
			class DrawPath;
			class DrawPolygons;
			class DrawRect;
			class FillParallelogram;
			class FillPath;
			class FillRect;
			class FillSpans;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class RenderLoops : public ::java::lang::Object {
	$class(RenderLoops, 0, ::java::lang::Object)
public:
	RenderLoops();
	void init$();
	static int32_t primTypeID;
	::sun::java2d::loops::DrawLine* drawLineLoop = nullptr;
	::sun::java2d::loops::FillRect* fillRectLoop = nullptr;
	::sun::java2d::loops::DrawRect* drawRectLoop = nullptr;
	::sun::java2d::loops::DrawPolygons* drawPolygonsLoop = nullptr;
	::sun::java2d::loops::DrawPath* drawPathLoop = nullptr;
	::sun::java2d::loops::FillPath* fillPathLoop = nullptr;
	::sun::java2d::loops::FillSpans* fillSpansLoop = nullptr;
	::sun::java2d::loops::FillParallelogram* fillParallelogramLoop = nullptr;
	::sun::java2d::loops::DrawParallelogram* drawParallelogramLoop = nullptr;
	::sun::java2d::loops::DrawGlyphList* drawGlyphListLoop = nullptr;
	::sun::java2d::loops::DrawGlyphListAA* drawGlyphListAALoop = nullptr;
	::sun::java2d::loops::DrawGlyphListLCD* drawGlyphListLCDLoop = nullptr;
	::sun::java2d::loops::DrawGlyphListColor* drawGlyphListColorLoop = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_RenderLoops_h_