#ifndef _sun_java2d_xr_XRPaints$XRTexture_h_
#define _sun_java2d_xr_XRPaints$XRTexture_h_
//$ class sun.java2d.xr.XRPaints$XRTexture
//$ extends sun.java2d.xr.XRPaints

#include <sun/java2d/xr/XRPaints.h>

namespace java {
	namespace awt {
		class Paint;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
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
		namespace xr {
			class XRSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRPaints$XRTexture : public ::sun::java2d::xr::XRPaints {
	$class(XRPaints$XRTexture, $NO_CLASS_INIT, ::sun::java2d::xr::XRPaints)
public:
	XRPaints$XRTexture();
	void init$();
	::sun::java2d::xr::XRSurfaceData* getAccSrcSurface(::sun::java2d::xr::XRSurfaceData* dstData, ::java::awt::image::BufferedImage* bi);
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual void setXRPaint(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Paint* pt) override;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRPaints$XRTexture_h_