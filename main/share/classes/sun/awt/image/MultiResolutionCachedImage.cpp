#include <sun/awt/image/MultiResolutionCachedImage.h>

#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <java/awt/geom/Dimension2D.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <sun/awt/image/ImageCache$PixelsKey.h>
#include <sun/awt/image/ImageCache.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/MultiResolutionCachedImage$1.h>
#include <sun/awt/image/MultiResolutionCachedImage$ImageCacheKey.h>
#include <sun/awt/image/MultiResolutionToolkitImage.h>
#include <sun/awt/image/ToolkitImage.h>
#include <jcpp.h>

#undef ALLBITS
#undef HEIGHT
#undef PROPERTIES
#undef WIDTH

using $DimensionArray = $Array<::java::awt::Dimension>;
using $Dimension2DArray = $Array<::java::awt::geom::Dimension2D>;
using $Dimension = ::java::awt::Dimension;
using $Image = ::java::awt::Image;
using $Dimension2D = ::java::awt::geom::Dimension2D;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ImageCache = ::sun::awt::image::ImageCache;
using $ImageCache$PixelsKey = ::sun::awt::image::ImageCache$PixelsKey;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $MultiResolutionCachedImage$1 = ::sun::awt::image::MultiResolutionCachedImage$1;
using $MultiResolutionCachedImage$ImageCacheKey = ::sun::awt::image::MultiResolutionCachedImage$ImageCacheKey;
using $MultiResolutionToolkitImage = ::sun::awt::image::MultiResolutionToolkitImage;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;

namespace sun {
	namespace awt {
		namespace image {

class MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0 : public $Function {
	$class(MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0, $NO_CLASS_INIT, $Function)
public:
	void init$(MultiResolutionCachedImage* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* size) override {
		 return $of($nc(inst$)->lambda$getResolutionVariants$0($cast($Dimension2D, size)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0>());
	}
	MultiResolutionCachedImage* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0, inst$)},
	{}
};
$MethodInfo MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/image/MultiResolutionCachedImage;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::*)(MultiResolutionCachedImage*)>(&MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.image.MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::class$ = nullptr;

class MultiResolutionCachedImage$$Lambda$lambda$map$1$1 : public $BiFunction {
	$class(MultiResolutionCachedImage$$Lambda$lambda$map$1$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(MultiResolutionCachedImage* inst, $Function* mapper) {
		$set(this, inst$, inst);
		$set(this, mapper, mapper);
	}
	virtual $Object* apply(Object$* width, Object$* height) override {
		 return $of($nc(inst$)->lambda$map$1(mapper, $cast($Integer, width), $cast($Integer, height)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiResolutionCachedImage$$Lambda$lambda$map$1$1>());
	}
	MultiResolutionCachedImage* inst$ = nullptr;
	$Function* mapper = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiResolutionCachedImage$$Lambda$lambda$map$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiResolutionCachedImage$$Lambda$lambda$map$1$1, inst$)},
	{"mapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(MultiResolutionCachedImage$$Lambda$lambda$map$1$1, mapper)},
	{}
};
$MethodInfo MultiResolutionCachedImage$$Lambda$lambda$map$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/awt/image/MultiResolutionCachedImage;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiResolutionCachedImage$$Lambda$lambda$map$1$1::*)(MultiResolutionCachedImage*,$Function*)>(&MultiResolutionCachedImage$$Lambda$lambda$map$1$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiResolutionCachedImage$$Lambda$lambda$map$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.image.MultiResolutionCachedImage$$Lambda$lambda$map$1$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* MultiResolutionCachedImage$$Lambda$lambda$map$1$1::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionCachedImage$$Lambda$lambda$map$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiResolutionCachedImage$$Lambda$lambda$map$1$1::class$ = nullptr;

class MultiResolutionCachedImage$$Lambda$lambda$map$2$2 : public $BiFunction {
	$class(MultiResolutionCachedImage$$Lambda$lambda$map$2$2, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($Function* mapper, $MultiResolutionImage* mrImage) {
		$set(this, mapper, mapper);
		$set(this, mrImage, mrImage);
	}
	virtual $Object* apply(Object$* w, Object$* h) override {
		 return $of(MultiResolutionCachedImage::lambda$map$2(mapper, mrImage, $cast($Integer, w), $cast($Integer, h)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiResolutionCachedImage$$Lambda$lambda$map$2$2>());
	}
	$Function* mapper = nullptr;
	$MultiResolutionImage* mrImage = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiResolutionCachedImage$$Lambda$lambda$map$2$2::fieldInfos[3] = {
	{"mapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(MultiResolutionCachedImage$$Lambda$lambda$map$2$2, mapper)},
	{"mrImage", "Ljava/awt/image/MultiResolutionImage;", nullptr, $PUBLIC, $field(MultiResolutionCachedImage$$Lambda$lambda$map$2$2, mrImage)},
	{}
};
$MethodInfo MultiResolutionCachedImage$$Lambda$lambda$map$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Function;Ljava/awt/image/MultiResolutionImage;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiResolutionCachedImage$$Lambda$lambda$map$2$2::*)($Function*,$MultiResolutionImage*)>(&MultiResolutionCachedImage$$Lambda$lambda$map$2$2::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiResolutionCachedImage$$Lambda$lambda$map$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.image.MultiResolutionCachedImage$$Lambda$lambda$map$2$2",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* MultiResolutionCachedImage$$Lambda$lambda$map$2$2::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionCachedImage$$Lambda$lambda$map$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiResolutionCachedImage$$Lambda$lambda$map$2$2::class$ = nullptr;

class MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3 : public $ImageObserver {
	$class(MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3, $NO_CLASS_INIT, $ImageObserver)
public:
	void init$() {
	}
	virtual bool imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override {
		 return MultiResolutionCachedImage::lambda$getInfo$3(img, infoflags, x, y, w, h);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3::*)()>(&MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3::init$))},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.image.MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	nullptr,
	methodInfos
};
$Class* MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3::class$ = nullptr;

$FieldInfo _MultiResolutionCachedImage_FieldInfo_[] = {
	{"baseImageWidth", "I", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionCachedImage, baseImageWidth)},
	{"baseImageHeight", "I", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionCachedImage, baseImageHeight)},
	{"sizes", "[Ljava/awt/geom/Dimension2D;", nullptr, $PRIVATE | $FINAL, $field(MultiResolutionCachedImage, sizes)},
	{"mapper", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/Integer;Ljava/lang/Integer;Ljava/awt/Image;>;", $PRIVATE | $FINAL, $field(MultiResolutionCachedImage, mapper)},
	{"availableInfo", "I", nullptr, $PRIVATE, $field(MultiResolutionCachedImage, availableInfo)},
	{}
};

$MethodInfo _MultiResolutionCachedImage_MethodInfo_[] = {
	{"<init>", "(IILjava/util/function/BiFunction;)V", "(IILjava/util/function/BiFunction<Ljava/lang/Integer;Ljava/lang/Integer;Ljava/awt/Image;>;)V", $PUBLIC, $method(static_cast<void(MultiResolutionCachedImage::*)(int32_t,int32_t,$BiFunction*)>(&MultiResolutionCachedImage::init$))},
	{"<init>", "(II[Ljava/awt/geom/Dimension2D;Ljava/util/function/BiFunction;)V", "(II[Ljava/awt/geom/Dimension2D;Ljava/util/function/BiFunction<Ljava/lang/Integer;Ljava/lang/Integer;Ljava/awt/Image;>;)V", $PUBLIC, $method(static_cast<void(MultiResolutionCachedImage::*)(int32_t,int32_t,$Dimension2DArray*,$BiFunction*)>(&MultiResolutionCachedImage::init$))},
	{"<init>", "(II[Ljava/awt/geom/Dimension2D;Ljava/util/function/BiFunction;Z)V", "(II[Ljava/awt/geom/Dimension2D;Ljava/util/function/BiFunction<Ljava/lang/Integer;Ljava/lang/Integer;Ljava/awt/Image;>;Z)V", $PRIVATE, $method(static_cast<void(MultiResolutionCachedImage::*)(int32_t,int32_t,$Dimension2DArray*,$BiFunction*,bool)>(&MultiResolutionCachedImage::init$))},
	{"checkSize", "(DD)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(double,double)>(&MultiResolutionCachedImage::checkSize))},
	{"getBaseImage", "()Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"getInfo", "(Ljava/awt/Image;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Image*)>(&MultiResolutionCachedImage::getInfo))},
	{"getProperty", "(Ljava/lang/String;Ljava/awt/image/ImageObserver;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC},
	{"getScaledInstance", "(III)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"lambda$getInfo$3", "(Ljava/awt/Image;IIIII)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Image*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&MultiResolutionCachedImage::lambda$getInfo$3))},
	{"lambda$getResolutionVariants$0", "(Ljava/awt/geom/Dimension2D;)Ljava/awt/Image;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Image*(MultiResolutionCachedImage::*)($Dimension2D*)>(&MultiResolutionCachedImage::lambda$getResolutionVariants$0))},
	{"lambda$map$1", "(Ljava/util/function/Function;Ljava/lang/Integer;Ljava/lang/Integer;)Ljava/awt/Image;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Image*(MultiResolutionCachedImage::*)($Function*,$Integer*,$Integer*)>(&MultiResolutionCachedImage::lambda$map$1))},
	{"lambda$map$2", "(Ljava/util/function/Function;Ljava/awt/image/MultiResolutionImage;Ljava/lang/Integer;Ljava/lang/Integer;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Image*(*)($Function*,$MultiResolutionImage*,$Integer*,$Integer*)>(&MultiResolutionCachedImage::lambda$map$2))},
	{"map", "(Ljava/util/function/Function;)Lsun/awt/image/MultiResolutionCachedImage;", "(Ljava/util/function/Function<Ljava/awt/Image;Ljava/awt/Image;>;)Lsun/awt/image/MultiResolutionCachedImage;", $PUBLIC},
	{"map", "(Ljava/awt/image/MultiResolutionImage;Ljava/util/function/Function;)Ljava/awt/Image;", "(Ljava/awt/image/MultiResolutionImage;Ljava/util/function/Function<Ljava/awt/Image;Ljava/awt/Image;>;)Ljava/awt/Image;", $PUBLIC | $STATIC, $method(static_cast<$Image*(*)($MultiResolutionImage*,$Function*)>(&MultiResolutionCachedImage::map))},
	{"preload", "(Ljava/awt/Image;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Image*,int32_t)>(&MultiResolutionCachedImage::preload))},
	{"updateInfo", "(Ljava/awt/image/ImageObserver;I)V", nullptr, $PRIVATE, $method(static_cast<void(MultiResolutionCachedImage::*)($ImageObserver*,int32_t)>(&MultiResolutionCachedImage::updateInfo))},
	{}
};

$InnerClassInfo _MultiResolutionCachedImage_InnerClassesInfo_[] = {
	{"sun.awt.image.MultiResolutionCachedImage$ImageCacheKey", "sun.awt.image.MultiResolutionCachedImage", "ImageCacheKey", $PRIVATE | $STATIC},
	{"sun.awt.image.MultiResolutionCachedImage$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MultiResolutionCachedImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.MultiResolutionCachedImage",
	"java.awt.image.AbstractMultiResolutionImage",
	nullptr,
	_MultiResolutionCachedImage_FieldInfo_,
	_MultiResolutionCachedImage_MethodInfo_,
	nullptr,
	nullptr,
	_MultiResolutionCachedImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.MultiResolutionCachedImage$ImageCacheKey,sun.awt.image.MultiResolutionCachedImage$1"
};

$Object* allocate$MultiResolutionCachedImage($Class* clazz) {
	return $of($alloc(MultiResolutionCachedImage));
}

void MultiResolutionCachedImage::init$(int32_t baseImageWidth, int32_t baseImageHeight, $BiFunction* mapper) {
	$useLocalCurrentObjectStackCache();
	MultiResolutionCachedImage::init$(baseImageWidth, baseImageHeight, $fcast($Dimension2DArray, $$new($DimensionArray, {$$new($Dimension, baseImageWidth, baseImageHeight)})), mapper);
}

void MultiResolutionCachedImage::init$(int32_t baseImageWidth, int32_t baseImageHeight, $Dimension2DArray* sizes, $BiFunction* mapper) {
	MultiResolutionCachedImage::init$(baseImageWidth, baseImageHeight, sizes, mapper, true);
}

void MultiResolutionCachedImage::init$(int32_t baseImageWidth, int32_t baseImageHeight, $Dimension2DArray* sizes, $BiFunction* mapper, bool copySizes) {
	$AbstractMultiResolutionImage::init$();
	this->baseImageWidth = baseImageWidth;
	this->baseImageHeight = baseImageHeight;
	$set(this, sizes, (copySizes && sizes != nullptr) ? $fcast($Dimension2DArray, $Arrays::copyOf(sizes, $nc(sizes)->length)) : sizes);
	$set(this, mapper, mapper);
}

$Image* MultiResolutionCachedImage::getResolutionVariant(double destWidth, double destHeight) {
	$useLocalCurrentObjectStackCache();
	checkSize(destWidth, destHeight);
	int32_t width = $cast(int32_t, $Math::ceil(destWidth));
	int32_t height = $cast(int32_t, $Math::ceil(destHeight));
	$var($ImageCache, cache, $ImageCache::getInstance());
	$var($MultiResolutionCachedImage$ImageCacheKey, key, $new($MultiResolutionCachedImage$ImageCacheKey, this, width, height));
	$var($Image, resolutionVariant, $nc(cache)->getImage(key));
	if (resolutionVariant == nullptr) {
		$var($Object, var$0, $of($Integer::valueOf(width)));
		$assign(resolutionVariant, $cast($Image, $nc(this->mapper)->apply(var$0, $($Integer::valueOf(height)))));
		cache->setImage(key, resolutionVariant);
	}
	preload(resolutionVariant, this->availableInfo);
	return resolutionVariant;
}

void MultiResolutionCachedImage::checkSize(double width, double height) {
	$init(MultiResolutionCachedImage);
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

$List* MultiResolutionCachedImage::getResolutionVariants() {
	$useLocalCurrentObjectStackCache();
	return $cast($List, $nc($($nc($($Arrays::stream(this->sizes)))->map(static_cast<$Function*>($$new(MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0, this)))))->collect($($Collectors::toList())));
}

MultiResolutionCachedImage* MultiResolutionCachedImage::map($Function* mapper) {
	return $new(MultiResolutionCachedImage, this->baseImageWidth, this->baseImageHeight, this->sizes, static_cast<$BiFunction*>($$new(MultiResolutionCachedImage$$Lambda$lambda$map$1$1, this, mapper)));
}

$Image* MultiResolutionCachedImage::map($MultiResolutionImage* mrImage, $Function* mapper) {
	$init(MultiResolutionCachedImage);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($MultiResolutionToolkitImage, mrImage)) {
		$var($MultiResolutionToolkitImage, mrtImage, $cast($MultiResolutionToolkitImage, mrImage));
		return $MultiResolutionToolkitImage::map(mrtImage, mapper);
	}
	$var($BiFunction, sizeMapper, static_cast<$BiFunction*>($new(MultiResolutionCachedImage$$Lambda$lambda$map$2$2, mapper, mrImage)));
	if ($instanceOf(MultiResolutionCachedImage, mrImage)) {
		$var(MultiResolutionCachedImage, mrcImage, $cast(MultiResolutionCachedImage, mrImage));
		return $new(MultiResolutionCachedImage, $nc(mrcImage)->baseImageWidth, mrcImage->baseImageHeight, mrcImage->sizes, sizeMapper, false);
	}
	$var($Image, image, $cast($Image, mrImage));
	int32_t width = $nc(image)->getWidth(nullptr);
	int32_t height = image->getHeight(nullptr);
	return $new(MultiResolutionCachedImage, width, height, sizeMapper);
}

int32_t MultiResolutionCachedImage::getWidth($ImageObserver* observer) {
	updateInfo(observer, $ImageObserver::WIDTH);
	return this->baseImageWidth;
}

int32_t MultiResolutionCachedImage::getHeight($ImageObserver* observer) {
	updateInfo(observer, $ImageObserver::HEIGHT);
	return this->baseImageHeight;
}

$Object* MultiResolutionCachedImage::getProperty($String* name, $ImageObserver* observer) {
	updateInfo(observer, $ImageObserver::PROPERTIES);
	$init($Image);
	return $of($Image::UndefinedProperty);
}

$Image* MultiResolutionCachedImage::getScaledInstance(int32_t width, int32_t height, int32_t hints) {
	return getResolutionVariant((double)width, (double)height);
}

$Image* MultiResolutionCachedImage::getBaseImage() {
	return getResolutionVariant((double)this->baseImageWidth, (double)this->baseImageHeight);
}

void MultiResolutionCachedImage::updateInfo($ImageObserver* observer, int32_t info) {
	this->availableInfo |= (observer == nullptr) ? $ImageObserver::ALLBITS : info;
}

int32_t MultiResolutionCachedImage::getInfo($Image* image) {
	$init(MultiResolutionCachedImage);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ToolkitImage, image)) {
		return $nc($($nc(($cast($ToolkitImage, image)))->getImageRep()))->check(static_cast<$ImageObserver*>($$new(MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3)));
	}
	return 0;
}

void MultiResolutionCachedImage::preload($Image* image, int32_t availableInfo) {
	$init(MultiResolutionCachedImage);
	if (availableInfo != 0 && $instanceOf($ToolkitImage, image)) {
		$nc(($cast($ToolkitImage, image)))->preload($$new($MultiResolutionCachedImage$1, availableInfo));
	}
}

bool MultiResolutionCachedImage::lambda$getInfo$3($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(MultiResolutionCachedImage);
	return false;
}

$Image* MultiResolutionCachedImage::lambda$map$2($Function* mapper, $MultiResolutionImage* mrImage, $Integer* w, $Integer* h) {
	$init(MultiResolutionCachedImage);
	double var$0 = (double)$nc(w)->intValue();
	return $cast($Image, $nc(mapper)->apply($($nc(mrImage)->getResolutionVariant(var$0, (double)$nc(h)->intValue()))));
}

$Image* MultiResolutionCachedImage::lambda$map$1($Function* mapper, $Integer* width, $Integer* height) {
	double var$0 = (double)$nc(width)->intValue();
	return $cast($Image, $nc(mapper)->apply($(getResolutionVariant(var$0, (double)$nc(height)->intValue()))));
}

$Image* MultiResolutionCachedImage::lambda$getResolutionVariants$0($Dimension2D* size) {
	double var$0 = $nc(size)->getWidth();
	return getResolutionVariant(var$0, size->getHeight());
}

MultiResolutionCachedImage::MultiResolutionCachedImage() {
}

$Class* MultiResolutionCachedImage::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::classInfo$.name)) {
			return MultiResolutionCachedImage$$Lambda$lambda$getResolutionVariants$0::load$(name, initialize);
		}
		if (name->equals(MultiResolutionCachedImage$$Lambda$lambda$map$1$1::classInfo$.name)) {
			return MultiResolutionCachedImage$$Lambda$lambda$map$1$1::load$(name, initialize);
		}
		if (name->equals(MultiResolutionCachedImage$$Lambda$lambda$map$2$2::classInfo$.name)) {
			return MultiResolutionCachedImage$$Lambda$lambda$map$2$2::load$(name, initialize);
		}
		if (name->equals(MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3::classInfo$.name)) {
			return MultiResolutionCachedImage$$Lambda$lambda$getInfo$3$3::load$(name, initialize);
		}
	}
	$loadClass(MultiResolutionCachedImage, name, initialize, &_MultiResolutionCachedImage_ClassInfo_, allocate$MultiResolutionCachedImage);
	return class$;
}

$Class* MultiResolutionCachedImage::class$ = nullptr;

		} // image
	} // awt
} // sun