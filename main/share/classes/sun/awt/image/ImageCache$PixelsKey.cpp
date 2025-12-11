#include <sun/awt/image/ImageCache$PixelsKey.h>

#include <sun/awt/image/ImageCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _ImageCache$PixelsKey_MethodInfo_[] = {
	{"getPixelCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ImageCache$PixelsKey_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageCache$PixelsKey", "sun.awt.image.ImageCache", "PixelsKey", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImageCache$PixelsKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.image.ImageCache$PixelsKey",
	nullptr,
	nullptr,
	nullptr,
	_ImageCache$PixelsKey_MethodInfo_,
	nullptr,
	nullptr,
	_ImageCache$PixelsKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.ImageCache"
};

$Object* allocate$ImageCache$PixelsKey($Class* clazz) {
	return $of($alloc(ImageCache$PixelsKey));
}

$Class* ImageCache$PixelsKey::load$($String* name, bool initialize) {
	$loadClass(ImageCache$PixelsKey, name, initialize, &_ImageCache$PixelsKey_ClassInfo_, allocate$ImageCache$PixelsKey);
	return class$;
}

$Class* ImageCache$PixelsKey::class$ = nullptr;

		} // image
	} // awt
} // sun