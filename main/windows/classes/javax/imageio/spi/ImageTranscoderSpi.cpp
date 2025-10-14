#include <javax/imageio/spi/ImageTranscoderSpi.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageTranscoder.h>
#include <javax/imageio/spi/IIOServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTranscoder = ::javax::imageio::ImageTranscoder;
using $IIOServiceProvider = ::javax::imageio::spi::IIOServiceProvider;

namespace javax {
	namespace imageio {
		namespace spi {

$MethodInfo _ImageTranscoderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ImageTranscoderSpi::*)()>(&ImageTranscoderSpi::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageTranscoderSpi::*)($String*,$String*)>(&ImageTranscoderSpi::init$))},
	{"createTranscoderInstance", "()Ljavax/imageio/ImageTranscoder;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReaderServiceProviderName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWriterServiceProviderName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ImageTranscoderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.spi.ImageTranscoderSpi",
	"javax.imageio.spi.IIOServiceProvider",
	nullptr,
	nullptr,
	_ImageTranscoderSpi_MethodInfo_
};

$Object* allocate$ImageTranscoderSpi($Class* clazz) {
	return $of($alloc(ImageTranscoderSpi));
}

void ImageTranscoderSpi::init$() {
	$IIOServiceProvider::init$();
}

void ImageTranscoderSpi::init$($String* vendorName, $String* version) {
	$IIOServiceProvider::init$(vendorName, version);
}

ImageTranscoderSpi::ImageTranscoderSpi() {
}

$Class* ImageTranscoderSpi::load$($String* name, bool initialize) {
	$loadClass(ImageTranscoderSpi, name, initialize, &_ImageTranscoderSpi_ClassInfo_, allocate$ImageTranscoderSpi);
	return class$;
}

$Class* ImageTranscoderSpi::class$ = nullptr;

		} // spi
	} // imageio
} // javax