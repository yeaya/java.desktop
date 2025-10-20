#include <sun/awt/image/MultiResolutionToolkitImage$ObserverCache.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/MultiResolutionToolkitImage.h>
#include <sun/awt/image/ToolkitImage.h>
#include <jcpp.h>

#undef HEIGHT
#undef INSTANCE
#undef WIDTH

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $MultiResolutionToolkitImage = ::sun::awt::image::MultiResolutionToolkitImage;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _MultiResolutionToolkitImage$ObserverCache_FieldInfo_[] = {
	{"INSTANCE", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/image/ImageObserver;Ljava/awt/image/ImageObserver;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MultiResolutionToolkitImage$ObserverCache, INSTANCE)},
	{"concat", "Z", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionToolkitImage$ObserverCache, concat)},
	{"imageRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Image;>;", $PRIVATE | $FINAL, $field(MultiResolutionToolkitImage$ObserverCache, imageRef)},
	{"observerRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/ImageObserver;>;", $PRIVATE | $FINAL, $field(MultiResolutionToolkitImage$ObserverCache, observerRef)},
	{}
};

$MethodInfo _MultiResolutionToolkitImage$ObserverCache_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/ImageObserver;ZLjava/awt/Image;)V", nullptr, $PRIVATE, $method(static_cast<void(MultiResolutionToolkitImage$ObserverCache::*)($ImageObserver*,bool,$Image*)>(&MultiResolutionToolkitImage$ObserverCache::init$))},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiResolutionToolkitImage$ObserverCache_InnerClassesInfo_[] = {
	{"sun.awt.image.MultiResolutionToolkitImage$ObserverCache", "sun.awt.image.MultiResolutionToolkitImage", "ObserverCache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MultiResolutionToolkitImage$ObserverCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.image.MultiResolutionToolkitImage$ObserverCache",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	_MultiResolutionToolkitImage$ObserverCache_FieldInfo_,
	_MultiResolutionToolkitImage$ObserverCache_MethodInfo_,
	nullptr,
	nullptr,
	_MultiResolutionToolkitImage$ObserverCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.MultiResolutionToolkitImage"
};

$Object* allocate$MultiResolutionToolkitImage$ObserverCache($Class* clazz) {
	return $of($alloc(MultiResolutionToolkitImage$ObserverCache));
}

$Map* MultiResolutionToolkitImage$ObserverCache::INSTANCE = nullptr;

void MultiResolutionToolkitImage$ObserverCache::init$($ImageObserver* obs, bool concat, $Image* img) {
	this->concat = concat;
	$set(this, imageRef, $new($WeakReference, img));
	$set(this, observerRef, $new($WeakReference, obs));
}

bool MultiResolutionToolkitImage$ObserverCache::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ImageObserver, observer, $cast($ImageObserver, $nc(this->observerRef)->get()));
	$var($Image, image, $cast($Image, $nc(this->imageRef)->get()));
	if (observer == nullptr || image == nullptr) {
		return false;
	}
	if (((int32_t)(infoflags & (uint32_t)($ImageObserver::WIDTH | 56))) != 0) {
		width = (width + 1) / 2;
	}
	if (((int32_t)(infoflags & (uint32_t)($ImageObserver::HEIGHT | 56))) != 0) {
		height = (height + 1) / 2;
	}
	if (((int32_t)(infoflags & (uint32_t)56)) != 0) {
		x /= 2;
		y /= 2;
	}
	if (this->concat) {
		infoflags &= (uint32_t)$nc($($nc(($cast($ToolkitImage, image)))->getImageRep()))->check(nullptr);
	}
	return $nc(observer)->imageUpdate(image, infoflags, x, y, width, height);
}

void clinit$MultiResolutionToolkitImage$ObserverCache($Class* class$) {
	$assignStatic(MultiResolutionToolkitImage$ObserverCache::INSTANCE, $new($WeakHashMap));
}

MultiResolutionToolkitImage$ObserverCache::MultiResolutionToolkitImage$ObserverCache() {
}

$Class* MultiResolutionToolkitImage$ObserverCache::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionToolkitImage$ObserverCache, name, initialize, &_MultiResolutionToolkitImage$ObserverCache_ClassInfo_, clinit$MultiResolutionToolkitImage$ObserverCache, allocate$MultiResolutionToolkitImage$ObserverCache);
	return class$;
}

$Class* MultiResolutionToolkitImage$ObserverCache::class$ = nullptr;

		} // image
	} // awt
} // sun