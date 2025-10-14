#ifndef _com_sun_imageio_plugins_tiff_TIFFImageWriter_h_
#define _com_sun_imageio_plugins_tiff_TIFFImageWriter_h_
//$ class com.sun.imageio.plugins.tiff.TIFFImageWriter
//$ extends javax.imageio.ImageWriter

#include <java/lang/Array.h>
#include <javax/imageio/ImageWriter.h>

#pragma push_macro("DEFAULT_BYTES_PER_STRIP")
#undef DEFAULT_BYTES_PER_STRIP
#pragma push_macro("EXIF_JPEG_COMPRESSION_TYPE")
#undef EXIF_JPEG_COMPRESSION_TYPE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {
					class TIFFColorConverter;
					class TIFFCompressor;
					class TIFFIFD;
					class TIFFImageMetadata;
					class TIFFImageReader;
					class TIFFStreamMetadata;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
			class RenderedImage;
			class SampleModel;
		}
	}
}
namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace imageio {
		class IIOImage;
		class ImageTypeSpecifier;
		class ImageWriteParam;
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
			class ImageWriterSpi;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageOutputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFImageWriter : public ::javax::imageio::ImageWriter {
	$class(TIFFImageWriter, 0, ::javax::imageio::ImageWriter)
public:
	TIFFImageWriter();
	using ::javax::imageio::ImageWriter::equals;
	void init$(::javax::imageio::spi::ImageWriterSpi* originatingProvider);
	static int32_t XToTileX(int32_t x, int32_t tileGridXOffset, int32_t tileWidth);
	static int32_t YToTileY(int32_t y, int32_t tileGridYOffset, int32_t tileHeight);
	virtual bool canInsertEmpty(int32_t imageIndex) override;
	virtual bool canInsertImage(int32_t imageIndex) override;
	virtual bool canReplacePixels(int32_t imageIndex) override;
	virtual bool canWriteEmpty() override;
	virtual bool canWriteSequence() override;
	void checkParamsEmpty(::javax::imageio::ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::java::util::List* thumbnails);
	virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	::com::sun::imageio::plugins::tiff::TIFFImageMetadata* convertNativeImageMetadata(::javax::imageio::metadata::IIOMetadata* inData);
	::com::sun::imageio::plugins::tiff::TIFFImageMetadata* convertStandardImageMetadata(::javax::imageio::metadata::IIOMetadata* inData);
	virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageWriteParam* param) override;
	virtual void endInsertEmpty() override;
	virtual void endReplacePixels() override;
	virtual void endWriteEmpty() override;
	virtual void endWriteSequence() override;
	bool equals($ints* s0, $ints* s1);
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultImageMetadata(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultStreamMetadata(::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::ImageWriteParam* getDefaultWriteParam() override;
	virtual ::javax::imageio::ImageTypeSpecifier* getImageType();
	void initializeScaleTables($ints* sampleSize);
	void insert(int32_t imageIndex, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param, bool writeData);
	bool isEncodingEmpty();
	void locateIFD(int32_t imageIndex, $longs* ifdpos, $longs* ifd);
	void markPositions();
	virtual void prepareInsertEmpty(int32_t imageIndex, ::javax::imageio::ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ::javax::imageio::ImageWriteParam* param) override;
	virtual void prepareReplacePixels(int32_t imageIndex, ::java::awt::Rectangle* region) override;
	virtual void prepareWriteEmpty(::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ::javax::imageio::ImageWriteParam* param) override;
	virtual void prepareWriteSequence(::javax::imageio::metadata::IIOMetadata* streamMetadata) override;
	::com::sun::imageio::plugins::tiff::TIFFIFD* readIFD(int32_t imageIndex);
	virtual void replacePixels(::java::awt::image::RenderedImage* image, ::javax::imageio::ImageWriteParam* param) override;
	virtual void replacePixels(::java::awt::image::Raster* raster, ::javax::imageio::ImageWriteParam* param) override;
	virtual void reset() override;
	void resetPositions();
	virtual void setOutput(Object$* output) override;
	virtual void setupMetadata(::java::awt::image::ColorModel* cm, ::java::awt::image::SampleModel* sm, int32_t destWidth, int32_t destHeight);
	::java::awt::image::Raster* subsample(::java::awt::image::Raster* raster, $ints* sourceBands, int32_t subOriginX, int32_t subOriginY, int32_t subPeriodX, int32_t subPeriodY, int32_t dstOffsetX, int32_t dstOffsetY, ::java::awt::Rectangle* target);
	using ::javax::imageio::ImageWriter::write;
	virtual void write(::javax::imageio::metadata::IIOMetadata* sm, ::javax::imageio::IIOImage* iioimage, ::javax::imageio::ImageWriteParam* p) override;
	void write(::javax::imageio::metadata::IIOMetadata* sm, ::javax::imageio::IIOImage* iioimage, ::javax::imageio::ImageWriteParam* p, bool writeHeader, bool writeData);
	void writeHeader();
	virtual void writeInsert(int32_t imageIndex, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) override;
	int32_t writeTile(::java::awt::Rectangle* tileRect, ::com::sun::imageio::plugins::tiff::TIFFCompressor* compressor);
	virtual void writeToSequence(::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) override;
	static $String* EXIF_JPEG_COMPRESSION_TYPE;
	static const int32_t DEFAULT_BYTES_PER_STRIP = 8192;
	static $StringArray* TIFFCompressionTypes;
	static $StringArray* compressionTypes;
	static $booleans* isCompressionLossless;
	static $ints* compressionNumbers;
	::javax::imageio::stream::ImageOutputStream* stream = nullptr;
	int64_t headerPosition = 0;
	::java::awt::image::RenderedImage* image = nullptr;
	::javax::imageio::ImageTypeSpecifier* imageType = nullptr;
	::java::nio::ByteOrder* byteOrder = nullptr;
	::javax::imageio::ImageWriteParam* param = nullptr;
	::com::sun::imageio::plugins::tiff::TIFFCompressor* compressor = nullptr;
	::com::sun::imageio::plugins::tiff::TIFFColorConverter* colorConverter = nullptr;
	::com::sun::imageio::plugins::tiff::TIFFStreamMetadata* streamMetadata = nullptr;
	::com::sun::imageio::plugins::tiff::TIFFImageMetadata* imageMetadata = nullptr;
	int32_t sourceXOffset = 0;
	int32_t sourceYOffset = 0;
	int32_t sourceWidth = 0;
	int32_t sourceHeight = 0;
	$ints* sourceBands = nullptr;
	int32_t periodX = 0;
	int32_t periodY = 0;
	int32_t bitDepth = 0;
	int32_t numBands = 0;
	int32_t tileWidth = 0;
	int32_t tileLength = 0;
	int32_t tilesAcross = 0;
	int32_t tilesDown = 0;
	$ints* sampleSize = nullptr;
	int32_t scalingBitDepth = 0;
	bool isRescaling = false;
	bool isBilevel = false;
	bool isImageSimple = false;
	bool isInverted = false;
	bool isTiled = false;
	int32_t nativePhotometricInterpretation = 0;
	int32_t photometricInterpretation = 0;
	$chars* bitsPerSample = nullptr;
	int32_t sampleFormat = 0;
	$Array<int8_t, 2>* scale = nullptr;
	$bytes* scale0 = nullptr;
	$Array<int8_t, 2>* scaleh = nullptr;
	$Array<int8_t, 2>* scalel = nullptr;
	int32_t compression = 0;
	int32_t predictor = 0;
	int32_t totalPixels = 0;
	int32_t pixelsDone = 0;
	int64_t nextIFDPointerPos = 0;
	int64_t nextSpace = 0;
	int64_t prevStreamPosition = 0;
	int64_t prevHeaderPosition = 0;
	int64_t prevNextSpace = 0;
	bool isWritingSequence = false;
	bool isInsertingEmpty = false;
	bool isWritingEmpty = false;
	int32_t currentImage = 0;
	$Object* replacePixelsLock = nullptr;
	int32_t replacePixelsIndex = 0;
	::com::sun::imageio::plugins::tiff::TIFFImageMetadata* replacePixelsMetadata = nullptr;
	$longs* replacePixelsTileOffsets = nullptr;
	$longs* replacePixelsByteCounts = nullptr;
	int64_t replacePixelsOffsetsPosition = 0;
	int64_t replacePixelsByteCountsPosition = 0;
	::java::awt::Rectangle* replacePixelsRegion = nullptr;
	bool inReplacePixelsNest = false;
	::com::sun::imageio::plugins::tiff::TIFFImageReader* reader = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("DEFAULT_BYTES_PER_STRIP")
#pragma pop_macro("EXIF_JPEG_COMPRESSION_TYPE")

#endif // _com_sun_imageio_plugins_tiff_TIFFImageWriter_h_