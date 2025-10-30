#include <sun/awt/image/PixelConverter$Rgba.h>

#include <java/awt/image/ColorModel.h>
#include <sun/awt/image/PixelConverter.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelConverter = ::sun::awt::image::PixelConverter;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _PixelConverter$Rgba_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Rgba, instance)},
	{}
};

$MethodInfo _PixelConverter$Rgba_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Rgba::*)()>(&PixelConverter$Rgba::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Rgba_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Rgba", "sun.awt.image.PixelConverter", "Rgba", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Rgba_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Rgba",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Rgba_FieldInfo_,
	_PixelConverter$Rgba_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Rgba_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Rgba($Class* clazz) {
	return $of($alloc(PixelConverter$Rgba));
}

$PixelConverter* PixelConverter$Rgba::instance = nullptr;

void PixelConverter$Rgba::init$() {
	$PixelConverter::init$();
	this->alphaMask = 255;
}

int32_t PixelConverter$Rgba::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return ((rgb << 8) | ((int32_t)((uint32_t)rgb >> 24)));
}

int32_t PixelConverter$Rgba::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((pixel << 24) | ((int32_t)((uint32_t)pixel >> 8)));
}

void clinit$PixelConverter$Rgba($Class* class$) {
	$assignStatic(PixelConverter$Rgba::instance, $new(PixelConverter$Rgba));
}

PixelConverter$Rgba::PixelConverter$Rgba() {
}

$Class* PixelConverter$Rgba::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Rgba, name, initialize, &_PixelConverter$Rgba_ClassInfo_, clinit$PixelConverter$Rgba, allocate$PixelConverter$Rgba);
	return class$;
}

$Class* PixelConverter$Rgba::class$ = nullptr;

		} // image
	} // awt
} // sun