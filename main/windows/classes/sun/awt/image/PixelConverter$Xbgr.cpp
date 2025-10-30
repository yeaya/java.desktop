#include <sun/awt/image/PixelConverter$Xbgr.h>

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

$FieldInfo _PixelConverter$Xbgr_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Xbgr, instance)},
	{}
};

$MethodInfo _PixelConverter$Xbgr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$Xbgr::*)()>(&PixelConverter$Xbgr::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$Xbgr_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$Xbgr", "sun.awt.image.PixelConverter", "Xbgr", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$Xbgr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$Xbgr",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$Xbgr_FieldInfo_,
	_PixelConverter$Xbgr_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$Xbgr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$Xbgr($Class* clazz) {
	return $of($alloc(PixelConverter$Xbgr));
}

$PixelConverter* PixelConverter$Xbgr::instance = nullptr;

void PixelConverter$Xbgr::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Xbgr::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return (((((int32_t)(rgb & (uint32_t)255)) << 16) | ((int32_t)(rgb & (uint32_t)0x0000FF00))) | ((int32_t)((rgb >> 16) & (uint32_t)255)));
}

int32_t PixelConverter$Xbgr::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((((int32_t)0xFF000000 | (((int32_t)(pixel & (uint32_t)255)) << 16)) | ((int32_t)(pixel & (uint32_t)0x0000FF00))) | ((int32_t)((pixel >> 16) & (uint32_t)255)));
}

void clinit$PixelConverter$Xbgr($Class* class$) {
	$assignStatic(PixelConverter$Xbgr::instance, $new(PixelConverter$Xbgr));
}

PixelConverter$Xbgr::PixelConverter$Xbgr() {
}

$Class* PixelConverter$Xbgr::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$Xbgr, name, initialize, &_PixelConverter$Xbgr_ClassInfo_, clinit$PixelConverter$Xbgr, allocate$PixelConverter$Xbgr);
	return class$;
}

$Class* PixelConverter$Xbgr::class$ = nullptr;

		} // image
	} // awt
} // sun