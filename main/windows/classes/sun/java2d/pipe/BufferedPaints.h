#ifndef _sun_java2d_pipe_BufferedPaints_h_
#define _sun_java2d_pipe_BufferedPaints_h_
//$ class sun.java2d.pipe.BufferedPaints
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MULTI_MAX_FRACTIONS")
#undef MULTI_MAX_FRACTIONS

namespace java {
	namespace awt {
		class Color;
		class GradientPaint;
		class LinearGradientPaint;
		class Paint;
		class RadialGradientPaint;
		class TexturePaint;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class RenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedPaints : public ::java::lang::Object {
	$class(BufferedPaints, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BufferedPaints();
	void init$();
	static int32_t colorToIntArgbPrePixel(::java::awt::Color* c, bool linear);
	static int32_t convertSRGBtoLinearRGB(int32_t color);
	static $ints* convertToIntArgbPrePixels($Array<::java::awt::Color>* colors, bool linear);
	static void resetPaint(::sun::java2d::pipe::RenderQueue* rq);
	static void setColor(::sun::java2d::pipe::RenderQueue* rq, int32_t pixel);
	static void setGradientPaint(::sun::java2d::pipe::RenderQueue* rq, ::java::awt::geom::AffineTransform* at, ::java::awt::Color* c1, ::java::awt::Color* c2, ::java::awt::geom::Point2D* pt1, ::java::awt::geom::Point2D* pt2, bool isCyclic, bool useMask);
	static void setGradientPaint(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SunGraphics2D* sg2d, ::java::awt::GradientPaint* paint, bool useMask);
	static void setLinearGradientPaint(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SunGraphics2D* sg2d, ::java::awt::LinearGradientPaint* paint, bool useMask);
	static void setPaint(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Paint* paint, int32_t ctxflags);
	static void setRadialGradientPaint(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SunGraphics2D* sg2d, ::java::awt::RadialGradientPaint* paint, bool useMask);
	static void setTexturePaint(::sun::java2d::pipe::RenderQueue* rq, ::sun::java2d::SunGraphics2D* sg2d, ::java::awt::TexturePaint* paint, bool useMask);
	static const int32_t MULTI_MAX_FRACTIONS = 12;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("MULTI_MAX_FRACTIONS")

#endif // _sun_java2d_pipe_BufferedPaints_h_