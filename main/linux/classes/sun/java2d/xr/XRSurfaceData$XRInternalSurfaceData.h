#ifndef _sun_java2d_xr_XRSurfaceData$XRInternalSurfaceData_h_
#define _sun_java2d_xr_XRSurfaceData$XRInternalSurfaceData_h_
//$ class sun.java2d.xr.XRSurfaceData$XRInternalSurfaceData
//$ extends sun.java2d.xr.XRSurfaceData

#include <sun/java2d/xr/XRSurfaceData.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class XRBackend;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRSurfaceData$XRInternalSurfaceData : public ::sun::java2d::xr::XRSurfaceData {
	$class(XRSurfaceData$XRInternalSurfaceData, $NO_CLASS_INIT, ::sun::java2d::xr::XRSurfaceData)
public:
	XRSurfaceData$XRInternalSurfaceData();
	void init$(::sun::java2d::xr::XRBackend* renderQueue, int32_t pictXid);
	virtual bool canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRSurfaceData$XRInternalSurfaceData_h_