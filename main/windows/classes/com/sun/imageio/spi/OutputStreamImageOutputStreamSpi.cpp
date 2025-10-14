#include <com/sun/imageio/spi/OutputStreamImageOutputStreamSpi.h>

#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/imageio/spi/ImageOutputStreamSpi.h>
#include <javax/imageio/stream/FileCacheImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <javax/imageio/stream/MemoryCacheImageOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageOutputStreamSpi = ::javax::imageio::spi::ImageOutputStreamSpi;
using $FileCacheImageOutputStream = ::javax::imageio::stream::FileCacheImageOutputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;
using $MemoryCacheImageOutputStream = ::javax::imageio::stream::MemoryCacheImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace spi {

$FieldInfo _OutputStreamImageOutputStreamSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputStreamImageOutputStreamSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputStreamImageOutputStreamSpi, version)},
	{"outputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(OutputStreamImageOutputStreamSpi, outputClass)},
	{}
};

$MethodInfo _OutputStreamImageOutputStreamSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OutputStreamImageOutputStreamSpi::*)()>(&OutputStreamImageOutputStreamSpi::init$))},
	{"canUseCacheFile", "()Z", nullptr, $PUBLIC},
	{"createOutputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"needsCacheFile", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OutputStreamImageOutputStreamSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.spi.OutputStreamImageOutputStreamSpi",
	"javax.imageio.spi.ImageOutputStreamSpi",
	nullptr,
	_OutputStreamImageOutputStreamSpi_FieldInfo_,
	_OutputStreamImageOutputStreamSpi_MethodInfo_
};

$Object* allocate$OutputStreamImageOutputStreamSpi($Class* clazz) {
	return $of($alloc(OutputStreamImageOutputStreamSpi));
}

$String* OutputStreamImageOutputStreamSpi::vendorName = nullptr;
$String* OutputStreamImageOutputStreamSpi::version = nullptr;
$Class* OutputStreamImageOutputStreamSpi::outputClass = nullptr;

void OutputStreamImageOutputStreamSpi::init$() {
	$ImageOutputStreamSpi::init$(OutputStreamImageOutputStreamSpi::vendorName, OutputStreamImageOutputStreamSpi::version, OutputStreamImageOutputStreamSpi::outputClass);
}

$String* OutputStreamImageOutputStreamSpi::getDescription($Locale* locale) {
	return "Service provider that instantiates an OutputStreamImageOutputStream from an OutputStream"_s;
}

bool OutputStreamImageOutputStreamSpi::canUseCacheFile() {
	return true;
}

bool OutputStreamImageOutputStreamSpi::needsCacheFile() {
	return false;
}

$ImageOutputStream* OutputStreamImageOutputStreamSpi::createOutputStreamInstance(Object$* output, bool useCache, $File* cacheDir) {
	if ($instanceOf($OutputStream, output)) {
		$var($OutputStream, os, $cast($OutputStream, output));
		if (useCache) {
			return $new($FileCacheImageOutputStream, os, cacheDir);
		} else {
			return $new($MemoryCacheImageOutputStream, os);
		}
	} else {
		$throwNew($IllegalArgumentException);
	}
}

void clinit$OutputStreamImageOutputStreamSpi($Class* class$) {
	$assignStatic(OutputStreamImageOutputStreamSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(OutputStreamImageOutputStreamSpi::version, "1.0"_s);
	$load($OutputStream);
	$assignStatic(OutputStreamImageOutputStreamSpi::outputClass, $OutputStream::class$);
}

OutputStreamImageOutputStreamSpi::OutputStreamImageOutputStreamSpi() {
}

$Class* OutputStreamImageOutputStreamSpi::load$($String* name, bool initialize) {
	$loadClass(OutputStreamImageOutputStreamSpi, name, initialize, &_OutputStreamImageOutputStreamSpi_ClassInfo_, clinit$OutputStreamImageOutputStreamSpi, allocate$OutputStreamImageOutputStreamSpi);
	return class$;
}

$Class* OutputStreamImageOutputStreamSpi::class$ = nullptr;

			} // spi
		} // imageio
	} // sun
} // com