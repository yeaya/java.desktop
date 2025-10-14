#ifndef _com_sun_imageio_plugins_gif_GIFImageReaderSpi_h_
#define _com_sun_imageio_plugins_gif_GIFImageReaderSpi_h_
//$ class com.sun.imageio.plugins.gif.GIFImageReaderSpi
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
				namespace gif {

class GIFImageReaderSpi : public ::javax::imageio::spi::ImageReaderSpi {
	$class(GIFImageReaderSpi, 0, ::javax::imageio::spi::ImageReaderSpi)
public:
	GIFImageReaderSpi();
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

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_gif_GIFImageReaderSpi_h_