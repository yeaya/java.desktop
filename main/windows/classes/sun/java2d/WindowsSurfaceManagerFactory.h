#ifndef _sun_java2d_WindowsSurfaceManagerFactory_h_
#define _sun_java2d_WindowsSurfaceManagerFactory_h_
//$ class sun.java2d.WindowsSurfaceManagerFactory
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

class WindowsSurfaceManagerFactory : public ::sun::java2d::SurfaceManagerFactory {
	$class(WindowsSurfaceManagerFactory, $NO_CLASS_INIT, ::sun::java2d::SurfaceManagerFactory)
public:
	WindowsSurfaceManagerFactory();
	void init$();
	virtual ::sun::awt::image::VolatileSurfaceManager* createVolatileManager(::sun::awt::image::SunVolatileImage* vImg, Object$* context) override;
};

	} // java2d
} // sun

#endif // _sun_java2d_WindowsSurfaceManagerFactory_h_