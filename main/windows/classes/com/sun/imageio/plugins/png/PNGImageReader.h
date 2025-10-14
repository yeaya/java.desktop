#ifndef _com_sun_imageio_plugins_png_PNGImageReader_h_
#define _com_sun_imageio_plugins_png_PNGImageReader_h_
//$ class com.sun.imageio.plugins.png.PNGImageReader
//$ extends javax.imageio.ImageReader

#include <java/lang/Array.h>
#include <javax/imageio/ImageReader.h>

#pragma push_macro("IDAT_TYPE")
#undef IDAT_TYPE
#pragma push_macro("IEND_TYPE")
#undef IEND_TYPE
#pragma push_macro("IHDR_TYPE")
#undef IHDR_TYPE
#pragma push_macro("PLTE_TYPE")
#undef PLTE_TYPE
#pragma push_macro("PNG_COLOR_GRAY")
#undef PNG_COLOR_GRAY
#pragma push_macro("PNG_COLOR_GRAY_ALPHA")
#undef PNG_COLOR_GRAY_ALPHA
#pragma push_macro("PNG_COLOR_PALETTE")
#undef PNG_COLOR_PALETTE
#pragma push_macro("PNG_COLOR_RGB")
#undef PNG_COLOR_RGB
#pragma push_macro("PNG_COLOR_RGB_ALPHA")
#undef PNG_COLOR_RGB_ALPHA
#pragma push_macro("PNG_FILTER_AVERAGE")
#undef PNG_FILTER_AVERAGE
#pragma push_macro("PNG_FILTER_NONE")
#undef PNG_FILTER_NONE
#pragma push_macro("PNG_FILTER_PAETH")
#undef PNG_FILTER_PAETH
#pragma push_macro("PNG_FILTER_SUB")
#undef PNG_FILTER_SUB
#pragma push_macro("PNG_FILTER_UP")
#undef PNG_FILTER_UP

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {
					class PNGMetadata;
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
	namespace io {
		class DataInputStream;
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
				namespace png {

class PNGImageReader : public ::javax::imageio::ImageReader {
	$class(PNGImageReader, 0, ::javax::imageio::ImageReader)
public:
	PNGImageReader();
	using ::javax::imageio::ImageReader::getStreamMetadata;
	using ::javax::imageio::ImageReader::getImageMetadata;
	void init$(::javax::imageio::spi::ImageReaderSpi* originatingProvider);
	::java::awt::image::WritableRaster* createRaster(int32_t width, int32_t height, int32_t bands, int32_t scanlineStride, int32_t bitDepth);
	static void decodeAverageFilter($bytes* curr, int32_t coff, $bytes* prev, int32_t poff, int32_t count, int32_t bpp);
	void decodeImage();
	static void decodePaethFilter($bytes* curr, int32_t coff, $bytes* prev, int32_t poff, int32_t count, int32_t bpp);
	void decodePass(int32_t passNum, int32_t xStart, int32_t yStart, int32_t xStep, int32_t yStep, int32_t passWidth, int32_t passHeight);
	static void decodeSubFilter($bytes* curr, int32_t coff, int32_t count, int32_t bpp);
	static void decodeUpFilter($bytes* curr, int32_t coff, $bytes* prev, int32_t poff, int32_t count);
	virtual ::javax::imageio::ImageReadParam* getDefaultReadParam() override;
	virtual int32_t getHeight(int32_t imageIndex) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex) override;
	virtual ::java::util::Iterator* getImageTypes(int32_t imageIndex) override;
	virtual int32_t getNumImages(bool allowSearch) override;
	virtual ::javax::imageio::ImageTypeSpecifier* getRawImageType(int32_t imageIndex) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata() override;
	virtual int32_t getWidth(int32_t imageIndex) override;
	static $bytes* inflate($bytes* b);
	static int32_t paethPredictor(int32_t a, int32_t b, int32_t c);
	void parse_PLTE_chunk(int32_t chunkLength);
	void parse_bKGD_chunk();
	void parse_cHRM_chunk();
	void parse_gAMA_chunk();
	void parse_hIST_chunk(int32_t chunkLength);
	void parse_iCCP_chunk(int32_t chunkLength);
	void parse_iTXt_chunk(int32_t chunkLength);
	void parse_pHYs_chunk();
	void parse_sBIT_chunk();
	void parse_sPLT_chunk(int32_t chunkLength);
	void parse_sRGB_chunk();
	void parse_tEXt_chunk(int32_t chunkLength);
	void parse_tIME_chunk();
	void parse_tRNS_chunk(int32_t chunkLength);
	void parse_zTXt_chunk(int32_t chunkLength);
	using ::javax::imageio::ImageReader::read;
	virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	void readHeader();
	void readImage(::javax::imageio::ImageReadParam* param);
	void readMetadata();
	$String* readNullTerminatedString($String* charset, int32_t maxLen);
	virtual void reset() override;
	void resetStreamSettings();
	using ::javax::imageio::ImageReader::setInput;
	virtual void setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) override;
	void skipPass(int32_t passWidth, int32_t passHeight);
	void updateImageProgress(int32_t newPixels);
	static const int32_t IHDR_TYPE = 0x49484452;
	static const int32_t PLTE_TYPE = 0x504C5445;
	static const int32_t IDAT_TYPE = 0x49444154;
	static const int32_t IEND_TYPE = 0x49454E44;
	static const int32_t bKGD_TYPE = 0x624B4744;
	static const int32_t cHRM_TYPE = 0x6348524D;
	static const int32_t gAMA_TYPE = 0x67414D41;
	static const int32_t hIST_TYPE = 0x68495354;
	static const int32_t iCCP_TYPE = 0x69434350;
	static const int32_t iTXt_TYPE = 0x69545874;
	static const int32_t pHYs_TYPE = 0x70485973;
	static const int32_t sBIT_TYPE = 0x73424954;
	static const int32_t sPLT_TYPE = 0x73504C54;
	static const int32_t sRGB_TYPE = 0x73524742;
	static const int32_t tEXt_TYPE = 0x74455874;
	static const int32_t tIME_TYPE = 0x74494D45;
	static const int32_t tRNS_TYPE = 0x74524E53;
	static const int32_t zTXt_TYPE = 0x7A545874;
	static const int32_t PNG_COLOR_GRAY = 0;
	static const int32_t PNG_COLOR_RGB = 2;
	static const int32_t PNG_COLOR_PALETTE = 3;
	static const int32_t PNG_COLOR_GRAY_ALPHA = 4;
	static const int32_t PNG_COLOR_RGB_ALPHA = 6;
	static $ints* inputBandsForColorType;
	static const int32_t PNG_FILTER_NONE = 0;
	static const int32_t PNG_FILTER_SUB = 1;
	static const int32_t PNG_FILTER_UP = 2;
	static const int32_t PNG_FILTER_AVERAGE = 3;
	static const int32_t PNG_FILTER_PAETH = 4;
	static $ints* adam7XOffset;
	static $ints* adam7YOffset;
	static $ints* adam7XSubsampling;
	static $ints* adam7YSubsampling;
	static const bool debug = true;
	::javax::imageio::stream::ImageInputStream* stream = nullptr;
	bool gotHeader = false;
	bool gotMetadata = false;
	::javax::imageio::ImageReadParam* lastParam = nullptr;
	int64_t imageStartPosition = 0;
	::java::awt::Rectangle* sourceRegion = nullptr;
	int32_t sourceXSubsampling = 0;
	int32_t sourceYSubsampling = 0;
	int32_t sourceMinProgressivePass = 0;
	int32_t sourceMaxProgressivePass = 0;
	$ints* sourceBands = nullptr;
	$ints* destinationBands = nullptr;
	::java::awt::Point* destinationOffset = nullptr;
	::com::sun::imageio::plugins::png::PNGMetadata* metadata = nullptr;
	::java::io::DataInputStream* pixelStream = nullptr;
	::java::awt::image::BufferedImage* theImage = nullptr;
	int32_t pixelsDone = 0;
	int32_t totalPixels = 0;
	static $Array<int32_t, 2>* bandOffsets;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("IDAT_TYPE")
#pragma pop_macro("IEND_TYPE")
#pragma pop_macro("IHDR_TYPE")
#pragma pop_macro("PLTE_TYPE")
#pragma pop_macro("PNG_COLOR_GRAY")
#pragma pop_macro("PNG_COLOR_GRAY_ALPHA")
#pragma pop_macro("PNG_COLOR_PALETTE")
#pragma pop_macro("PNG_COLOR_RGB")
#pragma pop_macro("PNG_COLOR_RGB_ALPHA")
#pragma pop_macro("PNG_FILTER_AVERAGE")
#pragma pop_macro("PNG_FILTER_NONE")
#pragma pop_macro("PNG_FILTER_PAETH")
#pragma pop_macro("PNG_FILTER_SUB")
#pragma pop_macro("PNG_FILTER_UP")

#endif // _com_sun_imageio_plugins_png_PNGImageReader_h_