#ifndef _javax_imageio_spi_ImageTranscoderSpi_h_
#define _javax_imageio_spi_ImageTranscoderSpi_h_
//$ class javax.imageio.spi.ImageTranscoderSpi
//$ extends javax.imageio.spi.IIOServiceProvider

#include <javax/imageio/spi/IIOServiceProvider.h>

namespace javax {
	namespace imageio {
		class ImageTranscoder;
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $export ImageTranscoderSpi : public ::javax::imageio::spi::IIOServiceProvider {
	$class(ImageTranscoderSpi, $NO_CLASS_INIT, ::javax::imageio::spi::IIOServiceProvider)
public:
	ImageTranscoderSpi();
	void init$();
	void init$($String* vendorName, $String* version);
	virtual ::javax::imageio::ImageTranscoder* createTranscoderInstance() {return nullptr;}
	virtual $String* getReaderServiceProviderName() {return nullptr;}
	virtual $String* getWriterServiceProviderName() {return nullptr;}
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_ImageTranscoderSpi_h_