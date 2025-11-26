#ifndef _sun_java2d_xr_XRSurfaceData$XRWindowSurfaceData_h_
#define _sun_java2d_xr_XRSurfaceData$XRWindowSurfaceData_h_
//$ class sun.java2d.xr.XRSurfaceData$XRWindowSurfaceData
//$ extends sun.java2d.xr.XRSurfaceData

#include <sun/java2d/xr/XRSurfaceData.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace sun {
	namespace awt {
		class X11ComponentPeer;
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
			class SurfaceType;
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

class XRSurfaceData$XRWindowSurfaceData : public ::sun::java2d::xr::XRSurfaceData {
	$class(XRSurfaceData$XRWindowSurfaceData, $NO_CLASS_INIT, ::sun::java2d::xr::XRSurfaceData)
public:
	XRSurfaceData$XRWindowSurfaceData();
	void init$(::sun::awt::X11ComponentPeer* peer, ::sun::java2d::xr::XRGraphicsConfig* gc, ::sun::java2d::loops::SurfaceType* sType);
	virtual bool canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	virtual void invalidate() override;
	int32_t scale = 0;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRSurfaceData$XRWindowSurfaceData_h_