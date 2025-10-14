#include <com/sun/imageio/plugins/tiff/TIFFImageWriterSpi.h>

#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageWriter.h>
#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadata.h>
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

#undef NATIVE_METADATA_FORMAT_NAME

using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageWriter = ::com::sun::imageio::plugins::tiff::TIFFImageWriter;
using $TIFFStreamMetadata = ::com::sun::imageio::plugins::tiff::TIFFStreamMetadata;
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
				namespace tiff {

$FieldInfo _TIFFImageWriterSpi_FieldInfo_[] = {
	{"registered", "Z", nullptr, $PRIVATE, $field(TIFFImageWriterSpi, registered)},
	{}
};

$MethodInfo _TIFFImageWriterSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageWriterSpi::*)()>(&TIFFImageWriterSpi::init$))},
	{"canEncodeImage", "(Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"createWriterInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC},
	{}
};

$ClassInfo _TIFFImageWriterSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFImageWriterSpi",
	"javax.imageio.spi.ImageWriterSpi",
	nullptr,
	_TIFFImageWriterSpi_FieldInfo_,
	_TIFFImageWriterSpi_MethodInfo_
};

$Object* allocate$TIFFImageWriterSpi($Class* clazz) {
	return $of($alloc(TIFFImageWriterSpi));
}

void TIFFImageWriterSpi::init$() {
	$load($ImageOutputStream);
	$init($TIFFStreamMetadata);
	$init($TIFFImageMetadata);
	$ImageWriterSpi::init$("Oracle Corporation"_s, "1.0"_s, $$new($StringArray, {
		"tif"_s,
		"TIF"_s,
		"tiff"_s,
		"TIFF"_s
	}), $$new($StringArray, {
		"tif"_s,
		"tiff"_s
	}), $$new($StringArray, {"image/tiff"_s}), "com.sun.imageio.plugins.tiff.TIFFImageWriter"_s, $$new($ClassArray, {$ImageOutputStream::class$}), $$new($StringArray, {"com.sun.imageio.plugins.tiff.TIFFImageReaderSpi"_s}), false, $TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME, "com.sun.imageio.plugins.tiff.TIFFStreamMetadataFormat"_s, nullptr, nullptr, false, $TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME, "com.sun.imageio.plugins.tiff.TIFFImageMetadataFormat"_s, nullptr, nullptr);
	this->registered = false;
}

bool TIFFImageWriterSpi::canEncodeImage($ImageTypeSpecifier* type) {
	return true;
}

$String* TIFFImageWriterSpi::getDescription($Locale* locale) {
	return "Standard TIFF image writer"_s;
}

$ImageWriter* TIFFImageWriterSpi::createWriterInstance(Object$* extension) {
	return $new($TIFFImageWriter, this);
}

void TIFFImageWriterSpi::onRegistration($ServiceRegistry* registry, $Class* category) {
	if (this->registered) {
		return;
	}
	this->registered = true;
}

TIFFImageWriterSpi::TIFFImageWriterSpi() {
}

$Class* TIFFImageWriterSpi::load$($String* name, bool initialize) {
	$loadClass(TIFFImageWriterSpi, name, initialize, &_TIFFImageWriterSpi_ClassInfo_, allocate$TIFFImageWriterSpi);
	return class$;
}

$Class* TIFFImageWriterSpi::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com