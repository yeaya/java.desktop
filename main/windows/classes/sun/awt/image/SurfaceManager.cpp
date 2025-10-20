#include <sun/awt/image/SurfaceManager.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/awt/image/BufImgSurfaceManager.h>
#include <sun/awt/image/SurfaceManager$FlushableCacheData.h>
#include <sun/awt/image/SurfaceManager$ImageAccessor.h>
#include <sun/awt/image/SurfaceManager$ImageCapabilitiesGc.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $BufImgSurfaceManager = ::sun::awt::image::BufImgSurfaceManager;
using $SurfaceManager$FlushableCacheData = ::sun::awt::image::SurfaceManager$FlushableCacheData;
using $SurfaceManager$ImageAccessor = ::sun::awt::image::SurfaceManager$ImageAccessor;
using $SurfaceManager$ImageCapabilitiesGc = ::sun::awt::image::SurfaceManager$ImageCapabilitiesGc;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _SurfaceManager_FieldInfo_[] = {
	{"imgaccessor", "Lsun/awt/image/SurfaceManager$ImageAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(SurfaceManager, imgaccessor)},
	{"cacheMap", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(SurfaceManager, cacheMap)},
	{}
};

$MethodInfo _SurfaceManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceManager::*)()>(&SurfaceManager::init$))},
	{"acceleratedSurfaceLost", "()V", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"flush", "(Z)V", nullptr, $SYNCHRONIZED},
	{"getCacheData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getCapabilities", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getImageScaleX", "(Ljava/awt/Image;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($Image*)>(&SurfaceManager::getImageScaleX))},
	{"getImageScaleY", "(Ljava/awt/Image;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($Image*)>(&SurfaceManager::getImageScaleY))},
	{"getManager", "(Ljava/awt/Image;)Lsun/awt/image/SurfaceManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SurfaceManager*(*)($Image*)>(&SurfaceManager::getManager))},
	{"getPrimarySurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{"restoreContents", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccelerationPriority", "(F)V", nullptr, $PUBLIC},
	{"setCacheData", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setImageAccessor", "(Lsun/awt/image/SurfaceManager$ImageAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($SurfaceManager$ImageAccessor*)>(&SurfaceManager::setImageAccessor))},
	{"setManager", "(Ljava/awt/Image;Lsun/awt/image/SurfaceManager;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Image*,SurfaceManager*)>(&SurfaceManager::setManager))},
	{}
};

$InnerClassInfo _SurfaceManager_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$FlushableCacheData", "sun.awt.image.SurfaceManager", "FlushableCacheData", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig", "sun.awt.image.SurfaceManager", "ProxiedGraphicsConfig", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.image.SurfaceManager$ImageCapabilitiesGc", "sun.awt.image.SurfaceManager", "ImageCapabilitiesGc", 0},
	{"sun.awt.image.SurfaceManager$ImageAccessor", "sun.awt.image.SurfaceManager", "ImageAccessor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.image.SurfaceManager",
	"java.lang.Object",
	nullptr,
	_SurfaceManager_FieldInfo_,
	_SurfaceManager_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.SurfaceManager$FlushableCacheData,sun.awt.image.SurfaceManager$ProxiedGraphicsConfig,sun.awt.image.SurfaceManager$ImageCapabilitiesGc,sun.awt.image.SurfaceManager$ImageAccessor"
};

$Object* allocate$SurfaceManager($Class* clazz) {
	return $of($alloc(SurfaceManager));
}

$SurfaceManager$ImageAccessor* SurfaceManager::imgaccessor = nullptr;

void SurfaceManager::init$() {
}

void SurfaceManager::setImageAccessor($SurfaceManager$ImageAccessor* ia) {
	$init(SurfaceManager);
	if (SurfaceManager::imgaccessor != nullptr) {
		$throwNew($InternalError, "Attempt to set ImageAccessor twice"_s);
	}
	$assignStatic(SurfaceManager::imgaccessor, ia);
}

SurfaceManager* SurfaceManager::getManager($Image* img) {
	$useLocalCurrentObjectStackCache();
	$init(SurfaceManager);
	$var(SurfaceManager, sMgr, $nc(SurfaceManager::imgaccessor)->getSurfaceManager(img));
	if (sMgr == nullptr) {
		try {
			$var($BufferedImage, bi, $cast($BufferedImage, img));
			$assign(sMgr, $new($BufImgSurfaceManager, bi));
			setManager(bi, sMgr);
		} catch ($ClassCastException&) {
			$var($ClassCastException, e, $catch());
			$throwNew($InvalidPipeException, "Invalid Image variant"_s);
		}
	}
	return sMgr;
}

void SurfaceManager::setManager($Image* img, SurfaceManager* mgr) {
	$init(SurfaceManager);
	$nc(SurfaceManager::imgaccessor)->setSurfaceManager(img, mgr);
}

$Object* SurfaceManager::getCacheData(Object$* key) {
	return $of((this->cacheMap == nullptr) ? ($Object*)nullptr : $nc(this->cacheMap)->get(key));
}

void SurfaceManager::setCacheData(Object$* key, Object$* value) {
	if (this->cacheMap == nullptr) {
		$synchronized(this) {
			if (this->cacheMap == nullptr) {
				$set(this, cacheMap, $new($ConcurrentHashMap, 2));
			}
		}
	}
	$nc(this->cacheMap)->put(key, value);
}

void SurfaceManager::acceleratedSurfaceLost() {
}

$ImageCapabilities* SurfaceManager::getCapabilities($GraphicsConfiguration* gc) {
	return $new($SurfaceManager$ImageCapabilitiesGc, this, gc);
}

void SurfaceManager::flush() {
	$synchronized(this) {
		flush(false);
	}
}

void SurfaceManager::flush(bool deaccelerate) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->cacheMap != nullptr) {
			$var($Iterator, i, $nc($($nc(this->cacheMap)->values()))->iterator());
			while ($nc(i)->hasNext()) {
				$var($Object, o, i->next());
				if ($instanceOf($SurfaceManager$FlushableCacheData, o)) {
					if ($nc(($cast($SurfaceManager$FlushableCacheData, o)))->flush(deaccelerate)) {
						i->remove();
					}
				}
			}
		}
	}
}

void SurfaceManager::setAccelerationPriority(float priority) {
	if (priority == 0.0f) {
		flush(true);
	}
}

double SurfaceManager::getImageScaleX($Image* img) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($VolatileImage, img))) {
		return (double)1;
	}
	$var(SurfaceManager, sm, getManager(img));
	return $nc($($nc(sm)->getPrimarySurfaceData()))->getDefaultScaleX();
}

double SurfaceManager::getImageScaleY($Image* img) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($VolatileImage, img))) {
		return (double)1;
	}
	$var(SurfaceManager, sm, getManager(img));
	return $nc($($nc(sm)->getPrimarySurfaceData()))->getDefaultScaleY();
}

SurfaceManager::SurfaceManager() {
}

$Class* SurfaceManager::load$($String* name, bool initialize) {
	$loadClass(SurfaceManager, name, initialize, &_SurfaceManager_ClassInfo_, allocate$SurfaceManager);
	return class$;
}

$Class* SurfaceManager::class$ = nullptr;

		} // image
	} // awt
} // sun