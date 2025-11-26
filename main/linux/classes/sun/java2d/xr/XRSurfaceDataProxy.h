#ifndef _sun_java2d_xr_XRSurfaceDataProxy_h_
#define _sun_java2d_xr_XRSurfaceDataProxy_h_
//$ class sun.java2d.xr.XRSurfaceDataProxy
//$ extends sun.java2d.SurfaceDataProxy
//$ implements java.awt.Transparency

#include <java/awt/Transparency.h>
#include <sun/java2d/SurfaceDataProxy.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class XRGraphicsConfig;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRSurfaceDataProxy : public ::sun::java2d::SurfaceDataProxy, public ::java::awt::Transparency {
	$class(XRSurfaceDataProxy, $NO_CLASS_INIT, ::sun::java2d::SurfaceDataProxy, ::java::awt::Transparency)
public:
	XRSurfaceDataProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::xr::XRGraphicsConfig* x11gc);
	void init$(::sun::java2d::xr::XRGraphicsConfig* x11gc, int32_t transparency);
	static ::sun::java2d::SurfaceDataProxy* createProxy(::sun::java2d::SurfaceData* srcData, ::sun::java2d::xr::XRGraphicsConfig* dstConfig);
	virtual int32_t getTransparency() override;
	virtual bool isSupportedOperation(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor) override;
	virtual $String* toString() override;
	virtual ::sun::java2d::SurfaceData* validateSurfaceData(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* cachedData, int32_t w, int32_t h) override;
	::sun::java2d::xr::XRGraphicsConfig* xrgc = nullptr;
	int32_t transparency = 0;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRSurfaceDataProxy_h_