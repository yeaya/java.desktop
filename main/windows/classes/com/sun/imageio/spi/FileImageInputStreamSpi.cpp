#include <com/sun/imageio/spi/FileImageInputStreamSpi.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/imageio/spi/ImageInputStreamSpi.h>
#include <javax/imageio/stream/FileImageInputStream.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <jcpp.h>

using $File = ::java::io::File;
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

$FieldInfo _FileImageInputStreamSpi_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileImageInputStreamSpi, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileImageInputStreamSpi, version)},
	{"inputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(FileImageInputStreamSpi, inputClass)},
	{}
};

$MethodInfo _FileImageInputStreamSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileImageInputStreamSpi::*)()>(&FileImageInputStreamSpi::init$))},
	{"createInputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageInputStream;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FileImageInputStreamSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.spi.FileImageInputStreamSpi",
	"javax.imageio.spi.ImageInputStreamSpi",
	nullptr,
	_FileImageInputStreamSpi_FieldInfo_,
	_FileImageInputStreamSpi_MethodInfo_
};

$Object* allocate$FileImageInputStreamSpi($Class* clazz) {
	return $of($alloc(FileImageInputStreamSpi));
}

$String* FileImageInputStreamSpi::vendorName = nullptr;
$String* FileImageInputStreamSpi::version = nullptr;
$Class* FileImageInputStreamSpi::inputClass = nullptr;

void FileImageInputStreamSpi::init$() {
	$ImageInputStreamSpi::init$(FileImageInputStreamSpi::vendorName, FileImageInputStreamSpi::version, FileImageInputStreamSpi::inputClass);
}

$String* FileImageInputStreamSpi::getDescription($Locale* locale) {
	return "Service provider that instantiates a FileImageInputStream from a File"_s;
}

$ImageInputStream* FileImageInputStreamSpi::createInputStreamInstance(Object$* input, bool useCache, $File* cacheDir) {
	if ($instanceOf($File, input)) {
		try {
			return $new($FileImageInputStream, $cast($File, input));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			return nullptr;
		}
	} else {
		$throwNew($IllegalArgumentException);
	}
	$shouldNotReachHere();
}

void clinit$FileImageInputStreamSpi($Class* class$) {
	$assignStatic(FileImageInputStreamSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(FileImageInputStreamSpi::version, "1.0"_s);
	$load($File);
	$assignStatic(FileImageInputStreamSpi::inputClass, $File::class$);
}

FileImageInputStreamSpi::FileImageInputStreamSpi() {
}

$Class* FileImageInputStreamSpi::load$($String* name, bool initialize) {
	$loadClass(FileImageInputStreamSpi, name, initialize, &_FileImageInputStreamSpi_ClassInfo_, clinit$FileImageInputStreamSpi, allocate$FileImageInputStreamSpi);
	return class$;
}

$Class* FileImageInputStreamSpi::class$ = nullptr;

			} // spi
		} // imageio
	} // sun
} // com