#ifndef _sun_java2d_xr_XRGraphicsConfig_h_
#define _sun_java2d_xr_XRGraphicsConfig_h_
//$ class sun.java2d.xr.XRGraphicsConfig
//$ extends sun.awt.X11GraphicsConfig

#include <sun/awt/X11GraphicsConfig.h>

namespace sun {
	namespace awt {
		class X11ComponentPeer;
		class X11GraphicsDevice;
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

class XRGraphicsConfig : public ::sun::awt::X11GraphicsConfig {
	$class(XRGraphicsConfig, $NO_CLASS_INIT, ::sun::awt::X11GraphicsConfig)
public:
	XRGraphicsConfig();
	void init$(::sun::awt::X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, bool doubleBuffer);
	virtual ::sun::java2d::SurfaceData* createSurfaceData(::sun::awt::X11ComponentPeer* peer) override;
	static ::sun::java2d::xr::XRGraphicsConfig* getConfig(::sun::awt::X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, bool doubleBuffer);
	virtual $Object* getProxyKey() override;
	virtual ::sun::java2d::loops::SurfaceType* getSurfaceType() override;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRGraphicsConfig_h_