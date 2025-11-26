#ifndef _sun_java2d_loops_DrawGlyphListColor$General_h_
#define _sun_java2d_loops_DrawGlyphListColor$General_h_
//$ class sun.java2d.loops.DrawGlyphListColor$General
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
			class Blit;
			class CompositeType;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class DrawGlyphListColor$General : public ::sun::java2d::loops::DrawGlyphListColor {
	$class(DrawGlyphListColor$General, $NO_CLASS_INIT, ::sun::java2d::loops::DrawGlyphListColor)
public:
	DrawGlyphListColor$General();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void DrawGlyphListColor$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::font::GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) override;
	::sun::java2d::loops::Blit* blit = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawGlyphListColor$General_h_