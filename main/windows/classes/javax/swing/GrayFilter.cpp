#include <javax/swing/GrayFilter.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Function.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Function = ::java::util::function::Function;
using $MultiResolutionCachedImage = ::sun::awt::image::MultiResolutionCachedImage;

namespace javax {
	namespace swing {

class GrayFilter$$Lambda$lambda$createDisabledImage$0 : public $Function {
	$class(GrayFilter$$Lambda$lambda$createDisabledImage$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* img) override {
		 return $of(GrayFilter::lambda$createDisabledImage$0($cast($Image, img)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GrayFilter$$Lambda$lambda$createDisabledImage$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GrayFilter$$Lambda$lambda$createDisabledImage$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GrayFilter$$Lambda$lambda$createDisabledImage$0::*)()>(&GrayFilter$$Lambda$lambda$createDisabledImage$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo GrayFilter$$Lambda$lambda$createDisabledImage$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.GrayFilter$$Lambda$lambda$createDisabledImage$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* GrayFilter$$Lambda$lambda$createDisabledImage$0::load$($String* name, bool initialize) {
	$loadClass(GrayFilter$$Lambda$lambda$createDisabledImage$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GrayFilter$$Lambda$lambda$createDisabledImage$0::class$ = nullptr;

$FieldInfo _GrayFilter_FieldInfo_[] = {
	{"brighter", "Z", nullptr, $PRIVATE, $field(GrayFilter, brighter)},
	{"percent", "I", nullptr, $PRIVATE, $field(GrayFilter, percent)},
	{}
};

$MethodInfo _GrayFilter_MethodInfo_[] = {
	{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(static_cast<void(GrayFilter::*)(bool,int32_t)>(&GrayFilter::init$))},
	{"createDisabledImage", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Image*(*)($Image*)>(&GrayFilter::createDisabledImage))},
	{"createDisabledImageImpl", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Image*(*)($Image*)>(&GrayFilter::createDisabledImageImpl))},
	{"filterRGB", "(III)I", nullptr, $PUBLIC},
	{"lambda$createDisabledImage$0", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Image*(*)($Image*)>(&GrayFilter::lambda$createDisabledImage$0))},
	{}
};

$ClassInfo _GrayFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.GrayFilter",
	"java.awt.image.RGBImageFilter",
	nullptr,
	_GrayFilter_FieldInfo_,
	_GrayFilter_MethodInfo_
};

$Object* allocate$GrayFilter($Class* clazz) {
	return $of($alloc(GrayFilter));
}

$Image* GrayFilter::createDisabledImage($Image* i) {
	$init(GrayFilter);
	if ($instanceOf($MultiResolutionImage, i)) {
		return $MultiResolutionCachedImage::map($cast($MultiResolutionImage, i), static_cast<$Function*>($$new(GrayFilter$$Lambda$lambda$createDisabledImage$0)));
	}
	return createDisabledImageImpl(i);
}

$Image* GrayFilter::createDisabledImageImpl($Image* i) {
	$init(GrayFilter);
	$var(GrayFilter, filter, $new(GrayFilter, true, 50));
	$var($ImageProducer, prod, $new($FilteredImageSource, $($nc(i)->getSource()), filter));
	$var($Image, grayImage, $nc($($Toolkit::getDefaultToolkit()))->createImage(prod));
	return grayImage;
}

void GrayFilter::init$(bool b, int32_t p) {
	$RGBImageFilter::init$();
	this->brighter = b;
	this->percent = p;
	this->canFilterIndexColorModel = true;
}

int32_t GrayFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	int32_t gray = $cast(int32_t, ((0.3 * ((int32_t)((rgb >> 16) & (uint32_t)255)) + 0.59 * ((int32_t)((rgb >> 8) & (uint32_t)255)) + 0.11 * ((int32_t)(rgb & (uint32_t)255))) / 3));
	if (this->brighter) {
		gray = (255 - ((255 - gray) * (100 - this->percent) / 100));
	} else {
		gray = (gray * (100 - this->percent) / 100);
	}
	if (gray < 0) {
		gray = 0;
	}
	if (gray > 255) {
		gray = 255;
	}
	return ((((int32_t)(rgb & (uint32_t)(int32_t)0xFF000000)) | (gray << 16)) | (gray << 8)) | (gray << 0);
}

$Image* GrayFilter::lambda$createDisabledImage$0($Image* img) {
	$init(GrayFilter);
	return createDisabledImageImpl(img);
}

GrayFilter::GrayFilter() {
}

$Class* GrayFilter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GrayFilter$$Lambda$lambda$createDisabledImage$0::classInfo$.name)) {
			return GrayFilter$$Lambda$lambda$createDisabledImage$0::load$(name, initialize);
		}
	}
	$loadClass(GrayFilter, name, initialize, &_GrayFilter_ClassInfo_, allocate$GrayFilter);
	return class$;
}

$Class* GrayFilter::class$ = nullptr;

	} // swing
} // javax