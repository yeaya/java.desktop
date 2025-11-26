#include <sun/awt/image/PixelConverter$Ushort555Rgbx.h>

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

$FieldInfo _PixelConverter$Ushort555Rgbx_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Ushort555Rgbx, instance)},
	{}
};

$MethodInfo _PixelConverter$Ushort555Rgbx_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Ushort555Rgbx::*)()>(&PixelConverter$Ushort555Rgbx::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Ushort555Rgbx_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Ushort555Rgbx", "sun.awt.image.PixelConverter", "Ushort555Rgbx", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Ushort555Rgbx_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Ushort555Rgbx",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Ushort555Rgbx_FieldInfo_,
	_PixelConverter$Ushort555Rgbx_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Ushort555Rgbx_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Ushort555Rgbx($Class* clazz) {
	return $of($alloc(PixelConverter$Ushort555Rgbx));
}

$PixelConverter* PixelConverter$Ushort555Rgbx::instance = nullptr;

void PixelConverter$Ushort555Rgbx::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Ushort555Rgbx::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return ((((int32_t)(($sr(rgb, 16 + 3 - 11)) & (uint32_t)0x0000F800)) | ((int32_t)(($sr(rgb, 8 + 3 - 6)) & (uint32_t)1984))) | ((int32_t)(($sr(rgb, 0 + 3 - 1)) & (uint32_t)62)));
}

int32_t PixelConverter$Ushort555Rgbx::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	r = (int32_t)((pixel >> 11) & (uint32_t)31);
	r = (r << 3) | (r >> 2);
	g = (int32_t)((pixel >> 6) & (uint32_t)31);
	g = (g << 3) | (g >> 2);
	b = (int32_t)((pixel >> 1) & (uint32_t)31);
	b = (b << 3) | (b >> 2);
	return ((((int32_t)0xFF000000 | (r << 16)) | (g << 8)) | (b));
}

void clinit$PixelConverter$Ushort555Rgbx($Class* class$) {
	$assignStatic(PixelConverter$Ushort555Rgbx::instance, $new(PixelConverter$Ushort555Rgbx));
}

PixelConverter$Ushort555Rgbx::PixelConverter$Ushort555Rgbx() {
}

$Class* PixelConverter$Ushort555Rgbx::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Ushort555Rgbx, name, initialize, &_PixelConverter$Ushort555Rgbx_ClassInfo_, clinit$PixelConverter$Ushort555Rgbx, allocate$PixelConverter$Ushort555Rgbx);
	return class$;
}

$Class* PixelConverter$Ushort555Rgbx::class$ = nullptr;

		} // image
	} // awt
} // sun