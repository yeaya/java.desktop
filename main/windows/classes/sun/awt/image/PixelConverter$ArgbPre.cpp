#include <sun/awt/image/PixelConverter$ArgbPre.h>

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

$FieldInfo _PixelConverter$ArgbPre_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$ArgbPre, instance)},
	{}
};

$MethodInfo _PixelConverter$ArgbPre_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$ArgbPre::*)()>(&PixelConverter$ArgbPre::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$ArgbPre_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$ArgbPre", "sun.awt.image.PixelConverter", "ArgbPre", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$ArgbPre_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$ArgbPre",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$ArgbPre_FieldInfo_,
	_PixelConverter$ArgbPre_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$ArgbPre_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$ArgbPre($Class* clazz) {
	return $of($alloc(PixelConverter$ArgbPre));
}

$PixelConverter* PixelConverter$ArgbPre::instance = nullptr;

void PixelConverter$ArgbPre::init$() {
	$PixelConverter::init$();
	this->alphaMask = (int32_t)0xFF000000;
}

int32_t PixelConverter$ArgbPre::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	if ((rgb >> 24) == -1) {
		return rgb;
	}
	int32_t a = (int32_t)((uint32_t)rgb >> 24);
	int32_t r = (int32_t)((rgb >> 16) & (uint32_t)255);
	int32_t g = (int32_t)((rgb >> 8) & (uint32_t)255);
	int32_t b = (int32_t)((rgb) & (uint32_t)255);
	int32_t a2 = a + (a >> 7);
	r = (r * a2) >> 8;
	g = (g * a2) >> 8;
	b = (b * a2) >> 8;
	return ((((a << 24) | (r << 16)) | (g << 8)) | (b));
}

int32_t PixelConverter$ArgbPre::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t a = (int32_t)((uint32_t)pixel >> 24);
	if ((a == 255) || (a == 0)) {
		return pixel;
	}
	int32_t r = (int32_t)((pixel >> 16) & (uint32_t)255);
	int32_t g = (int32_t)((pixel >> 8) & (uint32_t)255);
	int32_t b = (int32_t)((pixel) & (uint32_t)255);
	r = $div(((r << 8) - r), a);
	g = $div(((g << 8) - g), a);
	b = $div(((b << 8) - b), a);
	return ((((a << 24) | (r << 16)) | (g << 8)) | (b));
}

void clinit$PixelConverter$ArgbPre($Class* class$) {
	$assignStatic(PixelConverter$ArgbPre::instance, $new(PixelConverter$ArgbPre));
}

PixelConverter$ArgbPre::PixelConverter$ArgbPre() {
}

$Class* PixelConverter$ArgbPre::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$ArgbPre, name, initialize, &_PixelConverter$ArgbPre_ClassInfo_, clinit$PixelConverter$ArgbPre, allocate$PixelConverter$ArgbPre);
	return class$;
}

$Class* PixelConverter$ArgbPre::class$ = nullptr;

		} // image
	} // awt
} // sun