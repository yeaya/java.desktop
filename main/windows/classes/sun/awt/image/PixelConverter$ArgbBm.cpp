#include <sun/awt/image/PixelConverter$ArgbBm.h>

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

$FieldInfo _PixelConverter$ArgbBm_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$ArgbBm, instance)},
	{}
};

$MethodInfo _PixelConverter$ArgbBm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelConverter$ArgbBm::*)()>(&PixelConverter$ArgbBm::init$))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter$ArgbBm_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$ArgbBm", "sun.awt.image.PixelConverter", "ArgbBm", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter$ArgbBm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter$ArgbBm",
	"sun.awt.image.PixelConverter",
	nullptr,
	_PixelConverter$ArgbBm_FieldInfo_,
	_PixelConverter$ArgbBm_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter$ArgbBm_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter"
};

$Object* allocate$PixelConverter$ArgbBm($Class* clazz) {
	return $of($alloc(PixelConverter$ArgbBm));
}

$PixelConverter* PixelConverter$ArgbBm::instance = nullptr;

void PixelConverter$ArgbBm::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$ArgbBm::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return (rgb | ((rgb >> 31) << 24));
}

int32_t PixelConverter$ArgbBm::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((pixel << 7) >> 7);
}

void clinit$PixelConverter$ArgbBm($Class* class$) {
	$assignStatic(PixelConverter$ArgbBm::instance, $new(PixelConverter$ArgbBm));
}

PixelConverter$ArgbBm::PixelConverter$ArgbBm() {
}

$Class* PixelConverter$ArgbBm::load$($String* name, bool initialize) {
	$loadClass(PixelConverter$ArgbBm, name, initialize, &_PixelConverter$ArgbBm_ClassInfo_, clinit$PixelConverter$ArgbBm, allocate$PixelConverter$ArgbBm);
	return class$;
}

$Class* PixelConverter$ArgbBm::class$ = nullptr;

		} // image
	} // awt
} // sun