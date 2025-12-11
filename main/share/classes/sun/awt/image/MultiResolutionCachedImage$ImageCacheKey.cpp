#include <sun/awt/image/MultiResolutionCachedImage$ImageCacheKey.h>

#include <java/awt/Image.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _MultiResolutionCachedImage$ImageCacheKey_FieldInfo_[] = {
	{"pixelCount", "I", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionCachedImage$ImageCacheKey, pixelCount)},
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionCachedImage$ImageCacheKey, hash$)},
	{"w", "I", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionCachedImage$ImageCacheKey, w)},
	{"h", "I", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionCachedImage$ImageCacheKey, h)},
	{"baseImage", "Ljava/awt/Image;", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionCachedImage$ImageCacheKey, baseImage)},
	{}
};

$MethodInfo _MultiResolutionCachedImage$ImageCacheKey_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;II)V", nullptr, 0, $method(static_cast<void(MultiResolutionCachedImage$ImageCacheKey::*)($Image*,int32_t,int32_t)>(&MultiResolutionCachedImage$ImageCacheKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getPixelCount", "()I", nullptr, $PUBLIC},
	{"hash", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(MultiResolutionCachedImage$ImageCacheKey::*)()>(&MultiResolutionCachedImage$ImageCacheKey::hash))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiResolutionCachedImage$ImageCacheKey_InnerClassesInfo_[] = {
	{"sun.awt.image.MultiResolutionCachedImage$ImageCacheKey", "sun.awt.image.MultiResolutionCachedImage", "ImageCacheKey", $PRIVATE | $STATIC},
	{"sun.awt.image.ImageCache$PixelsKey", "sun.awt.image.ImageCache", "PixelsKey", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MultiResolutionCachedImage$ImageCacheKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.MultiResolutionCachedImage$ImageCacheKey",
	"java.lang.Object",
	"sun.awt.image.ImageCache$PixelsKey",
	_MultiResolutionCachedImage$ImageCacheKey_FieldInfo_,
	_MultiResolutionCachedImage$ImageCacheKey_MethodInfo_,
	nullptr,
	nullptr,
	_MultiResolutionCachedImage$ImageCacheKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.MultiResolutionCachedImage"
};

$Object* allocate$MultiResolutionCachedImage$ImageCacheKey($Class* clazz) {
	return $of($alloc(MultiResolutionCachedImage$ImageCacheKey));
}

void MultiResolutionCachedImage$ImageCacheKey::init$($Image* baseImage, int32_t w, int32_t h) {
	$set(this, baseImage, baseImage);
	this->w = w;
	this->h = h;
	this->pixelCount = w * h;
	this->hash$ = hash();
}

int32_t MultiResolutionCachedImage$ImageCacheKey::getPixelCount() {
	return this->pixelCount;
}

int32_t MultiResolutionCachedImage$ImageCacheKey::hash() {
	int32_t hash = $nc($of(this->baseImage))->hashCode();
	hash = 31 * hash + this->w;
	hash = 31 * hash + this->h;
	return hash;
}

int32_t MultiResolutionCachedImage$ImageCacheKey::hashCode() {
	return this->hash$;
}

bool MultiResolutionCachedImage$ImageCacheKey::equals(Object$* obj) {
	if ($instanceOf(MultiResolutionCachedImage$ImageCacheKey, obj)) {
		$var(MultiResolutionCachedImage$ImageCacheKey, key, $cast(MultiResolutionCachedImage$ImageCacheKey, obj));
		return this->baseImage == $nc(key)->baseImage && this->w == key->w && this->h == key->h;
	}
	return false;
}

MultiResolutionCachedImage$ImageCacheKey::MultiResolutionCachedImage$ImageCacheKey() {
}

$Class* MultiResolutionCachedImage$ImageCacheKey::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionCachedImage$ImageCacheKey, name, initialize, &_MultiResolutionCachedImage$ImageCacheKey_ClassInfo_, allocate$MultiResolutionCachedImage$ImageCacheKey);
	return class$;
}

$Class* MultiResolutionCachedImage$ImageCacheKey::class$ = nullptr;

		} // image
	} // awt
} // sun