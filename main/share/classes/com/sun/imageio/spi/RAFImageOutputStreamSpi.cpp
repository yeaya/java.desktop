#include <com/sun/imageio/spi/RAFImageOutputStreamSpi.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/util/Locale.h>
#include <javax/imageio/spi/ImageOutputStreamSpi.h>
#include <javax/imageio/stream/FileImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageOutputStreamSpi = ::javax::imageio::spi::ImageOutputStreamSpi;
using $FileImageOutputStream = ::javax::imageio::stream::FileImageOutputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace spi {

$FieldInfo _RAFImageOutputStreamSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageOutputStreamSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageOutputStreamSpi, version)},
	{"outputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageOutputStreamSpi, outputClass)},
	{}
};

$MethodInfo _RAFImageOutputStreamSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RAFImageOutputStreamSpi::*)()>(&RAFImageOutputStreamSpi::init$))},
	{"createOutputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RAFImageOutputStreamSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.spi.RAFImageOutputStreamSpi",
	"javax.imageio.spi.ImageOutputStreamSpi",
	nullptr,
	_RAFImageOutputStreamSpi_FieldInfo_,
	_RAFImageOutputStreamSpi_MethodInfo_
};

$Object* allocate$RAFImageOutputStreamSpi($Class* clazz) {
	return $of($alloc(RAFImageOutputStreamSpi));
}

$String* RAFImageOutputStreamSpi::vendorName = nullptr;
$String* RAFImageOutputStreamSpi::version = nullptr;
$Class* RAFImageOutputStreamSpi::outputClass = nullptr;

void RAFImageOutputStreamSpi::init$() {
	$ImageOutputStreamSpi::init$(RAFImageOutputStreamSpi::vendorName, RAFImageOutputStreamSpi::version, RAFImageOutputStreamSpi::outputClass);
}

$String* RAFImageOutputStreamSpi::getDescription($Locale* locale) {
	return "Service provider that instantiates a FileImageOutputStream from a RandomAccessFile"_s;
}

$ImageOutputStream* RAFImageOutputStreamSpi::createOutputStreamInstance(Object$* output, bool useCache, $File* cacheDir) {
	if ($instanceOf($RandomAccessFile, output)) {
		try {
			return $new($FileImageOutputStream, $cast($RandomAccessFile, output));
		} catch ($Exception& e) {
			e->printStackTrace();
			return nullptr;
		}
	} else {
		$throwNew($IllegalArgumentException, "input not a RandomAccessFile!"_s);
	}
	$shouldNotReachHere();
}

void clinit$RAFImageOutputStreamSpi($Class* class$) {
	$assignStatic(RAFImageOutputStreamSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(RAFImageOutputStreamSpi::version, "1.0"_s);
	$load($RandomAccessFile);
	$assignStatic(RAFImageOutputStreamSpi::outputClass, $RandomAccessFile::class$);
}

RAFImageOutputStreamSpi::RAFImageOutputStreamSpi() {
}

$Class* RAFImageOutputStreamSpi::load$($String* name, bool initialize) {
	$loadClass(RAFImageOutputStreamSpi, name, initialize, &_RAFImageOutputStreamSpi_ClassInfo_, clinit$RAFImageOutputStreamSpi, allocate$RAFImageOutputStreamSpi);
	return class$;
}

$Class* RAFImageOutputStreamSpi::class$ = nullptr;

			} // spi
		} // imageio
	} // sun
} // com