#ifndef _com_sun_imageio_spi_FileImageOutputStreamSpi_h_
#define _com_sun_imageio_spi_FileImageOutputStreamSpi_h_
//$ class com.sun.imageio.spi.FileImageOutputStreamSpi
//$ extends javax.imageio.spi.ImageOutputStreamSpi

#include <javax/imageio/spi/ImageOutputStreamSpi.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageOutputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace spi {

class FileImageOutputStreamSpi : public ::javax::imageio::spi::ImageOutputStreamSpi {
	$class(FileImageOutputStreamSpi, 0, ::javax::imageio::spi::ImageOutputStreamSpi)
public:
	FileImageOutputStreamSpi();
	using ::javax::imageio::spi::ImageOutputStreamSpi::createOutputStreamInstance;
	void init$();
	virtual ::javax::imageio::stream::ImageOutputStream* createOutputStreamInstance(Object$* output, bool useCache, ::java::io::File* cacheDir) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	static $String* vendorName;
	static $String* version;
	static $Class* outputClass;
};

			} // spi
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_spi_FileImageOutputStreamSpi_h_