#include <com/sun/imageio/plugins/jpeg/JPEGImageWriterSpi.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $ColorModel = ::java::awt::image::ColorModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGImageWriterSpi_FieldInfo_[] = {
	{"readerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(JPEGImageWriterSpi, readerSpiNames)},
	{}
};

$MethodInfo _JPEGImageWriterSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageWriterSpi::*)()>(&JPEGImageWriterSpi::init$))},
	{"canEncodeImage", "(Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"createWriterInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isFormatLossless", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JPEGImageWriterSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriterSpi",
	"javax.imageio.spi.ImageWriterSpi",
	nullptr,
	_JPEGImageWriterSpi_FieldInfo_,
	_JPEGImageWriterSpi_MethodInfo_
};

$Object* allocate$JPEGImageWriterSpi($Class* clazz) {
	return $of($alloc(JPEGImageWriterSpi));
}

$StringArray* JPEGImageWriterSpi::readerSpiNames = nullptr;

void JPEGImageWriterSpi::init$() {
	$init($JPEG);
	$load($ImageOutputStream);
	$ImageWriterSpi::init$($JPEG::vendor, $JPEG::version, $JPEG::names, $JPEG::suffixes, $JPEG::MIMETypes, "com.sun.imageio.plugins.jpeg.JPEGImageWriter"_s, $$new($ClassArray, {$ImageOutputStream::class$}), JPEGImageWriterSpi::readerSpiNames, true, $JPEG::nativeStreamMetadataFormatName, $JPEG::nativeStreamMetadataFormatClassName, nullptr, nullptr, true, $JPEG::nativeImageMetadataFormatName, $JPEG::nativeImageMetadataFormatClassName, nullptr, nullptr);
}

$String* JPEGImageWriterSpi::getDescription($Locale* locale) {
	return "Standard JPEG Image Writer"_s;
}

bool JPEGImageWriterSpi::isFormatLossless() {
	return false;
}

bool JPEGImageWriterSpi::canEncodeImage($ImageTypeSpecifier* type) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sampleModel, $nc(type)->getSampleModel());
	$var($ColorModel, cm, type->getColorModel());
	if ($nc(cm)->hasAlpha()) {
		return false;
	}
	$var($ints, sampleSize, $nc(sampleModel)->getSampleSize());
	int32_t bitDepth = $nc(sampleSize)->get(0);
	for (int32_t i = 1; i < sampleSize->length; ++i) {
		if (sampleSize->get(i) > bitDepth) {
			bitDepth = sampleSize->get(i);
		}
	}
	if (bitDepth < 1 || bitDepth > 8) {
		return false;
	}
	return true;
}

$ImageWriter* JPEGImageWriterSpi::createWriterInstance(Object$* extension) {
	return $new($JPEGImageWriter, this);
}

void clinit$JPEGImageWriterSpi($Class* class$) {
	$assignStatic(JPEGImageWriterSpi::readerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.jpeg.JPEGImageReaderSpi"_s}));
}

JPEGImageWriterSpi::JPEGImageWriterSpi() {
}

$Class* JPEGImageWriterSpi::load$($String* name, bool initialize) {
	$loadClass(JPEGImageWriterSpi, name, initialize, &_JPEGImageWriterSpi_ClassInfo_, clinit$JPEGImageWriterSpi, allocate$JPEGImageWriterSpi);
	return class$;
}

$Class* JPEGImageWriterSpi::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com