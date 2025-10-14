#include <com/sun/imageio/plugins/bmp/BMPImageWriterSpi.h>

#include <com/sun/imageio/plugins/bmp/BMPImageWriter.h>
#include <com/sun/imageio/plugins/bmp/BMPMetadata.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
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
#include <javax/imageio/spi/ServiceRegistry.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT

using $BMPImageWriter = ::com::sun::imageio::plugins::bmp::BMPImageWriter;
using $BMPMetadata = ::com::sun::imageio::plugins::bmp::BMPMetadata;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageWriterSpi_FieldInfo_[] = {
	{"readerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageWriterSpi, readerSpiNames)},
	{"formatNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageWriterSpi, formatNames)},
	{"entensions", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageWriterSpi, entensions)},
	{"mimeType", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageWriterSpi, mimeType)},
	{"registered", "Z", nullptr, $PRIVATE, $field(BMPImageWriterSpi, registered)},
	{}
};

$MethodInfo _BMPImageWriterSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BMPImageWriterSpi::*)()>(&BMPImageWriterSpi::init$))},
	{"canEncodeImage", "(Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"createWriterInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC},
	{}
};

$ClassInfo _BMPImageWriterSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageWriterSpi",
	"javax.imageio.spi.ImageWriterSpi",
	nullptr,
	_BMPImageWriterSpi_FieldInfo_,
	_BMPImageWriterSpi_MethodInfo_
};

$Object* allocate$BMPImageWriterSpi($Class* clazz) {
	return $of($alloc(BMPImageWriterSpi));
}

$StringArray* BMPImageWriterSpi::readerSpiNames = nullptr;
$StringArray* BMPImageWriterSpi::formatNames = nullptr;
$StringArray* BMPImageWriterSpi::entensions = nullptr;
$StringArray* BMPImageWriterSpi::mimeType = nullptr;

void BMPImageWriterSpi::init$() {
	$load($ImageOutputStream);
	$init($BMPMetadata);
	$ImageWriterSpi::init$("Oracle Corporation"_s, "1.0"_s, BMPImageWriterSpi::formatNames, BMPImageWriterSpi::entensions, BMPImageWriterSpi::mimeType, "com.sun.imageio.plugins.bmp.BMPImageWriter"_s, $$new($ClassArray, {$ImageOutputStream::class$}), BMPImageWriterSpi::readerSpiNames, false, nullptr, nullptr, nullptr, nullptr, true, $BMPMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.bmp.BMPMetadataFormat"_s, nullptr, nullptr);
	this->registered = false;
}

$String* BMPImageWriterSpi::getDescription($Locale* locale) {
	return "Standard BMP Image Writer"_s;
}

void BMPImageWriterSpi::onRegistration($ServiceRegistry* registry, $Class* category) {
	if (this->registered) {
		return;
	}
	this->registered = true;
}

bool BMPImageWriterSpi::canEncodeImage($ImageTypeSpecifier* type) {
	int32_t dataType = $nc($($nc(type)->getSampleModel()))->getDataType();
	if (dataType < $DataBuffer::TYPE_BYTE || dataType > $DataBuffer::TYPE_INT) {
		return false;
	}
	$var($SampleModel, sm, type->getSampleModel());
	int32_t numBands = $nc(sm)->getNumBands();
	if (!(numBands == 1 || numBands == 3)) {
		return false;
	}
	if (numBands == 1 && dataType != $DataBuffer::TYPE_BYTE) {
		return false;
	}
	if (dataType > $DataBuffer::TYPE_BYTE && !($instanceOf($SinglePixelPackedSampleModel, sm))) {
		return false;
	}
	return true;
}

$ImageWriter* BMPImageWriterSpi::createWriterInstance(Object$* extension) {
	return $new($BMPImageWriter, this);
}

void clinit$BMPImageWriterSpi($Class* class$) {
	$assignStatic(BMPImageWriterSpi::readerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.bmp.BMPImageReaderSpi"_s}));
	$assignStatic(BMPImageWriterSpi::formatNames, $new($StringArray, {
		"bmp"_s,
		"BMP"_s
	}));
	$assignStatic(BMPImageWriterSpi::entensions, $new($StringArray, {"bmp"_s}));
	$assignStatic(BMPImageWriterSpi::mimeType, $new($StringArray, {"image/bmp"_s}));
}

BMPImageWriterSpi::BMPImageWriterSpi() {
}

$Class* BMPImageWriterSpi::load$($String* name, bool initialize) {
	$loadClass(BMPImageWriterSpi, name, initialize, &_BMPImageWriterSpi_ClassInfo_, clinit$BMPImageWriterSpi, allocate$BMPImageWriterSpi);
	return class$;
}

$Class* BMPImageWriterSpi::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com