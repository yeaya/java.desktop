#include <sun/java2d/UnixSurfaceManagerFactory.h>

#include <java/awt/GraphicsConfiguration.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXVolatileSurfaceManager.h>
#include <sun/java2d/x11/X11VolatileSurfaceManager.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRVolatileSurfaceManager.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXVolatileSurfaceManager = ::sun::java2d::opengl::GLXVolatileSurfaceManager;
using $X11VolatileSurfaceManager = ::sun::java2d::x11::X11VolatileSurfaceManager;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;
using $XRVolatileSurfaceManager = ::sun::java2d::xr::XRVolatileSurfaceManager;

namespace sun {
	namespace java2d {

$MethodInfo _UnixSurfaceManagerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnixSurfaceManagerFactory::*)()>(&UnixSurfaceManagerFactory::init$))},
	{"createVolatileManager", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)Lsun/awt/image/VolatileSurfaceManager;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnixSurfaceManagerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.UnixSurfaceManagerFactory",
	"sun.java2d.SurfaceManagerFactory",
	nullptr,
	nullptr,
	_UnixSurfaceManagerFactory_MethodInfo_
};

$Object* allocate$UnixSurfaceManagerFactory($Class* clazz) {
	return $of($alloc(UnixSurfaceManagerFactory));
}

void UnixSurfaceManagerFactory::init$() {
	$SurfaceManagerFactory::init$();
}

$VolatileSurfaceManager* UnixSurfaceManagerFactory::createVolatileManager($SunVolatileImage* vImg, Object$* context) {
	$var($GraphicsConfiguration, gc, $nc(vImg)->getGraphicsConfig());
	if ($instanceOf($GLXGraphicsConfig, gc)) {
		return $new($GLXVolatileSurfaceManager, vImg, context);
	} else if ($instanceOf($XRGraphicsConfig, gc)) {
		return $new($XRVolatileSurfaceManager, vImg, context);
	} else {
		return $new($X11VolatileSurfaceManager, vImg, context);
	}
}

UnixSurfaceManagerFactory::UnixSurfaceManagerFactory() {
}

$Class* UnixSurfaceManagerFactory::load$($String* name, bool initialize) {
	$loadClass(UnixSurfaceManagerFactory, name, initialize, &_UnixSurfaceManagerFactory_ClassInfo_, allocate$UnixSurfaceManagerFactory);
	return class$;
}

$Class* UnixSurfaceManagerFactory::class$ = nullptr;

	} // java2d
} // sun