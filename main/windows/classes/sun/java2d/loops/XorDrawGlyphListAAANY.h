#ifndef _sun_java2d_loops_XorDrawGlyphListAAANY_h_
#define _sun_java2d_loops_XorDrawGlyphListAAANY_h_
//$ class sun.java2d.loops.XorDrawGlyphListAAANY
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

class XorDrawGlyphListAAANY : public ::sun::java2d::loops::DrawGlyphListAA {
	$class(XorDrawGlyphListAAANY, $NO_CLASS_INIT, ::sun::java2d::loops::DrawGlyphListAA)
public:
	XorDrawGlyphListAAANY();
	void init$();
	virtual void DrawGlyphListAA$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::sun::font::GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XorDrawGlyphListAAANY_h_