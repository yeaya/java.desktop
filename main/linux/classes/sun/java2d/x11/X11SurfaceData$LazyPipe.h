#ifndef _sun_java2d_x11_X11SurfaceData$LazyPipe_h_
#define _sun_java2d_x11_X11SurfaceData$LazyPipe_h_
//$ class sun.java2d.x11.X11SurfaceData$LazyPipe
//$ extends sun.java2d.pipe.ValidatePipe

#include <sun/java2d/pipe/ValidatePipe.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace x11 {

class X11SurfaceData$LazyPipe : public ::sun::java2d::pipe::ValidatePipe {
	$class(X11SurfaceData$LazyPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::ValidatePipe)
public:
	X11SurfaceData$LazyPipe();
	void init$();
	virtual bool validate(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11SurfaceData$LazyPipe_h_