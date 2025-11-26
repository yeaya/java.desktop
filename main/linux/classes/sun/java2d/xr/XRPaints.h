#ifndef _sun_java2d_xr_XRPaints_h_
#define _sun_java2d_xr_XRPaints_h_
//$ class sun.java2d.xr.XRPaints
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Paint;
	}
}
namespace java {
	namespace awt {
		namespace geom {
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
		namespace xr {
			class XRCompositeManager;
			class XRPaints$XRGradient;
			class XRPaints$XRLinearGradient;
			class XRPaints$XRRadialGradient;
			class XRPaints$XRTexture;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRPaints : public ::java::lang::Object {
	$class(XRPaints, 0, ::java::lang::Object)
public:
	XRPaints();
	void init$();
	virtual int32_t colorToIntArgbPixel(::java::awt::Color* c);
	virtual $ints* convertToIntArgbPixels($Array<::java::awt::Color>* colors);
	virtual int32_t getGradientLength(::java::awt::geom::Point2D* pt1, ::java::awt::geom::Point2D* pt2);
	static ::sun::java2d::xr::XRPaints* getXRPaint(::sun::java2d::SunGraphics2D* sg2d);
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) {return false;}
	static bool isValid(::sun::java2d::SunGraphics2D* sg2d);
	static void register$(::sun::java2d::xr::XRCompositeManager* xrComp);
	static void setPaint(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Paint* paint);
	virtual void setXRPaint(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Paint* paint) {}
	static ::sun::java2d::xr::XRCompositeManager* xrCompMan;
	static ::sun::java2d::xr::XRPaints$XRGradient* xrGradient;
	static ::sun::java2d::xr::XRPaints$XRLinearGradient* xrLinearGradient;
	static ::sun::java2d::xr::XRPaints$XRRadialGradient* xrRadialGradient;
	static ::sun::java2d::xr::XRPaints$XRTexture* xrTexture;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRPaints_h_