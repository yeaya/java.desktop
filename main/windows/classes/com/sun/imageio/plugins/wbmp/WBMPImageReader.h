#ifndef _com_sun_imageio_plugins_wbmp_WBMPImageReader_h_
#define _com_sun_imageio_plugins_wbmp_WBMPImageReader_h_
//$ class com.sun.imageio.plugins.wbmp.WBMPImageReader
//$ extends javax.imageio.ImageReader

#include <javax/imageio/ImageReader.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace wbmp {
					class WBMPMetadata;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class Raster;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace imageio {
		class ImageReadParam;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace spi {
			class ImageReaderSpi;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace wbmp {

class WBMPImageReader : public ::javax::imageio::ImageReader {
	$class(WBMPImageReader, $NO_CLASS_INIT, ::javax::imageio::ImageReader)
public:
	WBMPImageReader();
	using ::javax::imageio::ImageReader::getStreamMetadata;
	using ::javax::imageio::ImageReader::getImageMetadata;
	void init$(::javax::imageio::spi::ImageReaderSpi* originator);
	virtual bool canReadRaster() override;
	void checkIndex(int32_t imageIndex);
	virtual ::javax::imageio::ImageReadParam* getDefaultReadParam() override;
	virtual int32_t getHeight(int32_t imageIndex) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex) override;
	virtual ::java::util::Iterator* getImageTypes(int32_t imageIndex) override;
	virtual int32_t getNumImages(bool allowSearch) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata() override;
	virtual int32_t getWidth(int32_t imageIndex) override;
	virtual bool isRandomAccessEasy(int32_t imageIndex) override;
	virtual bool isValidWbmpType(int32_t type);
	using ::javax::imageio::ImageReader::read;
	virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	virtual void readHeader();
	virtual ::java::awt::image::Raster* readRaster(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	virtual void reset() override;
	using ::javax::imageio::ImageReader::setInput;
	virtual void setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) override;
	::javax::imageio::stream::ImageInputStream* iis = nullptr;
	bool gotHeader = false;
	int32_t width = 0;
	int32_t height = 0;
	int32_t wbmpType = 0;
	::com::sun::imageio::plugins::wbmp::WBMPMetadata* metadata = nullptr;
};

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_wbmp_WBMPImageReader_h_