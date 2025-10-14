#ifndef _com_sun_imageio_plugins_wbmp_WBMPImageWriterSpi_h_
#define _com_sun_imageio_plugins_wbmp_WBMPImageWriterSpi_h_
//$ class com.sun.imageio.plugins.wbmp.WBMPImageWriterSpi
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
				namespace wbmp {

class WBMPImageWriterSpi : public ::javax::imageio::spi::ImageWriterSpi {
	$class(WBMPImageWriterSpi, 0, ::javax::imageio::spi::ImageWriterSpi)
public:
	WBMPImageWriterSpi();
	using ::javax::imageio::spi::ImageWriterSpi::canEncodeImage;
	using ::javax::imageio::spi::ImageWriterSpi::createWriterInstance;
	void init$();
	virtual bool canEncodeImage(::javax::imageio::ImageTypeSpecifier* type) override;
	virtual ::javax::imageio::ImageWriter* createWriterInstance(Object$* extension) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	virtual void onRegistration(::javax::imageio::spi::ServiceRegistry* registry, $Class* category) override;
	static $StringArray* readerSpiNames;
	static $StringArray* formatNames;
	static $StringArray* entensions;
	static $StringArray* mimeType;
	bool registered = false;
};

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_wbmp_WBMPImageWriterSpi_h_