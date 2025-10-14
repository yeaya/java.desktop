#ifndef _com_sun_imageio_plugins_gif_GIFImageReader_h_
#define _com_sun_imageio_plugins_gif_GIFImageReader_h_
//$ class com.sun.imageio.plugins.gif.GIFImageReader
//$ extends javax.imageio.ImageReader

#include <java/lang/Array.h>
#include <javax/imageio/ImageReader.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {
					class GIFImageMetadata;
					class GIFStreamMetadata;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class WritableRaster;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace javax {
	namespace imageio {
		class ImageReadParam;
		class ImageTypeSpecifier;
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
				namespace gif {

class GIFImageReader : public ::javax::imageio::ImageReader {
	$class(GIFImageReader, 0, ::javax::imageio::ImageReader)
public:
	GIFImageReader();
	using ::javax::imageio::ImageReader::getStreamMetadata;
	using ::javax::imageio::ImageReader::getImageMetadata;
	void init$(::javax::imageio::spi::ImageReaderSpi* originatingProvider);
	void checkIndex(int32_t imageIndex);
	void computeDecodeThisRow();
	$bytes* concatenateBlocks();
	int32_t copyData($bytes* src, int32_t offset, $bytes* dst);
	::javax::imageio::ImageTypeSpecifier* createIndexed($bytes* r, $bytes* g, $bytes* b, int32_t bits);
	int32_t getCode(int32_t codeSize, int32_t codeMask);
	static $bytes* getDefaultPalette();
	virtual ::javax::imageio::ImageReadParam* getDefaultReadParam() override;
	virtual int32_t getHeight(int32_t imageIndex) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex) override;
	virtual ::java::util::Iterator* getImageTypes(int32_t imageIndex) override;
	virtual int32_t getNumImages(bool allowSearch) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata() override;
	virtual int32_t getWidth(int32_t imageIndex) override;
	void initNext32Bits();
	virtual void initializeStringTable($ints* prefix, $bytes* suffix, $bytes* initial, $ints* length);
	int32_t locateImage(int32_t imageIndex);
	void outputPixels($bytes* string, int32_t len);
	void outputRow();
	using ::javax::imageio::ImageReader::read;
	virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	void readHeader();
	void readMetadata();
	virtual void reset() override;
	void resetStreamSettings();
	using ::javax::imageio::ImageReader::setInput;
	virtual void setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) override;
	bool skipImage();
	void startPass(int32_t pass);
	::javax::imageio::stream::ImageInputStream* stream = nullptr;
	bool gotHeader = false;
	::com::sun::imageio::plugins::gif::GIFStreamMetadata* streamMetadata = nullptr;
	int32_t currIndex = 0;
	::com::sun::imageio::plugins::gif::GIFImageMetadata* imageMetadata = nullptr;
	::java::util::List* imageStartPosition = nullptr;
	int32_t imageMetadataLength = 0;
	int32_t numImages = 0;
	$bytes* block = nullptr;
	int32_t blockLength = 0;
	int32_t bitPos = 0;
	int32_t nextByte = 0;
	int32_t initCodeSize = 0;
	int32_t clearCode = 0;
	int32_t eofCode = 0;
	int32_t next32Bits = 0;
	bool lastBlockFound = false;
	::java::awt::image::BufferedImage* theImage = nullptr;
	::java::awt::image::WritableRaster* theTile = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t streamX = 0;
	int32_t streamY = 0;
	int32_t rowsDone = 0;
	int32_t interlacePass = 0;
	$bytes* fallbackColorTable = nullptr;
	static $ints* interlaceIncrement;
	static $ints* interlaceOffset;
	::java::awt::Rectangle* sourceRegion = nullptr;
	int32_t sourceXSubsampling = 0;
	int32_t sourceYSubsampling = 0;
	int32_t sourceMinProgressivePass = 0;
	int32_t sourceMaxProgressivePass = 0;
	::java::awt::Point* destinationOffset = nullptr;
	::java::awt::Rectangle* destinationRegion = nullptr;
	int32_t updateMinY = 0;
	int32_t updateYStep = 0;
	bool decodeThisRow = false;
	int32_t destY = 0;
	$bytes* rowBuf = nullptr;
	static $bytes* defaultPalette;
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_gif_GIFImageReader_h_