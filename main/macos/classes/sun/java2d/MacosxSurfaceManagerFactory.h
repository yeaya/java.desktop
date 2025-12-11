#ifndef _sun_java2d_MacosxSurfaceManagerFactory_h_
#define _sun_java2d_MacosxSurfaceManagerFactory_h_
//$ class sun.java2d.MacosxSurfaceManagerFactory
//$ extends sun.java2d.SurfaceManagerFactory

#include <sun/java2d/SurfaceManagerFactory.h>

namespace sun {
	namespace awt {
		namespace image {
			class SunVolatileImage;
			class VolatileSurfaceManager;
		}
	}
}

namespace sun {
	namespace java2d {

class MacosxSurfaceManagerFactory : public ::sun::java2d::SurfaceManagerFactory {
	$class(MacosxSurfaceManagerFactory, $NO_CLASS_INIT, ::sun::java2d::SurfaceManagerFactory)
public:
	MacosxSurfaceManagerFactory();
	void init$();
	virtual ::sun::awt::image::VolatileSurfaceManager* createVolatileManager(::sun::awt::image::SunVolatileImage* vImg, Object$* context) override;
};

	} // java2d
} // sun

#endif // _sun_java2d_MacosxSurfaceManagerFactory_h_