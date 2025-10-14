#include <sun/awt/image/PixelConverter$Ushort4444Argb.h>

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

$FieldInfo _PixelConverter$Ushort4444Argb_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Ushort4444Argb, instance)},
	{}
};

$MethodInfo _PixelConverter$Ushort4444Argb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Ushort4444Argb::*)()>(&PixelConverter$Ushort4444Argb::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Ushort4444Argb_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Ushort4444Argb", "sun.awt.image.PixelConverter", "Ushort4444Argb", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Ushort4444Argb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Ushort4444Argb",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Ushort4444Argb_FieldInfo_,
	_PixelConverter$Ushort4444Argb_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Ushort4444Argb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Ushort4444Argb($Class* clazz) {
	return $of($alloc(PixelConverter$Ushort4444Argb));
}

$PixelConverter* PixelConverter$Ushort4444Argb::instance = nullptr;

void PixelConverter$Ushort4444Argb::init$() {
	$PixelConverter::init$();
	this->alphaMask = 0x0000F000;
}

int32_t PixelConverter$Ushort4444Argb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	int32_t a = (int32_t)((rgb >> 16) & (uint32_t)0x0000F000);
	int32_t r = (int32_t)((rgb >> 12) & (uint32_t)3840);
	int32_t g = (int32_t)((rgb >> 8) & (uint32_t)240);
	int32_t b = (int32_t)((rgb >> 4) & (uint32_t)15);
	return (((a | r) | g) | b);
}

int32_t PixelConverter$Ushort4444Argb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t a = 0;
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	a = (int32_t)(pixel & (uint32_t)0x0000F000);
	a = (int32_t)(((pixel << 16) | (pixel << 12)) & (uint32_t)(int32_t)0xFF000000);
	r = (int32_t)(pixel & (uint32_t)3840);
	r = (int32_t)(((pixel << 12) | (pixel << 8)) & (uint32_t)0x00FF0000);
	g = (int32_t)(pixel & (uint32_t)240);
	g = (int32_t)(((pixel << 8) | (pixel << 4)) & (uint32_t)0x0000FF00);
	b = (int32_t)(pixel & (uint32_t)15);
	b = (int32_t)(((pixel << 4) | (pixel << 0)) & (uint32_t)255);
	return (((a | r) | g) | b);
}

void clinit$PixelConverter$Ushort4444Argb($Class* class$) {
	$assignStatic(PixelConverter$Ushort4444Argb::instance, $new(PixelConverter$Ushort4444Argb));
}

PixelConverter$Ushort4444Argb::PixelConverter$Ushort4444Argb() {
}

$Class* PixelConverter$Ushort4444Argb::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Ushort4444Argb, name, initialize, &_PixelConverter$Ushort4444Argb_ClassInfo_, clinit$PixelConverter$Ushort4444Argb, allocate$PixelConverter$Ushort4444Argb);
	return class$;
}

$Class* PixelConverter$Ushort4444Argb::class$ = nullptr;

		} // image
	} // awt
} // sun