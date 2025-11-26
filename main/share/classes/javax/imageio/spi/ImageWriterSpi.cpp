#include <javax/imageio/spi/ImageWriterSpi.h>

#include <java/awt/image/RenderedImage.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/ImageReaderWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef STANDARD_OUTPUT_TYPE

using $RenderedImage = ::java::awt::image::RenderedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $ImageReaderWriterSpi = ::javax::imageio::spi::ImageReaderWriterSpi;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace javax {
	namespace imageio {
		namespace spi {

$CompoundAttribute _ImageWriterSpi_FieldAnnotations_STANDARD_OUTPUT_TYPE[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ImageWriterSpi_FieldInfo_[] = {
	{"STANDARD_OUTPUT_TYPE", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(ImageWriterSpi, STANDARD_OUTPUT_TYPE), _ImageWriterSpi_FieldAnnotations_STANDARD_OUTPUT_TYPE},
	{"outputTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PROTECTED, $field(ImageWriterSpi, outputTypes)},
	{"readerSpiNames", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageWriterSpi, readerSpiNames)},
	{"writerClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(ImageWriterSpi, writerClass)},
	{}
};

$MethodInfo _ImageWriterSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ImageWriterSpi::*)()>(&ImageWriterSpi::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class<*>;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(ImageWriterSpi::*)($String*,$String*,$StringArray*,$StringArray*,$StringArray*,$String*,$ClassArray*,$StringArray*,bool,$String*,$String*,$StringArray*,$StringArray*,bool,$String*,$String*,$StringArray*,$StringArray*)>(&ImageWriterSpi::init$))},
	{"canEncodeImage", "(Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"canEncodeImage", "(Ljava/awt/image/RenderedImage;)Z", nullptr, $PUBLIC},
	{"createWriterInstance", "()Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createWriterInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getImageReaderSpiNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOutputTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC},
	{"isFormatLossless", "()Z", nullptr, $PUBLIC},
	{"isOwnWriter", "(Ljavax/imageio/ImageWriter;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageWriterSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.spi.ImageWriterSpi",
	"javax.imageio.spi.ImageReaderWriterSpi",
	nullptr,
	_ImageWriterSpi_FieldInfo_,
	_ImageWriterSpi_MethodInfo_
};

$Object* allocate$ImageWriterSpi($Class* clazz) {
	return $of($alloc(ImageWriterSpi));
}

$ClassArray* ImageWriterSpi::STANDARD_OUTPUT_TYPE = nullptr;

void ImageWriterSpi::init$() {
	$ImageReaderWriterSpi::init$();
	$set(this, outputTypes, nullptr);
	$set(this, readerSpiNames, nullptr);
	$set(this, writerClass, nullptr);
}

void ImageWriterSpi::init$($String* vendorName, $String* version, $StringArray* names, $StringArray* suffixes, $StringArray* MIMETypes, $String* writerClassName, $ClassArray* outputTypes, $StringArray* readerSpiNames, bool supportsStandardStreamMetadataFormat, $String* nativeStreamMetadataFormatName, $String* nativeStreamMetadataFormatClassName, $StringArray* extraStreamMetadataFormatNames, $StringArray* extraStreamMetadataFormatClassNames, bool supportsStandardImageMetadataFormat, $String* nativeImageMetadataFormatName, $String* nativeImageMetadataFormatClassName, $StringArray* extraImageMetadataFormatNames, $StringArray* extraImageMetadataFormatClassNames) {
	$ImageReaderWriterSpi::init$(vendorName, version, names, suffixes, MIMETypes, writerClassName, supportsStandardStreamMetadataFormat, nativeStreamMetadataFormatName, nativeStreamMetadataFormatClassName, extraStreamMetadataFormatNames, extraStreamMetadataFormatClassNames, supportsStandardImageMetadataFormat, nativeImageMetadataFormatName, nativeImageMetadataFormatClassName, extraImageMetadataFormatNames, extraImageMetadataFormatClassNames);
	$set(this, outputTypes, nullptr);
	$set(this, readerSpiNames, nullptr);
	$set(this, writerClass, nullptr);
	if (outputTypes == nullptr) {
		$throwNew($IllegalArgumentException, "outputTypes == null!"_s);
	}
	if ($nc(outputTypes)->length == 0) {
		$throwNew($IllegalArgumentException, "outputTypes.length == 0!"_s);
	}
	$load($ImageOutputStream);
	$set(this, outputTypes, (outputTypes == ImageWriterSpi::STANDARD_OUTPUT_TYPE) ? $new($ClassArray, {$ImageOutputStream::class$}) : $cast($ClassArray, $nc(outputTypes)->clone()));
	if (readerSpiNames != nullptr && readerSpiNames->length > 0) {
		$set(this, readerSpiNames, $cast($StringArray, readerSpiNames->clone()));
	}
}

bool ImageWriterSpi::isFormatLossless() {
	return true;
}

$ClassArray* ImageWriterSpi::getOutputTypes() {
	return $cast($ClassArray, $nc(this->outputTypes)->clone());
}

bool ImageWriterSpi::canEncodeImage($RenderedImage* im) {
	return canEncodeImage($($ImageTypeSpecifier::createFromRenderedImage(im)));
}

$ImageWriter* ImageWriterSpi::createWriterInstance() {
	return createWriterInstance(nullptr);
}

bool ImageWriterSpi::isOwnWriter($ImageWriter* writer) {
	if (writer == nullptr) {
		$throwNew($IllegalArgumentException, "writer == null!"_s);
	}
	$var($String, name, $nc($of(writer))->getClass()->getName());
	return $nc(name)->equals(this->pluginClassName);
}

$StringArray* ImageWriterSpi::getImageReaderSpiNames() {
	return this->readerSpiNames == nullptr ? ($StringArray*)nullptr : $cast($StringArray, $nc(this->readerSpiNames)->clone());
}

void clinit$ImageWriterSpi($Class* class$) {
	$load($ImageOutputStream);
	$assignStatic(ImageWriterSpi::STANDARD_OUTPUT_TYPE, $new($ClassArray, {$ImageOutputStream::class$}));
}

ImageWriterSpi::ImageWriterSpi() {
}

$Class* ImageWriterSpi::load$($String* name, bool initialize) {
	$loadClass(ImageWriterSpi, name, initialize, &_ImageWriterSpi_ClassInfo_, clinit$ImageWriterSpi, allocate$ImageWriterSpi);
	return class$;
}

$Class* ImageWriterSpi::class$ = nullptr;

		} // spi
	} // imageio
} // javax