#include <sun/java2d/xr/XRVolatileSurfaceManager.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRSurfaceData$XRPixmapSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRSurfaceData$XRPixmapSurfaceData = ::sun::java2d::xr::XRSurfaceData$XRPixmapSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRVolatileSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XRVolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&XRVolatileSurfaceManager::init$))},
	{"getCapabilities", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED},
	{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XRVolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRVolatileSurfaceManager",
	"sun.awt.image.VolatileSurfaceManager",
	nullptr,
	nullptr,
	_XRVolatileSurfaceManager_MethodInfo_
};

$Object* allocate$XRVolatileSurfaceManager($Class* clazz) {
	return $of($alloc(XRVolatileSurfaceManager));
}

void XRVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
}

bool XRVolatileSurfaceManager::isAccelerationEnabled() {
	return true;
}

$SurfaceData* XRVolatileSurfaceManager::initAcceleratedSurface() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, sData, nullptr);
	try {
		$var($XRGraphicsConfig, gc, $cast($XRGraphicsConfig, $nc(this->vImg)->getGraphicsConfig()));
		$var($ColorModel, cm, $nc(gc)->getColorModel());
		int64_t drawable = 0;
		if ($instanceOf($Long, this->context)) {
			drawable = $nc(($cast($Long, this->context)))->longValue();
		}
		$var($XRGraphicsConfig, var$0, gc);
		int32_t var$1 = $nc(this->vImg)->getWidth();
		int32_t var$2 = $nc(this->vImg)->getHeight();
		$var($ColorModel, var$3, cm);
		$var($Image, var$4, static_cast<$Image*>(this->vImg));
		int64_t var$5 = drawable;
		$assign(sData, $XRSurfaceData::createData(var$0, var$1, var$2, var$3, var$4, var$5, $nc(this->vImg)->getTransparency(), false));
	} catch ($NullPointerException& ex) {
		$assign(sData, nullptr);
	} catch ($OutOfMemoryError& er) {
		$assign(sData, nullptr);
	}
	return sData;
}

bool XRVolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	return true;
}

$ImageCapabilities* XRVolatileSurfaceManager::getCapabilities($GraphicsConfiguration* gc) {
	bool var$0 = isConfigValid(gc);
	if (var$0 && isAccelerationEnabled()) {
		return $new($ImageCapabilities, true);
	}
	return $new($ImageCapabilities, false);
}

XRVolatileSurfaceManager::XRVolatileSurfaceManager() {
}

$Class* XRVolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(XRVolatileSurfaceManager, name, initialize, &_XRVolatileSurfaceManager_ClassInfo_, allocate$XRVolatileSurfaceManager);
	return class$;
}

$Class* XRVolatileSurfaceManager::class$ = nullptr;

		} // xr
	} // java2d
} // sun