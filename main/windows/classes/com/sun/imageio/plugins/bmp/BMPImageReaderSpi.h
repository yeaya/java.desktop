#ifndef _com_sun_imageio_plugins_bmp_BMPImageReaderSpi_h_
#define _com_sun_imageio_plugins_bmp_BMPImageReaderSpi_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageReaderSpi
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
namespace javax {
	namespace imageio {
		namespace spi {
			class ServiceRegistry;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPImageReaderSpi : public ::javax::imageio::spi::ImageReaderSpi {
	$class(BMPImageReaderSpi, 0, ::javax::imageio::spi::ImageReaderSpi)
public:
	BMPImageReaderSpi();
	using ::javax::imageio::spi::ImageReaderSpi::createReaderInstance;
	void init$();
	virtual bool canDecodeInput(Object$* source) override;
	virtual ::javax::imageio::ImageReader* createReaderInstance(Object$* extension) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	virtual void onRegistration(::javax::imageio::spi::ServiceRegistry* registry, $Class* category) override;
	static $StringArray* writerSpiNames;
	static $StringArray* formatNames;
	static $StringArray* entensions;
	static $StringArray* mimeType;
	bool registered = false;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageReaderSpi_h_