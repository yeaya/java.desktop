#include <com/sun/imageio/plugins/jpeg/JPEGImageReaderSpi.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef SOI

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGImageReaderSpi_FieldInfo_[] = {
	{"writerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(JPEGImageReaderSpi, writerSpiNames)},
	{}
};

$MethodInfo _JPEGImageReaderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageReaderSpi::*)()>(&JPEGImageReaderSpi::init$))},
	{"canDecodeInput", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createReaderInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageReader;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JPEGImageReaderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageReaderSpi",
	"javax.imageio.spi.ImageReaderSpi",
	nullptr,
	_JPEGImageReaderSpi_FieldInfo_,
	_JPEGImageReaderSpi_MethodInfo_
};

$Object* allocate$JPEGImageReaderSpi($Class* clazz) {
	return $of($alloc(JPEGImageReaderSpi));
}

$StringArray* JPEGImageReaderSpi::writerSpiNames = nullptr;

void JPEGImageReaderSpi::init$() {
	$init($JPEG);
	$load($ImageInputStream);
	$ImageReaderSpi::init$($JPEG::vendor, $JPEG::version, $JPEG::names, $JPEG::suffixes, $JPEG::MIMETypes, "com.sun.imageio.plugins.jpeg.JPEGImageReader"_s, $$new($ClassArray, {$ImageInputStream::class$}), JPEGImageReaderSpi::writerSpiNames, true, $JPEG::nativeStreamMetadataFormatName, $JPEG::nativeStreamMetadataFormatClassName, nullptr, nullptr, true, $JPEG::nativeImageMetadataFormatName, $JPEG::nativeImageMetadataFormatClassName, nullptr, nullptr);
}

$String* JPEGImageReaderSpi::getDescription($Locale* locale) {
	return "Standard JPEG Image Reader"_s;
}

bool JPEGImageReaderSpi::canDecodeInput(Object$* source) {
	if (!($instanceOf($ImageInputStream, source))) {
		return false;
	}
	$var($ImageInputStream, iis, $cast($ImageInputStream, source));
	$nc(iis)->mark();
	int32_t byte1 = iis->read();
	int32_t byte2 = iis->read();
	iis->reset();
	if ((byte1 == 255) && (byte2 == $JPEG::SOI)) {
		return true;
	}
	return false;
}

$ImageReader* JPEGImageReaderSpi::createReaderInstance(Object$* extension) {
	return $new($JPEGImageReader, this);
}

void clinit$JPEGImageReaderSpi($Class* class$) {
	$assignStatic(JPEGImageReaderSpi::writerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.jpeg.JPEGImageWriterSpi"_s}));
}

JPEGImageReaderSpi::JPEGImageReaderSpi() {
}

$Class* JPEGImageReaderSpi::load$($String* name, bool initialize) {
	$loadClass(JPEGImageReaderSpi, name, initialize, &_JPEGImageReaderSpi_ClassInfo_, clinit$JPEGImageReaderSpi, allocate$JPEGImageReaderSpi);
	return class$;
}

$Class* JPEGImageReaderSpi::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com