#ifndef _com_sun_imageio_plugins_wbmp_WBMPImageReaderSpi_h_
#define _com_sun_imageio_plugins_wbmp_WBMPImageReaderSpi_h_
//$ class com.sun.imageio.plugins.wbmp.WBMPImageReaderSpi
//$ extends javax.imageio.spi.ImageReaderSpi

#include <java/lang/Array.h>
#include <javax/imageio/spi/ImageReaderSpi.h>

#pragma push_macro("MAX_WBMP_HEIGHT")
#undef MAX_WBMP_HEIGHT
#pragma push_macro("MAX_WBMP_WIDTH")
#undef MAX_WBMP_WIDTH

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
				namespace wbmp {

class WBMPImageReaderSpi : public ::javax::imageio::spi::ImageReaderSpi {
	$class(WBMPImageReaderSpi, 0, ::javax::imageio::spi::ImageReaderSpi)
public:
	WBMPImageReaderSpi();
	using ::javax::imageio::spi::ImageReaderSpi::createReaderInstance;
	void init$();
	virtual bool canDecodeInput(Object$* source) override;
	virtual ::javax::imageio::ImageReader* createReaderInstance(Object$* extension) override;
	virtual $String* getDescription(::java::util::Locale* locale) override;
	virtual void onRegistration(::javax::imageio::spi::ServiceRegistry* registry, $Class* category) override;
	static const int32_t MAX_WBMP_WIDTH = 1024;
	static const int32_t MAX_WBMP_HEIGHT = 768;
	static $StringArray* writerSpiNames;
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

#pragma pop_macro("MAX_WBMP_HEIGHT")
#pragma pop_macro("MAX_WBMP_WIDTH")

#endif // _com_sun_imageio_plugins_wbmp_WBMPImageReaderSpi_h_