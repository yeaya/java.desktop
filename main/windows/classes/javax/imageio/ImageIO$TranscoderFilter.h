#ifndef _javax_imageio_ImageIO$TranscoderFilter_h_
#define _javax_imageio_ImageIO$TranscoderFilter_h_
//$ class javax.imageio.ImageIO$TranscoderFilter
//$ extends javax.imageio.spi.ServiceRegistry$Filter

#include <javax/imageio/spi/ServiceRegistry$Filter.h>

namespace javax {
	namespace imageio {
		namespace spi {
			class ImageReaderSpi;
			class ImageWriterSpi;
		}
	}
}

namespace javax {
	namespace imageio {

class $export ImageIO$TranscoderFilter : public ::javax::imageio::spi::ServiceRegistry$Filter {
	$class(ImageIO$TranscoderFilter, $NO_CLASS_INIT, ::javax::imageio::spi::ServiceRegistry$Filter)
public:
	ImageIO$TranscoderFilter();
	void init$(::javax::imageio::spi::ImageReaderSpi* readerSpi, ::javax::imageio::spi::ImageWriterSpi* writerSpi);
	virtual bool filter(Object$* elt) override;
	$String* readerSpiName = nullptr;
	$String* writerSpiName = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$TranscoderFilter_h_