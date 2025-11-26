#ifndef _sun_java2d_xr_XRSurfaceData$LazyPipe_h_
#define _sun_java2d_xr_XRSurfaceData$LazyPipe_h_
//$ class sun.java2d.xr.XRSurfaceData$LazyPipe
//$ extends sun.java2d.pipe.ValidatePipe

#include <sun/java2d/pipe/ValidatePipe.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRSurfaceData$LazyPipe : public ::sun::java2d::pipe::ValidatePipe {
	$class(XRSurfaceData$LazyPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::ValidatePipe)
public:
	XRSurfaceData$LazyPipe();
	void init$();
	virtual bool validate(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRSurfaceData$LazyPipe_h_