#include <com/sun/imageio/plugins/wbmp/WBMPImageReaderSpi.h>

#include <com/sun/imageio/plugins/common/ReaderUtil.h>
#include <com/sun/imageio/plugins/wbmp/WBMPImageReader.h>
#include <com/sun/imageio/plugins/wbmp/WBMPMetadata.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef MAX_WBMP_HEIGHT
#undef MAX_WBMP_WIDTH

using $ReaderUtil = ::com::sun::imageio::plugins::common::ReaderUtil;
using $WBMPImageReader = ::com::sun::imageio::plugins::wbmp::WBMPImageReader;
using $WBMPMetadata = ::com::sun::imageio::plugins::wbmp::WBMPMetadata;
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
				namespace wbmp {

$FieldInfo _WBMPImageReaderSpi_FieldInfo_[] = {
	{"MAX_WBMP_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WBMPImageReaderSpi, MAX_WBMP_WIDTH)},
	{"MAX_WBMP_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WBMPImageReaderSpi, MAX_WBMP_HEIGHT)},
	{"writerSpiNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPImageReaderSpi, writerSpiNames)},
	{"formatNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPImageReaderSpi, formatNames)},
	{"entensions", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPImageReaderSpi, entensions)},
	{"mimeType", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPImageReaderSpi, mimeType)},
	{"registered", "Z", nullptr, $PRIVATE, $field(WBMPImageReaderSpi, registered)},
	{}
};

$MethodInfo _WBMPImageReaderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WBMPImageReaderSpi::*)()>(&WBMPImageReaderSpi::init$))},
	{"canDecodeInput", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createReaderInstance", "(Ljava/lang/Object;)Ljavax/imageio/ImageReader;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC},
	{}
};

$ClassInfo _WBMPImageReaderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.wbmp.WBMPImageReaderSpi",
	"javax.imageio.spi.ImageReaderSpi",
	nullptr,
	_WBMPImageReaderSpi_FieldInfo_,
	_WBMPImageReaderSpi_MethodInfo_
};

$Object* allocate$WBMPImageReaderSpi($Class* clazz) {
	return $of($alloc(WBMPImageReaderSpi));
}

$StringArray* WBMPImageReaderSpi::writerSpiNames = nullptr;
$StringArray* WBMPImageReaderSpi::formatNames = nullptr;
$StringArray* WBMPImageReaderSpi::entensions = nullptr;
$StringArray* WBMPImageReaderSpi::mimeType = nullptr;

void WBMPImageReaderSpi::init$() {
	$load($ImageInputStream);
	$init($WBMPMetadata);
	$ImageReaderSpi::init$("Oracle Corporation"_s, "1.0"_s, WBMPImageReaderSpi::formatNames, WBMPImageReaderSpi::entensions, WBMPImageReaderSpi::mimeType, "com.sun.imageio.plugins.wbmp.WBMPImageReader"_s, $$new($ClassArray, {$ImageInputStream::class$}), WBMPImageReaderSpi::writerSpiNames, true, nullptr, nullptr, nullptr, nullptr, true, $WBMPMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.wbmp.WBMPMetadataFormat"_s, nullptr, nullptr);
	this->registered = false;
}

void WBMPImageReaderSpi::onRegistration($ServiceRegistry* registry, $Class* category) {
	if (this->registered) {
		return;
	}
	this->registered = true;
}

$String* WBMPImageReaderSpi::getDescription($Locale* locale) {
	return "Standard WBMP Image Reader"_s;
}

bool WBMPImageReaderSpi::canDecodeInput(Object$* source) {
	if (!($instanceOf($ImageInputStream, source))) {
		return false;
	}
	$var($ImageInputStream, stream, $cast($ImageInputStream, source));
	$nc(stream)->mark();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int32_t type = stream->readByte();
			int32_t fixHeaderField = stream->readByte();
			if (type != 0 || fixHeaderField != 0) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			int32_t width = $ReaderUtil::readMultiByteInteger(stream);
			int32_t height = $ReaderUtil::readMultiByteInteger(stream);
			if (width <= 0 || height <= 0) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			int64_t dataLength = stream->length();
			if (dataLength == -1) {
				var$2 = (width < WBMPImageReaderSpi::MAX_WBMP_WIDTH) && (height < WBMPImageReaderSpi::MAX_WBMP_HEIGHT);
				return$1 = true;
				goto $finally;
			}
			dataLength -= stream->getStreamPosition();
			int64_t scanSize = (width / 8) + ((width % 8) == 0 ? 0 : 1);
			var$2 = (dataLength == scanSize * height);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			stream->reset();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ImageReader* WBMPImageReaderSpi::createReaderInstance(Object$* extension) {
	return $new($WBMPImageReader, this);
}

void clinit$WBMPImageReaderSpi($Class* class$) {
	$assignStatic(WBMPImageReaderSpi::writerSpiNames, $new($StringArray, {"com.sun.imageio.plugins.wbmp.WBMPImageWriterSpi"_s}));
	$assignStatic(WBMPImageReaderSpi::formatNames, $new($StringArray, {
		"wbmp"_s,
		"WBMP"_s
	}));
	$assignStatic(WBMPImageReaderSpi::entensions, $new($StringArray, {"wbmp"_s}));
	$assignStatic(WBMPImageReaderSpi::mimeType, $new($StringArray, {"image/vnd.wap.wbmp"_s}));
}

WBMPImageReaderSpi::WBMPImageReaderSpi() {
}

$Class* WBMPImageReaderSpi::load$($String* name, bool initialize) {
	$loadClass(WBMPImageReaderSpi, name, initialize, &_WBMPImageReaderSpi_ClassInfo_, clinit$WBMPImageReaderSpi, allocate$WBMPImageReaderSpi);
	return class$;
}

$Class* WBMPImageReaderSpi::class$ = nullptr;

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com