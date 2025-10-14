#ifndef _sun_java2d_loops_DrawGlyphListColor_h_
#define _sun_java2d_loops_DrawGlyphListColor_h_
//$ class sun.java2d.loops.DrawGlyphListColor
//$ extends sun.java2d.loops.GraphicsPrimitive

#include <sun/java2d/loops/GraphicsPrimitive.h>

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
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class DrawGlyphListColor : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(DrawGlyphListColor, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	DrawGlyphListColor();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void DrawGlyphListColor$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::font::GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph);
	static ::sun::java2d::loops::DrawGlyphListColor* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* makePrimitive(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_DrawGlyphListColor_h_