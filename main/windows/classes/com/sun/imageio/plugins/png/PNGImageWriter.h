#ifndef _com_sun_imageio_plugins_png_PNGImageWriter_h_
#define _com_sun_imageio_plugins_png_PNGImageWriter_h_
//$ class com.sun.imageio.plugins.png.PNGImageWriter
//$ extends javax.imageio.ImageWriter

#include <java/lang/Array.h>
#include <javax/imageio/ImageWriter.h>

#pragma push_macro("DEFAULT_COMPRESSION_LEVEL")
#undef DEFAULT_COMPRESSION_LEVEL

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {
					class PNGMetadata;
					class RowFilter;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class RenderedImage;
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
				namespace png {

class PNGImageWriter : public ::javax::imageio::ImageWriter {
	$class(PNGImageWriter, $NO_CLASS_INIT, ::javax::imageio::ImageWriter)
public:
	PNGImageWriter();
	using ::javax::imageio::ImageWriter::equals;
	void init$(::javax::imageio::spi::ImageWriterSpi* originatingProvider);
	static int32_t chunkType($String* typeString);
	virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageWriteParam* param) override;
	$bytes* deflate($bytes* b);
	void encodePass(::javax::imageio::stream::ImageOutputStream* os, ::java::awt::image::RenderedImage* image, int32_t xOffset, int32_t yOffset, int32_t xSkip, int32_t ySkip);
	bool equals($ints* s0, $ints* s1);
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultImageMetadata(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultStreamMetadata(::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::ImageWriteParam* getDefaultWriteParam() override;
	void initializeScaleTables($ints* sampleSize);
	virtual void setOutput(Object$* output) override;
	using ::javax::imageio::ImageWriter::write;
	virtual void write(::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) override;
	void writeIEND();
	void writeUnknownChunks();
	void write_IDAT(::java::awt::image::RenderedImage* image, int32_t deflaterLevel);
	void write_IHDR();
	void write_PLTE();
	void write_bKGD();
	void write_cHRM();
	void write_gAMA();
	void write_hIST();
	void write_iCCP();
	void write_iTXt();
	void write_magic();
	void write_pHYs();
	void write_sBIT();
	void write_sPLT();
	void write_sRGB();
	void write_tEXt();
	void write_tIME();
	void write_tRNS();
	void write_zTXt();
	static const int32_t DEFAULT_COMPRESSION_LEVEL = 4;
	::javax::imageio::stream::ImageOutputStream* stream = nullptr;
	::com::sun::imageio::plugins::png::PNGMetadata* metadata = nullptr;
	int32_t sourceXOffset = 0;
	int32_t sourceYOffset = 0;
	int32_t sourceWidth = 0;
	int32_t sourceHeight = 0;
	$ints* sourceBands = nullptr;
	int32_t periodX = 0;
	int32_t periodY = 0;
	int32_t numBands = 0;
	int32_t bpp = 0;
	::com::sun::imageio::plugins::png::RowFilter* rowFilter = nullptr;
	$bytes* prevRow = nullptr;
	$bytes* currRow = nullptr;
	$Array<int8_t, 2>* filteredRows = nullptr;
	$ints* sampleSize = nullptr;
	int32_t scalingBitDepth = 0;
	$Array<int8_t, 2>* scale = nullptr;
	$bytes* scale0 = nullptr;
	$Array<int8_t, 2>* scaleh = nullptr;
	$Array<int8_t, 2>* scalel = nullptr;
	int32_t totalPixels = 0;
	int32_t pixelsDone = 0;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("DEFAULT_COMPRESSION_LEVEL")

#endif // _com_sun_imageio_plugins_png_PNGImageWriter_h_