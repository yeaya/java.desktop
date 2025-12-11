#include <javax/swing/plaf/metal/MetalUtils$OceanDisabledButtonImageFilter.h>

#include <java/awt/image/RGBImageFilter.h>
#include <java/lang/Math.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalUtils$OceanDisabledButtonImageFilter_FieldInfo_[] = {
	{"min", "F", nullptr, $PRIVATE, $field(MetalUtils$OceanDisabledButtonImageFilter, min)},
	{"factor", "F", nullptr, $PRIVATE, $field(MetalUtils$OceanDisabledButtonImageFilter, factor)},
	{}
};

$MethodInfo _MetalUtils$OceanDisabledButtonImageFilter_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(MetalUtils$OceanDisabledButtonImageFilter::*)(int32_t,int32_t)>(&MetalUtils$OceanDisabledButtonImageFilter::init$))},
	{"filterRGB", "(III)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalUtils$OceanDisabledButtonImageFilter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalUtils$OceanDisabledButtonImageFilter", "javax.swing.plaf.metal.MetalUtils", "OceanDisabledButtonImageFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalUtils$OceanDisabledButtonImageFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalUtils$OceanDisabledButtonImageFilter",
	"java.awt.image.RGBImageFilter",
	nullptr,
	_MetalUtils$OceanDisabledButtonImageFilter_FieldInfo_,
	_MetalUtils$OceanDisabledButtonImageFilter_MethodInfo_,
	nullptr,
	nullptr,
	_MetalUtils$OceanDisabledButtonImageFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalUtils"
};

$Object* allocate$MetalUtils$OceanDisabledButtonImageFilter($Class* clazz) {
	return $of($alloc(MetalUtils$OceanDisabledButtonImageFilter));
}

void MetalUtils$OceanDisabledButtonImageFilter::init$(int32_t min, int32_t max) {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
	this->min = (float)min;
	this->factor = (max - min) / 255.0f;
}

int32_t MetalUtils$OceanDisabledButtonImageFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	int32_t gray = $Math::min(255, $cast(int32_t, (((0.2125f * ((int32_t)((rgb >> 16) & (uint32_t)255))) + (0.7154f * ((int32_t)((rgb >> 8) & (uint32_t)255))) + (0.0721f * ((int32_t)(rgb & (uint32_t)255))) + 0.5f) * this->factor + this->min)));
	return ((((int32_t)(rgb & (uint32_t)(int32_t)0xFF000000)) | (gray << 16)) | (gray << 8)) | (gray << 0);
}

MetalUtils$OceanDisabledButtonImageFilter::MetalUtils$OceanDisabledButtonImageFilter() {
}

$Class* MetalUtils$OceanDisabledButtonImageFilter::load$($String* name, bool initialize) {
	$loadClass(MetalUtils$OceanDisabledButtonImageFilter, name, initialize, &_MetalUtils$OceanDisabledButtonImageFilter_ClassInfo_, allocate$MetalUtils$OceanDisabledButtonImageFilter);
	return class$;
}

$Class* MetalUtils$OceanDisabledButtonImageFilter::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax