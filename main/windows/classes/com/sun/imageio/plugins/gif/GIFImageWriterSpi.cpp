#include <com/sun/imageio/plugins/gif/GIFImageWriterSpi.h>

#include <com/sun/imageio/plugins/common/PaletteBuilder.h>
#include <com/sun/imageio/plugins/gif/GIFImageWriter.h>
#include <com/sun/imageio/plugins/gif/GIFWritableImageMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFWritableStreamMetadata.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
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

#undef NATIVE_FORMAT_NAME

using $PaletteBuilder = ::com::sun::imageio::plugins::common::PaletteBuilder;
using $GIFImageWriter = ::com::sun::imageio::plugins::gif::GIFImageWriter;
using $GIFWritableImageMetadata = ::com::sun::imageio::plugins::gif::GIFWritableImageMetadata;
using $GIFWritableStreamMetadata = ::com::sun::imageio::plugins::gif::GIFWritableStreamMetadata;
using $ColorModel = ::java::awt::image::ColorModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
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
				namespace gif {

$FieldInfo _GIFImageWriterSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageWriterSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageWriterSpi, version)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageWriterSpi, names)},
	{"suffixes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageWriterSpi, suffixes)},
	{"MIMETypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageWriterSpi, MIMETypes)},
	{"writerClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageWriterSpi, writerClassName)},
	{"readerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageWriterSpi, readerSpiNames)},
	{}
};

$MethodInfo _GIFImageWriterSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GIFImageWriterSpi::*)()>(&GIFImageWriterSpi::init$))},
	{"canEncodeImage", "(Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"createWriterInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GIFImageWriterSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFImageWriterSpi",
	"javax.imageio.spi.ImageWriterSpi",
	nullptr,
	_GIFImageWriterSpi_FieldInfo_,
	_GIFImageWriterSpi_MethodInfo_
};

$Object* allocate$GIFImageWriterSpi($Class* clazz) {
	return $of($alloc(GIFImageWriterSpi));
}

$String* GIFImageWriterSpi::vendorName = nullptr;
$String* GIFImageWriterSpi::version = nullptr;
$StringArray* GIFImageWriterSpi::names = nullptr;
$StringArray* GIFImageWriterSpi::suffixes = nullptr;
$StringArray* GIFImageWriterSpi::MIMETypes = nullptr;
$String* GIFImageWriterSpi::writerClassName = nullptr;
$StringArray* GIFImageWriterSpi::readerSpiNames = nullptr;

void GIFImageWriterSpi::init$() {
	$load($ImageOutputStream);
	$init($GIFWritableStreamMetadata);
	$init($GIFWritableImageMetadata);
	$ImageWriterSpi::init$(GIFImageWriterSpi::vendorName, GIFImageWriterSpi::version, GIFImageWriterSpi::names, GIFImageWriterSpi::suffixes, GIFImageWriterSpi::MIMETypes, GIFImageWriterSpi::writerClassName, $$new($ClassArray, {$ImageOutputStream::class$}), GIFImageWriterSpi::readerSpiNames, true, $GIFWritableStreamMetadata::NATIVE_FORMAT_NAME, "com.sun.imageio.plugins.gif.GIFStreamMetadataFormat"_s, nullptr, nullptr, true, $GIFWritableImageMetadata::NATIVE_FORMAT_NAME, "com.sun.imageio.plugins.gif.GIFImageMetadataFormat"_s, nullptr, nullptr);
}

bool GIFImageWriterSpi::canEncodeImage($ImageTypeSpecifier* type) {
	$useLocalCurrentObjectStackCache();
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "type == null!"_s);
	}
	$var($SampleModel, sm, $nc(type)->getSampleModel());
	$var($ColorModel, cm, type->getColorModel());
	bool var$3 = $nc(sm)->getNumBands() == 1;
	bool var$2 = var$3 && sm->getSampleSize(0) <= 8;
	bool var$1 = var$2 && sm->getWidth() <= 0x0000FFFF;
	bool var$0 = var$1 && sm->getHeight() <= 0x0000FFFF;
	bool canEncode = var$0 && (cm == nullptr || $nc($($nc(cm)->getComponentSize()))->get(0) <= 8);
	if (canEncode) {
		return true;
	} else {
		return $PaletteBuilder::canCreatePalette(type);
	}
}

$String* GIFImageWriterSpi::getDescription($Locale* locale) {
	return "Standard GIF image writer"_s;
}

$ImageWriter* GIFImageWriterSpi::createWriterInstance(Object$* extension) {
	return $new($GIFImageWriter, this);
}

void clinit$GIFImageWriterSpi($Class* class$) {
	$assignStatic(GIFImageWriterSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(GIFImageWriterSpi::version, "1.0"_s);
	$assignStatic(GIFImageWriterSpi::writerClassName, "com.sun.imageio.plugins.gif.GIFImageWriter"_s);
	$assignStatic(GIFImageWriterSpi::names, $new($StringArray, {
		"gif"_s,
		"GIF"_s
	}));
	$assignStatic(GIFImageWriterSpi::suffixes, $new($StringArray, {"gif"_s}));
	$assignStatic(GIFImageWriterSpi::MIMETypes, $new($StringArray, {"image/gif"_s}));
	$assignStatic(GIFImageWriterSpi::readerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.gif.GIFImageReaderSpi"_s}));
}

GIFImageWriterSpi::GIFImageWriterSpi() {
}

$Class* GIFImageWriterSpi::load$($String* name, bool initialize) {
	$loadClass(GIFImageWriterSpi, name, initialize, &_GIFImageWriterSpi_ClassInfo_, clinit$GIFImageWriterSpi, allocate$GIFImageWriterSpi);
	return class$;
}

$Class* GIFImageWriterSpi::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com