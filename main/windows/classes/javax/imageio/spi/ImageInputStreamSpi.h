#ifndef _javax_imageio_spi_ImageInputStreamSpi_h_
#define _javax_imageio_spi_ImageInputStreamSpi_h_
//$ class javax.imageio.spi.ImageInputStreamSpi
//$ extends javax.imageio.spi.IIOServiceProvider

#include <javax/imageio/spi/IIOServiceProvider.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $export ImageInputStreamSpi : public ::javax::imageio::spi::IIOServiceProvider {
	$class(ImageInputStreamSpi, $NO_CLASS_INIT, ::javax::imageio::spi::IIOServiceProvider)
public:
	ImageInputStreamSpi();
	void init$();
	void init$($String* vendorName, $String* version, $Class* inputClass);
	virtual bool canUseCacheFile();
	virtual ::javax::imageio::stream::ImageInputStream* createInputStreamInstance(Object$* input, bool useCache, ::java::io::File* cacheDir) {return nullptr;}
	virtual ::javax::imageio::stream::ImageInputStream* createInputStreamInstance(Object$* input);
	virtual $Class* getInputClass();
	virtual bool needsCacheFile();
	$Class* inputClass = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_ImageInputStreamSpi_h_