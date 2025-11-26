#ifndef _sun_java2d_xr_XRPaints$XRGradient_h_
#define _sun_java2d_xr_XRPaints$XRGradient_h_
//$ class sun.java2d.xr.XRPaints$XRGradient
//$ extends sun.java2d.xr.XRPaints

#include <sun/java2d/xr/XRPaints.h>

namespace java {
	namespace awt {
		class Paint;
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

class XRPaints$XRGradient : public ::sun::java2d::xr::XRPaints {
	$class(XRPaints$XRGradient, $NO_CLASS_INIT, ::sun::java2d::xr::XRPaints)
public:
	XRPaints$XRGradient();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual void setXRPaint(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Paint* pt) override;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRPaints$XRGradient_h_