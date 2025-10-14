#include <com/sun/imageio/spi/InputStreamImageInputStreamSpi.h>

#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/imageio/spi/ImageInputStreamSpi.h>
#include <javax/imageio/stream/FileCacheImageInputStream.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageInputStreamSpi = ::javax::imageio::spi::ImageInputStreamSpi;
using $FileCacheImageInputStream = ::javax::imageio::stream::FileCacheImageInputStream;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $MemoryCacheImageInputStream = ::javax::imageio::stream::MemoryCacheImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace spi {

$FieldInfo _InputStreamImageInputStreamSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputStreamImageInputStreamSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputStreamImageInputStreamSpi, version)},
	{"inputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(InputStreamImageInputStreamSpi, inputClass)},
	{}
};

$MethodInfo _InputStreamImageInputStreamSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InputStreamImageInputStreamSpi::*)()>(&InputStreamImageInputStreamSpi::init$))},
	{"canUseCacheFile", "()Z", nullptr, $PUBLIC},
	{"createInputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageInputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"needsCacheFile", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InputStreamImageInputStreamSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.spi.InputStreamImageInputStreamSpi",
	"javax.imageio.spi.ImageInputStreamSpi",
	nullptr,
	_InputStreamImageInputStreamSpi_FieldInfo_,
	_InputStreamImageInputStreamSpi_MethodInfo_
};

$Object* allocate$InputStreamImageInputStreamSpi($Class* clazz) {
	return $of($alloc(InputStreamImageInputStreamSpi));
}

$String* InputStreamImageInputStreamSpi::vendorName = nullptr;
$String* InputStreamImageInputStreamSpi::version = nullptr;
$Class* InputStreamImageInputStreamSpi::inputClass = nullptr;

void InputStreamImageInputStreamSpi::init$() {
	$ImageInputStreamSpi::init$(InputStreamImageInputStreamSpi::vendorName, InputStreamImageInputStreamSpi::version, InputStreamImageInputStreamSpi::inputClass);
}

$String* InputStreamImageInputStreamSpi::getDescription($Locale* locale) {
	return "Service provider that instantiates a FileCacheImageInputStream or MemoryCacheImageInputStream from an InputStream"_s;
}

bool InputStreamImageInputStreamSpi::canUseCacheFile() {
	return true;
}

bool InputStreamImageInputStreamSpi::needsCacheFile() {
	return false;
}

$ImageInputStream* InputStreamImageInputStreamSpi::createInputStreamInstance(Object$* input, bool useCache, $File* cacheDir) {
	if ($instanceOf($InputStream, input)) {
		$var($InputStream, is, $cast($InputStream, input));
		if (useCache) {
			return $new($FileCacheImageInputStream, is, cacheDir);
		} else {
			return $new($MemoryCacheImageInputStream, is);
		}
	} else {
		$throwNew($IllegalArgumentException);
	}
}

void clinit$InputStreamImageInputStreamSpi($Class* class$) {
	$assignStatic(InputStreamImageInputStreamSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(InputStreamImageInputStreamSpi::version, "1.0"_s);
	$load($InputStream);
	$assignStatic(InputStreamImageInputStreamSpi::inputClass, $InputStream::class$);
}

InputStreamImageInputStreamSpi::InputStreamImageInputStreamSpi() {
}

$Class* InputStreamImageInputStreamSpi::load$($String* name, bool initialize) {
	$loadClass(InputStreamImageInputStreamSpi, name, initialize, &_InputStreamImageInputStreamSpi_ClassInfo_, clinit$InputStreamImageInputStreamSpi, allocate$InputStreamImageInputStreamSpi);
	return class$;
}

$Class* InputStreamImageInputStreamSpi::class$ = nullptr;

			} // spi
		} // imageio
	} // sun
} // com