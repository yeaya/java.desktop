#ifndef _sun_java2d_SurfaceManagerFactory_h_
#define _sun_java2d_SurfaceManagerFactory_h_
//$ class sun.java2d.SurfaceManagerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class SurfaceManagerFactory : public ::java::lang::Object {
	$class(SurfaceManagerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SurfaceManagerFactory();
	void init$();
	virtual ::sun::awt::image::VolatileSurfaceManager* createVolatileManager(::sun::awt::image::SunVolatileImage* image, Object$* context) {return nullptr;}
	static ::sun::java2d::SurfaceManagerFactory* getInstance();
	static void setInstance(::sun::java2d::SurfaceManagerFactory* factory);
	static ::sun::java2d::SurfaceManagerFactory* instance;
};

	} // java2d
} // sun

#endif // _sun_java2d_SurfaceManagerFactory_h_