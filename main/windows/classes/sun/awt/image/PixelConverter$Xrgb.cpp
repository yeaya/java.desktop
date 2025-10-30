#include <sun/awt/image/PixelConverter$Xrgb.h>

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

$FieldInfo _PixelConverter$Xrgb_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Xrgb, instance)},
	{}
};

$MethodInfo _PixelConverter$Xrgb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Xrgb::*)()>(&PixelConverter$Xrgb::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Xrgb_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Xrgb", "sun.awt.image.PixelConverter", "Xrgb", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Xrgb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Xrgb",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Xrgb_FieldInfo_,
	_PixelConverter$Xrgb_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Xrgb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Xrgb($Class* clazz) {
	return $of($alloc(PixelConverter$Xrgb));
}

$PixelConverter* PixelConverter$Xrgb::instance = nullptr;

void PixelConverter$Xrgb::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Xrgb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return rgb;
}

int32_t PixelConverter$Xrgb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((int32_t)0xFF000000 | pixel);
}

void clinit$PixelConverter$Xrgb($Class* class$) {
	$assignStatic(PixelConverter$Xrgb::instance, $new(PixelConverter$Xrgb));
}

PixelConverter$Xrgb::PixelConverter$Xrgb() {
}

$Class* PixelConverter$Xrgb::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Xrgb, name, initialize, &_PixelConverter$Xrgb_ClassInfo_, clinit$PixelConverter$Xrgb, allocate$PixelConverter$Xrgb);
	return class$;
}

$Class* PixelConverter$Xrgb::class$ = nullptr;

		} // image
	} // awt
} // sun