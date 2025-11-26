#ifndef _sun_java2d_loops_GeneralRenderer_h_
#define _sun_java2d_loops_GeneralRenderer_h_
//$ class sun.java2d.loops.GeneralRenderer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OUTCODE_BOTTOM")
#undef OUTCODE_BOTTOM
#pragma push_macro("OUTCODE_LEFT")
#undef OUTCODE_LEFT
#pragma push_macro("OUTCODE_RIGHT")
#undef OUTCODE_RIGHT
#pragma push_macro("OUTCODE_TOP")
#undef OUTCODE_TOP

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
			class PixelWriter;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class GeneralRenderer : public ::java::lang::Object {
	$class(GeneralRenderer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GeneralRenderer();
	void init$();
	static bool adjustLine($ints* boundPts, int32_t cxmin, int32_t cymin, int32_t cx2, int32_t cy2);
	static ::sun::java2d::loops::PixelWriter* createSolidPixelWriter(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData);
	static ::sun::java2d::loops::PixelWriter* createXorPixelWriter(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData);
	static void doDrawGlyphList(::sun::java2d::SurfaceData* sData, ::sun::java2d::loops::PixelWriter* pw, ::sun::font::GlyphList* gl, int32_t fromGlyph, int32_t toGlyph, ::sun::java2d::pipe::Region* clip);
	static $ints* doDrawLine(::sun::java2d::SurfaceData* sData, ::sun::java2d::loops::PixelWriter* pw, $ints* boundPts, ::sun::java2d::pipe::Region* clip, int32_t origx1, int32_t origy1, int32_t origx2, int32_t origy2);
	static void doDrawPoly(::sun::java2d::SurfaceData* sData, ::sun::java2d::loops::PixelWriter* pw, $ints* xPoints, $ints* yPoints, int32_t off, int32_t nPoints, ::sun::java2d::pipe::Region* clip, int32_t transx, int32_t transy, bool close);
	static void doDrawRect(::sun::java2d::loops::PixelWriter* pw, ::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, int32_t x, int32_t y, int32_t w, int32_t h);
	static void doSetRect(::sun::java2d::SurfaceData* sData, ::sun::java2d::loops::PixelWriter* pw, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	static int32_t outcode(int32_t x, int32_t y, int32_t xmin, int32_t ymin, int32_t xmax, int32_t ymax);
	static void register$();
	static const int32_t OUTCODE_TOP = 1;
	static const int32_t OUTCODE_BOTTOM = 2;
	static const int32_t OUTCODE_LEFT = 4;
	static const int32_t OUTCODE_RIGHT = 8;
};

		} // loops
	} // java2d
} // sun

#pragma pop_macro("OUTCODE_BOTTOM")
#pragma pop_macro("OUTCODE_LEFT")
#pragma pop_macro("OUTCODE_RIGHT")
#pragma pop_macro("OUTCODE_TOP")

#endif // _sun_java2d_loops_GeneralRenderer_h_