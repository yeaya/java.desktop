#include <com/sun/imageio/plugins/png/PNGImageWriterSpi.h>

#include <com/sun/imageio/plugins/png/PNGImageWriter.h>
#include <com/sun/imageio/plugins/png/PNGMetadata.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $PNGImageWriter = ::com::sun::imageio::plugins::png::PNGImageWriter;
using $PNGMetadata = ::com::sun::imageio::plugins::png::PNGMetadata;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
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
				namespace png {

$FieldInfo _PNGImageWriterSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriterSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriterSpi, version)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriterSpi, names)},
	{"suffixes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriterSpi, suffixes)},
	{"MIMETypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriterSpi, MIMETypes)},
	{"writerClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriterSpi, writerClassName)},
	{"readerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriterSpi, readerSpiNames)},
	{}
};

$MethodInfo _PNGImageWriterSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PNGImageWriterSpi::*)()>(&PNGImageWriterSpi::init$))},
	{"canEncodeImage", "(Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"createWriterInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PNGImageWriterSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.png.PNGImageWriterSpi",
	"javax.imageio.spi.ImageWriterSpi",
	nullptr,
	_PNGImageWriterSpi_FieldInfo_,
	_PNGImageWriterSpi_MethodInfo_
};

$Object* allocate$PNGImageWriterSpi($Class* clazz) {
	return $of($alloc(PNGImageWriterSpi));
}

$String* PNGImageWriterSpi::vendorName = nullptr;
$String* PNGImageWriterSpi::version = nullptr;
$StringArray* PNGImageWriterSpi::names = nullptr;
$StringArray* PNGImageWriterSpi::suffixes = nullptr;
$StringArray* PNGImageWriterSpi::MIMETypes = nullptr;
$String* PNGImageWriterSpi::writerClassName = nullptr;
$StringArray* PNGImageWriterSpi::readerSpiNames = nullptr;

void PNGImageWriterSpi::init$() {
	$load($ImageOutputStream);
	$init($PNGMetadata);
	$ImageWriterSpi::init$(PNGImageWriterSpi::vendorName, PNGImageWriterSpi::version, PNGImageWriterSpi::names, PNGImageWriterSpi::suffixes, PNGImageWriterSpi::MIMETypes, PNGImageWriterSpi::writerClassName, $$new($ClassArray, {$ImageOutputStream::class$}), PNGImageWriterSpi::readerSpiNames, false, nullptr, nullptr, nullptr, nullptr, true, $PNGMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.png.PNGMetadataFormat"_s, nullptr, nullptr);
}

bool PNGImageWriterSpi::canEncodeImage($ImageTypeSpecifier* type) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sampleModel, $nc(type)->getSampleModel());
	$var($ColorModel, colorModel, type->getColorModel());
	$var($ints, sampleSize, $nc(sampleModel)->getSampleSize());
	int32_t bitDepth = $nc(sampleSize)->get(0);
	for (int32_t i = 1; i < sampleSize->length; ++i) {
		if (sampleSize->get(i) > bitDepth) {
			bitDepth = sampleSize->get(i);
		}
	}
	if (bitDepth < 1 || bitDepth > 16) {
		return false;
	}
	int32_t numBands = sampleModel->getNumBands();
	if (numBands < 1 || numBands > 4) {
		return false;
	}
	bool hasAlpha = $nc(colorModel)->hasAlpha();
	if ($instanceOf($IndexColorModel, colorModel)) {
		return true;
	}
	if ((numBands == 1 || numBands == 3) && hasAlpha) {
		return false;
	}
	if ((numBands == 2 || numBands == 4) && !hasAlpha) {
		return false;
	}
	return true;
}

$String* PNGImageWriterSpi::getDescription($Locale* locale) {
	return "Standard PNG image writer"_s;
}

$ImageWriter* PNGImageWriterSpi::createWriterInstance(Object$* extension) {
	return $new($PNGImageWriter, this);
}

void clinit$PNGImageWriterSpi($Class* class$) {
	$assignStatic(PNGImageWriterSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(PNGImageWriterSpi::version, "1.0"_s);
	$assignStatic(PNGImageWriterSpi::writerClassName, "com.sun.imageio.plugins.png.PNGImageWriter"_s);
	$assignStatic(PNGImageWriterSpi::names, $new($StringArray, {
		"png"_s,
		"PNG"_s
	}));
	$assignStatic(PNGImageWriterSpi::suffixes, $new($StringArray, {"png"_s}));
	$assignStatic(PNGImageWriterSpi::MIMETypes, $new($StringArray, {
		"image/png"_s,
		"image/x-png"_s
	}));
	$assignStatic(PNGImageWriterSpi::readerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.png.PNGImageReaderSpi"_s}));
}

PNGImageWriterSpi::PNGImageWriterSpi() {
}

$Class* PNGImageWriterSpi::load$($String* name, bool initialize) {
	$loadClass(PNGImageWriterSpi, name, initialize, &_PNGImageWriterSpi_ClassInfo_, clinit$PNGImageWriterSpi, allocate$PNGImageWriterSpi);
	return class$;
}

$Class* PNGImageWriterSpi::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com