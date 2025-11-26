#ifndef _com_sun_imageio_plugins_png_PNGImageReaderSpi_h_
#define _com_sun_imageio_plugins_png_PNGImageReaderSpi_h_
//$ class com.sun.imageio.plugins.png.PNGImageReaderSpi
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
				namespace png {

class PNGImageReaderSpi : public ::javax::imageio::spi::ImageReaderSpi {
	$class(PNGImageReaderSpi, 0, ::javax::imageio::spi::ImageReaderSpi)
public:
	PNGImageReaderSpi();
	using ::javax::imageio::spi::ImageReaderSpi::createReaderInstance;
	void init$();
	virtual bool canDecodeInput(Object$* input) override;
	virtual ::javax::imageio::ImageReader* createReaderInstance(Object$* extension) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	static $String* vendorName;
	static $String* version;
	static $StringArray* names;
	static $StringArray* suffixes;
	static $StringArray* MIMETypes;
	static $String* readerClassName;
	static $StringArray* writerSpiNames;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_png_PNGImageReaderSpi_h_