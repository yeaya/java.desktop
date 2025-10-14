#include <sun/awt/image/PixelConverter$Ushort565Rgb.h>

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

$FieldInfo _PixelConverter$Ushort565Rgb_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Ushort565Rgb, instance)},
	{}
};

$MethodInfo _PixelConverter$Ushort565Rgb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Ushort565Rgb::*)()>(&PixelConverter$Ushort565Rgb::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Ushort565Rgb_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Ushort565Rgb", "sun.awt.image.PixelConverter", "Ushort565Rgb", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Ushort565Rgb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Ushort565Rgb",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Ushort565Rgb_FieldInfo_,
	_PixelConverter$Ushort565Rgb_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Ushort565Rgb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Ushort565Rgb($Class* clazz) {
	return $of($alloc(PixelConverter$Ushort565Rgb));
}

$PixelConverter* PixelConverter$Ushort565Rgb::instance = nullptr;

void PixelConverter$Ushort565Rgb::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Ushort565Rgb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return ((((int32_t)(($sr(rgb, 16 + 3 - 11)) & (uint32_t)0x0000F800)) | ((int32_t)(($sr(rgb, 8 + 2 - 5)) & (uint32_t)2016))) | ((int32_t)(($sr(rgb, 0 + 3 - 0)) & (uint32_t)31)));
}

int32_t PixelConverter$Ushort565Rgb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	r = (int32_t)((pixel >> 11) & (uint32_t)31);
	r = (r << 3) | (r >> 2);
	g = (int32_t)((pixel >> 5) & (uint32_t)63);
	g = (g << 2) | (g >> 4);
	b = (int32_t)((pixel) & (uint32_t)31);
	b = (b << 3) | (b >> 2);
	return ((((int32_t)0xFF000000 | (r << 16)) | (g << 8)) | (b));
}

void clinit$PixelConverter$Ushort565Rgb($Class* class$) {
	$assignStatic(PixelConverter$Ushort565Rgb::instance, $new(PixelConverter$Ushort565Rgb));
}

PixelConverter$Ushort565Rgb::PixelConverter$Ushort565Rgb() {
}

$Class* PixelConverter$Ushort565Rgb::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Ushort565Rgb, name, initialize, &_PixelConverter$Ushort565Rgb_ClassInfo_, clinit$PixelConverter$Ushort565Rgb, allocate$PixelConverter$Ushort565Rgb);
	return class$;
}

$Class* PixelConverter$Ushort565Rgb::class$ = nullptr;

		} // image
	} // awt
} // sun