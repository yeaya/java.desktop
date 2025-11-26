#ifndef _sun_java2d_pipe_PixelFillPipe_h_
#define _sun_java2d_pipe_PixelFillPipe_h_
//$ interface sun.java2d.pipe.PixelFillPipe
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

class PixelFillPipe : public ::java::lang::Object {
	$interface(PixelFillPipe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {}
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {}
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_PixelFillPipe_h_