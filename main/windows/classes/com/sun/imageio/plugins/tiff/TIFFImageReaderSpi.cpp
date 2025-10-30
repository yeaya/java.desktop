#include <com/sun/imageio/plugins/tiff/TIFFImageReaderSpi.h>

#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadata.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef NATIVE_METADATA_FORMAT_NAME

using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $TIFFStreamMetadata = ::com::sun::imageio::plugins::tiff::TIFFStreamMetadata;
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
				namespace tiff {

$FieldInfo _TIFFImageReaderSpi_FieldInfo_[] = {
	{"registered", "Z", nullptr, $PRIVATE, $field(TIFFImageReaderSpi, registered)},
	{}
};

$MethodInfo _TIFFImageReaderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageReaderSpi::*)()>(&TIFFImageReaderSpi::init$))},
	{"canDecodeInput", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createReaderInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageReader;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC},
	{}
};

$ClassInfo _TIFFImageReaderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFImageReaderSpi",
	"javax.imageio.spi.ImageReaderSpi",
	nullptr,
	_TIFFImageReaderSpi_FieldInfo_,
	_TIFFImageReaderSpi_MethodInfo_
};

$Object* allocate$TIFFImageReaderSpi($Class* clazz) {
	return $of($alloc(TIFFImageReaderSpi));
}

void TIFFImageReaderSpi::init$() {
	$useLocalCurrentObjectStackCache();
	$load($ImageInputStream);
	$init($TIFFStreamMetadata);
	$init($TIFFImageMetadata);
	$ImageReaderSpi::init$("Oracle Corporation"_s, "1.0"_s, $$new($StringArray, {
		"tif"_s,
		"TIF"_s,
		"tiff"_s,
		"TIFF"_s
	}), $$new($StringArray, {
		"tif"_s,
		"tiff"_s
	}), $$new($StringArray, {"image/tiff"_s}), "com.sun.imageio.plugins.tiff.TIFFImageReader"_s, $$new($ClassArray, {$ImageInputStream::class$}), $$new($StringArray, {"com.sun.imageio.plugins.tiff.TIFFImageWriterSpi"_s}), false, $TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME, "com.sun.imageio.plugins.tiff.TIFFStreamMetadataFormat"_s, nullptr, nullptr, true, $TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME, "com.sun.imageio.plugins.tiff.TIFFImageMetadataFormat"_s, nullptr, nullptr);
	this->registered = false;
}

$String* TIFFImageReaderSpi::getDescription($Locale* locale) {
	return "Standard TIFF image reader"_s;
}

bool TIFFImageReaderSpi::canDecodeInput(Object$* input) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ImageInputStream, input))) {
		return false;
	}
	$var($ImageInputStream, stream, $cast($ImageInputStream, input));
	$var($bytes, b, $new($bytes, 4));
	$nc(stream)->mark();
	stream->readFully(b);
	stream->reset();
	return ((b->get(0) == (int8_t)73 && b->get(1) == (int8_t)73 && b->get(2) == (int8_t)42 && b->get(3) == (int8_t)0) || (b->get(0) == (int8_t)77 && b->get(1) == (int8_t)77 && b->get(2) == (int8_t)0 && b->get(3) == (int8_t)42));
}

$ImageReader* TIFFImageReaderSpi::createReaderInstance(Object$* extension) {
	return $new($TIFFImageReader, this);
}

void TIFFImageReaderSpi::onRegistration($ServiceRegistry* registry, $Class* category) {
	if (this->registered) {
		return;
	}
	this->registered = true;
}

TIFFImageReaderSpi::TIFFImageReaderSpi() {
}

$Class* TIFFImageReaderSpi::load$($String* name, bool initialize) {
	$loadClass(TIFFImageReaderSpi, name, initialize, &_TIFFImageReaderSpi_ClassInfo_, allocate$TIFFImageReaderSpi);
	return class$;
}

$Class* TIFFImageReaderSpi::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com