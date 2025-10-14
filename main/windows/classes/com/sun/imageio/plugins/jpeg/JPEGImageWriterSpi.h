#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageWriterSpi_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageWriterSpi_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageWriterSpi
//$ extends javax.imageio.spi.ImageWriterSpi

#include <java/lang/Array.h>
#include <javax/imageio/spi/ImageWriterSpi.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
		class ImageWriter;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageWriterSpi : public ::javax::imageio::spi::ImageWriterSpi {
	$class(JPEGImageWriterSpi, 0, ::javax::imageio::spi::ImageWriterSpi)
public:
	JPEGImageWriterSpi();
	using ::javax::imageio::spi::ImageWriterSpi::canEncodeImage;
	using ::javax::imageio::spi::ImageWriterSpi::createWriterInstance;
	void init$();
	virtual bool canEncodeImage(::javax::imageio::ImageTypeSpecifier* type) override;
	virtual ::javax::imageio::ImageWriter* createWriterInstance(Object$* extension) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	virtual bool isFormatLossless() override;
	static $StringArray* readerSpiNames;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageWriterSpi_h_