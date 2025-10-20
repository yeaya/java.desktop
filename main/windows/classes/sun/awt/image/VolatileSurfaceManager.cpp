#include <sun/awt/image/VolatileSurfaceManager.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/awt/image/VolatileSurfaceManager$AcceleratedImageCapabilities.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

#undef IMAGE_INCOMPATIBLE
#undef IMAGE_OK
#undef IMAGE_RESTORED

using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $Raster = ::java::awt::image::Raster;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $VolatileSurfaceManager$AcceleratedImageCapabilities = ::sun::awt::image::VolatileSurfaceManager$AcceleratedImageCapabilities;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _VolatileSurfaceManager_FieldInfo_[] = {
	{"vImg", "Lsun/awt/image/SunVolatileImage;", nullptr, $PROTECTED, $field(VolatileSurfaceManager, vImg)},
	{"atCurrent", "Ljava/awt/geom/AffineTransform;", nullptr, $PROTECTED, $field(VolatileSurfaceManager, atCurrent)},
	{"sdAccel", "Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $field(VolatileSurfaceManager, sdAccel)},
	{"sdBackup", "Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $field(VolatileSurfaceManager, sdBackup)},
	{"sdCurrent", "Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $field(VolatileSurfaceManager, sdCurrent)},
	{"sdPrevious", "Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $field(VolatileSurfaceManager, sdPrevious)},
	{"lostSurface", "Z", nullptr, $PROTECTED, $field(VolatileSurfaceManager, lostSurface)},
	{"context", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(VolatileSurfaceManager, context)},
	{}
};

$MethodInfo _VolatileSurfaceManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(static_cast<void(VolatileSurfaceManager::*)($SunVolatileImage*,Object$*)>(&VolatileSurfaceManager::init$))},
	{"acceleratedSurfaceLost", "()V", nullptr, $PUBLIC},
	{"contentsLost", "()Z", nullptr, $PUBLIC},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBackupSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED},
	{"getCapabilities", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getPrimarySurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED | $ABSTRACT},
	{"initContents", "()V", nullptr, $PUBLIC},
	{"initialize", "()V", nullptr, $PUBLIC},
	{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED | $ABSTRACT},
	{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"restoreAcceleratedSurface", "()V", nullptr, $PROTECTED},
	{"restoreContents", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljava/awt/GraphicsConfiguration;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VolatileSurfaceManager_InnerClassesInfo_[] = {
	{"sun.awt.image.VolatileSurfaceManager$AcceleratedImageCapabilities", "sun.awt.image.VolatileSurfaceManager", "AcceleratedImageCapabilities", $PRIVATE},
	{}
};

$ClassInfo _VolatileSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.image.VolatileSurfaceManager",
	"sun.awt.image.SurfaceManager",
	"sun.awt.DisplayChangedListener",
	_VolatileSurfaceManager_FieldInfo_,
	_VolatileSurfaceManager_MethodInfo_,
	nullptr,
	nullptr,
	_VolatileSurfaceManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.VolatileSurfaceManager$AcceleratedImageCapabilities"
};

$Object* allocate$VolatileSurfaceManager($Class* clazz) {
	return $of($alloc(VolatileSurfaceManager));
}

int32_t VolatileSurfaceManager::hashCode() {
	 return this->$SurfaceManager::hashCode();
}

bool VolatileSurfaceManager::equals(Object$* arg0) {
	 return this->$SurfaceManager::equals(arg0);
}

$Object* VolatileSurfaceManager::clone() {
	 return this->$SurfaceManager::clone();
}

$String* VolatileSurfaceManager::toString() {
	 return this->$SurfaceManager::toString();
}

void VolatileSurfaceManager::finalize() {
	this->$SurfaceManager::finalize();
}

void VolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$useLocalCurrentObjectStackCache();
	$SurfaceManager::init$();
	$set(this, vImg, vImg);
	$set(this, context, context);
	$set(this, atCurrent, $nc($($nc(vImg)->getGraphicsConfig()))->getDefaultTransform());
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	if ($instanceOf($SunGraphicsEnvironment, ge)) {
		$nc(($cast($SunGraphicsEnvironment, ge)))->addDisplayChangedListener(this);
	}
}

void VolatileSurfaceManager::initialize() {
	if (isAccelerationEnabled()) {
		$set(this, sdAccel, initAcceleratedSurface());
		if (this->sdAccel != nullptr) {
			$set(this, sdCurrent, this->sdAccel);
		}
	}
	if (this->sdCurrent == nullptr && $nc(this->vImg)->getForcedAccelSurfaceType() == 0) {
		$set(this, sdCurrent, getBackupSurface());
	}
}

$SurfaceData* VolatileSurfaceManager::getPrimarySurfaceData() {
	return this->sdCurrent;
}

int32_t VolatileSurfaceManager::validate($GraphicsConfiguration* gc) {
	int32_t returnCode = $VolatileImage::IMAGE_OK;
	bool lostSurfaceTmp = this->lostSurface;
	this->lostSurface = false;
	if (isAccelerationEnabled()) {
		if (!isConfigValid(gc)) {
			returnCode = $VolatileImage::IMAGE_INCOMPATIBLE;
		} else if (this->sdAccel == nullptr) {
			$set(this, sdAccel, initAcceleratedSurface());
			if (this->sdAccel != nullptr) {
				$set(this, sdCurrent, this->sdAccel);
				$set(this, sdBackup, nullptr);
				returnCode = $VolatileImage::IMAGE_RESTORED;
			} else {
				$set(this, sdCurrent, getBackupSurface());
			}
		} else if ($nc(this->sdAccel)->isSurfaceLost()) {
			try {
				restoreAcceleratedSurface();
				$set(this, sdCurrent, this->sdAccel);
				$nc(this->sdAccel)->setSurfaceLost(false);
				$set(this, sdBackup, nullptr);
				returnCode = $VolatileImage::IMAGE_RESTORED;
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				$set(this, sdCurrent, getBackupSurface());
			}
		} else if (lostSurfaceTmp) {
			returnCode = $VolatileImage::IMAGE_RESTORED;
		}
	} else if (this->sdAccel != nullptr) {
		$set(this, sdCurrent, getBackupSurface());
		$set(this, sdAccel, nullptr);
		returnCode = $VolatileImage::IMAGE_RESTORED;
	} else if (lostSurfaceTmp) {
		returnCode = $VolatileImage::IMAGE_RESTORED;
	}
	if ((returnCode != $VolatileImage::IMAGE_INCOMPATIBLE) && (this->sdCurrent != this->sdPrevious)) {
		$set(this, sdPrevious, this->sdCurrent);
		returnCode = $VolatileImage::IMAGE_RESTORED;
	}
	if (returnCode == $VolatileImage::IMAGE_RESTORED) {
		initContents();
	}
	return returnCode;
}

bool VolatileSurfaceManager::contentsLost() {
	return this->lostSurface;
}

$SurfaceData* VolatileSurfaceManager::getBackupSurface() {
	$useLocalCurrentObjectStackCache();
	if (this->sdBackup == nullptr) {
		$var($GraphicsConfiguration, gc, $nc(this->vImg)->getGraphicsConfig());
		$var($AffineTransform, tx, $nc(gc)->getDefaultTransform());
		double scaleX = $nc(tx)->getScaleX();
		double scaleY = tx->getScaleY();
		$var($BufferedImage, bImg, $nc(this->vImg)->getBackupImage(scaleX, scaleY));
		$nc($($SunWritableRaster::stealTrackable($($nc($($nc(bImg)->getRaster()))->getDataBuffer()))))->setUntrackable();
		$set(this, sdBackup, $BufImgSurfaceData::createData(bImg, scaleX, scaleY));
	}
	return this->sdBackup;
}

void VolatileSurfaceManager::initContents() {
	if (this->sdCurrent != nullptr) {
		$var($Graphics, g, $nc(this->vImg)->createGraphics());
		int32_t var$0 = $nc(this->vImg)->getWidth();
		$nc(g)->clearRect(0, 0, var$0, $nc(this->vImg)->getHeight());
		g->dispose();
	}
}

$SurfaceData* VolatileSurfaceManager::restoreContents() {
	return getBackupSurface();
}

void VolatileSurfaceManager::acceleratedSurfaceLost() {
	if (isAccelerationEnabled() && (this->sdCurrent == this->sdAccel)) {
		this->lostSurface = true;
	}
}

void VolatileSurfaceManager::restoreAcceleratedSurface() {
}

void VolatileSurfaceManager::displayChanged() {
	$useLocalCurrentObjectStackCache();
	this->lostSurface = true;
	if (this->sdAccel != nullptr) {
		$set(this, sdBackup, nullptr);
		$var($SurfaceData, oldData, this->sdAccel);
		$set(this, sdAccel, nullptr);
		$nc(oldData)->invalidate();
		$set(this, sdCurrent, getBackupSurface());
	}
	$nc(this->vImg)->updateGraphicsConfig();
	$var($AffineTransform, atUpdated, $nc($($nc(this->vImg)->getGraphicsConfig()))->getDefaultTransform());
	if (!isAccelerationEnabled()) {
		if (!$nc(atUpdated)->equals(this->atCurrent)) {
			$set(this, sdBackup, nullptr);
			$set(this, sdCurrent, getBackupSurface());
		} else {
			this->lostSurface = false;
		}
	}
	$set(this, atCurrent, atUpdated);
}

void VolatileSurfaceManager::paletteChanged() {
	this->lostSurface = true;
}

bool VolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	bool var$0 = (gc == nullptr);
	if (!var$0) {
		var$0 = ($nc(gc)->getDevice() == $nc($($nc(this->vImg)->getGraphicsConfig()))->getDevice());
	}
	return (var$0);
}

$ImageCapabilities* VolatileSurfaceManager::getCapabilities($GraphicsConfiguration* gc) {
	if (isConfigValid(gc)) {
		return isAccelerationEnabled() ? static_cast<$ImageCapabilities*>($new($VolatileSurfaceManager$AcceleratedImageCapabilities, this)) : $new($ImageCapabilities, false);
	}
	return $SurfaceManager::getCapabilities(gc);
}

void VolatileSurfaceManager::flush() {
	this->lostSurface = true;
	$var($SurfaceData, oldSD, this->sdAccel);
	$set(this, sdAccel, nullptr);
	if (oldSD != nullptr) {
		oldSD->flush();
	}
}

VolatileSurfaceManager::VolatileSurfaceManager() {
}

$Class* VolatileSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(VolatileSurfaceManager, name, initialize, &_VolatileSurfaceManager_ClassInfo_, allocate$VolatileSurfaceManager);
	return class$;
}

$Class* VolatileSurfaceManager::class$ = nullptr;

		} // image
	} // awt
} // sun