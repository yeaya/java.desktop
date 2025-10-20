#include <sun/java2d/opengl/WGLVolatileSurfaceManager.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>
#include <jcpp.h>

#undef BITMASK
#undef COPIED
#undef FBOBJECT
#undef TEXTURE
#undef UNDEFINED
#undef VSYNC_ON

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Component = ::java::awt::Component;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WGLSurfaceData = ::sun::java2d::opengl::WGLSurfaceData;
using $WGLSurfaceData$WGLOffScreenSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData;
using $ExtendedBufferCapabilities = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities;
using $ExtendedBufferCapabilities$VSyncType = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _WGLVolatileSurfaceManager_FieldInfo_[] = {
	{"accelerationEnabled", "Z", nullptr, $PRIVATE | $FINAL, $field(WGLVolatileSurfaceManager, accelerationEnabled)},
	{}
};

$MethodInfo _WGLVolatileSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(WGLVolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&WGLVolatileSurfaceManager::init$))},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"initContents", "()V", nullptr, $PUBLIC},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED},
	{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _WGLVolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.WGLVolatileSurfaceManager",
	"sun.awt.image.VolatileSurfaceManager",
	nullptr,
	_WGLVolatileSurfaceManager_FieldInfo_,
	_WGLVolatileSurfaceManager_MethodInfo_
};

$Object* allocate$WGLVolatileSurfaceManager($Class* clazz) {
	return $of($alloc(WGLVolatileSurfaceManager));
}

void WGLVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
	int32_t transparency = $nc(vImg)->getTransparency();
	$var($WGLGraphicsConfig, gc, $cast($WGLGraphicsConfig, vImg->getGraphicsConfig()));
	this->accelerationEnabled = $nc(gc)->isCapPresent(12) && transparency != $Transparency::BITMASK;
}

bool WGLVolatileSurfaceManager::isAccelerationEnabled() {
	return this->accelerationEnabled;
}

$SurfaceData* WGLVolatileSurfaceManager::initAcceleratedSurface() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, sData, nullptr);
	$var($Component, comp, $nc(this->vImg)->getComponent());
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	$var($WComponentPeer, peer, (comp != nullptr) ? $cast($WComponentPeer, $nc(acc)->getPeer(comp)) : ($WComponentPeer*)nullptr);
	try {
		bool createVSynced = false;
		bool forceback = false;
		if ($instanceOf($Boolean, this->context)) {
			forceback = $nc(($cast($Boolean, this->context)))->booleanValue();
			if (forceback) {
				$var($BufferCapabilities, caps, $nc(peer)->getBackBufferCaps());
				if ($instanceOf($ExtendedBufferCapabilities, caps)) {
					$var($ExtendedBufferCapabilities, ebc, $cast($ExtendedBufferCapabilities, caps));
					$init($ExtendedBufferCapabilities$VSyncType);
					bool var$0 = $nc(ebc)->getVSync() == $ExtendedBufferCapabilities$VSyncType::VSYNC_ON;
					$init($BufferCapabilities$FlipContents);
					if (var$0 && ebc->getFlipContents() == $BufferCapabilities$FlipContents::COPIED) {
						createVSynced = true;
						forceback = false;
					}
				}
			}
		}
		if (forceback) {
			$assign(sData, $WGLSurfaceData::createData(peer, this->vImg, 4));
		} else {
			$var($WGLGraphicsConfig, gc, $cast($WGLGraphicsConfig, $nc(this->vImg)->getGraphicsConfig()));
			$var($ColorModel, cm, $nc(gc)->getColorModel($nc(this->vImg)->getTransparency()));
			int32_t type = $nc(this->vImg)->getForcedAccelSurfaceType();
			if (type == $OGLSurfaceData::UNDEFINED) {
				type = $OGLSurfaceData::FBOBJECT;
			}
			if (createVSynced) {
				$assign(sData, $WGLSurfaceData::createData(peer, this->vImg, type));
			} else {
				$var($WGLGraphicsConfig, var$1, gc);
				int32_t var$2 = $nc(this->vImg)->getWidth();
				$assign(sData, $WGLSurfaceData::createData(var$1, var$2, $nc(this->vImg)->getHeight(), cm, this->vImg, type));
			}
		}
	} catch ($NullPointerException&) {
		$var($NullPointerException, ex, $catch());
		$assign(sData, nullptr);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, er, $catch());
		$assign(sData, nullptr);
	}
	return sData;
}

bool WGLVolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	return ((gc == nullptr) || (($instanceOf($WGLGraphicsConfig, gc)) && (gc == $nc(this->vImg)->getGraphicsConfig())));
}

void WGLVolatileSurfaceManager::initContents() {
	if ($nc(this->vImg)->getForcedAccelSurfaceType() != $OGLSurfaceData::TEXTURE) {
		$VolatileSurfaceManager::initContents();
	}
}

WGLVolatileSurfaceManager::WGLVolatileSurfaceManager() {
}

$Class* WGLVolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(WGLVolatileSurfaceManager, name, initialize, &_WGLVolatileSurfaceManager_ClassInfo_, allocate$WGLVolatileSurfaceManager);
	return class$;
}

$Class* WGLVolatileSurfaceManager::class$ = nullptr;

		} // opengl
	} // java2d
} // sun