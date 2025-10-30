#include <sun/awt/image/PixelConverter$ByteGray.h>

#include <java/awt/image/ColorModel.h>
#include <sun/awt/image/PixelConverter.h>
#include <jcpp.h>

#undef BLU_MULT
#undef GRN_MULT
#undef RED_MULT

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelConverter = ::sun::awt::image::PixelConverter;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _PixelConverter$ByteGray_FieldInfo_[] = {
	{"RED_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$ByteGray, RED_MULT)},
	{"GRN_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$ByteGray, GRN_MULT)},
	{"BLU_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$ByteGray, BLU_MULT)},
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$ByteGray, instance)},
	{}
};

$MethodInfo _PixelConverter$ByteGray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$ByteGray::*)()>(&PixelConverter$ByteGray::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$ByteGray_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$ByteGray", "sun.awt.image.PixelConverter", "ByteGray", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$ByteGray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$ByteGray",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$ByteGray_FieldInfo_,
	_PixelConverter$ByteGray_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$ByteGray_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$ByteGray($Class* clazz) {
	return $of($alloc(PixelConverter$ByteGray));
}

double PixelConverter$ByteGray::RED_MULT = 0.0;
double PixelConverter$ByteGray::GRN_MULT = 0.0;
double PixelConverter$ByteGray::BLU_MULT = 0.0;
$PixelConverter* PixelConverter$ByteGray::instance = nullptr;

void PixelConverter$ByteGray::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$ByteGray::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	int32_t red = (int32_t)((rgb >> 16) & (uint32_t)255);
	int32_t grn = (int32_t)((rgb >> 8) & (uint32_t)255);
	int32_t blu = (int32_t)((rgb) & (uint32_t)255);
	return $cast(int32_t, (red * PixelConverter$ByteGray::RED_MULT + grn * PixelConverter$ByteGray::GRN_MULT + blu * PixelConverter$ByteGray::BLU_MULT + 0.5));
}

int32_t PixelConverter$ByteGray::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((((((255 << 8) | pixel) << 8) | pixel) << 8) | pixel);
}

void clinit$PixelConverter$ByteGray($Class* class$) {
	PixelConverter$ByteGray::RED_MULT = 0.299;
	PixelConverter$ByteGray::GRN_MULT = 0.587;
	PixelConverter$ByteGray::BLU_MULT = 0.114;
	$assignStatic(PixelConverter$ByteGray::instance, $new(PixelConverter$ByteGray));
}

PixelConverter$ByteGray::PixelConverter$ByteGray() {
}

$Class* PixelConverter$ByteGray::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$ByteGray, name, initialize, &_PixelConverter$ByteGray_ClassInfo_, clinit$PixelConverter$ByteGray, allocate$PixelConverter$ByteGray);
	return class$;
}

$Class* PixelConverter$ByteGray::class$ = nullptr;

		} // image
	} // awt
} // sun