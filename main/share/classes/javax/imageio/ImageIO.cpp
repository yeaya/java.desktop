#include <javax/imageio/ImageIO.h>

#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageIO$CacheInfo.h>
#include <javax/imageio/ImageIO$CanDecodeInputFilter.h>
#include <javax/imageio/ImageIO$CanEncodeImageAndFormatFilter.h>
#include <javax/imageio/ImageIO$ContainsFilter.h>
#include <javax/imageio/ImageIO$ImageReaderIterator.h>
#include <javax/imageio/ImageIO$ImageTranscoderIterator.h>
#include <javax/imageio/ImageIO$ImageWriterIterator.h>
#include <javax/imageio/ImageIO$SpiInfo.h>
#include <javax/imageio/ImageIO$TranscoderFilter.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/IIORegistry.h>
#include <javax/imageio/spi/ImageInputStreamSpi.h>
#include <javax/imageio/spi/ImageOutputStreamSpi.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ImageReaderWriterSpi.h>
#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/spi/ServiceRegistry$Filter.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <sun/awt/AppContext.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef FALSE
#undef FILE_SUFFIXES
#undef FORMAT_NAMES
#undef MIME_TYPES
#undef TRUE

using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Method = ::java::lang::reflect::Method;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $IIOException = ::javax::imageio::IIOException;
using $ImageIO$CacheInfo = ::javax::imageio::ImageIO$CacheInfo;
using $ImageIO$CanDecodeInputFilter = ::javax::imageio::ImageIO$CanDecodeInputFilter;
using $ImageIO$CanEncodeImageAndFormatFilter = ::javax::imageio::ImageIO$CanEncodeImageAndFormatFilter;
using $ImageIO$ContainsFilter = ::javax::imageio::ImageIO$ContainsFilter;
using $ImageIO$ImageReaderIterator = ::javax::imageio::ImageIO$ImageReaderIterator;
using $ImageIO$ImageTranscoderIterator = ::javax::imageio::ImageIO$ImageTranscoderIterator;
using $ImageIO$ImageWriterIterator = ::javax::imageio::ImageIO$ImageWriterIterator;
using $ImageIO$SpiInfo = ::javax::imageio::ImageIO$SpiInfo;
using $ImageIO$TranscoderFilter = ::javax::imageio::ImageIO$TranscoderFilter;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIORegistry = ::javax::imageio::spi::IIORegistry;
using $ImageInputStreamSpi = ::javax::imageio::spi::ImageInputStreamSpi;
using $ImageOutputStreamSpi = ::javax::imageio::spi::ImageOutputStreamSpi;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageReaderWriterSpi = ::javax::imageio::spi::ImageReaderWriterSpi;
using $ImageTranscoderSpi = ::javax::imageio::spi::ImageTranscoderSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $AppContext = ::sun::awt::AppContext;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO_FieldInfo_[] = {
	{"theRegistry", "Ljavax/imageio/spi/IIORegistry;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageIO, theRegistry)},
	{"readerFormatNamesMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(ImageIO, readerFormatNamesMethod)},
	{"readerFileSuffixesMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(ImageIO, readerFileSuffixesMethod)},
	{"readerMIMETypesMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(ImageIO, readerMIMETypesMethod)},
	{"writerFormatNamesMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(ImageIO, writerFormatNamesMethod)},
	{"writerFileSuffixesMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(ImageIO, writerFileSuffixesMethod)},
	{"writerMIMETypesMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(ImageIO, writerMIMETypesMethod)},
	{}
};

$MethodInfo _ImageIO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageIO::*)()>(&ImageIO::init$))},
	{"contains", "([Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($StringArray*,$String*)>(&ImageIO::contains))},
	{"createImageInputStream", "(Ljava/lang/Object;)Ljavax/imageio/stream/ImageInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImageInputStream*(*)(Object$*)>(&ImageIO::createImageInputStream)), "java.io.IOException"},
	{"createImageOutputStream", "(Ljava/lang/Object;)Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImageOutputStream*(*)(Object$*)>(&ImageIO::createImageOutputStream)), "java.io.IOException"},
	{"doWrite", "(Ljava/awt/image/RenderedImage;Ljavax/imageio/ImageWriter;Ljavax/imageio/stream/ImageOutputStream;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($RenderedImage*,$ImageWriter*,$ImageOutputStream*)>(&ImageIO::doWrite)), "java.io.IOException"},
	{"getCacheDirectory", "()Ljava/io/File;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$File*(*)()>(&ImageIO::getCacheDirectory))},
	{"getCacheInfo", "()Ljavax/imageio/ImageIO$CacheInfo;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$ImageIO$CacheInfo*(*)()>(&ImageIO::getCacheInfo))},
	{"getImageReader", "(Ljavax/imageio/ImageWriter;)Ljavax/imageio/ImageReader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImageReader*(*)($ImageWriter*)>(&ImageIO::getImageReader))},
	{"getImageReaders", "(Ljava/lang/Object;)Ljava/util/Iterator;", "(Ljava/lang/Object;)Ljava/util/Iterator<Ljavax/imageio/ImageReader;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)(Object$*)>(&ImageIO::getImageReaders))},
	{"getImageReadersByFormatName", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljavax/imageio/ImageReader;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($String*)>(&ImageIO::getImageReadersByFormatName))},
	{"getImageReadersByMIMEType", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljavax/imageio/ImageReader;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($String*)>(&ImageIO::getImageReadersByMIMEType))},
	{"getImageReadersBySuffix", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljavax/imageio/ImageReader;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($String*)>(&ImageIO::getImageReadersBySuffix))},
	{"getImageTranscoders", "(Ljavax/imageio/ImageReader;Ljavax/imageio/ImageWriter;)Ljava/util/Iterator;", "(Ljavax/imageio/ImageReader;Ljavax/imageio/ImageWriter;)Ljava/util/Iterator<Ljavax/imageio/ImageTranscoder;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($ImageReader*,$ImageWriter*)>(&ImageIO::getImageTranscoders))},
	{"getImageWriter", "(Ljavax/imageio/ImageReader;)Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImageWriter*(*)($ImageReader*)>(&ImageIO::getImageWriter))},
	{"getImageWriters", "(Ljavax/imageio/ImageTypeSpecifier;Ljava/lang/String;)Ljava/util/Iterator;", "(Ljavax/imageio/ImageTypeSpecifier;Ljava/lang/String;)Ljava/util/Iterator<Ljavax/imageio/ImageWriter;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($ImageTypeSpecifier*,$String*)>(&ImageIO::getImageWriters))},
	{"getImageWritersByFormatName", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljavax/imageio/ImageWriter;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($String*)>(&ImageIO::getImageWritersByFormatName))},
	{"getImageWritersByMIMEType", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljavax/imageio/ImageWriter;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($String*)>(&ImageIO::getImageWritersByMIMEType))},
	{"getImageWritersBySuffix", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljavax/imageio/ImageWriter;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($String*)>(&ImageIO::getImageWritersBySuffix))},
	{"getReaderFileSuffixes", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ImageIO::getReaderFileSuffixes))},
	{"getReaderFormatNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ImageIO::getReaderFormatNames))},
	{"getReaderMIMETypes", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ImageIO::getReaderMIMETypes))},
	{"getReaderWriterInfo", "(Ljava/lang/Class;Ljavax/imageio/ImageIO$SpiInfo;)[Ljava/lang/String;", "<S:Ljavax/imageio/spi/ImageReaderWriterSpi;>(Ljava/lang/Class<TS;>;Ljavax/imageio/ImageIO$SpiInfo;)[Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($Class*,$ImageIO$SpiInfo*)>(&ImageIO::getReaderWriterInfo))},
	{"getTempDir", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&ImageIO::getTempDir))},
	{"getUseCache", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ImageIO::getUseCache))},
	{"getWriter", "(Ljava/awt/image/RenderedImage;Ljava/lang/String;)Ljavax/imageio/ImageWriter;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ImageWriter*(*)($RenderedImage*,$String*)>(&ImageIO::getWriter))},
	{"getWriterFileSuffixes", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ImageIO::getWriterFileSuffixes))},
	{"getWriterFormatNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ImageIO::getWriterFormatNames))},
	{"getWriterMIMETypes", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ImageIO::getWriterMIMETypes))},
	{"hasCachePermission", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&ImageIO::hasCachePermission))},
	{"read", "(Ljava/io/File;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BufferedImage*(*)($File*)>(&ImageIO::read)), "java.io.IOException"},
	{"read", "(Ljava/io/InputStream;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BufferedImage*(*)($InputStream*)>(&ImageIO::read)), "java.io.IOException"},
	{"read", "(Ljava/net/URL;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BufferedImage*(*)($URL*)>(&ImageIO::read)), "java.io.IOException"},
	{"read", "(Ljavax/imageio/stream/ImageInputStream;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BufferedImage*(*)($ImageInputStream*)>(&ImageIO::read)), "java.io.IOException"},
	{"scanForPlugins", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ImageIO::scanForPlugins))},
	{"setCacheDirectory", "(Ljava/io/File;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($File*)>(&ImageIO::setCacheDirectory))},
	{"setUseCache", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&ImageIO::setUseCache))},
	{"write", "(Ljava/awt/image/RenderedImage;Ljava/lang/String;Ljavax/imageio/stream/ImageOutputStream;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($RenderedImage*,$String*,$ImageOutputStream*)>(&ImageIO::write)), "java.io.IOException"},
	{"write", "(Ljava/awt/image/RenderedImage;Ljava/lang/String;Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($RenderedImage*,$String*,$File*)>(&ImageIO::write)), "java.io.IOException"},
	{"write", "(Ljava/awt/image/RenderedImage;Ljava/lang/String;Ljava/io/OutputStream;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($RenderedImage*,$String*,$OutputStream*)>(&ImageIO::write)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ImageIO_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$TranscoderFilter", "javax.imageio.ImageIO", "TranscoderFilter", $STATIC},
	{"javax.imageio.ImageIO$ImageTranscoderIterator", "javax.imageio.ImageIO", "ImageTranscoderIterator", $STATIC},
	{"javax.imageio.ImageIO$ImageWriterIterator", "javax.imageio.ImageIO", "ImageWriterIterator", $STATIC},
	{"javax.imageio.ImageIO$ContainsFilter", "javax.imageio.ImageIO", "ContainsFilter", $STATIC},
	{"javax.imageio.ImageIO$CanEncodeImageAndFormatFilter", "javax.imageio.ImageIO", "CanEncodeImageAndFormatFilter", $STATIC},
	{"javax.imageio.ImageIO$CanDecodeInputFilter", "javax.imageio.ImageIO", "CanDecodeInputFilter", $STATIC},
	{"javax.imageio.ImageIO$ImageReaderIterator", "javax.imageio.ImageIO", "ImageReaderIterator", $STATIC},
	{"javax.imageio.ImageIO$SpiInfo", "javax.imageio.ImageIO", "SpiInfo", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"javax.imageio.ImageIO$CacheInfo", "javax.imageio.ImageIO", "CacheInfo", $STATIC},
	{}
};

$ClassInfo _ImageIO_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.ImageIO",
	"java.lang.Object",
	nullptr,
	_ImageIO_FieldInfo_,
	_ImageIO_MethodInfo_,
	nullptr,
	nullptr,
	_ImageIO_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO$TranscoderFilter,javax.imageio.ImageIO$ImageTranscoderIterator,javax.imageio.ImageIO$ImageWriterIterator,javax.imageio.ImageIO$ContainsFilter,javax.imageio.ImageIO$CanEncodeImageAndFormatFilter,javax.imageio.ImageIO$CanDecodeInputFilter,javax.imageio.ImageIO$ImageReaderIterator,javax.imageio.ImageIO$SpiInfo,javax.imageio.ImageIO$SpiInfo$3,javax.imageio.ImageIO$SpiInfo$2,javax.imageio.ImageIO$SpiInfo$1,javax.imageio.ImageIO$CacheInfo"
};

$Object* allocate$ImageIO($Class* clazz) {
	return $of($alloc(ImageIO));
}

$IIORegistry* ImageIO::theRegistry = nullptr;
$Method* ImageIO::readerFormatNamesMethod = nullptr;
$Method* ImageIO::readerFileSuffixesMethod = nullptr;
$Method* ImageIO::readerMIMETypesMethod = nullptr;
$Method* ImageIO::writerFormatNamesMethod = nullptr;
$Method* ImageIO::writerFileSuffixesMethod = nullptr;
$Method* ImageIO::writerMIMETypesMethod = nullptr;

void ImageIO::init$() {
}

void ImageIO::scanForPlugins() {
	$init(ImageIO);
	$nc(ImageIO::theRegistry)->registerApplicationClasspathSpis();
}

$ImageIO$CacheInfo* ImageIO::getCacheInfo() {
	$load(ImageIO);
	$synchronized(class$) {
		$init(ImageIO);
		$useLocalCurrentObjectStackCache();
		$var($AppContext, context, $AppContext::getAppContext());
		$load($ImageIO$CacheInfo);
		$var($ImageIO$CacheInfo, info, $cast($ImageIO$CacheInfo, $nc(context)->get($ImageIO$CacheInfo::class$)));
		if (info == nullptr) {
			$assign(info, $new($ImageIO$CacheInfo));
			context->put($ImageIO$CacheInfo::class$, info);
		}
		return info;
	}
}

$String* ImageIO::getTempDir() {
	$init(ImageIO);
	$beforeCallerSensitive();
	$var($GetPropertyAction, a, $new($GetPropertyAction, "java.io.tmpdir"_s));
	return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(a)));
}

bool ImageIO::hasCachePermission() {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	$var($Boolean, hasPermission, $nc($(getCacheInfo()))->getHasPermission());
	if (hasPermission != nullptr) {
		return hasPermission->booleanValue();
	} else {
		try {
			$var($SecurityManager, security, $System::getSecurityManager());
			if (security != nullptr) {
				$var($File, cachedir, getCacheDirectory());
				$var($String, cachepath, nullptr);
				if (cachedir != nullptr) {
					$assign(cachepath, cachedir->getPath());
				} else {
					$assign(cachepath, getTempDir());
					if (cachepath == nullptr || $nc(cachepath)->isEmpty()) {
						$init($Boolean);
						$nc($(getCacheInfo()))->setHasPermission($Boolean::FALSE);
						return false;
					}
				}
				$var($String, filepath, cachepath);
				$init($File);
				if (!$nc(filepath)->endsWith($File::separator)) {
					$plusAssign(filepath, $File::separator);
				}
				$plusAssign(filepath, "*"_s);
				security->checkPermission($$new($FilePermission, filepath, "read, write, delete"_s));
			}
		} catch ($SecurityException& e) {
			$init($Boolean);
			$nc($(getCacheInfo()))->setHasPermission($Boolean::FALSE);
			return false;
		}
		$init($Boolean);
		$nc($(getCacheInfo()))->setHasPermission($Boolean::TRUE);
		return true;
	}
}

void ImageIO::setUseCache(bool useCache) {
	$init(ImageIO);
	$nc($(getCacheInfo()))->setUseCache(useCache);
}

bool ImageIO::getUseCache() {
	$init(ImageIO);
	return $nc($(getCacheInfo()))->getUseCache();
}

void ImageIO::setCacheDirectory($File* cacheDirectory) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if ((cacheDirectory != nullptr) && !(cacheDirectory->isDirectory())) {
		$throwNew($IllegalArgumentException, "Not a directory!"_s);
	}
	$nc($(getCacheInfo()))->setCacheDirectory(cacheDirectory);
	$nc($(getCacheInfo()))->setHasPermission(nullptr);
}

$File* ImageIO::getCacheDirectory() {
	$init(ImageIO);
	return $nc($(getCacheInfo()))->getCacheDirectory();
}

$ImageInputStream* ImageIO::createImageInputStream(Object$* input) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (input == nullptr) {
		$throwNew($IllegalArgumentException, "input == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageInputStreamSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageInputStreamSpi::class$, true));
	} catch ($IllegalArgumentException& e) {
		return nullptr;
	}
	bool var$0 = getUseCache();
	bool usecache = var$0 && hasCachePermission();
	while ($nc(iter)->hasNext()) {
		$var($ImageInputStreamSpi, spi, $cast($ImageInputStreamSpi, iter->next()));
		if ($nc($nc(spi)->getInputClass())->isInstance(input)) {
			try {
				return spi->createInputStreamInstance(input, usecache, $(getCacheDirectory()));
			} catch ($IOException& e) {
				$throwNew($IIOException, "Can\'t create cache file!"_s, e);
			}
		}
	}
	return nullptr;
}

$ImageOutputStream* ImageIO::createImageOutputStream(Object$* output) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (output == nullptr) {
		$throwNew($IllegalArgumentException, "output == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageOutputStreamSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageOutputStreamSpi::class$, true));
	} catch ($IllegalArgumentException& e) {
		return nullptr;
	}
	bool var$0 = getUseCache();
	bool usecache = var$0 && hasCachePermission();
	while ($nc(iter)->hasNext()) {
		$var($ImageOutputStreamSpi, spi, $cast($ImageOutputStreamSpi, iter->next()));
		if ($nc($nc(spi)->getOutputClass())->isInstance(output)) {
			try {
				return spi->createOutputStreamInstance(output, usecache, $(getCacheDirectory()));
			} catch ($IOException& e) {
				$throwNew($IIOException, "Can\'t create cache file!"_s, e);
			}
		}
	}
	return nullptr;
}

$StringArray* ImageIO::getReaderWriterInfo($Class* spiClass, $ImageIO$SpiInfo* spiInfo) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	$var($Iterator, iter, nullptr);
	try {
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders(spiClass, true));
	} catch ($IllegalArgumentException& e) {
		return $new($StringArray, 0);
	}
	$var($HashSet, s, $new($HashSet));
	while ($nc(iter)->hasNext()) {
		$var($ImageReaderWriterSpi, spi, $cast($ImageReaderWriterSpi, iter->next()));
		$var($StringArray, info, $nc(spiInfo)->info(spi));
		if (info != nullptr) {
			$Collections::addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(s))), info);
		}
	}
	return $fcast($StringArray, s->toArray($$new($StringArray, s->size())));
}

$StringArray* ImageIO::getReaderFormatNames() {
	$init(ImageIO);
	$load($ImageReaderSpi);
	$init($ImageIO$SpiInfo);
	return getReaderWriterInfo($ImageReaderSpi::class$, $ImageIO$SpiInfo::FORMAT_NAMES);
}

$StringArray* ImageIO::getReaderMIMETypes() {
	$init(ImageIO);
	$load($ImageReaderSpi);
	$init($ImageIO$SpiInfo);
	return getReaderWriterInfo($ImageReaderSpi::class$, $ImageIO$SpiInfo::MIME_TYPES);
}

$StringArray* ImageIO::getReaderFileSuffixes() {
	$init(ImageIO);
	$load($ImageReaderSpi);
	$init($ImageIO$SpiInfo);
	return getReaderWriterInfo($ImageReaderSpi::class$, $ImageIO$SpiInfo::FILE_SUFFIXES);
}

$Iterator* ImageIO::getImageReaders(Object$* input) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (input == nullptr) {
		$throwNew($IllegalArgumentException, "input == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageReaderSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageReaderSpi::class$, $$new($ImageIO$CanDecodeInputFilter, input), true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageReaderIterator, iter);
}

$Iterator* ImageIO::getImageReadersByFormatName($String* formatName) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "formatName == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageReaderSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageReaderSpi::class$, $$new($ImageIO$ContainsFilter, ImageIO::readerFormatNamesMethod, formatName), true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageReaderIterator, iter);
}

$Iterator* ImageIO::getImageReadersBySuffix($String* fileSuffix) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (fileSuffix == nullptr) {
		$throwNew($IllegalArgumentException, "fileSuffix == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageReaderSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageReaderSpi::class$, $$new($ImageIO$ContainsFilter, ImageIO::readerFileSuffixesMethod, fileSuffix), true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageReaderIterator, iter);
}

$Iterator* ImageIO::getImageReadersByMIMEType($String* MIMEType) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (MIMEType == nullptr) {
		$throwNew($IllegalArgumentException, "MIMEType == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageReaderSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageReaderSpi::class$, $$new($ImageIO$ContainsFilter, ImageIO::readerMIMETypesMethod, MIMEType), true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageReaderIterator, iter);
}

$StringArray* ImageIO::getWriterFormatNames() {
	$init(ImageIO);
	$load($ImageWriterSpi);
	$init($ImageIO$SpiInfo);
	return getReaderWriterInfo($ImageWriterSpi::class$, $ImageIO$SpiInfo::FORMAT_NAMES);
}

$StringArray* ImageIO::getWriterMIMETypes() {
	$init(ImageIO);
	$load($ImageWriterSpi);
	$init($ImageIO$SpiInfo);
	return getReaderWriterInfo($ImageWriterSpi::class$, $ImageIO$SpiInfo::MIME_TYPES);
}

$StringArray* ImageIO::getWriterFileSuffixes() {
	$init(ImageIO);
	$load($ImageWriterSpi);
	$init($ImageIO$SpiInfo);
	return getReaderWriterInfo($ImageWriterSpi::class$, $ImageIO$SpiInfo::FILE_SUFFIXES);
}

bool ImageIO::contains($StringArray* names, $String* name) {
	$init(ImageIO);
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		if ($nc(name)->equalsIgnoreCase(names->get(i))) {
			return true;
		}
	}
	return false;
}

$Iterator* ImageIO::getImageWritersByFormatName($String* formatName) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "formatName == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageWriterSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageWriterSpi::class$, $$new($ImageIO$ContainsFilter, ImageIO::writerFormatNamesMethod, formatName), true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageWriterIterator, iter);
}

$Iterator* ImageIO::getImageWritersBySuffix($String* fileSuffix) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (fileSuffix == nullptr) {
		$throwNew($IllegalArgumentException, "fileSuffix == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageWriterSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageWriterSpi::class$, $$new($ImageIO$ContainsFilter, ImageIO::writerFileSuffixesMethod, fileSuffix), true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageWriterIterator, iter);
}

$Iterator* ImageIO::getImageWritersByMIMEType($String* MIMEType) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (MIMEType == nullptr) {
		$throwNew($IllegalArgumentException, "MIMEType == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageWriterSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageWriterSpi::class$, $$new($ImageIO$ContainsFilter, ImageIO::writerMIMETypesMethod, MIMEType), true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageWriterIterator, iter);
}

$ImageWriter* ImageIO::getImageWriter($ImageReader* reader) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (reader == nullptr) {
		$throwNew($IllegalArgumentException, "reader == null!"_s);
	}
	$var($ImageReaderSpi, readerSpi, $nc(reader)->getOriginatingProvider());
	if (readerSpi == nullptr) {
		$var($Iterator, readerSpiIter, nullptr);
		try {
			$load($ImageReaderSpi);
			$assign(readerSpiIter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageReaderSpi::class$, false));
		} catch ($IllegalArgumentException& e) {
			return nullptr;
		}
		while ($nc(readerSpiIter)->hasNext()) {
			$var($ImageReaderSpi, temp, $cast($ImageReaderSpi, readerSpiIter->next()));
			if ($nc(temp)->isOwnReader(reader)) {
				$assign(readerSpi, temp);
				break;
			}
		}
		if (readerSpi == nullptr) {
			return nullptr;
		}
	}
	$var($StringArray, writerNames, $nc(readerSpi)->getImageWriterSpiNames());
	if (writerNames == nullptr) {
		return nullptr;
	}
	$Class* writerSpiClass = nullptr;
	try {
		writerSpiClass = $Class::forName($nc(writerNames)->get(0), true, $($ClassLoader::getSystemClassLoader()));
	} catch ($ClassNotFoundException& e) {
		return nullptr;
	}
	$var($ImageWriterSpi, writerSpi, $cast($ImageWriterSpi, $nc(ImageIO::theRegistry)->getServiceProviderByClass(writerSpiClass)));
	if (writerSpi == nullptr) {
		return nullptr;
	}
	try {
		return $nc(writerSpi)->createWriterInstance();
	} catch ($IOException& e) {
		$load($ImageWriterSpi);
		$nc(ImageIO::theRegistry)->deregisterServiceProvider(writerSpi, $ImageWriterSpi::class$);
		return nullptr;
	}
	$shouldNotReachHere();
}

$ImageReader* ImageIO::getImageReader($ImageWriter* writer) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (writer == nullptr) {
		$throwNew($IllegalArgumentException, "writer == null!"_s);
	}
	$var($ImageWriterSpi, writerSpi, $nc(writer)->getOriginatingProvider());
	if (writerSpi == nullptr) {
		$var($Iterator, writerSpiIter, nullptr);
		try {
			$load($ImageWriterSpi);
			$assign(writerSpiIter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageWriterSpi::class$, false));
		} catch ($IllegalArgumentException& e) {
			return nullptr;
		}
		while ($nc(writerSpiIter)->hasNext()) {
			$var($ImageWriterSpi, temp, $cast($ImageWriterSpi, writerSpiIter->next()));
			if ($nc(temp)->isOwnWriter(writer)) {
				$assign(writerSpi, temp);
				break;
			}
		}
		if (writerSpi == nullptr) {
			return nullptr;
		}
	}
	$var($StringArray, readerNames, $nc(writerSpi)->getImageReaderSpiNames());
	if (readerNames == nullptr) {
		return nullptr;
	}
	$Class* readerSpiClass = nullptr;
	try {
		readerSpiClass = $Class::forName($nc(readerNames)->get(0), true, $($ClassLoader::getSystemClassLoader()));
	} catch ($ClassNotFoundException& e) {
		return nullptr;
	}
	$var($ImageReaderSpi, readerSpi, $cast($ImageReaderSpi, $nc(ImageIO::theRegistry)->getServiceProviderByClass(readerSpiClass)));
	if (readerSpi == nullptr) {
		return nullptr;
	}
	try {
		return $nc(readerSpi)->createReaderInstance();
	} catch ($IOException& e) {
		$load($ImageReaderSpi);
		$nc(ImageIO::theRegistry)->deregisterServiceProvider(readerSpi, $ImageReaderSpi::class$);
		return nullptr;
	}
	$shouldNotReachHere();
}

$Iterator* ImageIO::getImageWriters($ImageTypeSpecifier* type, $String* formatName) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "type == null!"_s);
	}
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "formatName == null!"_s);
	}
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageWriterSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageWriterSpi::class$, $$new($ImageIO$CanEncodeImageAndFormatFilter, type, formatName), true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageWriterIterator, iter);
}

$Iterator* ImageIO::getImageTranscoders($ImageReader* reader, $ImageWriter* writer) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (reader == nullptr) {
		$throwNew($IllegalArgumentException, "reader == null!"_s);
	}
	if (writer == nullptr) {
		$throwNew($IllegalArgumentException, "writer == null!"_s);
	}
	$var($ImageReaderSpi, readerSpi, $nc(reader)->getOriginatingProvider());
	$var($ImageWriterSpi, writerSpi, $nc(writer)->getOriginatingProvider());
	$var($ServiceRegistry$Filter, filter, $new($ImageIO$TranscoderFilter, readerSpi, writerSpi));
	$var($Iterator, iter, nullptr);
	try {
		$load($ImageTranscoderSpi);
		$assign(iter, $nc(ImageIO::theRegistry)->getServiceProviders($ImageTranscoderSpi::class$, filter, true));
	} catch ($IllegalArgumentException& e) {
		return $Collections::emptyIterator();
	}
	return $new($ImageIO$ImageTranscoderIterator, iter);
}

$BufferedImage* ImageIO::read($File* input) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (input == nullptr) {
		$throwNew($IllegalArgumentException, "input == null!"_s);
	}
	if (!$nc(input)->canRead()) {
		$throwNew($IIOException, "Can\'t read input file!"_s);
	}
	$var($ImageInputStream, stream, createImageInputStream(input));
	if (stream == nullptr) {
		$throwNew($IIOException, "Can\'t create an ImageInputStream!"_s);
	}
	$var($BufferedImage, bi, read(stream));
	if (bi == nullptr) {
		$nc(stream)->close();
	}
	return bi;
}

$BufferedImage* ImageIO::read($InputStream* input) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (input == nullptr) {
		$throwNew($IllegalArgumentException, "input == null!"_s);
	}
	$var($ImageInputStream, stream, createImageInputStream(input));
	if (stream == nullptr) {
		$throwNew($IIOException, "Can\'t create an ImageInputStream!"_s);
	}
	$var($BufferedImage, bi, read(stream));
	if (bi == nullptr) {
		$nc(stream)->close();
	}
	return bi;
}

$BufferedImage* ImageIO::read($URL* input) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (input == nullptr) {
		$throwNew($IllegalArgumentException, "input == null!"_s);
	}
	$var($InputStream, istream, nullptr);
	try {
		$assign(istream, $nc(input)->openStream());
	} catch ($IOException& e) {
		$throwNew($IIOException, "Can\'t get input stream from URL!"_s, e);
	}
	$var($ImageInputStream, stream, createImageInputStream(istream));
	if (stream == nullptr) {
		$nc(istream)->close();
		$throwNew($IIOException, "Can\'t create an ImageInputStream!"_s);
	}
	$var($BufferedImage, bi, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(bi, read(stream));
			if (bi == nullptr) {
				$nc(stream)->close();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(istream)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return bi;
}

$BufferedImage* ImageIO::read($ImageInputStream* stream) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (stream == nullptr) {
		$throwNew($IllegalArgumentException, "stream == null!"_s);
	}
	$var($Iterator, iter, getImageReaders(stream));
	if (!$nc(iter)->hasNext()) {
		return nullptr;
	}
	$var($ImageReader, reader, $cast($ImageReader, $nc(iter)->next()));
	$var($ImageReadParam, param, $nc(reader)->getDefaultReadParam());
	reader->setInput(stream, true, true);
	$var($BufferedImage, bi, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(bi, reader->read(0, param));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			reader->dispose();
			$nc(stream)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return bi;
}

bool ImageIO::write($RenderedImage* im, $String* formatName, $ImageOutputStream* output) {
	$init(ImageIO);
	if (im == nullptr) {
		$throwNew($IllegalArgumentException, "im == null!"_s);
	}
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "formatName == null!"_s);
	}
	if (output == nullptr) {
		$throwNew($IllegalArgumentException, "output == null!"_s);
	}
	return doWrite(im, $(getWriter(im, formatName)), output);
}

bool ImageIO::write($RenderedImage* im, $String* formatName, $File* output) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (output == nullptr) {
		$throwNew($IllegalArgumentException, "output == null!"_s);
	}
	$var($ImageWriter, writer, getWriter(im, formatName));
	if (writer == nullptr) {
		return false;
	}
	$nc(output)->delete$();
	$var($ImageOutputStream, stream, createImageOutputStream(output));
	if (stream == nullptr) {
		$throwNew($IIOException, "Can\'t create an ImageOutputStream!"_s);
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = doWrite(im, writer, stream);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(stream)->close();
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

bool ImageIO::write($RenderedImage* im, $String* formatName, $OutputStream* output) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	if (output == nullptr) {
		$throwNew($IllegalArgumentException, "output == null!"_s);
	}
	$var($ImageOutputStream, stream, createImageOutputStream(output));
	if (stream == nullptr) {
		$throwNew($IIOException, "Can\'t create an ImageOutputStream!"_s);
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = doWrite(im, $(getWriter(im, formatName)), stream);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(stream)->close();
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

$ImageWriter* ImageIO::getWriter($RenderedImage* im, $String* formatName) {
	$init(ImageIO);
	$useLocalCurrentObjectStackCache();
	$var($ImageTypeSpecifier, type, $ImageTypeSpecifier::createFromRenderedImage(im));
	$var($Iterator, iter, getImageWriters(type, formatName));
	if ($nc(iter)->hasNext()) {
		return $cast($ImageWriter, iter->next());
	} else {
		return nullptr;
	}
}

bool ImageIO::doWrite($RenderedImage* im, $ImageWriter* writer, $ImageOutputStream* output) {
	$init(ImageIO);
	if (writer == nullptr) {
		return false;
	}
	$nc(writer)->setOutput(output);
	{
		$var($Throwable, var$0, nullptr);
		try {
			writer->write(im);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writer->dispose();
			$nc(output)->flush();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return true;
}

void clinit$ImageIO($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(ImageIO::theRegistry, $IIORegistry::getDefaultInstance());
	{
		try {
			$load($ImageReaderSpi);
			$assignStatic(ImageIO::readerFormatNamesMethod, $ImageReaderSpi::class$->getMethod("getFormatNames"_s, $$new($ClassArray, 0)));
			$assignStatic(ImageIO::readerFileSuffixesMethod, $ImageReaderSpi::class$->getMethod("getFileSuffixes"_s, $$new($ClassArray, 0)));
			$assignStatic(ImageIO::readerMIMETypesMethod, $ImageReaderSpi::class$->getMethod("getMIMETypes"_s, $$new($ClassArray, 0)));
			$load($ImageWriterSpi);
			$assignStatic(ImageIO::writerFormatNamesMethod, $ImageWriterSpi::class$->getMethod("getFormatNames"_s, $$new($ClassArray, 0)));
			$assignStatic(ImageIO::writerFileSuffixesMethod, $ImageWriterSpi::class$->getMethod("getFileSuffixes"_s, $$new($ClassArray, 0)));
			$assignStatic(ImageIO::writerMIMETypesMethod, $ImageWriterSpi::class$->getMethod("getMIMETypes"_s, $$new($ClassArray, 0)));
		} catch ($NoSuchMethodException& e) {
			e->printStackTrace();
		}
	}
}

ImageIO::ImageIO() {
}

$Class* ImageIO::load$($String* name, bool initialize) {
	$loadClass(ImageIO, name, initialize, &_ImageIO_ClassInfo_, clinit$ImageIO, allocate$ImageIO);
	return class$;
}

$Class* ImageIO::class$ = nullptr;

	} // imageio
} // javax