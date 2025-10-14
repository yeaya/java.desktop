#include <sun/java2d/d3d/D3DVolatileSurfaceManager.h>

#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
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
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DScreenUpdateManager.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

#undef OPAQUE
#undef TRANSLUCENT

using $Component = ::java::awt::Component;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
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
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DScreenUpdateManager = ::sun::java2d::d3d::D3DScreenUpdateManager;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DVolatileSurfaceManager_FieldInfo_[] = {
	{"accelerationEnabled", "Z", nullptr, $PRIVATE, $field(D3DVolatileSurfaceManager, accelerationEnabled)},
	{"restoreCountdown", "I", nullptr, $PRIVATE, $field(D3DVolatileSurfaceManager, restoreCountdown)},
	{}
};

$MethodInfo _D3DVolatileSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(D3DVolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&D3DVolatileSurfaceManager::init$))},
	{"handleVItoScreenOp", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;)V", nullptr, $STATIC, $method(static_cast<void(*)($SurfaceData*,$SurfaceData*)>(&D3DVolatileSurfaceManager::handleVItoScreenOp))},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"initContents", "()V", nullptr, $PUBLIC},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED},
	{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED},
	{"restoreAcceleratedSurface", "()V", nullptr, $PROTECTED},
	{"restoreContents", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"setAccelerationEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setRestoreCountdown", "(I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(D3DVolatileSurfaceManager::*)(int32_t)>(&D3DVolatileSurfaceManager::setRestoreCountdown))},
	{}
};

$ClassInfo _D3DVolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.d3d.D3DVolatileSurfaceManager",
	"sun.awt.image.VolatileSurfaceManager",
	nullptr,
	_D3DVolatileSurfaceManager_FieldInfo_,
	_D3DVolatileSurfaceManager_MethodInfo_
};

$Object* allocate$D3DVolatileSurfaceManager($Class* clazz) {
	return $of($alloc(D3DVolatileSurfaceManager));
}

void D3DVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
	int32_t transparency = $nc(vImg)->getTransparency();
	$var($D3DGraphicsDevice, gd, $cast($D3DGraphicsDevice, $nc($(vImg->getGraphicsConfig()))->getDevice()));
	bool var$0 = (transparency == $Transparency::OPAQUE);
	if (!var$0) {
		bool var$1 = transparency == $Transparency::TRANSLUCENT;
		if (var$1) {
			bool var$2 = $nc(gd)->isCapPresent(2);
			var$1 = (var$2 || $nc(gd)->isCapPresent(4));
		}
		var$0 = (var$1);
	}
	this->accelerationEnabled = var$0;
}

bool D3DVolatileSurfaceManager::isAccelerationEnabled() {
	return this->accelerationEnabled;
}

void D3DVolatileSurfaceManager::setAccelerationEnabled(bool accelerationEnabled) {
	this->accelerationEnabled = accelerationEnabled;
}

$SurfaceData* D3DVolatileSurfaceManager::initAcceleratedSurface() {
	$var($SurfaceData, sData, nullptr);
	$var($Component, comp, $nc(this->vImg)->getComponent());
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	$var($WComponentPeer, peer, (comp != nullptr) ? $cast($WComponentPeer, $nc(acc)->getPeer(comp)) : ($WComponentPeer*)nullptr);
	try {
		bool forceback = false;
		if ($instanceOf($Boolean, this->context)) {
			forceback = $nc(($cast($Boolean, this->context)))->booleanValue();
		}
		if (forceback) {
			$assign(sData, $D3DSurfaceData::createData(peer, this->vImg));
		} else {
			$var($D3DGraphicsConfig, gc, $cast($D3DGraphicsConfig, $nc(this->vImg)->getGraphicsConfig()));
			$var($ColorModel, cm, $nc(gc)->getColorModel($nc(this->vImg)->getTransparency()));
			int32_t type = $nc(this->vImg)->getForcedAccelSurfaceType();
			if (type == 0) {
				type = 5;
			}
			$var($D3DGraphicsConfig, var$0, gc);
			int32_t var$1 = $nc(this->vImg)->getWidth();
			$assign(sData, $D3DSurfaceData::createData(var$0, var$1, $nc(this->vImg)->getHeight(), cm, this->vImg, type));
		}
	} catch ($NullPointerException&) {
		$var($NullPointerException, ex, $catch());
		$assign(sData, nullptr);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, er, $catch());
		$assign(sData, nullptr);
	} catch ($InvalidPipeException&) {
		$var($InvalidPipeException, ipe, $catch());
		$assign(sData, nullptr);
	}
	return sData;
}

bool D3DVolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	return ((gc == nullptr) || (gc == $nc(this->vImg)->getGraphicsConfig()));
}

void D3DVolatileSurfaceManager::setRestoreCountdown(int32_t count) {
	$synchronized(this) {
		this->restoreCountdown = count;
	}
}

void D3DVolatileSurfaceManager::restoreAcceleratedSurface() {
	$synchronized(this) {
		if (this->restoreCountdown > 0) {
			--this->restoreCountdown;
			$throwNew($InvalidPipeException, $$str({"Will attempt to restore surface  in "_s, $$str(this->restoreCountdown)}));
		}
	}
	$var($SurfaceData, sData, initAcceleratedSurface());
	if (sData != nullptr) {
		$set(this, sdAccel, sData);
	} else {
		$throwNew($InvalidPipeException, "could not restore surface"_s);
	}
}

$SurfaceData* D3DVolatileSurfaceManager::restoreContents() {
	acceleratedSurfaceLost();
	return $VolatileSurfaceManager::restoreContents();
}

void D3DVolatileSurfaceManager::handleVItoScreenOp($SurfaceData* src, $SurfaceData* dst) {
	$init(D3DVolatileSurfaceManager);
	if ($instanceOf($D3DSurfaceData, src) && $instanceOf($GDIWindowSurfaceData, dst)) {
		$var($D3DSurfaceData, d3dsd, $cast($D3DSurfaceData, src));
		$var($SurfaceManager, mgr, $SurfaceManager::getManager($cast($Image, $($nc(d3dsd)->getDestination()))));
		if ($instanceOf(D3DVolatileSurfaceManager, mgr)) {
			$var(D3DVolatileSurfaceManager, vsm, $cast(D3DVolatileSurfaceManager, mgr));
			if (vsm != nullptr) {
				$nc(d3dsd)->setSurfaceLost(true);
				$var($GDIWindowSurfaceData, wsd, $cast($GDIWindowSurfaceData, dst));
				$var($WComponentPeer, p, $nc(wsd)->getPeer());
				$var($WComponentPeer, var$0, p);
				$var($Win32GraphicsConfig, var$1, $cast($Win32GraphicsConfig, $nc(p)->getGraphicsConfiguration()));
				if ($D3DScreenUpdateManager::canUseD3DOnScreen(var$0, var$1, p->getBackBuffersNum())) {
					vsm->setRestoreCountdown(10);
				} else {
					vsm->setAccelerationEnabled(false);
				}
			}
		}
	}
}

void D3DVolatileSurfaceManager::initContents() {
	if ($nc(this->vImg)->getForcedAccelSurfaceType() != 3) {
		$VolatileSurfaceManager::initContents();
	}
}

D3DVolatileSurfaceManager::D3DVolatileSurfaceManager() {
}

$Class* D3DVolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(D3DVolatileSurfaceManager, name, initialize, &_D3DVolatileSurfaceManager_ClassInfo_, allocate$D3DVolatileSurfaceManager);
	return class$;
}

$Class* D3DVolatileSurfaceManager::class$ = nullptr;

		} // d3d
	} // java2d
} // sun