#include <sun/java2d/WindowsSurfaceManagerFactory.h>

#include <java/awt/GraphicsConfiguration.h>
#include <sun/awt/image/BufImgVolatileSurfaceManager.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <sun/java2d/d3d/D3DVolatileSurfaceManager.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/opengl/WGLVolatileSurfaceManager.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufImgVolatileSurfaceManager = ::sun::awt::image::BufImgVolatileSurfaceManager;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;
using $D3DVolatileSurfaceManager = ::sun::java2d::d3d::D3DVolatileSurfaceManager;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WGLVolatileSurfaceManager = ::sun::java2d::opengl::WGLVolatileSurfaceManager;

namespace sun {
	namespace java2d {

$MethodInfo _WindowsSurfaceManagerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsSurfaceManagerFactory::*)()>(&WindowsSurfaceManagerFactory::init$))},
	{"createVolatileManager", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)Lsun/awt/image/VolatileSurfaceManager;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsSurfaceManagerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.WindowsSurfaceManagerFactory",
	"sun.java2d.SurfaceManagerFactory",
	nullptr,
	nullptr,
	_WindowsSurfaceManagerFactory_MethodInfo_
};

$Object* allocate$WindowsSurfaceManagerFactory($Class* clazz) {
	return $of($alloc(WindowsSurfaceManagerFactory));
}

void WindowsSurfaceManagerFactory::init$() {
	$SurfaceManagerFactory::init$();
}

$VolatileSurfaceManager* WindowsSurfaceManagerFactory::createVolatileManager($SunVolatileImage* vImg, Object$* context) {
	$var($GraphicsConfiguration, gc, $nc(vImg)->getGraphicsConfig());
	if ($instanceOf($D3DGraphicsConfig, gc)) {
		return $new($D3DVolatileSurfaceManager, vImg, context);
	} else if ($instanceOf($WGLGraphicsConfig, gc)) {
		return $new($WGLVolatileSurfaceManager, vImg, context);
	} else {
		return $new($BufImgVolatileSurfaceManager, vImg, context);
	}
}

WindowsSurfaceManagerFactory::WindowsSurfaceManagerFactory() {
}

$Class* WindowsSurfaceManagerFactory::load$($String* name, bool initialize) {
	$loadClass(WindowsSurfaceManagerFactory, name, initialize, &_WindowsSurfaceManagerFactory_ClassInfo_, allocate$WindowsSurfaceManagerFactory);
	return class$;
}

$Class* WindowsSurfaceManagerFactory::class$ = nullptr;

	} // java2d
} // sun