#include <com/sun/imageio/spi/RAFImageInputStreamSpi.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/util/Locale.h>
#include <javax/imageio/spi/ImageInputStreamSpi.h>
#include <javax/imageio/stream/FileImageInputStream.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageInputStreamSpi = ::javax::imageio::spi::ImageInputStreamSpi;
using $FileImageInputStream = ::javax::imageio::stream::FileImageInputStream;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace spi {

$FieldInfo _RAFImageInputStreamSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageInputStreamSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageInputStreamSpi, version)},
	{"inputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageInputStreamSpi, inputClass)},
	{}
};

$MethodInfo _RAFImageInputStreamSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RAFImageInputStreamSpi::*)()>(&RAFImageInputStreamSpi::init$))},
	{"createInputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageInputStream;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RAFImageInputStreamSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.spi.RAFImageInputStreamSpi",
	"javax.imageio.spi.ImageInputStreamSpi",
	nullptr,
	_RAFImageInputStreamSpi_FieldInfo_,
	_RAFImageInputStreamSpi_MethodInfo_
};

$Object* allocate$RAFImageInputStreamSpi($Class* clazz) {
	return $of($alloc(RAFImageInputStreamSpi));
}

$String* RAFImageInputStreamSpi::vendorName = nullptr;
$String* RAFImageInputStreamSpi::version = nullptr;
$Class* RAFImageInputStreamSpi::inputClass = nullptr;

void RAFImageInputStreamSpi::init$() {
	$ImageInputStreamSpi::init$(RAFImageInputStreamSpi::vendorName, RAFImageInputStreamSpi::version, RAFImageInputStreamSpi::inputClass);
}

$String* RAFImageInputStreamSpi::getDescription($Locale* locale) {
	return "Service provider that instantiates a FileImageInputStream from a RandomAccessFile"_s;
}

$ImageInputStream* RAFImageInputStreamSpi::createInputStreamInstance(Object$* input, bool useCache, $File* cacheDir) {
	if ($instanceOf($RandomAccessFile, input)) {
		try {
			return $new($FileImageInputStream, $cast($RandomAccessFile, input));
		} catch ($Exception& e) {
			return nullptr;
		}
	} else {
		$throwNew($IllegalArgumentException, "input not a RandomAccessFile!"_s);
	}
	$shouldNotReachHere();
}

void clinit$RAFImageInputStreamSpi($Class* class$) {
	$assignStatic(RAFImageInputStreamSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(RAFImageInputStreamSpi::version, "1.0"_s);
	$load($RandomAccessFile);
	$assignStatic(RAFImageInputStreamSpi::inputClass, $RandomAccessFile::class$);
}

RAFImageInputStreamSpi::RAFImageInputStreamSpi() {
}

$Class* RAFImageInputStreamSpi::load$($String* name, bool initialize) {
	$loadClass(RAFImageInputStreamSpi, name, initialize, &_RAFImageInputStreamSpi_ClassInfo_, clinit$RAFImageInputStreamSpi, allocate$RAFImageInputStreamSpi);
	return class$;
}

$Class* RAFImageInputStreamSpi::class$ = nullptr;

			} // spi
		} // imageio
	} // sun
} // com