#include <javax/swing/plaf/nimbus/ImageCache.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <javax/swing/plaf/nimbus/ImageCache$PixelCountSoftReference.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $ImageCache$PixelCountSoftReference = ::javax::swing::plaf::nimbus::ImageCache$PixelCountSoftReference;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _ImageCache_FieldInfo_[] = {
	{"map", "Ljava/util/LinkedHashMap;", "Ljava/util/LinkedHashMap<Ljava/lang/Integer;Ljavax/swing/plaf/nimbus/ImageCache$PixelCountSoftReference;>;", $PRIVATE | $FINAL, $field(ImageCache, map)},
	{"maxPixelCount", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache, maxPixelCount)},
	{"maxSingleImagePixelSize", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache, maxSingleImagePixelSize)},
	{"currentPixelCount", "I", nullptr, $PRIVATE, $field(ImageCache, currentPixelCount)},
	{"lock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE, $field(ImageCache, lock)},
	{"referenceQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/awt/Image;>;", $PRIVATE, $field(ImageCache, referenceQueue)},
	{"instance", "Ljavax/swing/plaf/nimbus/ImageCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageCache, instance)},
	{}
};

$MethodInfo _ImageCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageCache::*)()>(&ImageCache::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(ImageCache::*)(int32_t,int32_t)>(&ImageCache::init$))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getImage", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PUBLIC | $TRANSIENT},
	{"getInstance", "()Ljavax/swing/plaf/nimbus/ImageCache;", nullptr, $STATIC, $method(static_cast<ImageCache*(*)()>(&ImageCache::getInstance))},
	{"hash", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)I", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<int32_t(ImageCache::*)($GraphicsConfiguration*,int32_t,int32_t,$ObjectArray*)>(&ImageCache::hash))},
	{"isImageCachable", "(II)Z", nullptr, $PUBLIC},
	{"setImage", "(Ljava/awt/Image;Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Z", nullptr, $PUBLIC | $TRANSIENT},
	{}
};

$InnerClassInfo _ImageCache_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference", "javax.swing.plaf.nimbus.ImageCache", "PixelCountSoftReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ImageCache_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ImageCache",
	"java.lang.Object",
	nullptr,
	_ImageCache_FieldInfo_,
	_ImageCache_MethodInfo_,
	nullptr,
	nullptr,
	_ImageCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference"
};

$Object* allocate$ImageCache($Class* clazz) {
	return $of($alloc(ImageCache));
}

ImageCache* ImageCache::instance = nullptr;

ImageCache* ImageCache::getInstance() {
	$init(ImageCache);
	return ImageCache::instance;
}

void ImageCache::init$() {
	$set(this, map, $new($LinkedHashMap, 16, 0.75f, true));
	this->currentPixelCount = 0;
	$set(this, lock, $new($ReentrantReadWriteLock));
	$set(this, referenceQueue, $new($ReferenceQueue));
	this->maxPixelCount = (8 * 1024 * 1024) / 4;
	this->maxSingleImagePixelSize = 300 * 300;
}

void ImageCache::init$(int32_t maxPixelCount, int32_t maxSingleImagePixelSize) {
	$set(this, map, $new($LinkedHashMap, 16, 0.75f, true));
	this->currentPixelCount = 0;
	$set(this, lock, $new($ReentrantReadWriteLock));
	$set(this, referenceQueue, $new($ReferenceQueue));
	this->maxPixelCount = maxPixelCount;
	this->maxSingleImagePixelSize = maxSingleImagePixelSize;
}

void ImageCache::flush() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->lock)->readLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->map)->clear();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($($nc(this->lock)->readLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool ImageCache::isImageCachable(int32_t w, int32_t h) {
	return (w * h) < this->maxSingleImagePixelSize;
}

$Image* ImageCache::getImage($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->lock)->readLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Image, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($ImageCache$PixelCountSoftReference, ref, $cast($ImageCache$PixelCountSoftReference, $nc(this->map)->get($($Integer::valueOf(hash(config, w, h, args))))));
			if (ref != nullptr && ref->equals(config, w, h, args)) {
				$assign(var$2, $cast($Image, ref->get()));
				return$1 = true;
				goto $finally;
			} else {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($($nc(this->lock)->readLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ImageCache::setImage($Image* image, $GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	if (!isImageCachable(w, h)) {
		return false;
	}
	int32_t hash = this->hash(config, w, h, args);
	$nc($($nc(this->lock)->writeLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$var($ImageCache$PixelCountSoftReference, ref, $cast($ImageCache$PixelCountSoftReference, $nc(this->map)->get($($Integer::valueOf(hash)))));
			if (ref != nullptr && $equals(ref->get(), image)) {
				var$2 = true;
				return$1 = true;
				goto $finally;
			}
			if (ref != nullptr) {
				this->currentPixelCount -= ref->pixelCount;
				$nc(this->map)->remove($($Integer::valueOf(hash)));
			}
			int32_t var$3 = $nc(image)->getWidth(nullptr);
			int32_t newPixelCount = var$3 * image->getHeight(nullptr);
			this->currentPixelCount += newPixelCount;
			if (this->currentPixelCount > this->maxPixelCount) {
				while (($assign(ref, $cast($ImageCache$PixelCountSoftReference, $nc(this->referenceQueue)->poll()))) != nullptr) {
					$nc(this->map)->remove($($Integer::valueOf($nc(ref)->hash)));
					this->currentPixelCount -= $nc(ref)->pixelCount;
				}
			}
			if (this->currentPixelCount > this->maxPixelCount) {
				$var($Iterator, mapIter, $nc($($nc(this->map)->entrySet()))->iterator());
				while ((this->currentPixelCount > this->maxPixelCount) && $nc(mapIter)->hasNext()) {
					$var($Map$Entry, entry, $cast($Map$Entry, mapIter->next()));
					mapIter->remove();
					$var($Image, img, $cast($Image, $nc(($cast($ImageCache$PixelCountSoftReference, $($nc(entry)->getValue()))))->get()));
					if (img != nullptr) {
						img->flush();
					}
					this->currentPixelCount -= $nc(($cast($ImageCache$PixelCountSoftReference, $(entry->getValue()))))->pixelCount;
				}
			}
			$var($Object, var$4, $of($Integer::valueOf(hash)));
			$nc(this->map)->put(var$4, $$new($ImageCache$PixelCountSoftReference, image, this->referenceQueue, newPixelCount, hash, config, w, h, args));
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			$nc($($nc(this->lock)->writeLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ImageCache::hash($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	int32_t hash = 0;
	hash = (config != nullptr ? $nc($of(config))->hashCode() : 0);
	hash = 31 * hash + w;
	hash = 31 * hash + h;
	hash = 31 * hash + $Arrays::deepHashCode(args);
	return hash;
}

void clinit$ImageCache($Class* class$) {
	$assignStatic(ImageCache::instance, $new(ImageCache));
}

ImageCache::ImageCache() {
}

$Class* ImageCache::load$($String* name, bool initialize) {
	$loadClass(ImageCache, name, initialize, &_ImageCache_ClassInfo_, clinit$ImageCache, allocate$ImageCache);
	return class$;
}

$Class* ImageCache::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax