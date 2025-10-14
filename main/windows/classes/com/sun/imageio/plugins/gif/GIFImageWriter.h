#ifndef _com_sun_imageio_plugins_gif_GIFImageWriter_h_
#define _com_sun_imageio_plugins_gif_GIFImageWriter_h_
//$ class com.sun.imageio.plugins.gif.GIFImageWriter
//$ extends javax.imageio.ImageWriter

#include <com/sun/imageio/plugins/gif/GIFWritableImageMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFWritableStreamMetadata.h>
#include <java/lang/Array.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("IMAGE_METADATA_NAME")
#undef IMAGE_METADATA_NAME
#pragma push_macro("STANDARD_METADATA_NAME")
#undef STANDARD_METADATA_NAME
#pragma push_macro("STREAM_METADATA_NAME")
#undef STREAM_METADATA_NAME

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {
					class LZWCompressor;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {
					class GIFImageWriterSpi;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class RenderedImage;
			class SampleModel;
		}
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
		namespace stream {
			class ImageOutputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

class GIFImageWriter : public ::javax::imageio::ImageWriter {
	$class(GIFImageWriter, 0, ::javax::imageio::ImageWriter)
public:
	GIFImageWriter();
	void init$(::com::sun::imageio::plugins::gif::GIFImageWriterSpi* originatingProvider);
	virtual bool canWriteSequence() override;
	static void computeRegions(::java::awt::Rectangle* sourceBounds, ::java::awt::Dimension* destSize, ::javax::imageio::ImageWriteParam* p);
	virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	void convertMetadata($String* metadataFormatName, ::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::metadata::IIOMetadata* outData);
	virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageWriteParam* param) override;
	static $bytes* createColorTable(::java::awt::image::ColorModel* colorModel, ::java::awt::image::SampleModel* sampleModel);
	virtual void endWriteSequence() override;
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultImageMetadata(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultStreamMetadata(::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::ImageWriteParam* getDefaultWriteParam() override;
	static int32_t getGifPaletteSize(int32_t x);
	static int32_t getNumBits(int32_t value);
	bool needToCreateIndex(::java::awt::image::RenderedImage* image);
	virtual void prepareWriteSequence(::javax::imageio::metadata::IIOMetadata* streamMetadata) override;
	virtual void reset() override;
	void resetLocal();
	virtual void setOutput(Object$* output) override;
	using ::javax::imageio::ImageWriter::write;
	virtual void write(::javax::imageio::metadata::IIOMetadata* sm, ::javax::imageio::IIOImage* iioimage, ::javax::imageio::ImageWriteParam* p) override;
	void write(bool writeHeader, bool writeTrailer, ::javax::imageio::metadata::IIOMetadata* sm, ::javax::imageio::IIOImage* iioimage, ::javax::imageio::ImageWriteParam* p);
	void writeApplicationExtension(::com::sun::imageio::plugins::gif::GIFWritableImageMetadata* im);
	void writeBlocks($bytes* data);
	void writeCommentExtension(::com::sun::imageio::plugins::gif::GIFWritableImageMetadata* im);
	void writeGraphicControlExtension(int32_t disposalMethod, bool userInputFlag, bool transparentColorFlag, int32_t delayTime, int32_t transparentColorIndex);
	void writeGraphicControlExtension(::com::sun::imageio::plugins::gif::GIFWritableImageMetadata* im);
	void writeHeader($String* version, int32_t logicalScreenWidth, int32_t logicalScreenHeight, int32_t colorResolution, int32_t pixelAspectRatio, int32_t backgroundColorIndex, bool sortFlag, int32_t bitsPerPixel, $bytes* globalColorTable);
	void writeHeader(::javax::imageio::metadata::IIOMetadata* streamMetadata, int32_t bitsPerPixel);
	void writeImage(::java::awt::image::RenderedImage* image, ::com::sun::imageio::plugins::gif::GIFWritableImageMetadata* imageMetadata, ::javax::imageio::ImageWriteParam* param, $bytes* globalColorTable, ::java::awt::Rectangle* sourceBounds, ::java::awt::Dimension* destSize);
	void writeImageDescriptor(int32_t imageLeftPosition, int32_t imageTopPosition, int32_t imageWidth, int32_t imageHeight, bool interlaceFlag, bool sortFlag, int32_t bitsPerPixel, $bytes* localColorTable);
	void writeImageDescriptor(::com::sun::imageio::plugins::gif::GIFWritableImageMetadata* imageMetadata, int32_t bitsPerPixel);
	void writePlainTextExtension(::com::sun::imageio::plugins::gif::GIFWritableImageMetadata* im);
	void writeRasterData(::java::awt::image::RenderedImage* image, ::java::awt::Rectangle* sourceBounds, ::java::awt::Dimension* destSize, ::javax::imageio::ImageWriteParam* param, bool interlaceFlag);
	void writeRows(::java::awt::image::RenderedImage* image, ::com::sun::imageio::plugins::common::LZWCompressor* compressor, int32_t sx, int32_t sdx, int32_t sy, int32_t sdy, int32_t sw, int32_t dy, int32_t ddy, int32_t dw, int32_t dh, int32_t numRowsWritten, int32_t progressReportRowPeriod);
	void writeRowsOpt($bytes* data, int32_t offset, int32_t lineStride, ::com::sun::imageio::plugins::common::LZWCompressor* compressor, int32_t dy, int32_t ddy, int32_t dw, int32_t dh, int32_t numRowsWritten, int32_t progressReportRowPeriod);
	virtual void writeToSequence(::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) override;
	void writeTrailer();
	static const bool DEBUG = false;
	static $String* STANDARD_METADATA_NAME;
	static $String* STREAM_METADATA_NAME;
	static $String* IMAGE_METADATA_NAME;
	::javax::imageio::stream::ImageOutputStream* stream = nullptr;
	bool isWritingSequence = false;
	bool wroteSequenceHeader = false;
	::com::sun::imageio::plugins::gif::GIFWritableStreamMetadata* theStreamMetadata = nullptr;
	int32_t imageIndex = 0;
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("IMAGE_METADATA_NAME")
#pragma pop_macro("STANDARD_METADATA_NAME")
#pragma pop_macro("STREAM_METADATA_NAME")

#endif // _com_sun_imageio_plugins_gif_GIFImageWriter_h_