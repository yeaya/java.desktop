#ifndef _sun_java2d_loops_DrawGlyphList$General_h_
#define _sun_java2d_loops_DrawGlyphList$General_h_
//$ class sun.java2d.loops.DrawGlyphList$General
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
			class CompositeType;
			class MaskFill;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class DrawGlyphList$General : public ::sun::java2d::loops::DrawGlyphList {
	$class(DrawGlyphList$General, $NO_CLASS_INIT, ::sun::java2d::loops::DrawGlyphList)
public:
	DrawGlyphList$General();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void DrawGlyphList$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::font::GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) override;
	::sun::java2d::loops::MaskFill* maskop = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawGlyphList$General_h_