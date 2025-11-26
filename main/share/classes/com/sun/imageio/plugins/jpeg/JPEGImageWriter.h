#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageWriter_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageWriter_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageWriter
//$ extends javax.imageio.ImageWriter

#include <java/lang/Array.h>
#include <javax/imageio/ImageWriter.h>

#pragma push_macro("MAX_WARNING")
#undef MAX_WARNING
#pragma push_macro("WARNING_DEST_IGNORED")
#undef WARNING_DEST_IGNORED
#pragma push_macro("WARNING_DEST_METADATA_ADOBE_MISMATCH")
#undef WARNING_DEST_METADATA_ADOBE_MISMATCH
#pragma push_macro("WARNING_DEST_METADATA_COMP_MISMATCH")
#undef WARNING_DEST_METADATA_COMP_MISMATCH
#pragma push_macro("WARNING_DEST_METADATA_JFIF_MISMATCH")
#undef WARNING_DEST_METADATA_JFIF_MISMATCH
#pragma push_macro("WARNING_FORCING_JFIF")
#undef WARNING_FORCING_JFIF
#pragma push_macro("WARNING_IGNORING_THUMBS")
#undef WARNING_IGNORING_THUMBS
#pragma push_macro("WARNING_ILLEGAL_THUMBNAIL")
#undef WARNING_ILLEGAL_THUMBNAIL
#pragma push_macro("WARNING_IMAGE_METADATA_ADOBE_MISMATCH")
#undef WARNING_IMAGE_METADATA_ADOBE_MISMATCH
#pragma push_macro("WARNING_IMAGE_METADATA_JFIF_MISMATCH")
#undef WARNING_IMAGE_METADATA_JFIF_MISMATCH
#pragma push_macro("WARNING_METADATA_ADJUSTED_FOR_THUMB")
#undef WARNING_METADATA_ADJUSTED_FOR_THUMB
#pragma push_macro("WARNING_METADATA_NOT_JPEG_FOR_RASTER")
#undef WARNING_METADATA_NOT_JPEG_FOR_RASTER
#pragma push_macro("WARNING_NO_BANDS_ON_INDEXED")
#undef WARNING_NO_BANDS_ON_INDEXED
#pragma push_macro("WARNING_NO_GRAY_THUMB_AS_INDEXED")
#undef WARNING_NO_GRAY_THUMB_AS_INDEXED
#pragma push_macro("WARNING_NO_RGB_THUMB_AS_INDEXED")
#undef WARNING_NO_RGB_THUMB_AS_INDEXED
#pragma push_macro("WARNING_STREAM_METADATA_IGNORED")
#undef WARNING_STREAM_METADATA_IGNORED
#pragma push_macro("WARNING_THUMB_CLIPPED")
#undef WARNING_THUMB_CLIPPED

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class AdobeMarkerSegment;
					class JFIFMarkerSegment;
					class JPEGImageWriter$CallBackLock;
					class JPEGMetadata;
					class SOFMarkerSegment;
					class SOFMarkerSegment$ComponentSpec;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace color {
			class ICC_Profile;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorConvertOp;
			class ColorModel;
			class IndexColorModel;
			class Raster;
			class RenderedImage;
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

class JPEGImageWriter : public ::javax::imageio::ImageWriter {
	$class(JPEGImageWriter, 0, ::javax::imageio::ImageWriter)
public:
	JPEGImageWriter();
	void init$(::javax::imageio::spi::ImageWriterSpi* originator);
	virtual void abort() override;
	void abortWrite(int64_t structPointer);
	virtual bool canWriteRasters() override;
	virtual bool canWriteSequence() override;
	void checkAdobe(::com::sun::imageio::plugins::jpeg::AdobeMarkerSegment* adobe, ::javax::imageio::ImageTypeSpecifier* type, bool input);
	void checkJFIF(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* jfif, ::javax::imageio::ImageTypeSpecifier* type, bool input);
	void checkSOFBands(::com::sun::imageio::plugins::jpeg::SOFMarkerSegment* sof, int32_t numBandsUsed);
	virtual void clearAbortRequest() override;
	void clearThreadLock();
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* collectHTablesFromMetadata(::com::sun::imageio::plugins::jpeg::JPEGMetadata* metadata, bool wantDC);
	$Array<::javax::imageio::plugins::jpeg::JPEGQTable>* collectQTablesFromMetadata(::com::sun::imageio::plugins::jpeg::JPEGMetadata* metadata);
	$ints* collectScans(::com::sun::imageio::plugins::jpeg::JPEGMetadata* metadata, ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment* sof);
	virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	::javax::imageio::metadata::IIOMetadata* convertImageMetadataOnThread(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param);
	virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageWriteParam* param) override;
	virtual void dispose() override;
	static void disposeWriter(int64_t structPointer);
	virtual void endWriteSequence() override;
	int32_t getDefaultDestCSType(::javax::imageio::ImageTypeSpecifier* type);
	int32_t getDefaultDestCSType(::java::awt::image::RenderedImage* rimage);
	int32_t getDefaultDestCSType(::java::awt::image::ColorModel* cm);
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultImageMetadata(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultStreamMetadata(::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::ImageWriteParam* getDefaultWriteParam() override;
	int32_t getDestCSType(::javax::imageio::ImageTypeSpecifier* destType);
	virtual int32_t getNumThumbnailsSupported(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata) override;
	virtual $Array<::java::awt::Dimension>* getPreferredThumbnailSizes(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata) override;
	int32_t getSrcCSType(::javax::imageio::ImageTypeSpecifier* type);
	int32_t getSrcCSType(::java::awt::image::RenderedImage* rimage);
	int32_t getSrcCSType(::java::awt::image::ColorModel* cm);
	void grabPixels(int32_t y);
	int64_t initJPEGImageWriter();
	static void initStatic();
	static void initWriterIDs($Class* qTableClass, $Class* huffClass);
	bool isSubsampled($Array<::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec>* specs);
	bool jfifOK(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata);
	virtual void prepareWriteSequence(::javax::imageio::metadata::IIOMetadata* streamMetadata) override;
	void prepareWriteSequenceOnThread(::javax::imageio::metadata::IIOMetadata* streamMetadata);
	virtual void reset() override;
	void resetInternalState();
	void resetWriter(int64_t structPointer);
	void setDest(int64_t structPointer);
	virtual void setOutput(Object$* output) override;
	void setThreadLock();
	virtual void thumbnailComplete();
	virtual void thumbnailProgress(float percentageDone);
	virtual void thumbnailStarted(int32_t thumbnailIndex);
	virtual void warningOccurred(int32_t code);
	virtual void warningWithMessage($String* msg);
	using ::javax::imageio::ImageWriter::write;
	virtual void write(::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) override;
	bool writeImage(int64_t structPointer, $bytes* data, int32_t inCsType, int32_t outCsType, int32_t numBands, $ints* bandSizes, int32_t srcWidth, int32_t destWidth, int32_t destHeight, int32_t stepX, int32_t stepY, $Array<::javax::imageio::plugins::jpeg::JPEGQTable>* qtables, bool writeDQT, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* DCHuffmanTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* ACHuffmanTables, bool writeDHT, bool optimizeHuffman, bool progressive, int32_t numScans, $ints* scans, $ints* componentIds, $ints* HsamplingFactors, $ints* VsamplingFactors, $ints* QtableSelectors, bool haveMetadata, int32_t restartInterval);
	void writeMetadata();
	void writeOnThread(::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param);
	void writeOutputData($bytes* data, int32_t offset, int32_t len);
	void writeTables(int64_t structPointer, $Array<::javax::imageio::plugins::jpeg::JPEGQTable>* qtables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* DCHuffmanTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* ACHuffmanTables);
	virtual void writeToSequence(::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) override;
	bool debug = false;
	int64_t structPointer = 0;
	::javax::imageio::stream::ImageOutputStream* ios = nullptr;
	::java::awt::image::Raster* srcRas = nullptr;
	::java::awt::image::WritableRaster* raster = nullptr;
	bool indexed = false;
	::java::awt::image::IndexColorModel* indexCM = nullptr;
	bool convertTosRGB = false;
	::java::awt::image::WritableRaster* converted = nullptr;
	bool isAlphaPremultiplied = false;
	::java::awt::image::ColorModel* srcCM = nullptr;
	::java::util::List* thumbnails = nullptr;
	::java::awt::color::ICC_Profile* iccProfile = nullptr;
	int32_t sourceXOffset = 0;
	int32_t sourceYOffset = 0;
	int32_t sourceWidth = 0;
	$ints* srcBands = nullptr;
	int32_t sourceHeight = 0;
	int32_t currentImage = 0;
	::java::awt::image::ColorConvertOp* convertOp = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGQTable>* streamQTables = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* streamDCHuffmanTables = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* streamACHuffmanTables = nullptr;
	bool ignoreJFIF = false;
	bool forceJFIF = false;
	bool ignoreAdobe = false;
	int32_t newAdobeTransform = 0;
	bool writeDefaultJFIF = false;
	bool writeAdobe = false;
	::com::sun::imageio::plugins::jpeg::JPEGMetadata* metadata = nullptr;
	bool sequencePrepared = false;
	int32_t numScans = 0;
	$Object* disposerReferent = nullptr;
	::sun::java2d::DisposerRecord* disposerRecord = nullptr;
	static const int32_t WARNING_DEST_IGNORED = 0;
	static const int32_t WARNING_STREAM_METADATA_IGNORED = 1;
	static const int32_t WARNING_DEST_METADATA_COMP_MISMATCH = 2;
	static const int32_t WARNING_DEST_METADATA_JFIF_MISMATCH = 3;
	static const int32_t WARNING_DEST_METADATA_ADOBE_MISMATCH = 4;
	static const int32_t WARNING_IMAGE_METADATA_JFIF_MISMATCH = 5;
	static const int32_t WARNING_IMAGE_METADATA_ADOBE_MISMATCH = 6;
	static const int32_t WARNING_METADATA_NOT_JPEG_FOR_RASTER = 7;
	static const int32_t WARNING_NO_BANDS_ON_INDEXED = 8;
	static const int32_t WARNING_ILLEGAL_THUMBNAIL = 9;
	static const int32_t WARNING_IGNORING_THUMBS = 10;
	static const int32_t WARNING_FORCING_JFIF = 11;
	static const int32_t WARNING_THUMB_CLIPPED = 12;
	static const int32_t WARNING_METADATA_ADJUSTED_FOR_THUMB = 13;
	static const int32_t WARNING_NO_RGB_THUMB_AS_INDEXED = 14;
	static const int32_t WARNING_NO_GRAY_THUMB_AS_INDEXED = 15;
	static const int32_t MAX_WARNING = WARNING_NO_GRAY_THUMB_AS_INDEXED;
	static $Array<::java::awt::Dimension>* preferredThumbSizes;
	$Thread* theThread = nullptr;
	int32_t theLockCount = 0;
	::com::sun::imageio::plugins::jpeg::JPEGImageWriter$CallBackLock* cbLock = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("MAX_WARNING")
#pragma pop_macro("WARNING_DEST_IGNORED")
#pragma pop_macro("WARNING_DEST_METADATA_ADOBE_MISMATCH")
#pragma pop_macro("WARNING_DEST_METADATA_COMP_MISMATCH")
#pragma pop_macro("WARNING_DEST_METADATA_JFIF_MISMATCH")
#pragma pop_macro("WARNING_FORCING_JFIF")
#pragma pop_macro("WARNING_IGNORING_THUMBS")
#pragma pop_macro("WARNING_ILLEGAL_THUMBNAIL")
#pragma pop_macro("WARNING_IMAGE_METADATA_ADOBE_MISMATCH")
#pragma pop_macro("WARNING_IMAGE_METADATA_JFIF_MISMATCH")
#pragma pop_macro("WARNING_METADATA_ADJUSTED_FOR_THUMB")
#pragma pop_macro("WARNING_METADATA_NOT_JPEG_FOR_RASTER")
#pragma pop_macro("WARNING_NO_BANDS_ON_INDEXED")
#pragma pop_macro("WARNING_NO_GRAY_THUMB_AS_INDEXED")
#pragma pop_macro("WARNING_NO_RGB_THUMB_AS_INDEXED")
#pragma pop_macro("WARNING_STREAM_METADATA_IGNORED")
#pragma pop_macro("WARNING_THUMB_CLIPPED")

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageWriter_h_