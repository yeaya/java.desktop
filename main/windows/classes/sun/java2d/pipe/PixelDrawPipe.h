#ifndef _sun_java2d_pipe_PixelDrawPipe_h_
#define _sun_java2d_pipe_PixelDrawPipe_h_
//$ interface sun.java2d.pipe.PixelDrawPipe
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class PixelDrawPipe : public ::java::lang::Object {
	$interface(PixelDrawPipe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {}
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {}
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {}
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {}
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_PixelDrawPipe_h_