#ifndef _sun_java2d_loops_XorDrawGlyphListANY_h_
#define _sun_java2d_loops_XorDrawGlyphListANY_h_
//$ class sun.java2d.loops.XorDrawGlyphListANY
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

class XorDrawGlyphListANY : public ::sun::java2d::loops::DrawGlyphList {
	$class(XorDrawGlyphListANY, $NO_CLASS_INIT, ::sun::java2d::loops::DrawGlyphList)
public:
	XorDrawGlyphListANY();
	void init$();
	virtual void DrawGlyphList$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::sun::font::GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XorDrawGlyphListANY_h_