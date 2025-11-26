#include <sun/java2d/pipe/hw/AccelTypedVolatileImage.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/ImageCapabilities.h>
#include <java/lang/UnsupportedOperationException.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$MethodInfo _AccelTypedVolatileImage_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/GraphicsConfiguration;IIII)V", nullptr, $PUBLIC, $method(static_cast<void(AccelTypedVolatileImage::*)($GraphicsConfiguration*,int32_t,int32_t,int32_t,int32_t)>(&AccelTypedVolatileImage::init$))},
	{"createGraphics", "()Ljava/awt/Graphics2D;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AccelTypedVolatileImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.hw.AccelTypedVolatileImage",
	"sun.awt.image.SunVolatileImage",
	nullptr,
	nullptr,
	_AccelTypedVolatileImage_MethodInfo_
};

$Object* allocate$AccelTypedVolatileImage($Class* clazz) {
	return $of($alloc(AccelTypedVolatileImage));
}

void AccelTypedVolatileImage::init$($GraphicsConfiguration* graphicsConfig, int32_t width, int32_t height, int32_t transparency, int32_t accType) {
	$SunVolatileImage::init$(nullptr, graphicsConfig, width, height, nullptr, transparency, nullptr, accType);
}

$Graphics2D* AccelTypedVolatileImage::createGraphics() {
	if (getForcedAccelSurfaceType() == 3) {
		$throwNew($UnsupportedOperationException, "Can\'t render to a non-RT Texture"_s);
	}
	return $SunVolatileImage::createGraphics();
}

AccelTypedVolatileImage::AccelTypedVolatileImage() {
}

$Class* AccelTypedVolatileImage::load$($String* name, bool initialize) {
	$loadClass(AccelTypedVolatileImage, name, initialize, &_AccelTypedVolatileImage_ClassInfo_, allocate$AccelTypedVolatileImage);
	return class$;
}

$Class* AccelTypedVolatileImage::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun