#include <sun/awt/image/PixelConverter$RgbaPre.h>

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

$FieldInfo _PixelConverter$RgbaPre_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$RgbaPre, instance)},
	{}
};

$MethodInfo _PixelConverter$RgbaPre_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$RgbaPre::*)()>(&PixelConverter$RgbaPre::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$RgbaPre_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$RgbaPre", "sun.awt.image.PixelConverter", "RgbaPre", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$RgbaPre_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$RgbaPre",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$RgbaPre_FieldInfo_,
	_PixelConverter$RgbaPre_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$RgbaPre_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$RgbaPre($Class* clazz) {
	return $of($alloc(PixelConverter$RgbaPre));
}

$PixelConverter* PixelConverter$RgbaPre::instance = nullptr;

void PixelConverter$RgbaPre::init$() {
	$PixelConverter::init$();
	this->alphaMask = 255;
}

int32_t PixelConverter$RgbaPre::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	if ((rgb >> 24) == -1) {
		return ((rgb << 8) | ((int32_t)((uint32_t)rgb >> 24)));
	}
	int32_t a = (int32_t)((uint32_t)rgb >> 24);
	int32_t r = (int32_t)((rgb >> 16) & (uint32_t)255);
	int32_t g = (int32_t)((rgb >> 8) & (uint32_t)255);
	int32_t b = (int32_t)((rgb) & (uint32_t)255);
	int32_t a2 = a + (a >> 7);
	r = (r * a2) >> 8;
	g = (g * a2) >> 8;
	b = (b * a2) >> 8;
	return ((((r << 24) | (g << 16)) | (b << 8)) | (a));
}

int32_t PixelConverter$RgbaPre::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t a = (int32_t)(pixel & (uint32_t)255);
	if ((a == 255) || (a == 0)) {
		return (((int32_t)((uint32_t)pixel >> 8)) | (pixel << 24));
	}
	int32_t r = (int32_t)((uint32_t)pixel >> 24);
	int32_t g = (int32_t)((pixel >> 16) & (uint32_t)255);
	int32_t b = (int32_t)((pixel >> 8) & (uint32_t)255);
	r = $div(((r << 8) - r), a);
	g = $div(((g << 8) - g), a);
	b = $div(((b << 8) - b), a);
	return ((((r << 24) | (g << 16)) | (b << 8)) | (a));
}

void clinit$PixelConverter$RgbaPre($Class* class$) {
	$assignStatic(PixelConverter$RgbaPre::instance, $new(PixelConverter$RgbaPre));
}

PixelConverter$RgbaPre::PixelConverter$RgbaPre() {
}

$Class* PixelConverter$RgbaPre::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$RgbaPre, name, initialize, &_PixelConverter$RgbaPre_ClassInfo_, clinit$PixelConverter$RgbaPre, allocate$PixelConverter$RgbaPre);
	return class$;
}

$Class* PixelConverter$RgbaPre::class$ = nullptr;

		} // image
	} // awt
} // sun