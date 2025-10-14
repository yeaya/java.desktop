#include <sun/awt/image/PixelConverter$Bgrx.h>

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

$FieldInfo _PixelConverter$Bgrx_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Bgrx, instance)},
	{}
};

$MethodInfo _PixelConverter$Bgrx_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Bgrx::*)()>(&PixelConverter$Bgrx::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Bgrx_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Bgrx", "sun.awt.image.PixelConverter", "Bgrx", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Bgrx_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Bgrx",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Bgrx_FieldInfo_,
	_PixelConverter$Bgrx_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Bgrx_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Bgrx($Class* clazz) {
	return $of($alloc(PixelConverter$Bgrx));
}

$PixelConverter* PixelConverter$Bgrx::instance = nullptr;

void PixelConverter$Bgrx::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Bgrx::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return (((rgb << 24) | (((int32_t)(rgb & (uint32_t)0x0000FF00)) << 8)) | ((int32_t)((rgb >> 8) & (uint32_t)0x0000FF00)));
}

int32_t PixelConverter$Bgrx::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((((int32_t)0xFF000000 | (((int32_t)(pixel & (uint32_t)0x0000FF00)) << 8)) | ((int32_t)((pixel >> 8) & (uint32_t)0x0000FF00))) | ((int32_t)((uint32_t)pixel >> 24)));
}

void clinit$PixelConverter$Bgrx($Class* class$) {
	$assignStatic(PixelConverter$Bgrx::instance, $new(PixelConverter$Bgrx));
}

PixelConverter$Bgrx::PixelConverter$Bgrx() {
}

$Class* PixelConverter$Bgrx::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Bgrx, name, initialize, &_PixelConverter$Bgrx_ClassInfo_, clinit$PixelConverter$Bgrx, allocate$PixelConverter$Bgrx);
	return class$;
}

$Class* PixelConverter$Bgrx::class$ = nullptr;

		} // image
	} // awt
} // sun