#include <java/awt/image/BaseMultiResolutionImage.h>

#include <java/awt/Image.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ImageArray = $Array<::java::awt::Image>;
using $Image = ::java::awt::Image;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _BaseMultiResolutionImage_FieldInfo_[] = {
	{"baseImageIndex", "I", nullptr, $PRIVATE | $FINAL, $field(BaseMultiResolutionImage, baseImageIndex)},
	{"resolutionVariants", "[Ljava/awt/Image;", nullptr, $PRIVATE | $FINAL, $field(BaseMultiResolutionImage, resolutionVariants)},
	{}
};

$MethodInfo _BaseMultiResolutionImage_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Image;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(BaseMultiResolutionImage::*)($ImageArray*)>(&BaseMultiResolutionImage::init$))},
	{"<init>", "(I[Ljava/awt/Image;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(BaseMultiResolutionImage::*)(int32_t,$ImageArray*)>(&BaseMultiResolutionImage::init$))},
	{"checkSize", "(DD)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(double,double)>(&BaseMultiResolutionImage::checkSize))},
	{"getBaseImage", "()Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC},
	{}
};

$ClassInfo _BaseMultiResolutionImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.BaseMultiResolutionImage",
	"java.awt.image.AbstractMultiResolutionImage",
	nullptr,
	_BaseMultiResolutionImage_FieldInfo_,
	_BaseMultiResolutionImage_MethodInfo_
};

$Object* allocate$BaseMultiResolutionImage($Class* clazz) {
	return $of($alloc(BaseMultiResolutionImage));
}

void BaseMultiResolutionImage::init$($ImageArray* resolutionVariants) {
	BaseMultiResolutionImage::init$(0, resolutionVariants);
}

void BaseMultiResolutionImage::init$(int32_t baseImageIndex, $ImageArray* resolutionVariants) {
	$useLocalCurrentObjectStackCache();
	$AbstractMultiResolutionImage::init$();
	if (resolutionVariants == nullptr || $nc(resolutionVariants)->length == 0) {
		$throwNew($IllegalArgumentException, "Null or zero-length array is passed"_s);
	}
	if (baseImageIndex < 0 || baseImageIndex >= $nc(resolutionVariants)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"Invalid base image index: "_s, $$str(baseImageIndex)}));
	}
	this->baseImageIndex = baseImageIndex;
	$set(this, resolutionVariants, $fcast($ImageArray, $Arrays::copyOf(resolutionVariants, $nc(resolutionVariants)->length)));
	{
		$var($ImageArray, arr$, this->resolutionVariants);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Image, resolutionVariant, arr$->get(i$));
			{
				$Objects::requireNonNull($of(resolutionVariant), "Resolution variant can\'t be null"_s);
			}
		}
	}
}

$Image* BaseMultiResolutionImage::getResolutionVariant(double destImageWidth, double destImageHeight) {
	$useLocalCurrentObjectStackCache();
	checkSize(destImageWidth, destImageHeight);
	{
		$var($ImageArray, arr$, this->resolutionVariants);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Image, rvImage, arr$->get(i$));
			{
				bool var$0 = destImageWidth <= $nc(rvImage)->getWidth(nullptr);
				if (var$0 && destImageHeight <= rvImage->getHeight(nullptr)) {
					return rvImage;
				}
			}
		}
	}
	return $nc(this->resolutionVariants)->get($nc(this->resolutionVariants)->length - 1);
}

void BaseMultiResolutionImage::checkSize(double width, double height) {
	$init(BaseMultiResolutionImage);
	$useLocalCurrentObjectStackCache();
	if (width <= 0 || height <= 0) {
		$throwNew($IllegalArgumentException, $($String::format("Width (%s) or height (%s) cannot be <= 0"_s, $$new($ObjectArray, {
			$($of($Double::valueOf(width))),
			$($of($Double::valueOf(height)))
		}))));
	}
	bool var$0 = !$Double::isFinite(width);
	if (var$0 || !$Double::isFinite(height)) {
		$throwNew($IllegalArgumentException, $($String::format("Width (%s) or height (%s) is not finite"_s, $$new($ObjectArray, {
			$($of($Double::valueOf(width))),
			$($of($Double::valueOf(height)))
		}))));
	}
}

$List* BaseMultiResolutionImage::getResolutionVariants() {
	return $Collections::unmodifiableList($($Arrays::asList(this->resolutionVariants)));
}

$Image* BaseMultiResolutionImage::getBaseImage() {
	return $nc(this->resolutionVariants)->get(this->baseImageIndex);
}

BaseMultiResolutionImage::BaseMultiResolutionImage() {
}

$Class* BaseMultiResolutionImage::load$($String* name, bool initialize) {
	$loadClass(BaseMultiResolutionImage, name, initialize, &_BaseMultiResolutionImage_ClassInfo_, allocate$BaseMultiResolutionImage);
	return class$;
}

$Class* BaseMultiResolutionImage::class$ = nullptr;

		} // image
	} // awt
} // java