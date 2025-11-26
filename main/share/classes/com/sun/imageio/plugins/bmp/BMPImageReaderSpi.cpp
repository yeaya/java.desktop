#include <com/sun/imageio/plugins/bmp/BMPImageReaderSpi.h>

#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <com/sun/imageio/plugins/bmp/BMPMetadata.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $BMPImageReader = ::com::sun::imageio::plugins::bmp::BMPImageReader;
using $BMPMetadata = ::com::sun::imageio::plugins::bmp::BMPMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageReaderSpi_FieldInfo_[] = {
	{"writerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageReaderSpi, writerSpiNames)},
	{"formatNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageReaderSpi, formatNames)},
	{"entensions", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageReaderSpi, entensions)},
	{"mimeType", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageReaderSpi, mimeType)},
	{"registered", "Z", nullptr, $PRIVATE, $field(BMPImageReaderSpi, registered)},
	{}
};

$MethodInfo _BMPImageReaderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BMPImageReaderSpi::*)()>(&BMPImageReaderSpi::init$))},
	{"canDecodeInput", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createReaderInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageReader;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC},
	{}
};

$ClassInfo _BMPImageReaderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageReaderSpi",
	"javax.imageio.spi.ImageReaderSpi",
	nullptr,
	_BMPImageReaderSpi_FieldInfo_,
	_BMPImageReaderSpi_MethodInfo_
};

$Object* allocate$BMPImageReaderSpi($Class* clazz) {
	return $of($alloc(BMPImageReaderSpi));
}

$StringArray* BMPImageReaderSpi::writerSpiNames = nullptr;
$StringArray* BMPImageReaderSpi::formatNames = nullptr;
$StringArray* BMPImageReaderSpi::entensions = nullptr;
$StringArray* BMPImageReaderSpi::mimeType = nullptr;

void BMPImageReaderSpi::init$() {
	$load($ImageInputStream);
	$init($BMPMetadata);
	$ImageReaderSpi::init$("Oracle Corporation"_s, "1.0"_s, BMPImageReaderSpi::formatNames, BMPImageReaderSpi::entensions, BMPImageReaderSpi::mimeType, "com.sun.imageio.plugins.bmp.BMPImageReader"_s, $$new($ClassArray, {$ImageInputStream::class$}), BMPImageReaderSpi::writerSpiNames, false, nullptr, nullptr, nullptr, nullptr, true, $BMPMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.bmp.BMPMetadataFormat"_s, nullptr, nullptr);
	this->registered = false;
}

void BMPImageReaderSpi::onRegistration($ServiceRegistry* registry, $Class* category) {
	if (this->registered) {
		return;
	}
	this->registered = true;
}

$String* BMPImageReaderSpi::getDescription($Locale* locale) {
	return "Standard BMP Image Reader"_s;
}

bool BMPImageReaderSpi::canDecodeInput(Object$* source) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ImageInputStream, source))) {
		return false;
	}
	$var($ImageInputStream, stream, $cast($ImageInputStream, source));
	$var($bytes, b, $new($bytes, 2));
	$nc(stream)->mark();
	stream->readFully(b);
	stream->reset();
	return (b->get(0) == 66) && (b->get(1) == 77);
}

$ImageReader* BMPImageReaderSpi::createReaderInstance(Object$* extension) {
	return $new($BMPImageReader, this);
}

void clinit$BMPImageReaderSpi($Class* class$) {
	$assignStatic(BMPImageReaderSpi::writerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.bmp.BMPImageWriterSpi"_s}));
	$assignStatic(BMPImageReaderSpi::formatNames, $new($StringArray, {
		"bmp"_s,
		"BMP"_s
	}));
	$assignStatic(BMPImageReaderSpi::entensions, $new($StringArray, {"bmp"_s}));
	$assignStatic(BMPImageReaderSpi::mimeType, $new($StringArray, {"image/bmp"_s}));
}

BMPImageReaderSpi::BMPImageReaderSpi() {
}

$Class* BMPImageReaderSpi::load$($String* name, bool initialize) {
	$loadClass(BMPImageReaderSpi, name, initialize, &_BMPImageReaderSpi_ClassInfo_, clinit$BMPImageReaderSpi, allocate$BMPImageReaderSpi);
	return class$;
}

$Class* BMPImageReaderSpi::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com