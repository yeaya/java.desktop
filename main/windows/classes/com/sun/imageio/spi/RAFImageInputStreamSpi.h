#ifndef _com_sun_imageio_spi_RAFImageInputStreamSpi_h_
#define _com_sun_imageio_spi_RAFImageInputStreamSpi_h_
//$ class com.sun.imageio.spi.RAFImageInputStreamSpi
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

class RAFImageInputStreamSpi : public ::javax::imageio::spi::ImageInputStreamSpi {
	$class(RAFImageInputStreamSpi, 0, ::javax::imageio::spi::ImageInputStreamSpi)
public:
	RAFImageInputStreamSpi();
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

#endif // _com_sun_imageio_spi_RAFImageInputStreamSpi_h_