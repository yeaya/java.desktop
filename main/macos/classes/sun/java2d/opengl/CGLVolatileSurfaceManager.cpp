#include <sun/java2d/opengl/CGLVolatileSurfaceManager.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLSurfaceData$CGLOffScreenSurfaceData.h>
#include <sun/java2d/opengl/CGLSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

#undef BITMASK
#undef FBOBJECT
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
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;
using $CGLSurfaceData = ::sun::java2d::opengl::CGLSurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _CGLVolatileSurfaceManager_FieldInfo_[] = {
	{"accelerationEnabled", "Z", nullptr, $PRIVATE | $FINAL, $field(CGLVolatileSurfaceManager, accelerationEnabled)},
	{}
};

$MethodInfo _CGLVolatileSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(CGLVolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&CGLVolatileSurfaceManager::init$))},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"initContents", "()V", nullptr, $PUBLIC},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED},
	{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _CGLVolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.CGLVolatileSurfaceManager",
	"sun.awt.image.VolatileSurfaceManager",
	nullptr,
	_CGLVolatileSurfaceManager_FieldInfo_,
	_CGLVolatileSurfaceManager_MethodInfo_
};

$Object* allocate$CGLVolatileSurfaceManager($Class* clazz) {
	return $of($alloc(CGLVolatileSurfaceManager));
}

void CGLVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
	int32_t transparency = $nc(vImg)->getTransparency();
	$var($CGLGraphicsConfig, gc, $cast($CGLGraphicsConfig, vImg->getGraphicsConfig()));
	this->accelerationEnabled = $nc(gc)->isCapPresent(12) && transparency != $Transparency::BITMASK;
}

bool CGLVolatileSurfaceManager::isAccelerationEnabled() {
	return this->accelerationEnabled;
}

$SurfaceData* CGLVolatileSurfaceManager::initAcceleratedSurface() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($CGLGraphicsConfig, gc, $cast($CGLGraphicsConfig, $nc(this->vImg)->getGraphicsConfig()));
		$var($ColorModel, cm, $nc(gc)->getColorModel($nc(this->vImg)->getTransparency()));
		int32_t type = $nc(this->vImg)->getForcedAccelSurfaceType();
		if (type == $OGLSurfaceData::UNDEFINED) {
			type = $OGLSurfaceData::FBOBJECT;
		}
		$var($CGLGraphicsConfig, var$0, gc);
		int32_t var$1 = $nc(this->vImg)->getWidth();
		return $CGLSurfaceData::createData(var$0, var$1, $nc(this->vImg)->getHeight(), cm, this->vImg, type);
	} catch ($NullPointerException& ignored) {
		return nullptr;
	} catch ($OutOfMemoryError& ignored) {
		return nullptr;
	}
	$shouldNotReachHere();
}

bool CGLVolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	return ((gc == nullptr) || (gc == $nc(this->vImg)->getGraphicsConfig()));
}

void CGLVolatileSurfaceManager::initContents() {
	if ($nc(this->vImg)->getForcedAccelSurfaceType() != $OGLSurfaceData::TEXTURE) {
		$VolatileSurfaceManager::initContents();
	}
}

CGLVolatileSurfaceManager::CGLVolatileSurfaceManager() {
}

$Class* CGLVolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(CGLVolatileSurfaceManager, name, initialize, &_CGLVolatileSurfaceManager_ClassInfo_, allocate$CGLVolatileSurfaceManager);
	return class$;
}

$Class* CGLVolatileSurfaceManager::class$ = nullptr;

		} // opengl
	} // java2d
} // sun