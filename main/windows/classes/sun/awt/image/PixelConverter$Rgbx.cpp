#include <sun/awt/image/PixelConverter$Rgbx.h>

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

$FieldInfo _PixelConverter$Rgbx_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Rgbx, instance)},
	{}
};

$MethodInfo _PixelConverter$Rgbx_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Rgbx::*)()>(&PixelConverter$Rgbx::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Rgbx_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Rgbx", "sun.awt.image.PixelConverter", "Rgbx", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Rgbx_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Rgbx",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Rgbx_FieldInfo_,
	_PixelConverter$Rgbx_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Rgbx_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Rgbx($Class* clazz) {
	return $of($alloc(PixelConverter$Rgbx));
}

$PixelConverter* PixelConverter$Rgbx::instance = nullptr;

void PixelConverter$Rgbx::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Rgbx::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return (rgb << 8);
}

int32_t PixelConverter$Rgbx::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((int32_t)0xFF000000 | (pixel >> 8));
}

void clinit$PixelConverter$Rgbx($Class* class$) {
	$assignStatic(PixelConverter$Rgbx::instance, $new(PixelConverter$Rgbx));
}

PixelConverter$Rgbx::PixelConverter$Rgbx() {
}

$Class* PixelConverter$Rgbx::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Rgbx, name, initialize, &_PixelConverter$Rgbx_ClassInfo_, clinit$PixelConverter$Rgbx, allocate$PixelConverter$Rgbx);
	return class$;
}

$Class* PixelConverter$Rgbx::class$ = nullptr;

		} // image
	} // awt
} // sun