#include <javax/swing/plaf/metal/MetalUtils$OceanToolBarImageFilter.h>

#include <java/awt/image/RGBImageFilter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalUtils$OceanToolBarImageFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalUtils$OceanToolBarImageFilter::*)()>(&MetalUtils$OceanToolBarImageFilter::init$))},
	{"filterRGB", "(III)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalUtils$OceanToolBarImageFilter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalUtils$OceanToolBarImageFilter", "javax.swing.plaf.metal.MetalUtils", "OceanToolBarImageFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalUtils$OceanToolBarImageFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalUtils$OceanToolBarImageFilter",
	"java.awt.image.RGBImageFilter",
	nullptr,
	nullptr,
	_MetalUtils$OceanToolBarImageFilter_MethodInfo_,
	nullptr,
	nullptr,
	_MetalUtils$OceanToolBarImageFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalUtils"
};

$Object* allocate$MetalUtils$OceanToolBarImageFilter($Class* clazz) {
	return $of($alloc(MetalUtils$OceanToolBarImageFilter));
}

void MetalUtils$OceanToolBarImageFilter::init$() {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
}

int32_t MetalUtils$OceanToolBarImageFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	int32_t r = ((int32_t)((rgb >> 16) & (uint32_t)255));
	int32_t g = ((int32_t)((rgb >> 8) & (uint32_t)255));
	int32_t b = ((int32_t)(rgb & (uint32_t)255));
	int32_t gray = $Math::max($Math::max(r, g), b);
	return ((((int32_t)(rgb & (uint32_t)(int32_t)0xFF000000)) | (gray << 16)) | (gray << 8)) | (gray << 0);
}

MetalUtils$OceanToolBarImageFilter::MetalUtils$OceanToolBarImageFilter() {
}

$Class* MetalUtils$OceanToolBarImageFilter::load$($String* name, bool initialize) {
	$loadClass(MetalUtils$OceanToolBarImageFilter, name, initialize, &_MetalUtils$OceanToolBarImageFilter_ClassInfo_, allocate$MetalUtils$OceanToolBarImageFilter);
	return class$;
}

$Class* MetalUtils$OceanToolBarImageFilter::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax