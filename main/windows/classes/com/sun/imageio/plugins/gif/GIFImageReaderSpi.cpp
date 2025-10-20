#include <com/sun/imageio/plugins/gif/GIFImageReaderSpi.h>

#include <com/sun/imageio/plugins/gif/GIFImageMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFImageReader.h>
#include <com/sun/imageio/plugins/gif/GIFStreamMetadata.h>
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

using $GIFImageMetadata = ::com::sun::imageio::plugins::gif::GIFImageMetadata;
using $GIFImageReader = ::com::sun::imageio::plugins::gif::GIFImageReader;
using $GIFStreamMetadata = ::com::sun::imageio::plugins::gif::GIFStreamMetadata;
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
				namespace gif {

$FieldInfo _GIFImageReaderSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageReaderSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageReaderSpi, version)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageReaderSpi, names)},
	{"suffixes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageReaderSpi, suffixes)},
	{"MIMETypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageReaderSpi, MIMETypes)},
	{"readerClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageReaderSpi, readerClassName)},
	{"writerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GIFImageReaderSpi, writerSpiNames)},
	{}
};

$MethodInfo _GIFImageReaderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GIFImageReaderSpi::*)()>(&GIFImageReaderSpi::init$))},
	{"canDecodeInput", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createReaderInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageReader;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GIFImageReaderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFImageReaderSpi",
	"javax.imageio.spi.ImageReaderSpi",
	nullptr,
	_GIFImageReaderSpi_FieldInfo_,
	_GIFImageReaderSpi_MethodInfo_
};

$Object* allocate$GIFImageReaderSpi($Class* clazz) {
	return $of($alloc(GIFImageReaderSpi));
}

$String* GIFImageReaderSpi::vendorName = nullptr;
$String* GIFImageReaderSpi::version = nullptr;
$StringArray* GIFImageReaderSpi::names = nullptr;
$StringArray* GIFImageReaderSpi::suffixes = nullptr;
$StringArray* GIFImageReaderSpi::MIMETypes = nullptr;
$String* GIFImageReaderSpi::readerClassName = nullptr;
$StringArray* GIFImageReaderSpi::writerSpiNames = nullptr;

void GIFImageReaderSpi::init$() {
	$load($ImageInputStream);
	$init($GIFStreamMetadata);
	$init($GIFImageMetadata);
	$ImageReaderSpi::init$(GIFImageReaderSpi::vendorName, GIFImageReaderSpi::version, GIFImageReaderSpi::names, GIFImageReaderSpi::suffixes, GIFImageReaderSpi::MIMETypes, GIFImageReaderSpi::readerClassName, $$new($ClassArray, {$ImageInputStream::class$}), GIFImageReaderSpi::writerSpiNames, true, $GIFStreamMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.gif.GIFStreamMetadataFormat"_s, nullptr, nullptr, true, $GIFImageMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.gif.GIFImageMetadataFormat"_s, nullptr, nullptr);
}

$String* GIFImageReaderSpi::getDescription($Locale* locale) {
	return "Standard GIF image reader"_s;
}

bool GIFImageReaderSpi::canDecodeInput(Object$* input) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ImageInputStream, input))) {
		return false;
	}
	$var($ImageInputStream, stream, $cast($ImageInputStream, input));
	$var($bytes, b, $new($bytes, 6));
	$nc(stream)->mark();
	stream->readFully(b);
	stream->reset();
	return b->get(0) == u'G' && b->get(1) == u'I' && b->get(2) == u'F' && b->get(3) == u'8' && (b->get(4) == u'7' || b->get(4) == u'9') && b->get(5) == u'a';
}

$ImageReader* GIFImageReaderSpi::createReaderInstance(Object$* extension) {
	return $new($GIFImageReader, this);
}

void clinit$GIFImageReaderSpi($Class* class$) {
	$assignStatic(GIFImageReaderSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(GIFImageReaderSpi::version, "1.0"_s);
	$assignStatic(GIFImageReaderSpi::readerClassName, "com.sun.imageio.plugins.gif.GIFImageReader"_s);
	$assignStatic(GIFImageReaderSpi::names, $new($StringArray, {
		"gif"_s,
		"GIF"_s
	}));
	$assignStatic(GIFImageReaderSpi::suffixes, $new($StringArray, {"gif"_s}));
	$assignStatic(GIFImageReaderSpi::MIMETypes, $new($StringArray, {"image/gif"_s}));
	$assignStatic(GIFImageReaderSpi::writerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.gif.GIFImageWriterSpi"_s}));
}

GIFImageReaderSpi::GIFImageReaderSpi() {
}

$Class* GIFImageReaderSpi::load$($String* name, bool initialize) {
	$loadClass(GIFImageReaderSpi, name, initialize, &_GIFImageReaderSpi_ClassInfo_, clinit$GIFImageReaderSpi, allocate$GIFImageReaderSpi);
	return class$;
}

$Class* GIFImageReaderSpi::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com