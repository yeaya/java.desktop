#include <sun/awt/image/PixelConverter$Ushort555Rgb.h>

#include <java/awt/image/ColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _PixelConverter$Ushort555Rgb_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Ushort555Rgb, instance)},
	{}
};

$MethodInfo _PixelConverter$Ushort555Rgb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Ushort555Rgb::*)()>(&PixelConverter$Ushort555Rgb::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Ushort555Rgb_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Ushort555Rgb", "sun.awt.image.PixelConverter", "Ushort555Rgb", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Ushort555Rgb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Ushort555Rgb",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Ushort555Rgb_FieldInfo_,
	_PixelConverter$Ushort555Rgb_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Ushort555Rgb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Ushort555Rgb($Class* clazz) {
	return $of($alloc(PixelConverter$Ushort555Rgb));
}

$PixelConverter* PixelConverter$Ushort555Rgb::instance = nullptr;

void PixelConverter$Ushort555Rgb::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Ushort555Rgb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return ((((int32_t)(($sr(rgb, 16 + 3 - 10)) & (uint32_t)31744)) | ((int32_t)(($sr(rgb, 8 + 3 - 5)) & (uint32_t)992))) | ((int32_t)(($sr(rgb, 0 + 3 - 0)) & (uint32_t)31)));
}

int32_t PixelConverter$Ushort555Rgb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	r = (int32_t)((pixel >> 10) & (uint32_t)31);
	r = (r << 3) | (r >> 2);
	g = (int32_t)((pixel >> 5) & (uint32_t)31);
	g = (g << 3) | (g >> 2);
	b = (int32_t)((pixel) & (uint32_t)31);
	b = (b << 3) | (b >> 2);
	return ((((int32_t)0xFF000000 | (r << 16)) | (g << 8)) | (b));
}

void clinit$PixelConverter$Ushort555Rgb($Class* class$) {
	$assignStatic(PixelConverter$Ushort555Rgb::instance, $new(PixelConverter$Ushort555Rgb));
}

PixelConverter$Ushort555Rgb::PixelConverter$Ushort555Rgb() {
}

$Class* PixelConverter$Ushort555Rgb::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Ushort555Rgb, name, initialize, &_PixelConverter$Ushort555Rgb_ClassInfo_, clinit$PixelConverter$Ushort555Rgb, allocate$PixelConverter$Ushort555Rgb);
	return class$;
}

$Class* PixelConverter$Ushort555Rgb::class$ = nullptr;

		} // image
	} // awt
} // sun