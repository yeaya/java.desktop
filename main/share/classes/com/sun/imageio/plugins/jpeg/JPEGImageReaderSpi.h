#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageReaderSpi_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageReaderSpi_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageReaderSpi
//$ extends javax.imageio.spi.ImageReaderSpi

#include <java/lang/Array.h>
#include <javax/imageio/spi/ImageReaderSpi.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace imageio {
		class ImageReader;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageReaderSpi : public ::javax::imageio::spi::ImageReaderSpi {
	$class(JPEGImageReaderSpi, 0, ::javax::imageio::spi::ImageReaderSpi)
public:
	JPEGImageReaderSpi();
	using ::javax::imageio::spi::ImageReaderSpi::createReaderInstance;
	void init$();
	virtual bool canDecodeInput(Object$* source) override;
	virtual ::javax::imageio::ImageReader* createReaderInstance(Object$* extension) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	static $StringArray* writerSpiNames;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageReaderSpi_h_