#ifndef _com_sun_imageio_plugins_tiff_TIFFImageReaderSpi_h_
#define _com_sun_imageio_plugins_tiff_TIFFImageReaderSpi_h_
//$ class com.sun.imageio.plugins.tiff.TIFFImageReaderSpi
//$ extends javax.imageio.spi.ImageReaderSpi

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
				namespace tiff {

class TIFFImageReaderSpi : public ::javax::imageio::spi::ImageReaderSpi {
	$class(TIFFImageReaderSpi, $NO_CLASS_INIT, ::javax::imageio::spi::ImageReaderSpi)
public:
	TIFFImageReaderSpi();
	using ::javax::imageio::spi::ImageReaderSpi::createReaderInstance;
	void init$();
	virtual bool canDecodeInput(Object$* input) override;
	virtual ::javax::imageio::ImageReader* createReaderInstance(Object$* extension) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	virtual void onRegistration(::javax::imageio::spi::ServiceRegistry* registry, $Class* category) override;
	bool registered = false;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFImageReaderSpi_h_