#include <sun/java2d/opengl/GLXVolatileSurfaceManager.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/BackBufferCapsProvider.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData.h>
#include <sun/java2d/opengl/GLXSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
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
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $BackBufferCapsProvider = ::sun::java2d::BackBufferCapsProvider;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXSurfaceData = ::sun::java2d::opengl::GLXSurfaceData;
using $GLXSurfaceData$GLXOffScreenSurfaceData = ::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $ExtendedBufferCapabilities = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities;
using $ExtendedBufferCapabilities$VSyncType = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _GLXVolatileSurfaceManager_FieldInfo_[] = {
	{"accelerationEnabled", "Z", nullptr, $PRIVATE | $FINAL, $field(GLXVolatileSurfaceManager, accelerationEnabled)},
	{}
};

$MethodInfo _GLXVolatileSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(GLXVolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&GLXVolatileSurfaceManager::init$))},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"initContents", "()V", nullptr, $PUBLIC},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED},
	{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GLXVolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.GLXVolatileSurfaceManager",
	"sun.awt.image.VolatileSurfaceManager",
	nullptr,
	_GLXVolatileSurfaceManager_FieldInfo_,
	_GLXVolatileSurfaceManager_MethodInfo_
};

$Object* allocate$GLXVolatileSurfaceManager($Class* clazz) {
	return $of($alloc(GLXVolatileSurfaceManager));
}

void GLXVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
	int32_t transparency = $nc(vImg)->getTransparency();
	$var($GLXGraphicsConfig, gc, $cast($GLXGraphicsConfig, vImg->getGraphicsConfig()));
	this->accelerationEnabled = $nc(gc)->isCapPresent(12) && transparency != $Transparency::BITMASK;
}

bool GLXVolatileSurfaceManager::isAccelerationEnabled() {
	return this->accelerationEnabled;
}

$SurfaceData* GLXVolatileSurfaceManager::initAcceleratedSurface() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, sData, nullptr);
	$var($Component, comp, $nc(this->vImg)->getComponent());
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	$var($X11ComponentPeer, peer, (comp != nullptr) ? $cast($X11ComponentPeer, $nc(acc)->getPeer(comp)) : ($X11ComponentPeer*)nullptr);
	try {
		bool createVSynced = false;
		bool forceback = false;
		if ($instanceOf($Boolean, this->context)) {
			forceback = $nc(($cast($Boolean, this->context)))->booleanValue();
			if (forceback && $instanceOf($BackBufferCapsProvider, peer)) {
				$var($BackBufferCapsProvider, provider, $cast($BackBufferCapsProvider, peer));
				$var($BufferCapabilities, caps, $nc(provider)->getBackBufferCaps());
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
			$assign(sData, $GLXSurfaceData::createData(peer, this->vImg, 4));
		} else {
			$var($GLXGraphicsConfig, gc, $cast($GLXGraphicsConfig, $nc(this->vImg)->getGraphicsConfig()));
			$var($ColorModel, cm, $nc(gc)->getColorModel($nc(this->vImg)->getTransparency()));
			int32_t type = $nc(this->vImg)->getForcedAccelSurfaceType();
			if (type == $OGLSurfaceData::UNDEFINED) {
				type = $OGLSurfaceData::FBOBJECT;
			}
			if (createVSynced) {
				$assign(sData, $GLXSurfaceData::createData(peer, this->vImg, type));
			} else {
				$var($GLXGraphicsConfig, var$1, gc);
				int32_t var$2 = $nc(this->vImg)->getWidth();
				$assign(sData, $GLXSurfaceData::createData(var$1, var$2, $nc(this->vImg)->getHeight(), cm, this->vImg, type));
			}
		}
	} catch ($NullPointerException& ex) {
		$assign(sData, nullptr);
	} catch ($OutOfMemoryError& er) {
		$assign(sData, nullptr);
	}
	return sData;
}

bool GLXVolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	return ((gc == nullptr) || (gc == $nc(this->vImg)->getGraphicsConfig()));
}

void GLXVolatileSurfaceManager::initContents() {
	if ($nc(this->vImg)->getForcedAccelSurfaceType() != $OGLSurfaceData::TEXTURE) {
		$VolatileSurfaceManager::initContents();
	}
}

GLXVolatileSurfaceManager::GLXVolatileSurfaceManager() {
}

$Class* GLXVolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(GLXVolatileSurfaceManager, name, initialize, &_GLXVolatileSurfaceManager_ClassInfo_, allocate$GLXVolatileSurfaceManager);
	return class$;
}

$Class* GLXVolatileSurfaceManager::class$ = nullptr;

		} // opengl
	} // java2d
} // sun