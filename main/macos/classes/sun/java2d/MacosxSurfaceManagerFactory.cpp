#include <sun/java2d/MacosxSurfaceManagerFactory.h>

#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <sun/java2d/metal/MTLVolatileSurfaceManager.h>
#include <sun/java2d/opengl/CGLVolatileSurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;
using $MTLVolatileSurfaceManager = ::sun::java2d::metal::MTLVolatileSurfaceManager;
using $CGLVolatileSurfaceManager = ::sun::java2d::opengl::CGLVolatileSurfaceManager;

namespace sun {
	namespace java2d {

$MethodInfo _MacosxSurfaceManagerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacosxSurfaceManagerFactory::*)()>(&MacosxSurfaceManagerFactory::init$))},
	{"createVolatileManager", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)Lsun/awt/image/VolatileSurfaceManager;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MacosxSurfaceManagerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.MacosxSurfaceManagerFactory",
	"sun.java2d.SurfaceManagerFactory",
	nullptr,
	nullptr,
	_MacosxSurfaceManagerFactory_MethodInfo_
};

$Object* allocate$MacosxSurfaceManagerFactory($Class* clazz) {
	return $of($alloc(MacosxSurfaceManagerFactory));
}

void MacosxSurfaceManagerFactory::init$() {
	$SurfaceManagerFactory::init$();
}

$VolatileSurfaceManager* MacosxSurfaceManagerFactory::createVolatileManager($SunVolatileImage* vImg, Object$* context) {
	return $CGraphicsDevice::usingMetalPipeline() ? static_cast<$VolatileSurfaceManager*>($new($MTLVolatileSurfaceManager, vImg, context)) : static_cast<$VolatileSurfaceManager*>($new($CGLVolatileSurfaceManager, vImg, context));
}

MacosxSurfaceManagerFactory::MacosxSurfaceManagerFactory() {
}

$Class* MacosxSurfaceManagerFactory::load$($String* name, bool initialize) {
	$loadClass(MacosxSurfaceManagerFactory, name, initialize, &_MacosxSurfaceManagerFactory_ClassInfo_, allocate$MacosxSurfaceManagerFactory);
	return class$;
}

$Class* MacosxSurfaceManagerFactory::class$ = nullptr;

	} // java2d
} // sun