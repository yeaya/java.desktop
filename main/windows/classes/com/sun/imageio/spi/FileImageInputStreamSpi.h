#ifndef _com_sun_imageio_spi_FileImageInputStreamSpi_h_
#define _com_sun_imageio_spi_FileImageInputStreamSpi_h_
//$ class com.sun.imageio.spi.FileImageInputStreamSpi
//$ extends javax.imageio.spi.ImageInputStreamSpi

#include <javax/imageio/spi/ImageInputStreamSpi.h>

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
			class ImageInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace spi {

class FileImageInputStreamSpi : public ::javax::imageio::spi::ImageInputStreamSpi {
	$class(FileImageInputStreamSpi, 0, ::javax::imageio::spi::ImageInputStreamSpi)
public:
	FileImageInputStreamSpi();
	using ::javax::imageio::spi::ImageInputStreamSpi::createInputStreamInstance;
	void init$();
	virtual ::javax::imageio::stream::ImageInputStream* createInputStreamInstance(Object$* input, bool useCache, ::java::io::File* cacheDir) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	static $String* vendorName;
	static $String* version;
	static $Class* inputClass;
};

			} // spi
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_spi_FileImageInputStreamSpi_h_