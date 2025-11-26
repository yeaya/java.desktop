#ifndef _com_sun_imageio_plugins_tiff_TIFFImageReader_h_
#define _com_sun_imageio_plugins_tiff_TIFFImageReader_h_
//$ class com.sun.imageio.plugins.tiff.TIFFImageReader
//$ extends javax.imageio.ImageReader

#include <java/lang/Array.h>
#include <javax/imageio/ImageReader.h>

#pragma push_macro("BITS_PER_SAMPLE_MAX")
#undef BITS_PER_SAMPLE_MAX
#pragma push_macro("SAMPLES_PER_PIXEL_MAX")
#undef SAMPLES_PER_PIXEL_MAX

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {
					class TIFFDecompressor;
					class TIFFImageMetadata;
					class TIFFStreamMetadata;
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
			class RenderedImage;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Iterator;
		class List;
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
				namespace tiff {

class TIFFImageReader : public ::javax::imageio::ImageReader {
	$class(TIFFImageReader, $NO_CLASS_INIT, ::javax::imageio::ImageReader)
public:
	TIFFImageReader();
	using ::javax::imageio::ImageReader::getStreamMetadata;
	using ::javax::imageio::ImageReader::getImageMetadata;
	void init$(::javax::imageio::spi::ImageReaderSpi* originatingProvider);
	virtual bool canReadRaster() override;
	void checkIndex(int32_t imageIndex);
	void decodeTile(int32_t ti, int32_t tj, int32_t band);
	virtual void forwardWarningMessage($String* warning);
	int32_t getCompression();
	virtual ::javax::imageio::ImageReadParam* getDefaultReadParam() override;
	int32_t getHeight();
	virtual int32_t getHeight(int32_t imageIndex) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex) override;
	virtual ::java::util::Iterator* getImageTypes(int32_t imageIndex) override;
	virtual int32_t getNumImages(bool allowSearch) override;
	virtual int32_t getNumThumbnails(int32_t imageIndex) override;
	int32_t getPlanarConfiguration();
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata() override;
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata(int32_t imageIndex);
	virtual int32_t getTileHeight(int32_t imageIndex) override;
	int64_t getTileOrStripByteCount(int32_t tileIndex);
	int32_t getTileOrStripHeight();
	int64_t getTileOrStripOffset(int32_t tileIndex);
	int32_t getTileOrStripWidth();
	virtual int32_t getTileWidth(int32_t imageIndex) override;
	int32_t getWidth();
	virtual int32_t getWidth(int32_t imageIndex) override;
	virtual bool hasThumbnails(int32_t imageIndex) override;
	static int32_t iceil(int32_t num, int32_t den);
	static int32_t ifloor(int32_t num, int32_t den);
	void initializeFromMetadata();
	virtual bool isImageTiled(int32_t imageIndex) override;
	virtual bool isRandomAccessEasy(int32_t imageIndex) override;
	int32_t locateImage(int32_t imageIndex);
	void prepareRead(int32_t imageIndex, ::javax::imageio::ImageReadParam* param);
	using ::javax::imageio::ImageReader::read;
	virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	virtual ::java::awt::image::RenderedImage* readAsRenderedImage(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	void readHeader();
	void readMetadata();
	virtual ::java::awt::image::Raster* readRaster(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	virtual bool readSupportsThumbnails();
	virtual ::java::awt::image::BufferedImage* readTile(int32_t imageIndex, int32_t tileX, int32_t tileY) override;
	void reportProgress();
	virtual void reset() override;
	virtual void resetLocal();
	void seekToImage(int32_t imageIndex);
	using ::javax::imageio::ImageReader::setInput;
	virtual void setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) override;
	static const int32_t SAMPLES_PER_PIXEL_MAX = 1024;
	static const int32_t BITS_PER_SAMPLE_MAX = 64;
	::javax::imageio::stream::ImageInputStream* stream = nullptr;
	bool gotHeader = false;
	::javax::imageio::ImageReadParam* imageReadParam = nullptr;
	::com::sun::imageio::plugins::tiff::TIFFStreamMetadata* streamMetadata = nullptr;
	int32_t currIndex = 0;
	::com::sun::imageio::plugins::tiff::TIFFImageMetadata* imageMetadata = nullptr;
	::java::util::List* imageStartPosition = nullptr;
	int32_t numImages = 0;
	::java::util::HashMap* imageTypeMap = nullptr;
	::java::awt::image::BufferedImage* theImage = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t numBands = 0;
	int32_t tileOrStripWidth = 0;
	int32_t tileOrStripHeight = 0;
	int32_t planarConfiguration = 0;
	int32_t compression = 0;
	int32_t photometricInterpretation = 0;
	int32_t samplesPerPixel = 0;
	$ints* sampleFormat = nullptr;
	$ints* bitsPerSample = nullptr;
	$ints* extraSamples = nullptr;
	$chars* colorMap = nullptr;
	int32_t sourceXOffset = 0;
	int32_t sourceYOffset = 0;
	int32_t srcXSubsampling = 0;
	int32_t srcYSubsampling = 0;
	int32_t dstWidth = 0;
	int32_t dstHeight = 0;
	int32_t dstMinX = 0;
	int32_t dstMinY = 0;
	int32_t dstXOffset = 0;
	int32_t dstYOffset = 0;
	int32_t tilesAcross = 0;
	int32_t tilesDown = 0;
	int32_t pixelsRead = 0;
	int32_t pixelsToRead = 0;
	$ints* sourceBands = nullptr;
	$ints* destinationBands = nullptr;
	::com::sun::imageio::plugins::tiff::TIFFDecompressor* decompressor = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("BITS_PER_SAMPLE_MAX")
#pragma pop_macro("SAMPLES_PER_PIXEL_MAX")

#endif // _com_sun_imageio_plugins_tiff_TIFFImageReader_h_