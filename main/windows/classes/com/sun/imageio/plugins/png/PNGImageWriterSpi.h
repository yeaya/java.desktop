#ifndef _com_sun_imageio_plugins_png_PNGImageWriterSpi_h_
#define _com_sun_imageio_plugins_png_PNGImageWriterSpi_h_
//$ class com.sun.imageio.plugins.png.PNGImageWriterSpi
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
				namespace png {

class PNGImageWriterSpi : public ::javax::imageio::spi::ImageWriterSpi {
	$class(PNGImageWriterSpi, 0, ::javax::imageio::spi::ImageWriterSpi)
public:
	PNGImageWriterSpi();
	using ::javax::imageio::spi::ImageWriterSpi::canEncodeImage;
	using ::javax::imageio::spi::ImageWriterSpi::createWriterInstance;
	void init$();
	virtual bool canEncodeImage(::javax::imageio::ImageTypeSpecifier* type) override;
	virtual ::javax::imageio::ImageWriter* createWriterInstance(Object$* extension) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	static $String* vendorName;
	static $String* version;
	static $StringArray* names;
	static $StringArray* suffixes;
	static $StringArray* MIMETypes;
	static $String* writerClassName;
	static $StringArray* readerSpiNames;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_png_PNGImageWriterSpi_h_