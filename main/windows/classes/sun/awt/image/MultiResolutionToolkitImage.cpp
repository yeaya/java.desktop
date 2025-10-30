#include <sun/awt/image/MultiResolutionToolkitImage.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <sun/awt/image/MultiResolutionToolkitImage$ObserverCache.h>
#include <sun/awt/image/ToolkitImage.h>
#include <jcpp.h>

#undef BITS_INFO
#undef INSTANCE

using $ImageArray = $Array<::java::awt::Image>;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Function = ::java::util::function::Function;
using $MultiResolutionToolkitImage$ObserverCache = ::sun::awt::image::MultiResolutionToolkitImage$ObserverCache;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;

namespace sun {
	namespace awt {
		namespace image {

class MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0 : public $Function {
	$class(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, $NO_CLASS_INIT, $Function)
public:
	void init$(bool concatenateInfo, $Image* image) {
		this->concatenateInfo = concatenateInfo;
		$set(this, image, image);
	}
	virtual $Object* apply(Object$* key) override {
		 return $of(MultiResolutionToolkitImage::lambda$getResolutionVariantObserver$0(concatenateInfo, image, $cast($ImageObserver, key)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0>());
	}
	bool concatenateInfo = false;
	$Image* image = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::fieldInfos[3] = {
	{"concatenateInfo", "Z", nullptr, $PUBLIC, $field(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, concatenateInfo)},
	{"image", "Ljava/awt/Image;", nullptr, $PUBLIC, $field(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, image)},
	{}
};
$MethodInfo MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::methodInfos[3] = {
	{"<init>", "(ZLjava/awt/Image;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::*)(bool,$Image*)>(&MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.image.MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::class$ = nullptr;

$FieldInfo _MultiResolutionToolkitImage_FieldInfo_[] = {
	{"resolutionVariant", "Ljava/awt/Image;", nullptr, 0, $field(MultiResolutionToolkitImage, resolutionVariant)},
	{"BITS_INFO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MultiResolutionToolkitImage, BITS_INFO)},
	{}
};

$MethodInfo _MultiResolutionToolkitImage_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Image;Ljava/awt/Image;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiResolutionToolkitImage::*)($Image*,$Image*)>(&MultiResolutionToolkitImage::init$))},
	{"checkSize", "(DD)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(double,double)>(&MultiResolutionToolkitImage::checkSize))},
	{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getResolutionVariant", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getResolutionVariantObserver", "(Ljava/awt/Image;Ljava/awt/image/ImageObserver;IIII)Ljava/awt/image/ImageObserver;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImageObserver*(*)($Image*,$ImageObserver*,int32_t,int32_t,int32_t,int32_t)>(&MultiResolutionToolkitImage::getResolutionVariantObserver))},
	{"getResolutionVariantObserver", "(Ljava/awt/Image;Ljava/awt/image/ImageObserver;IIIIZ)Ljava/awt/image/ImageObserver;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImageObserver*(*)($Image*,$ImageObserver*,int32_t,int32_t,int32_t,int32_t,bool)>(&MultiResolutionToolkitImage::getResolutionVariantObserver))},
	{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC},
	{"lambda$getResolutionVariantObserver$0", "(ZLjava/awt/Image;Ljava/awt/image/ImageObserver;)Ljava/awt/image/ImageObserver;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ImageObserver*(*)(bool,$Image*,$ImageObserver*)>(&MultiResolutionToolkitImage::lambda$getResolutionVariantObserver$0))},
	{"map", "(Lsun/awt/image/MultiResolutionToolkitImage;Ljava/util/function/Function;)Ljava/awt/Image;", "(Lsun/awt/image/MultiResolutionToolkitImage;Ljava/util/function/Function<Ljava/awt/Image;Ljava/awt/Image;>;)Ljava/awt/Image;", $PUBLIC | $STATIC, $method(static_cast<$Image*(*)(MultiResolutionToolkitImage*,$Function*)>(&MultiResolutionToolkitImage::map))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiResolutionToolkitImage_InnerClassesInfo_[] = {
	{"sun.awt.image.MultiResolutionToolkitImage$ObserverCache", "sun.awt.image.MultiResolutionToolkitImage", "ObserverCache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MultiResolutionToolkitImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.MultiResolutionToolkitImage",
	"sun.awt.image.ToolkitImage",
	"java.awt.image.MultiResolutionImage",
	_MultiResolutionToolkitImage_FieldInfo_,
	_MultiResolutionToolkitImage_MethodInfo_,
	nullptr,
	nullptr,
	_MultiResolutionToolkitImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.MultiResolutionToolkitImage$ObserverCache"
};

$Object* allocate$MultiResolutionToolkitImage($Class* clazz) {
	return $of($alloc(MultiResolutionToolkitImage));
}

int32_t MultiResolutionToolkitImage::hashCode() {
	 return this->$ToolkitImage::hashCode();
}

bool MultiResolutionToolkitImage::equals(Object$* arg0) {
	 return this->$ToolkitImage::equals(arg0);
}

$Object* MultiResolutionToolkitImage::clone() {
	 return this->$ToolkitImage::clone();
}

$String* MultiResolutionToolkitImage::toString() {
	 return this->$ToolkitImage::toString();
}

void MultiResolutionToolkitImage::finalize() {
	this->$ToolkitImage::finalize();
}

void MultiResolutionToolkitImage::init$($Image* lowResolutionImage, $Image* resolutionVariant) {
	$ToolkitImage::init$($($nc(lowResolutionImage)->getSource()));
	$set(this, resolutionVariant, resolutionVariant);
}

$Image* MultiResolutionToolkitImage::getResolutionVariant(double destWidth, double destHeight) {
	checkSize(destWidth, destHeight);
	bool var$0 = destWidth <= getWidth();
	return (var$0 && destHeight <= getHeight()) ? static_cast<$Image*>(this) : this->resolutionVariant;
}

$Image* MultiResolutionToolkitImage::map(MultiResolutionToolkitImage* mrImage, $Function* mapper) {
	$init(MultiResolutionToolkitImage);
	$useLocalCurrentObjectStackCache();
	$var($Image, baseImage, $cast($Image, $nc(mapper)->apply(mrImage)));
	$var($Image, rvImage, $cast($Image, mapper->apply($nc(mrImage)->resolutionVariant)));
	return $new(MultiResolutionToolkitImage, baseImage, rvImage);
}

void MultiResolutionToolkitImage::checkSize(double width, double height) {
	$init(MultiResolutionToolkitImage);
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

$Image* MultiResolutionToolkitImage::getResolutionVariant() {
	return this->resolutionVariant;
}

$List* MultiResolutionToolkitImage::getResolutionVariants() {
	return $Arrays::asList($$new($ImageArray, {
		static_cast<$Image*>(this),
		this->resolutionVariant
	}));
}

$ImageObserver* MultiResolutionToolkitImage::getResolutionVariantObserver($Image* image, $ImageObserver* observer, int32_t imgWidth, int32_t imgHeight, int32_t rvWidth, int32_t rvHeight) {
	$init(MultiResolutionToolkitImage);
	return getResolutionVariantObserver(image, observer, imgWidth, imgHeight, rvWidth, rvHeight, false);
}

$ImageObserver* MultiResolutionToolkitImage::getResolutionVariantObserver($Image* image, $ImageObserver* observer, int32_t imgWidth, int32_t imgHeight, int32_t rvWidth, int32_t rvHeight, bool concatenateInfo) {
	$init(MultiResolutionToolkitImage);
	if (observer == nullptr) {
		return nullptr;
	}
	$init($MultiResolutionToolkitImage$ObserverCache);
	$synchronized($MultiResolutionToolkitImage$ObserverCache::INSTANCE) {
		return $cast($ImageObserver, $nc($MultiResolutionToolkitImage$ObserverCache::INSTANCE)->computeIfAbsent(observer, static_cast<$Function*>($$new(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, concatenateInfo, image))));
	}
}

$ImageObserver* MultiResolutionToolkitImage::lambda$getResolutionVariantObserver$0(bool concatenateInfo, $Image* image, $ImageObserver* key) {
	$init(MultiResolutionToolkitImage);
	return $new($MultiResolutionToolkitImage$ObserverCache, key, concatenateInfo, image);
}

MultiResolutionToolkitImage::MultiResolutionToolkitImage() {
}

$Class* MultiResolutionToolkitImage::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::classInfo$.name)) {
			return MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::load$(name, initialize);
		}
	}
	$loadClass(MultiResolutionToolkitImage, name, initialize, &_MultiResolutionToolkitImage_ClassInfo_, allocate$MultiResolutionToolkitImage);
	return class$;
}

$Class* MultiResolutionToolkitImage::class$ = nullptr;

		} // image
	} // awt
} // sun