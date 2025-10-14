#include <sun/awt/image/PixelConverter$UshortGray.h>

#include <java/awt/image/ColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/PixelConverter$ByteGray.h>
#include <sun/awt/image/PixelConverter.h>
#include <jcpp.h>

#undef BLU_MULT
#undef GRN_MULT
#undef RED_MULT
#undef SHORT_MULT
#undef USHORT_BLU_MULT
#undef USHORT_GRN_MULT
#undef USHORT_RED_MULT

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelConverter = ::sun::awt::image::PixelConverter;
using $PixelConverter$ByteGray = ::sun::awt::image::PixelConverter$ByteGray;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _PixelConverter$UshortGray_FieldInfo_[] = {
	{"SHORT_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, SHORT_MULT)},
	{"USHORT_RED_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, USHORT_RED_MULT)},
	{"USHORT_GRN_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, USHORT_GRN_MULT)},
	{"USHORT_BLU_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, USHORT_BLU_MULT)},
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, instance)},
	{}
};

$MethodInfo _PixelConverter$UshortGray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$UshortGray::*)()>(&PixelConverter$UshortGray::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$UshortGray_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$UshortGray", "sun.awt.image.PixelConverter", "UshortGray", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$ByteGray", "sun.awt.image.PixelConverter", "ByteGray", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$UshortGray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$UshortGray",
	"sun.awt.image.PixelConverter$ByteGray",
	nullptr,
	_PixelConverter$UshortGray_FieldInfo_,
	_PixelConverter$UshortGray_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$UshortGray_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$UshortGray($Class* clazz) {
	return $of($alloc(PixelConverter$UshortGray));
}

double PixelConverter$UshortGray::SHORT_MULT = 0.0;
double PixelConverter$UshortGray::USHORT_RED_MULT = 0.0;
double PixelConverter$UshortGray::USHORT_GRN_MULT = 0.0;
double PixelConverter$UshortGray::USHORT_BLU_MULT = 0.0;
$PixelConverter* PixelConverter$UshortGray::instance = nullptr;

void PixelConverter$UshortGray::init$() {
	$PixelConverter$ByteGray::init$();
}

int32_t PixelConverter$UshortGray::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	int32_t red = (int32_t)((rgb >> 16) & (uint32_t)255);
	int32_t grn = (int32_t)((rgb >> 8) & (uint32_t)255);
	int32_t blu = (int32_t)((rgb) & (uint32_t)255);
	return $cast(int32_t, (red * PixelConverter$UshortGray::USHORT_RED_MULT + grn * PixelConverter$UshortGray::USHORT_GRN_MULT + blu * PixelConverter$UshortGray::USHORT_BLU_MULT + 0.5));
}

int32_t PixelConverter$UshortGray::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	pixel = pixel >> 8;
	return ((((((255 << 8) | pixel) << 8) | pixel) << 8) | pixel);
}

void clinit$PixelConverter$UshortGray($Class* class$) {
	PixelConverter$UshortGray::SHORT_MULT = 257.0;
	$init($PixelConverter$ByteGray);
	PixelConverter$UshortGray::USHORT_RED_MULT = $PixelConverter$ByteGray::RED_MULT * PixelConverter$UshortGray::SHORT_MULT;
	PixelConverter$UshortGray::USHORT_GRN_MULT = $PixelConverter$ByteGray::GRN_MULT * PixelConverter$UshortGray::SHORT_MULT;
	PixelConverter$UshortGray::USHORT_BLU_MULT = $PixelConverter$ByteGray::BLU_MULT * PixelConverter$UshortGray::SHORT_MULT;
	$assignStatic(PixelConverter$UshortGray::instance, $new(PixelConverter$UshortGray));
}

PixelConverter$UshortGray::PixelConverter$UshortGray() {
}

$Class* PixelConverter$UshortGray::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$UshortGray, name, initialize, &_PixelConverter$UshortGray_ClassInfo_, clinit$PixelConverter$UshortGray, allocate$PixelConverter$UshortGray);
	return class$;
}

$Class* PixelConverter$UshortGray::class$ = nullptr;

		} // image
	} // awt
} // sun