#include <sun/swing/ImageCache.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/AbstractList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/ListIterator.h>
#include <sun/swing/ImageCache$Entry.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AbstractList = ::java::util::AbstractList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $ListIterator = ::java::util::ListIterator;
using $ImageCache$Entry = ::sun::swing::ImageCache$Entry;

namespace sun {
	namespace swing {

$FieldInfo _ImageCache_FieldInfo_[] = {
	{"maxCount", "I", nullptr, $PRIVATE, $field(ImageCache, maxCount)},
	{"entries", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/lang/ref/SoftReference<Lsun/swing/ImageCache$Entry;>;>;", $PRIVATE | $FINAL, $field(ImageCache, entries)},
	{}
};

$MethodInfo _ImageCache_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ImageCache::*)(int32_t)>(&ImageCache::init$))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getEntry", "(Ljava/lang/Object;Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Lsun/swing/ImageCache$Entry;", nullptr, $PRIVATE, $method(static_cast<$ImageCache$Entry*(ImageCache::*)(Object$*,$GraphicsConfiguration*,int32_t,int32_t,$ObjectArray*)>(&ImageCache::getEntry))},
	{"getImage", "(Ljava/lang/Object;Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"setImage", "(Ljava/lang/Object;Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setMaxCount", "(I)V", nullptr, 0},
	{}
};

$InnerClassInfo _ImageCache_InnerClassesInfo_[] = {
	{"sun.swing.ImageCache$Entry", "sun.swing.ImageCache", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ImageCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.ImageCache",
	"java.lang.Object",
	nullptr,
	_ImageCache_FieldInfo_,
	_ImageCache_MethodInfo_,
	nullptr,
	nullptr,
	_ImageCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.ImageCache$Entry"
};

$Object* allocate$ImageCache($Class* clazz) {
	return $of($alloc(ImageCache));
}

void ImageCache::init$(int32_t maxCount) {
	this->maxCount = maxCount;
	$set(this, entries, $new($LinkedList));
}

void ImageCache::setMaxCount(int32_t maxCount) {
	this->maxCount = maxCount;
}

void ImageCache::flush() {
	$nc(this->entries)->clear();
}

$ImageCache$Entry* ImageCache::getEntry(Object$* key, $GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ImageCache$Entry, entry, nullptr);
	$var($Iterator, iter, $nc(this->entries)->listIterator());
	while ($nc(iter)->hasNext()) {
		$var($SoftReference, ref, $cast($SoftReference, iter->next()));
		$assign(entry, $cast($ImageCache$Entry, $nc(ref)->get()));
		if (entry == nullptr) {
			iter->remove();
		} else if ($nc(entry)->equals(config, w, h, args)) {
			iter->remove();
			$nc(this->entries)->addFirst(ref);
			return entry;
		}
	}
	$assign(entry, $new($ImageCache$Entry, config, w, h, args));
	if ($nc(this->entries)->size() >= this->maxCount) {
		$nc(this->entries)->removeLast();
	}
	$nc(this->entries)->addFirst($$new($SoftReference, entry));
	return entry;
}

$Image* ImageCache::getImage(Object$* key, $GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$var($ImageCache$Entry, entry, getEntry(key, config, w, h, args));
	return $nc(entry)->getImage();
}

void ImageCache::setImage(Object$* key, $GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args, $Image* image) {
	$var($ImageCache$Entry, entry, getEntry(key, config, w, h, args));
	$nc(entry)->setImage(image);
}

ImageCache::ImageCache() {
}

$Class* ImageCache::load$($String* name, bool initialize) {
	$loadClass(ImageCache, name, initialize, &_ImageCache_ClassInfo_, allocate$ImageCache);
	return class$;
}

$Class* ImageCache::class$ = nullptr;

	} // swing
} // sun