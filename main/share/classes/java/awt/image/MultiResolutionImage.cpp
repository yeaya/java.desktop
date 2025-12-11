#include <java/awt/image/MultiResolutionImage.h>

#include <java/awt/Image.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _MultiResolutionImage_MethodInfo_[] = {
	{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MultiResolutionImage_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.MultiResolutionImage",
	nullptr,
	nullptr,
	nullptr,
	_MultiResolutionImage_MethodInfo_
};

$Object* allocate$MultiResolutionImage($Class* clazz) {
	return $of($alloc(MultiResolutionImage));
}

$Class* MultiResolutionImage::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionImage, name, initialize, &_MultiResolutionImage_ClassInfo_, allocate$MultiResolutionImage);
	return class$;
}

$Class* MultiResolutionImage::class$ = nullptr;

		} // image
	} // awt
} // java