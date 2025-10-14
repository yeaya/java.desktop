#include <sun/awt/image/ImageCache$ImageSoftReference.h>

#include <java/awt/Image.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/ImageCache$PixelsKey.h>
#include <sun/awt/image/ImageCache.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $ImageCache = ::sun::awt::image::ImageCache;
using $ImageCache$PixelsKey = ::sun::awt::image::ImageCache$PixelsKey;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageCache$ImageSoftReference_FieldInfo_[] = {
	{"key", "Lsun/awt/image/ImageCache$PixelsKey;", nullptr, $FINAL, $field(ImageCache$ImageSoftReference, key)},
	{}
};

$MethodInfo _ImageCache$ImageSoftReference_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/ImageCache$PixelsKey;Ljava/awt/Image;Ljava/lang/ref/ReferenceQueue;)V", "(Lsun/awt/image/ImageCache$PixelsKey;Ljava/awt/Image;Ljava/lang/ref/ReferenceQueue<-Ljava/awt/Image;>;)V", 0, $method(static_cast<void(ImageCache$ImageSoftReference::*)($ImageCache$PixelsKey*,$Image*,$ReferenceQueue*)>(&ImageCache$ImageSoftReference::init$))},
	{}
};

$InnerClassInfo _ImageCache$ImageSoftReference_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageCache$ImageSoftReference", "sun.awt.image.ImageCache", "ImageSoftReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ImageCache$ImageSoftReference_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.ImageCache$ImageSoftReference",
	"java.lang.ref.SoftReference",
	nullptr,
	_ImageCache$ImageSoftReference_FieldInfo_,
	_ImageCache$ImageSoftReference_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/awt/Image;>;",
	nullptr,
	_ImageCache$ImageSoftReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.ImageCache"
};

$Object* allocate$ImageCache$ImageSoftReference($Class* clazz) {
	return $of($alloc(ImageCache$ImageSoftReference));
}

void ImageCache$ImageSoftReference::init$($ImageCache$PixelsKey* key, $Image* referent, $ReferenceQueue* q) {
	$SoftReference::init$(referent, q);
	$set(this, key, key);
}

ImageCache$ImageSoftReference::ImageCache$ImageSoftReference() {
}

$Class* ImageCache$ImageSoftReference::load$($String* name, bool initialize) {
	$loadClass(ImageCache$ImageSoftReference, name, initialize, &_ImageCache$ImageSoftReference_ClassInfo_, allocate$ImageCache$ImageSoftReference);
	return class$;
}

$Class* ImageCache$ImageSoftReference::class$ = nullptr;

		} // image
	} // awt
} // sun