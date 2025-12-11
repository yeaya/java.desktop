#include <sun/java2d/x11/X11VolatileSurfaceManager.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/x11/X11SurfaceData$X11PixmapSurfaceData.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <jcpp.h>

#undef OPAQUE

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

$FieldInfo _X11VolatileSurfaceManager_FieldInfo_[] = {
	{"accelerationEnabled", "Z", nullptr, $PRIVATE, $field(X11VolatileSurfaceManager, accelerationEnabled)},
	{}
};

$MethodInfo _X11VolatileSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(X11VolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&X11VolatileSurfaceManager::init$))},
	{"getCapabilities", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED},
	{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _X11VolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.x11.X11VolatileSurfaceManager",
	"sun.awt.image.VolatileSurfaceManager",
	nullptr,
	_X11VolatileSurfaceManager_FieldInfo_,
	_X11VolatileSurfaceManager_MethodInfo_
};

$Object* allocate$X11VolatileSurfaceManager($Class* clazz) {
	return $of($alloc(X11VolatileSurfaceManager));
}

void X11VolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
	bool var$0 = $X11SurfaceData::isAccelerationEnabled();
	this->accelerationEnabled = var$0 && ($nc(vImg)->getTransparency() == $Transparency::OPAQUE);
	if ((context != nullptr) && !this->accelerationEnabled) {
		this->accelerationEnabled = true;
		$set(this, sdAccel, initAcceleratedSurface());
		$set(this, sdCurrent, this->sdAccel);
		if (this->sdBackup != nullptr) {
			$set(this, sdBackup, nullptr);
		}
	}
}

bool X11VolatileSurfaceManager::isAccelerationEnabled() {
	return this->accelerationEnabled;
}

$SurfaceData* X11VolatileSurfaceManager::initAcceleratedSurface() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, sData, nullptr);
	try {
		$var($X11GraphicsConfig, gc, $cast($X11GraphicsConfig, $nc(this->vImg)->getGraphicsConfig()));
		$var($ColorModel, cm, $nc(gc)->getColorModel());
		int64_t drawable = 0;
		if ($instanceOf($Long, this->context)) {
			drawable = $nc(($cast($Long, this->context)))->longValue();
		}
		$var($X11GraphicsConfig, var$0, gc);
		int32_t var$1 = $nc(this->vImg)->getWidth();
		$assign(sData, $X11SurfaceData::createData(var$0, var$1, $nc(this->vImg)->getHeight(), cm, this->vImg, drawable, $Transparency::OPAQUE, false));
	} catch ($NullPointerException& ex) {
		$assign(sData, nullptr);
	} catch ($OutOfMemoryError& er) {
		$assign(sData, nullptr);
	}
	return sData;
}

bool X11VolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	return ((gc == nullptr) || (gc == $nc(this->vImg)->getGraphicsConfig()));
}

$ImageCapabilities* X11VolatileSurfaceManager::getCapabilities($GraphicsConfiguration* gc) {
	bool var$0 = isConfigValid(gc);
	if (var$0 && isAccelerationEnabled()) {
		return $new($ImageCapabilities, true);
	}
	return $new($ImageCapabilities, false);
}

X11VolatileSurfaceManager::X11VolatileSurfaceManager() {
}

$Class* X11VolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(X11VolatileSurfaceManager, name, initialize, &_X11VolatileSurfaceManager_ClassInfo_, allocate$X11VolatileSurfaceManager);
	return class$;
}

$Class* X11VolatileSurfaceManager::class$ = nullptr;

		} // x11
	} // java2d
} // sun