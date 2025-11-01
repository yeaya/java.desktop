#ifndef _com_sun_imageio_plugins_bmp_BMPImageReader_h_
#define _com_sun_imageio_plugins_bmp_BMPImageReader_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageReader
//$ extends javax.imageio.ImageReader
//$ implements com.sun.imageio.plugins.bmp.BMPConstants

#include <com/sun/imageio/plugins/bmp/BMPConstants.h>
#include <java/lang/Array.h>
#include <javax/imageio/ImageReader.h>

#pragma push_macro("VERSION_2_1_BIT")
#undef VERSION_2_1_BIT
#pragma push_macro("VERSION_2_24_BIT")
#undef VERSION_2_24_BIT
#pragma push_macro("VERSION_2_4_BIT")
#undef VERSION_2_4_BIT
#pragma push_macro("VERSION_2_8_BIT")
#undef VERSION_2_8_BIT
#pragma push_macro("VERSION_3_1_BIT")
#undef VERSION_3_1_BIT
#pragma push_macro("VERSION_3_24_BIT")
#undef VERSION_3_24_BIT
#pragma push_macro("VERSION_3_4_BIT")
#undef VERSION_3_4_BIT
#pragma push_macro("VERSION_3_8_BIT")
#undef VERSION_3_8_BIT
#pragma push_macro("VERSION_3_EXT_16_BIT")
#undef VERSION_3_EXT_16_BIT
#pragma push_macro("VERSION_3_EXT_1_BIT")
#undef VERSION_3_EXT_1_BIT
#pragma push_macro("VERSION_3_EXT_24_BIT")
#undef VERSION_3_EXT_24_BIT
#pragma push_macro("VERSION_3_EXT_32_BIT")
#undef VERSION_3_EXT_32_BIT
#pragma push_macro("VERSION_3_EXT_4_BIT")
#undef VERSION_3_EXT_4_BIT
#pragma push_macro("VERSION_3_EXT_8_BIT")
#undef VERSION_3_EXT_8_BIT
#pragma push_macro("VERSION_3_EXT_EMBEDDED")
#undef VERSION_3_EXT_EMBEDDED
#pragma push_macro("VERSION_3_NT_16_BIT")
#undef VERSION_3_NT_16_BIT
#pragma push_macro("VERSION_3_NT_32_BIT")
#undef VERSION_3_NT_32_BIT
#pragma push_macro("VERSION_3_XP_EMBEDDED")
#undef VERSION_3_XP_EMBEDDED
#pragma push_macro("VERSION_4_16_BIT")
#undef VERSION_4_16_BIT
#pragma push_macro("VERSION_4_1_BIT")
#undef VERSION_4_1_BIT
#pragma push_macro("VERSION_4_24_BIT")
#undef VERSION_4_24_BIT
#pragma push_macro("VERSION_4_32_BIT")
#undef VERSION_4_32_BIT
#pragma push_macro("VERSION_4_4_BIT")
#undef VERSION_4_4_BIT
#pragma push_macro("VERSION_4_8_BIT")
#undef VERSION_4_8_BIT
#pragma push_macro("VERSION_4_XP_EMBEDDED")
#undef VERSION_4_XP_EMBEDDED
#pragma push_macro("VERSION_5_XP_EMBEDDED")
#undef VERSION_5_XP_EMBEDDED

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {
					class BMPMetadata;
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
			class BufferedImage;
			class ColorModel;
			class Raster;
			class SampleModel;
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
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
				namespace bmp {

class BMPImageReader : public ::javax::imageio::ImageReader, public ::com::sun::imageio::plugins::bmp::BMPConstants {
	$class(BMPImageReader, 0, ::javax::imageio::ImageReader, ::com::sun::imageio::plugins::bmp::BMPConstants)
public:
	BMPImageReader();
	using ::javax::imageio::ImageReader::getStreamMetadata;
	using ::javax::imageio::ImageReader::getImageMetadata;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::imageio::spi::ImageReaderSpi* originator);
	static void access$000(::com::sun::imageio::plugins::bmp::BMPImageReader* x0, float x1);
	static void access$100(::com::sun::imageio::plugins::bmp::BMPImageReader* x0, ::java::awt::image::BufferedImage* x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, int32_t x6, int32_t x7, $ints* x8);
	static void access$200(::com::sun::imageio::plugins::bmp::BMPImageReader* x0, ::java::awt::image::BufferedImage* x1);
	static void access$300(::com::sun::imageio::plugins::bmp::BMPImageReader* x0, ::java::awt::image::BufferedImage* x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, int32_t x6, int32_t x7, int32_t x8, $ints* x9);
	static void access$400(::com::sun::imageio::plugins::bmp::BMPImageReader* x0, $String* x1);
	virtual bool canReadRaster() override;
	void checkIndex(int32_t imageIndex);
	bool copyRLE4ScanlineToDst(int32_t lineNo, $bytes* val, $bytes* bdata);
	bool copyRLE8ScanlineToDst(int32_t lineNo, $bytes* val, $bytes* bdata);
	void decodeRLE4(int32_t imSize, int32_t padding, $bytes* values, $bytes* bdata);
	void decodeRLE8(int32_t imSize, int32_t padding, $bytes* values, $bytes* bdata);
	virtual ::javax::imageio::ImageReadParam* getDefaultReadParam() override;
	virtual int32_t getHeight(int32_t imageIndex) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex) override;
	virtual ::java::util::Iterator* getImageTypes(int32_t imageIndex) override;
	virtual int32_t getNumImages(bool allowSearch) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata() override;
	virtual int32_t getWidth(int32_t imageIndex) override;
	static bool isLinkedProfileAllowed();
	virtual bool isRandomAccessEasy(int32_t imageIndex) override;
	static bool isUncOrDevicePath($bytes* p);
	using ::javax::imageio::ImageReader::read;
	virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	void read16Bit($shorts* sdata);
	void read1Bit($bytes* bdata);
	void read24Bit($bytes* bdata);
	void read32Bit($ints* idata);
	void read4Bit($bytes* bdata);
	void read8Bit($bytes* bdata);
	::java::awt::image::BufferedImage* readEmbedded(int32_t type, ::java::awt::image::BufferedImage* bi, ::javax::imageio::ImageReadParam* bmpParam);
	virtual void readHeader();
	void readRLE4($bytes* bdata);
	void readRLE8($bytes* bdata);
	virtual ::java::awt::image::Raster* readRaster(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) override;
	virtual void reset() override;
	void resetHeaderInfo();
	using ::javax::imageio::ImageReader::setInput;
	virtual void setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) override;
	virtual $String* toString() override;
	static const int32_t VERSION_2_1_BIT = 0;
	static const int32_t VERSION_2_4_BIT = 1;
	static const int32_t VERSION_2_8_BIT = 2;
	static const int32_t VERSION_2_24_BIT = 3;
	static const int32_t VERSION_3_1_BIT = 4;
	static const int32_t VERSION_3_4_BIT = 5;
	static const int32_t VERSION_3_8_BIT = 6;
	static const int32_t VERSION_3_24_BIT = 7;
	static const int32_t VERSION_3_NT_16_BIT = 8;
	static const int32_t VERSION_3_NT_32_BIT = 9;
	static const int32_t VERSION_3_EXT_1_BIT = 10;
	static const int32_t VERSION_3_EXT_4_BIT = 11;
	static const int32_t VERSION_3_EXT_8_BIT = 12;
	static const int32_t VERSION_3_EXT_16_BIT = 13;
	static const int32_t VERSION_3_EXT_24_BIT = 14;
	static const int32_t VERSION_3_EXT_32_BIT = 15;
	static const int32_t VERSION_4_1_BIT = 16;
	static const int32_t VERSION_4_4_BIT = 17;
	static const int32_t VERSION_4_8_BIT = 18;
	static const int32_t VERSION_4_16_BIT = 19;
	static const int32_t VERSION_4_24_BIT = 20;
	static const int32_t VERSION_4_32_BIT = 21;
	static const int32_t VERSION_3_XP_EMBEDDED = 22;
	static const int32_t VERSION_3_EXT_EMBEDDED = 23;
	static const int32_t VERSION_4_XP_EMBEDDED = 24;
	static const int32_t VERSION_5_XP_EMBEDDED = 25;
	int64_t bitmapFileSize = 0;
	int64_t bitmapOffset = 0;
	int64_t bitmapStart = 0;
	int64_t compression = 0;
	int64_t imageSize = 0;
	$bytes* palette = nullptr;
	int32_t imageType = 0;
	int32_t numBands = 0;
	bool isBottomUp = false;
	int32_t bitsPerPixel = 0;
	int32_t redMask = 0;
	int32_t greenMask = 0;
	int32_t blueMask = 0;
	int32_t alphaMask = 0;
	::java::awt::image::SampleModel* sampleModel = nullptr;
	::java::awt::image::SampleModel* originalSampleModel = nullptr;
	::java::awt::image::ColorModel* colorModel = nullptr;
	::java::awt::image::ColorModel* originalColorModel = nullptr;
	::javax::imageio::stream::ImageInputStream* iis = nullptr;
	bool gotHeader = false;
	int32_t width = 0;
	int32_t height = 0;
	::java::awt::Rectangle* destinationRegion = nullptr;
	::java::awt::Rectangle* sourceRegion = nullptr;
	::com::sun::imageio::plugins::bmp::BMPMetadata* metadata = nullptr;
	::java::awt::image::BufferedImage* bi = nullptr;
	bool noTransform = false;
	bool seleBand = false;
	int32_t scaleX = 0;
	int32_t scaleY = 0;
	$ints* sourceBands = nullptr;
	$ints* destBands = nullptr;
	static ::java::lang::Boolean* isLinkedProfileDisabled;
	static ::java::lang::Boolean* isWindowsPlatform;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("VERSION_2_1_BIT")
#pragma pop_macro("VERSION_2_24_BIT")
#pragma pop_macro("VERSION_2_4_BIT")
#pragma pop_macro("VERSION_2_8_BIT")
#pragma pop_macro("VERSION_3_1_BIT")
#pragma pop_macro("VERSION_3_24_BIT")
#pragma pop_macro("VERSION_3_4_BIT")
#pragma pop_macro("VERSION_3_8_BIT")
#pragma pop_macro("VERSION_3_EXT_16_BIT")
#pragma pop_macro("VERSION_3_EXT_1_BIT")
#pragma pop_macro("VERSION_3_EXT_24_BIT")
#pragma pop_macro("VERSION_3_EXT_32_BIT")
#pragma pop_macro("VERSION_3_EXT_4_BIT")
#pragma pop_macro("VERSION_3_EXT_8_BIT")
#pragma pop_macro("VERSION_3_EXT_EMBEDDED")
#pragma pop_macro("VERSION_3_NT_16_BIT")
#pragma pop_macro("VERSION_3_NT_32_BIT")
#pragma pop_macro("VERSION_3_XP_EMBEDDED")
#pragma pop_macro("VERSION_4_16_BIT")
#pragma pop_macro("VERSION_4_1_BIT")
#pragma pop_macro("VERSION_4_24_BIT")
#pragma pop_macro("VERSION_4_32_BIT")
#pragma pop_macro("VERSION_4_4_BIT")
#pragma pop_macro("VERSION_4_8_BIT")
#pragma pop_macro("VERSION_4_XP_EMBEDDED")
#pragma pop_macro("VERSION_5_XP_EMBEDDED")

#endif // _com_sun_imageio_plugins_bmp_BMPImageReader_h_