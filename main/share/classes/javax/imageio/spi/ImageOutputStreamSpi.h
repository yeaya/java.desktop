#ifndef _javax_imageio_spi_ImageOutputStreamSpi_h_
#define _javax_imageio_spi_ImageOutputStreamSpi_h_
//$ class javax.imageio.spi.ImageOutputStreamSpi
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
			class ImageOutputStream;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $export ImageOutputStreamSpi : public ::javax::imageio::spi::IIOServiceProvider {
	$class(ImageOutputStreamSpi, $NO_CLASS_INIT, ::javax::imageio::spi::IIOServiceProvider)
public:
	ImageOutputStreamSpi();
	void init$();
	void init$($String* vendorName, $String* version, $Class* outputClass);
	virtual bool canUseCacheFile();
	virtual ::javax::imageio::stream::ImageOutputStream* createOutputStreamInstance(Object$* output, bool useCache, ::java::io::File* cacheDir) {return nullptr;}
	virtual ::javax::imageio::stream::ImageOutputStream* createOutputStreamInstance(Object$* output);
	virtual $Class* getOutputClass();
	virtual bool needsCacheFile();
	$Class* outputClass = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_ImageOutputStreamSpi_h_