#include <javax/swing/DebugGraphicsFilter.h>

#include <java/awt/Color.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _DebugGraphicsFilter_FieldInfo_[] = {
	{"color", "Ljava/awt/Color;", nullptr, 0, $field(DebugGraphicsFilter, color)},
	{}
};

$MethodInfo _DebugGraphicsFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(DebugGraphicsFilter::*)($Color*)>(&DebugGraphicsFilter::init$))},
	{"filterRGB", "(III)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DebugGraphicsFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.DebugGraphicsFilter",
	"java.awt.image.RGBImageFilter",
	nullptr,
	_DebugGraphicsFilter_FieldInfo_,
	_DebugGraphicsFilter_MethodInfo_
};

$Object* allocate$DebugGraphicsFilter($Class* clazz) {
	return $of($alloc(DebugGraphicsFilter));
}

void DebugGraphicsFilter::init$($Color* c) {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
	$set(this, color, c);
}

int32_t DebugGraphicsFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	return $nc(this->color)->getRGB() | ((int32_t)(rgb & (uint32_t)(int32_t)0xFF000000));
}

DebugGraphicsFilter::DebugGraphicsFilter() {
}

$Class* DebugGraphicsFilter::load$($String* name, bool initialize) {
	$loadClass(DebugGraphicsFilter, name, initialize, &_DebugGraphicsFilter_ClassInfo_, allocate$DebugGraphicsFilter);
	return class$;
}

$Class* DebugGraphicsFilter::class$ = nullptr;

	} // swing
} // javax