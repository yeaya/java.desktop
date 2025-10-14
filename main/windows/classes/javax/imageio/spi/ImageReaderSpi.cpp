#include <javax/imageio/spi/ImageReaderSpi.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/spi/ImageReaderWriterSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef STANDARD_INPUT_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageReaderWriterSpi = ::javax::imageio::spi::ImageReaderWriterSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace javax {
	namespace imageio {
		namespace spi {

$CompoundAttribute _ImageReaderSpi_FieldAnnotations_STANDARD_INPUT_TYPE[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ImageReaderSpi_FieldInfo_[] = {
	{"STANDARD_INPUT_TYPE", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(ImageReaderSpi, STANDARD_INPUT_TYPE), _ImageReaderSpi_FieldAnnotations_STANDARD_INPUT_TYPE},
	{"inputTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PROTECTED, $field(ImageReaderSpi, inputTypes)},
	{"writerSpiNames", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderSpi, writerSpiNames)},
	{"readerClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(ImageReaderSpi, readerClass)},
	{}
};

$MethodInfo _ImageReaderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ImageReaderSpi::*)()>(&ImageReaderSpi::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class<*>;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(ImageReaderSpi::*)($String*,$String*,$StringArray*,$StringArray*,$StringArray*,$String*,$ClassArray*,$StringArray*,bool,$String*,$String*,$StringArray*,$StringArray*,bool,$String*,$String*,$StringArray*,$StringArray*)>(&ImageReaderSpi::init$))},
	{"canDecodeInput", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"createReaderInstance", "()Ljavax/imageio/ImageReader;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createReaderInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageReader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getImageWriterSpiNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInputTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC},
	{"isOwnReader", "(Ljavax/imageio/ImageReader;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageReaderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.spi.ImageReaderSpi",
	"javax.imageio.spi.ImageReaderWriterSpi",
	nullptr,
	_ImageReaderSpi_FieldInfo_,
	_ImageReaderSpi_MethodInfo_
};

$Object* allocate$ImageReaderSpi($Class* clazz) {
	return $of($alloc(ImageReaderSpi));
}


$ClassArray* ImageReaderSpi::STANDARD_INPUT_TYPE = nullptr;

void ImageReaderSpi::init$() {
	$ImageReaderWriterSpi::init$();
	$set(this, inputTypes, nullptr);
	$set(this, writerSpiNames, nullptr);
	$set(this, readerClass, nullptr);
}

void ImageReaderSpi::init$($String* vendorName, $String* version, $StringArray* names, $StringArray* suffixes, $StringArray* MIMETypes, $String* readerClassName, $ClassArray* inputTypes, $StringArray* writerSpiNames, bool supportsStandardStreamMetadataFormat, $String* nativeStreamMetadataFormatName, $String* nativeStreamMetadataFormatClassName, $StringArray* extraStreamMetadataFormatNames, $StringArray* extraStreamMetadataFormatClassNames, bool supportsStandardImageMetadataFormat, $String* nativeImageMetadataFormatName, $String* nativeImageMetadataFormatClassName, $StringArray* extraImageMetadataFormatNames, $StringArray* extraImageMetadataFormatClassNames) {
	$ImageReaderWriterSpi::init$(vendorName, version, names, suffixes, MIMETypes, readerClassName, supportsStandardStreamMetadataFormat, nativeStreamMetadataFormatName, nativeStreamMetadataFormatClassName, extraStreamMetadataFormatNames, extraStreamMetadataFormatClassNames, supportsStandardImageMetadataFormat, nativeImageMetadataFormatName, nativeImageMetadataFormatClassName, extraImageMetadataFormatNames, extraImageMetadataFormatClassNames);
	$set(this, inputTypes, nullptr);
	$set(this, writerSpiNames, nullptr);
	$set(this, readerClass, nullptr);
	if (inputTypes == nullptr) {
		$throwNew($IllegalArgumentException, "inputTypes == null!"_s);
	}
	if ($nc(inputTypes)->length == 0) {
		$throwNew($IllegalArgumentException, "inputTypes.length == 0!"_s);
	}
	$load($ImageInputStream);
	$set(this, inputTypes, (inputTypes == ImageReaderSpi::STANDARD_INPUT_TYPE) ? $new($ClassArray, {$ImageInputStream::class$}) : $cast($ClassArray, $nc(inputTypes)->clone()));
	if (writerSpiNames != nullptr && writerSpiNames->length > 0) {
		$set(this, writerSpiNames, $cast($StringArray, writerSpiNames->clone()));
	}
}

$ClassArray* ImageReaderSpi::getInputTypes() {
	return $cast($ClassArray, $nc(this->inputTypes)->clone());
}

$ImageReader* ImageReaderSpi::createReaderInstance() {
	return createReaderInstance(nullptr);
}

bool ImageReaderSpi::isOwnReader($ImageReader* reader) {
	if (reader == nullptr) {
		$throwNew($IllegalArgumentException, "reader == null!"_s);
	}
	$var($String, name, $nc($of(reader))->getClass()->getName());
	return $nc(name)->equals(this->pluginClassName);
}

$StringArray* ImageReaderSpi::getImageWriterSpiNames() {
	return this->writerSpiNames == nullptr ? ($StringArray*)nullptr : $cast($StringArray, $nc(this->writerSpiNames)->clone());
}

void clinit$ImageReaderSpi($Class* class$) {
	$load($ImageInputStream);
	$assignStatic(ImageReaderSpi::STANDARD_INPUT_TYPE, $new($ClassArray, {$ImageInputStream::class$}));
}

ImageReaderSpi::ImageReaderSpi() {
}

$Class* ImageReaderSpi::load$($String* name, bool initialize) {
	$loadClass(ImageReaderSpi, name, initialize, &_ImageReaderSpi_ClassInfo_, clinit$ImageReaderSpi, allocate$ImageReaderSpi);
	return class$;
}

$Class* ImageReaderSpi::class$ = nullptr;

		} // spi
	} // imageio
} // javax