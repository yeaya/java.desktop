#ifndef _javax_imageio_ImageIO_h_
#define _javax_imageio_ImageIO_h_
//$ class javax.imageio.ImageIO
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class RenderedImage;
		}
	}
}
namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace imageio {
		class ImageIO$CacheInfo;
		class ImageIO$SpiInfo;
		class ImageReader;
		class ImageTypeSpecifier;
		class ImageWriter;
	}
}
namespace javax {
	namespace imageio {
		namespace spi {
			class IIORegistry;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
			class ImageOutputStream;
		}
	}
}

namespace javax {
	namespace imageio {

class $import ImageIO : public ::java::lang::Object {
	$class(ImageIO, 0, ::java::lang::Object)
public:
	ImageIO();
	void init$();
	static bool contains($StringArray* names, $String* name);
	static ::javax::imageio::stream::ImageInputStream* createImageInputStream(Object$* input);
	static ::javax::imageio::stream::ImageOutputStream* createImageOutputStream(Object$* output);
	static bool doWrite(::java::awt::image::RenderedImage* im, ::javax::imageio::ImageWriter* writer, ::javax::imageio::stream::ImageOutputStream* output);
	static ::java::io::File* getCacheDirectory();
	static ::javax::imageio::ImageIO$CacheInfo* getCacheInfo();
	static ::javax::imageio::ImageReader* getImageReader(::javax::imageio::ImageWriter* writer);
	static ::java::util::Iterator* getImageReaders(Object$* input);
	static ::java::util::Iterator* getImageReadersByFormatName($String* formatName);
	static ::java::util::Iterator* getImageReadersByMIMEType($String* MIMEType);
	static ::java::util::Iterator* getImageReadersBySuffix($String* fileSuffix);
	static ::java::util::Iterator* getImageTranscoders(::javax::imageio::ImageReader* reader, ::javax::imageio::ImageWriter* writer);
	static ::javax::imageio::ImageWriter* getImageWriter(::javax::imageio::ImageReader* reader);
	static ::java::util::Iterator* getImageWriters(::javax::imageio::ImageTypeSpecifier* type, $String* formatName);
	static ::java::util::Iterator* getImageWritersByFormatName($String* formatName);
	static ::java::util::Iterator* getImageWritersByMIMEType($String* MIMEType);
	static ::java::util::Iterator* getImageWritersBySuffix($String* fileSuffix);
	static $StringArray* getReaderFileSuffixes();
	static $StringArray* getReaderFormatNames();
	static $StringArray* getReaderMIMETypes();
	static $StringArray* getReaderWriterInfo($Class* spiClass, ::javax::imageio::ImageIO$SpiInfo* spiInfo);
	static $String* getTempDir();
	static bool getUseCache();
	static ::javax::imageio::ImageWriter* getWriter(::java::awt::image::RenderedImage* im, $String* formatName);
	static $StringArray* getWriterFileSuffixes();
	static $StringArray* getWriterFormatNames();
	static $StringArray* getWriterMIMETypes();
	static bool hasCachePermission();
	static ::java::awt::image::BufferedImage* read(::java::io::File* input);
	static ::java::awt::image::BufferedImage* read(::java::io::InputStream* input);
	static ::java::awt::image::BufferedImage* read(::java::net::URL* input);
	static ::java::awt::image::BufferedImage* read(::javax::imageio::stream::ImageInputStream* stream);
	static void scanForPlugins();
	static void setCacheDirectory(::java::io::File* cacheDirectory);
	static void setUseCache(bool useCache);
	static bool write(::java::awt::image::RenderedImage* im, $String* formatName, ::javax::imageio::stream::ImageOutputStream* output);
	static bool write(::java::awt::image::RenderedImage* im, $String* formatName, ::java::io::File* output);
	static bool write(::java::awt::image::RenderedImage* im, $String* formatName, ::java::io::OutputStream* output);
	static ::javax::imageio::spi::IIORegistry* theRegistry;
	static ::java::lang::reflect::Method* readerFormatNamesMethod;
	static ::java::lang::reflect::Method* readerFileSuffixesMethod;
	static ::java::lang::reflect::Method* readerMIMETypesMethod;
	static ::java::lang::reflect::Method* writerFormatNamesMethod;
	static ::java::lang::reflect::Method* writerFileSuffixesMethod;
	static ::java::lang::reflect::Method* writerMIMETypesMethod;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO_h_