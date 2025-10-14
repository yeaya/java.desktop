#ifndef _com_sun_imageio_spi_RAFImageOutputStreamSpi_h_
#define _com_sun_imageio_spi_RAFImageOutputStreamSpi_h_
//$ class com.sun.imageio.spi.RAFImageOutputStreamSpi
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

class RAFImageOutputStreamSpi : public ::javax::imageio::spi::ImageOutputStreamSpi {
	$class(RAFImageOutputStreamSpi, 0, ::javax::imageio::spi::ImageOutputStreamSpi)
public:
	RAFImageOutputStreamSpi();
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

#endif // _com_sun_imageio_spi_RAFImageOutputStreamSpi_h_