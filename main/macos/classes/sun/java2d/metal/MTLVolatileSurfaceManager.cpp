#include <sun/java2d/metal/MTLVolatileSurfaceManager.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLSurfaceData$MTLOffScreenSurfaceData.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef BITMASK
#undef RT_TEXTURE
#undef TEXTURE
#undef UNDEFINED

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLVolatileSurfaceManager_FieldInfo_[] = {
	{"accelerationEnabled", "Z", nullptr, $PRIVATE | $FINAL, $field(MTLVolatileSurfaceManager, accelerationEnabled)},
	{}
};

$MethodInfo _MTLVolatileSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLVolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&MTLVolatileSurfaceManager::init$))},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"initContents", "()V", nullptr, $PUBLIC},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED},
	{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MTLVolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.metal.MTLVolatileSurfaceManager",
	"sun.awt.image.VolatileSurfaceManager",
	nullptr,
	_MTLVolatileSurfaceManager_FieldInfo_,
	_MTLVolatileSurfaceManager_MethodInfo_
};

$Object* allocate$MTLVolatileSurfaceManager($Class* clazz) {
	return $of($alloc(MTLVolatileSurfaceManager));
}

void MTLVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
	int32_t transparency = $nc(vImg)->getTransparency();
	this->accelerationEnabled = transparency != $Transparency::BITMASK;
}

bool MTLVolatileSurfaceManager::isAccelerationEnabled() {
	return this->accelerationEnabled;
}

$SurfaceData* MTLVolatileSurfaceManager::initAcceleratedSurface() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($MTLGraphicsConfig, gc, $cast($MTLGraphicsConfig, $nc(this->vImg)->getGraphicsConfig()));
		$var($ColorModel, cm, $nc(gc)->getColorModel($nc(this->vImg)->getTransparency()));
		int32_t type = $nc(this->vImg)->getForcedAccelSurfaceType();
		if (type == $AccelSurface::UNDEFINED) {
			type = $AccelSurface::RT_TEXTURE;
		}
		$var($MTLGraphicsConfig, var$0, gc);
		int32_t var$1 = $nc(this->vImg)->getWidth();
		return $MTLSurfaceData::createData(var$0, var$1, $nc(this->vImg)->getHeight(), cm, this->vImg, type);
	} catch ($NullPointerException& ignored) {
		return nullptr;
	} catch ($OutOfMemoryError& ignored) {
		return nullptr;
	}
	$shouldNotReachHere();
}

bool MTLVolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	return ((gc == nullptr) || (gc == $nc(this->vImg)->getGraphicsConfig()));
}

void MTLVolatileSurfaceManager::initContents() {
	if ($nc(this->vImg)->getForcedAccelSurfaceType() != $AccelSurface::TEXTURE) {
		$VolatileSurfaceManager::initContents();
	}
}

MTLVolatileSurfaceManager::MTLVolatileSurfaceManager() {
}

$Class* MTLVolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(MTLVolatileSurfaceManager, name, initialize, &_MTLVolatileSurfaceManager_ClassInfo_, allocate$MTLVolatileSurfaceManager);
	return class$;
}

$Class* MTLVolatileSurfaceManager::class$ = nullptr;

		} // metal
	} // java2d
} // sun