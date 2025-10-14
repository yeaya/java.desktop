#include <sun/awt/image/PixelConverter$Argb.h>

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

$FieldInfo _PixelConverter$Argb_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Argb, instance)},
	{}
};

$MethodInfo _PixelConverter$Argb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Argb::*)()>(&PixelConverter$Argb::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Argb_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Argb", "sun.awt.image.PixelConverter", "Argb", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Argb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Argb",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Argb_FieldInfo_,
	_PixelConverter$Argb_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Argb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Argb($Class* clazz) {
	return $of($alloc(PixelConverter$Argb));
}

$PixelConverter* PixelConverter$Argb::instance = nullptr;

void PixelConverter$Argb::init$() {
	$PixelConverter::init$();
	this->alphaMask = (int32_t)0xFF000000;
}

int32_t PixelConverter$Argb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return rgb;
}

int32_t PixelConverter$Argb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return pixel;
}

void clinit$PixelConverter$Argb($Class* class$) {
	$assignStatic(PixelConverter$Argb::instance, $new(PixelConverter$Argb));
}

PixelConverter$Argb::PixelConverter$Argb() {
}

$Class* PixelConverter$Argb::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Argb, name, initialize, &_PixelConverter$Argb_ClassInfo_, clinit$PixelConverter$Argb, allocate$PixelConverter$Argb);
	return class$;
}

$Class* PixelConverter$Argb::class$ = nullptr;

		} // image
	} // awt
} // sun