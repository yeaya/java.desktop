#include <com/sun/imageio/plugins/wbmp/WBMPImageWriterSpi.h>

#include <com/sun/imageio/plugins/wbmp/WBMPImageWriter.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $WBMPImageWriter = ::com::sun::imageio::plugins::wbmp::WBMPImageWriter;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $SampleModel = ::java::awt::image::SampleModel;
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
				namespace wbmp {

$FieldInfo _WBMPImageWriterSpi_FieldInfo_[] = {
	{"readerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPImageWriterSpi, readerSpiNames)},
	{"formatNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPImageWriterSpi, formatNames)},
	{"entensions", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPImageWriterSpi, entensions)},
	{"mimeType", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPImageWriterSpi, mimeType)},
	{"registered", "Z", nullptr, $PRIVATE, $field(WBMPImageWriterSpi, registered)},
	{}
};

$MethodInfo _WBMPImageWriterSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WBMPImageWriterSpi::*)()>(&WBMPImageWriterSpi::init$))},
	{"canEncodeImage", "(Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"createWriterInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC},
	{}
};

$ClassInfo _WBMPImageWriterSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.wbmp.WBMPImageWriterSpi",
	"javax.imageio.spi.ImageWriterSpi",
	nullptr,
	_WBMPImageWriterSpi_FieldInfo_,
	_WBMPImageWriterSpi_MethodInfo_
};

$Object* allocate$WBMPImageWriterSpi($Class* clazz) {
	return $of($alloc(WBMPImageWriterSpi));
}

$StringArray* WBMPImageWriterSpi::readerSpiNames = nullptr;
$StringArray* WBMPImageWriterSpi::formatNames = nullptr;
$StringArray* WBMPImageWriterSpi::entensions = nullptr;
$StringArray* WBMPImageWriterSpi::mimeType = nullptr;

void WBMPImageWriterSpi::init$() {
	$load($ImageOutputStream);
	$ImageWriterSpi::init$("Oracle Corporation"_s, "1.0"_s, WBMPImageWriterSpi::formatNames, WBMPImageWriterSpi::entensions, WBMPImageWriterSpi::mimeType, "com.sun.imageio.plugins.wbmp.WBMPImageWriter"_s, $$new($ClassArray, {$ImageOutputStream::class$}), WBMPImageWriterSpi::readerSpiNames, true, nullptr, nullptr, nullptr, nullptr, true, nullptr, nullptr, nullptr, nullptr);
	this->registered = false;
}

$String* WBMPImageWriterSpi::getDescription($Locale* locale) {
	return "Standard WBMP Image Writer"_s;
}

void WBMPImageWriterSpi::onRegistration($ServiceRegistry* registry, $Class* category) {
	if (this->registered) {
		return;
	}
	this->registered = true;
}

bool WBMPImageWriterSpi::canEncodeImage($ImageTypeSpecifier* type) {
	$var($SampleModel, sm, $nc(type)->getSampleModel());
	if (!($instanceOf($MultiPixelPackedSampleModel, sm))) {
		return false;
	}
	if ($nc(sm)->getSampleSize(0) != 1) {
		return false;
	}
	return true;
}

$ImageWriter* WBMPImageWriterSpi::createWriterInstance(Object$* extension) {
	return $new($WBMPImageWriter, this);
}

void clinit$WBMPImageWriterSpi($Class* class$) {
	$assignStatic(WBMPImageWriterSpi::readerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.wbmp.WBMPImageReaderSpi"_s}));
	$assignStatic(WBMPImageWriterSpi::formatNames, $new($StringArray, {
		"wbmp"_s,
		"WBMP"_s
	}));
	$assignStatic(WBMPImageWriterSpi::entensions, $new($StringArray, {"wbmp"_s}));
	$assignStatic(WBMPImageWriterSpi::mimeType, $new($StringArray, {"image/vnd.wap.wbmp"_s}));
}

WBMPImageWriterSpi::WBMPImageWriterSpi() {
}

$Class* WBMPImageWriterSpi::load$($String* name, bool initialize) {
	$loadClass(WBMPImageWriterSpi, name, initialize, &_WBMPImageWriterSpi_ClassInfo_, clinit$WBMPImageWriterSpi, allocate$WBMPImageWriterSpi);
	return class$;
}

$Class* WBMPImageWriterSpi::class$ = nullptr;

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com