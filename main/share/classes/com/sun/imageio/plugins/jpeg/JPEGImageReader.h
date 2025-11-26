#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageReader_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageReader_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageReader
//$ extends javax.imageio.ImageReader

#include <java/lang/Array.h>
#include <javax/imageio/ImageReader.h>

#pragma push_macro("MAX_WARNING")
#undef MAX_WARNING
#pragma push_macro("MIN_ESTIMATED_PASSES")
#undef MIN_ESTIMATED_PASSES
#pragma push_macro("UNKNOWN")
#undef UNKNOWN
#pragma push_macro("WARNING_IGNORE_INVALID_ICC")
#undef WARNING_IGNORE_INVALID_ICC
#pragma push_macro("WARNING_NO_EOI")
#undef WARNING_NO_EOI
#pragma push_macro("WARNING_NO_JFIF_IN_THUMB")
#undef WARNING_NO_JFIF_IN_THUMB

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class ImageTypeProducer;
					class JPEGImageReader$CallBackLock;
					class JPEGMetadata;
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
		namespace color {
			class ColorSpace;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorConvertOp;
			class DataBufferByte;
			class Raster;
			class WritableRaster;
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
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
		namespace plugins {
			namespace jpeg {
				class JPEGHuffmanTable;
				class JPEGQTable;
			}
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
namespace sun {
	namespace java2d {
		class DisposerRecord;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageReader : public ::javax::imageio::ImageReader {
	$class(JPEGImageReader, 0, ::javax::imageio::ImageReader)
public:
	JPEGImageReader();
	using ::javax::imageio::ImageReader::getStreamMetadata;
	using ::javax::imageio::ImageReader::getImageMetadata;
	void init$(::javax::imageio::spi::ImageReaderSpi* originator);
	virtual void abort() override;
	void abortRead(int64_t structPointer);
	void acceptPixels(int32_t y, bool progressive);
	virtual bool canReadRaster() override;
	void checkColorConversion(::java::awt::image::BufferedImage* image, ::javax::imageio::ImageReadParam* param);
	void checkTablesOnly();
	void clearNativeReadAbortFlag(int64_t structPointer);
	void clearThreadLock();
	virtual void dispose() override;
	static void disposeReader(int64_t structPointer);
	virtual ::javax::imageio::ImageReadParam* getDefaultReadParam() override;
	virtual int32_t getHeight(int32_t imageIndex) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex) override;
	::com::sun::imageio::plugins::jpeg::ImageTypeProducer* getImageType(int32_t code);
	virtual ::java::util::Iterator* getImageTypes(int32_t imageIndex) override;
	::java::util::Iterator* getImageTypesOnThread(int32_t imageIndex);
	virtual int32_t getNumImages(bool allowSearch) override;
	int32_t getNumImagesOnThread(bool allowSearch);
	virtual int32_t getNumThumbnails(int32_t imageIndex) override;
	virtual ::javax::imageio::ImageTypeSpecifier* getRawImageType(int32_t imageIndex) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata() override;
	virtual int32_t getThumbnailHeight(int32_t imageIndex, int32_t thumbnailIndex) override;
	virtual int32_t getThumbnailWidth(int32_t imageIndex, int32_t thumbnailIndex) override;
	virtual int32_t getWidth(int32_t imageIndex) override;
	void gotoImage(int32_t imageIndex);
	bool hasNextImage();
	int64_t initJPEGImageReader();
	void initProgressData();
	static void initReaderIDs($Class* iisClass, $Class* qTableClass, $Class* huffClass);
	static void initStatic();
	void passComplete();
	void passStarted(int32_t pass);
	void pushBack(int32_t num);
	using ::javax::imageio::ImageReader::read;
	virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	void readHeader(int32_t imageIndex, bool reset);
	bool readImage(int32_t imageIndex, int64_t structPointer, $bytes* buffer, int32_t numRasterBands, $ints* srcBands, $ints* bandSizes, int32_t sourceXOffset, int32_t sourceYOffset, int32_t sourceWidth, int32_t sourceHeight, int32_t periodX, int32_t periodY, $Array<::javax::imageio::plugins::jpeg::JPEGQTable>* abbrevQTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* abbrevDCHuffmanTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* abbrevACHuffmanTables, int32_t minProgressivePass, int32_t maxProgressivePass, bool wantUpdates);
	bool readImageHeader(int64_t structPointer, bool clearBuffer, bool reset);
	int32_t readInputData($bytes* buf, int32_t off, int32_t len);
	::java::awt::image::Raster* readInternal(int32_t imageIndex, ::javax::imageio::ImageReadParam* param, bool wantRaster);
	bool readNativeHeader(bool reset);
	virtual ::java::awt::image::Raster* readRaster(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	virtual ::java::awt::image::BufferedImage* readThumbnail(int32_t imageIndex, int32_t thumbnailIndex) override;
	virtual bool readerSupportsThumbnails() override;
	virtual void reset() override;
	void resetInternalState();
	void resetLibraryState(int64_t structPointer);
	void resetReader(int64_t structPointer);
	void setImageData(int32_t width, int32_t height, int32_t colorSpaceCode, int32_t outColorSpaceCode, int32_t numComponents, $bytes* iccData);
	using ::javax::imageio::ImageReader::setInput;
	virtual void setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) override;
	void setOutColorSpace(int64_t structPointer, int32_t id);
	void setSource(int64_t structPointer);
	void setThreadLock();
	void skipImage();
	int64_t skipInputBytes(int64_t n);
	void skipPastImage(int32_t imageIndex);
	virtual void thumbnailComplete();
	virtual void thumbnailProgress(float percentageDone);
	virtual void thumbnailStarted(int32_t thumbnailIndex);
	virtual void warningOccurred(int32_t code);
	virtual void warningWithMessage($String* msg);
	bool debug = false;
	int64_t structPointer = 0;
	::javax::imageio::stream::ImageInputStream* iis = nullptr;
	::java::util::List* imagePositions = nullptr;
	int32_t numImages = 0;
	static const int32_t WARNING_NO_EOI = 0;
	static const int32_t WARNING_NO_JFIF_IN_THUMB = 1;
	static const int32_t WARNING_IGNORE_INVALID_ICC = 2;
	static const int32_t MAX_WARNING = WARNING_IGNORE_INVALID_ICC;
	int32_t currentImage = 0;
	int32_t width = 0;
	int32_t height = 0;
	int32_t colorSpaceCode = 0;
	int32_t outColorSpaceCode = 0;
	int32_t numComponents = 0;
	::java::awt::color::ColorSpace* iccCS = nullptr;
	::java::awt::image::ColorConvertOp* convert = nullptr;
	::java::awt::image::BufferedImage* image = nullptr;
	::java::awt::image::WritableRaster* raster = nullptr;
	::java::awt::image::WritableRaster* target = nullptr;
	::java::awt::image::DataBufferByte* buffer = nullptr;
	::java::awt::Rectangle* destROI = nullptr;
	$ints* destinationBands = nullptr;
	::com::sun::imageio::plugins::jpeg::JPEGMetadata* streamMetadata = nullptr;
	::com::sun::imageio::plugins::jpeg::JPEGMetadata* imageMetadata = nullptr;
	int32_t imageMetadataIndex = 0;
	bool haveSeeked = false;
	$Array<::javax::imageio::plugins::jpeg::JPEGQTable>* abbrevQTables = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* abbrevDCHuffmanTables = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* abbrevACHuffmanTables = nullptr;
	int32_t minProgressivePass = 0;
	int32_t maxProgressivePass = 0;
	static const int32_t UNKNOWN = (-1);
	static const int32_t MIN_ESTIMATED_PASSES = 10;
	int32_t knownPassCount = 0;
	int32_t pass = 0;
	float percentToDate = 0.0;
	float previousPassPercentage = 0.0;
	int32_t progInterval = 0;
	bool tablesOnlyChecked = false;
	$Object* disposerReferent = nullptr;
	::sun::java2d::DisposerRecord* disposerRecord = nullptr;
	$Thread* theThread = nullptr;
	int32_t theLockCount = 0;
	::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock* cbLock = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("MAX_WARNING")
#pragma pop_macro("MIN_ESTIMATED_PASSES")
#pragma pop_macro("UNKNOWN")
#pragma pop_macro("WARNING_IGNORE_INVALID_ICC")
#pragma pop_macro("WARNING_NO_EOI")
#pragma pop_macro("WARNING_NO_JFIF_IN_THUMB")

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageReader_h_