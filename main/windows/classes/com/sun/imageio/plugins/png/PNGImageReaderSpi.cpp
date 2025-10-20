#include <com/sun/imageio/plugins/png/PNGImageReaderSpi.h>

#include <com/sun/imageio/plugins/png/PNGImageReader.h>
#include <com/sun/imageio/plugins/png/PNGMetadata.h>
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

using $PNGImageReader = ::com::sun::imageio::plugins::png::PNGImageReader;
using $PNGMetadata = ::com::sun::imageio::plugins::png::PNGMetadata;
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
				namespace png {

$FieldInfo _PNGImageReaderSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageReaderSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageReaderSpi, version)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageReaderSpi, names)},
	{"suffixes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageReaderSpi, suffixes)},
	{"MIMETypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageReaderSpi, MIMETypes)},
	{"readerClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageReaderSpi, readerClassName)},
	{"writerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageReaderSpi, writerSpiNames)},
	{}
};

$MethodInfo _PNGImageReaderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PNGImageReaderSpi::*)()>(&PNGImageReaderSpi::init$))},
	{"canDecodeInput", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createReaderInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageReader;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PNGImageReaderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.png.PNGImageReaderSpi",
	"javax.imageio.spi.ImageReaderSpi",
	nullptr,
	_PNGImageReaderSpi_FieldInfo_,
	_PNGImageReaderSpi_MethodInfo_
};

$Object* allocate$PNGImageReaderSpi($Class* clazz) {
	return $of($alloc(PNGImageReaderSpi));
}

$String* PNGImageReaderSpi::vendorName = nullptr;
$String* PNGImageReaderSpi::version = nullptr;
$StringArray* PNGImageReaderSpi::names = nullptr;
$StringArray* PNGImageReaderSpi::suffixes = nullptr;
$StringArray* PNGImageReaderSpi::MIMETypes = nullptr;
$String* PNGImageReaderSpi::readerClassName = nullptr;
$StringArray* PNGImageReaderSpi::writerSpiNames = nullptr;

void PNGImageReaderSpi::init$() {
	$load($ImageInputStream);
	$init($PNGMetadata);
	$ImageReaderSpi::init$(PNGImageReaderSpi::vendorName, PNGImageReaderSpi::version, PNGImageReaderSpi::names, PNGImageReaderSpi::suffixes, PNGImageReaderSpi::MIMETypes, PNGImageReaderSpi::readerClassName, $$new($ClassArray, {$ImageInputStream::class$}), PNGImageReaderSpi::writerSpiNames, false, nullptr, nullptr, nullptr, nullptr, true, $PNGMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.png.PNGMetadataFormat"_s, nullptr, nullptr);
}

$String* PNGImageReaderSpi::getDescription($Locale* locale) {
	return "Standard PNG image reader"_s;
}

bool PNGImageReaderSpi::canDecodeInput(Object$* input) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ImageInputStream, input))) {
		return false;
	}
	$var($ImageInputStream, stream, $cast($ImageInputStream, input));
	$var($bytes, b, $new($bytes, 8));
	$nc(stream)->mark();
	stream->readFully(b);
	stream->reset();
	return (b->get(0) == (int8_t)137 && b->get(1) == (int8_t)80 && b->get(2) == (int8_t)78 && b->get(3) == (int8_t)71 && b->get(4) == (int8_t)13 && b->get(5) == (int8_t)10 && b->get(6) == (int8_t)26 && b->get(7) == (int8_t)10);
}

$ImageReader* PNGImageReaderSpi::createReaderInstance(Object$* extension) {
	return $new($PNGImageReader, this);
}

void clinit$PNGImageReaderSpi($Class* class$) {
	$assignStatic(PNGImageReaderSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(PNGImageReaderSpi::version, "1.0"_s);
	$assignStatic(PNGImageReaderSpi::readerClassName, "com.sun.imageio.plugins.png.PNGImageReader"_s);
	$assignStatic(PNGImageReaderSpi::names, $new($StringArray, {
		"png"_s,
		"PNG"_s
	}));
	$assignStatic(PNGImageReaderSpi::suffixes, $new($StringArray, {"png"_s}));
	$assignStatic(PNGImageReaderSpi::MIMETypes, $new($StringArray, {
		"image/png"_s,
		"image/x-png"_s
	}));
	$assignStatic(PNGImageReaderSpi::writerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.png.PNGImageWriterSpi"_s}));
}

PNGImageReaderSpi::PNGImageReaderSpi() {
}

$Class* PNGImageReaderSpi::load$($String* name, bool initialize) {
	$loadClass(PNGImageReaderSpi, name, initialize, &_PNGImageReaderSpi_ClassInfo_, clinit$PNGImageReaderSpi, allocate$PNGImageReaderSpi);
	return class$;
}

$Class* PNGImageReaderSpi::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com