#include <sun/awt/image/BufImgVolatileSurfaceManager.h>

#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _BufImgVolatileSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(BufImgVolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&BufImgVolatileSurfaceManager::init$))},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BufImgVolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.BufImgVolatileSurfaceManager",
	"sun.awt.image.VolatileSurfaceManager",
	nullptr,
	nullptr,
	_BufImgVolatileSurfaceManager_MethodInfo_
};

$Object* allocate$BufImgVolatileSurfaceManager($Class* clazz) {
	return $of($alloc(BufImgVolatileSurfaceManager));
}

void BufImgVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
}

bool BufImgVolatileSurfaceManager::isAccelerationEnabled() {
	return false;
}

$SurfaceData* BufImgVolatileSurfaceManager::initAcceleratedSurface() {
	return nullptr;
}

BufImgVolatileSurfaceManager::BufImgVolatileSurfaceManager() {
}

$Class* BufImgVolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(BufImgVolatileSurfaceManager, name, initialize, &_BufImgVolatileSurfaceManager_ClassInfo_, allocate$BufImgVolatileSurfaceManager);
	return class$;
}

$Class* BufImgVolatileSurfaceManager::class$ = nullptr;

		} // image
	} // awt
} // sun