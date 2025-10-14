#include <javax/imageio/spi/ImageOutputStreamSpi.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/spi/IIOServiceProvider.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOServiceProvider = ::javax::imageio::spi::IIOServiceProvider;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _ImageOutputStreamSpi_FieldInfo_[] = {
	{"outputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PROTECTED, $field(ImageOutputStreamSpi, outputClass)},
	{}
};

$MethodInfo _ImageOutputStreamSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ImageOutputStreamSpi::*)()>(&ImageOutputStreamSpi::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(ImageOutputStreamSpi::*)($String*,$String*,$Class*)>(&ImageOutputStreamSpi::init$))},
	{"canUseCacheFile", "()Z", nullptr, $PUBLIC},
	{"createOutputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"createOutputStreamInstance", "(Ljava/lang/Object;)Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getOutputClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"needsCacheFile", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageOutputStreamSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.spi.ImageOutputStreamSpi",
	"javax.imageio.spi.IIOServiceProvider",
	nullptr,
	_ImageOutputStreamSpi_FieldInfo_,
	_ImageOutputStreamSpi_MethodInfo_
};

$Object* allocate$ImageOutputStreamSpi($Class* clazz) {
	return $of($alloc(ImageOutputStreamSpi));
}

void ImageOutputStreamSpi::init$() {
	$IIOServiceProvider::init$();
}

void ImageOutputStreamSpi::init$($String* vendorName, $String* version, $Class* outputClass) {
	$IIOServiceProvider::init$(vendorName, version);
	$set(this, outputClass, outputClass);
}

$Class* ImageOutputStreamSpi::getOutputClass() {
	return this->outputClass;
}

bool ImageOutputStreamSpi::canUseCacheFile() {
	return false;
}

bool ImageOutputStreamSpi::needsCacheFile() {
	return false;
}

$ImageOutputStream* ImageOutputStreamSpi::createOutputStreamInstance(Object$* output) {
	return createOutputStreamInstance(output, true, nullptr);
}

ImageOutputStreamSpi::ImageOutputStreamSpi() {
}

$Class* ImageOutputStreamSpi::load$($String* name, bool initialize) {
	$loadClass(ImageOutputStreamSpi, name, initialize, &_ImageOutputStreamSpi_ClassInfo_, allocate$ImageOutputStreamSpi);
	return class$;
}

$Class* ImageOutputStreamSpi::class$ = nullptr;

		} // spi
	} // imageio
} // javax