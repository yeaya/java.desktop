#include <com/apple/laf/AquaUtils$IconImageFilter.h>

#include <com/apple/laf/AquaUtils.h>
#include <java/awt/image/RGBImageFilter.h>
#include <jcpp.h>

using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaUtils$IconImageFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaUtils$IconImageFilter::*)()>(&AquaUtils$IconImageFilter::init$))},
	{"filterRGB", "(III)I", nullptr, $PUBLIC | $FINAL},
	{"getGreyFor", "(I)I", nullptr, $ABSTRACT},
	{"grayTransform", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&AquaUtils$IconImageFilter::grayTransform))},
	{}
};

$InnerClassInfo _AquaUtils$IconImageFilter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$IconImageFilter", "com.apple.laf.AquaUtils", "IconImageFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$IconImageFilter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaUtils$IconImageFilter",
	"java.awt.image.RGBImageFilter",
	nullptr,
	nullptr,
	_AquaUtils$IconImageFilter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaUtils$IconImageFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$IconImageFilter($Class* clazz) {
	return $of($alloc(AquaUtils$IconImageFilter));
}

void AquaUtils$IconImageFilter::init$() {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
}

int32_t AquaUtils$IconImageFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	int32_t red = (int32_t)((rgb >> 16) & (uint32_t)255);
	int32_t green = (int32_t)((rgb >> 8) & (uint32_t)255);
	int32_t blue = (int32_t)(rgb & (uint32_t)255);
	int32_t gray = getGreyFor($cast(int32_t, ((0.3 * red + 0.59 * green + 0.11 * blue) / 3)));
	int32_t var$1 = ((int32_t)(rgb & (uint32_t)(int32_t)0xFF000000)) | (grayTransform(red, gray) << 16);
	int32_t var$0 = var$1 | (grayTransform(green, gray) << 8);
	return var$0 | (grayTransform(blue, gray) << 0);
}

int32_t AquaUtils$IconImageFilter::grayTransform(int32_t color, int32_t gray) {
	$init(AquaUtils$IconImageFilter);
	int32_t result = color - gray;
	if (result < 0) {
		result = 0;
	}
	if (result > 255) {
		result = 255;
	}
	return result;
}

AquaUtils$IconImageFilter::AquaUtils$IconImageFilter() {
}

$Class* AquaUtils$IconImageFilter::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$IconImageFilter, name, initialize, &_AquaUtils$IconImageFilter_ClassInfo_, allocate$AquaUtils$IconImageFilter);
	return class$;
}

$Class* AquaUtils$IconImageFilter::class$ = nullptr;

		} // laf
	} // apple
} // com