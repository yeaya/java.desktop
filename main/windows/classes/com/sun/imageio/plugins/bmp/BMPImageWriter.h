#ifndef _com_sun_imageio_plugins_bmp_BMPImageWriter_h_
#define _com_sun_imageio_plugins_bmp_BMPImageWriter_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageWriter
//$ extends javax.imageio.ImageWriter
//$ implements com.sun.imageio.plugins.bmp.BMPConstants

#include <com/sun/imageio/plugins/bmp/BMPConstants.h>
#include <java/lang/Array.h>
#include <javax/imageio/ImageWriter.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class IndexColorModel;
			class SampleModel;
		}
	}
}
namespace java {
	namespace io {
		class ByteArrayOutputStream;
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
				namespace bmp {

class BMPImageWriter : public ::javax::imageio::ImageWriter, public ::com::sun::imageio::plugins::bmp::BMPConstants {
	$class(BMPImageWriter, $NO_CLASS_INIT, ::javax::imageio::ImageWriter, ::com::sun::imageio::plugins::bmp::BMPConstants)
public:
	BMPImageWriter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::imageio::spi::ImageWriterSpi* originator);
	static void access$000(::com::sun::imageio::plugins::bmp::BMPImageWriter* x0, float x1);
	static void access$100(::com::sun::imageio::plugins::bmp::BMPImageWriter* x0, int32_t x1, $String* x2);
	virtual bool canEncodeImage(int32_t compression, ::java::awt::image::ColorModel* cm, ::java::awt::image::SampleModel* sm);
	virtual bool canEncodeImage(int32_t compression, ::javax::imageio::ImageTypeSpecifier* imgType);
	virtual bool canWriteRasters() override;
	virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* metadata, ::javax::imageio::ImageTypeSpecifier* type, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageWriteParam* param) override;
	void encodeRLE4($bytes* bipixels, int32_t scanlineBytes);
	void encodeRLE8($bytes* bpixels, int32_t scanlineBytes);
	int32_t firstLowBit(int32_t num);
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultImageMetadata(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultStreamMetadata(::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::ImageWriteParam* getDefaultWriteParam() override;
	virtual int32_t getPreferredCompressionType(::java::awt::image::ColorModel* cm, ::java::awt::image::SampleModel* sm);
	virtual int32_t getPreferredCompressionType(::javax::imageio::ImageTypeSpecifier* imageType);
	void incCompImageSize(int32_t value);
	bool isEven(int32_t number);
	virtual void reset() override;
	int32_t roundBpp(int32_t x);
	virtual void setOutput(Object$* output) override;
	using ::javax::imageio::ImageWriter::write;
	virtual $String* toString() override;
	virtual void write(::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) override;
	void writeEmbedded(::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* bmpParam);
	void writeFileHeader(int32_t fileSize, int32_t offset);
	void writeInfoHeader(int32_t headerSize, int32_t bitsPerPixel);
	virtual void writeMaskToPalette(int32_t mask, int32_t i, $bytes* r, $bytes* g, $bytes* b, $bytes* a);
	void writePixels(int32_t l, int32_t scanlineBytes, int32_t bitsPerPixel, $ints* pixels, int32_t padding, int32_t numBands, ::java::awt::image::IndexColorModel* icm);
	void writeSize(int32_t dword, int32_t offset);
	::javax::imageio::stream::ImageOutputStream* stream = nullptr;
	::java::io::ByteArrayOutputStream* embedded_stream = nullptr;
	int32_t version = 0;
	int32_t compressionType = 0;
	bool isTopDown = false;
	int32_t w = 0;
	int32_t h = 0;
	int32_t compImageSize = 0;
	$ints* bitMasks = nullptr;
	$ints* bitPos = nullptr;
	$bytes* bpixels = nullptr;
	$shorts* spixels = nullptr;
	$ints* ipixels = nullptr;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageWriter_h_