#ifndef _javax_imageio_spi_ImageWriterSpi_h_
#define _javax_imageio_spi_ImageWriterSpi_h_
//$ class javax.imageio.spi.ImageWriterSpi
//$ extends javax.imageio.spi.ImageReaderWriterSpi

#include <java/lang/Array.h>
#include <javax/imageio/spi/ImageReaderWriterSpi.h>

#pragma push_macro("STANDARD_OUTPUT_TYPE")
#undef STANDARD_OUTPUT_TYPE

namespace java {
	namespace awt {
		namespace image {
			class RenderedImage;
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
		class ImageWriter;
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $import ImageWriterSpi : public ::javax::imageio::spi::ImageReaderWriterSpi {
	$class(ImageWriterSpi, 0, ::javax::imageio::spi::ImageReaderWriterSpi)
public:
	ImageWriterSpi();
	void init$();
	void init$($String* vendorName, $String* version, $StringArray* names, $StringArray* suffixes, $StringArray* MIMETypes, $String* writerClassName, $ClassArray* outputTypes, $StringArray* readerSpiNames, bool supportsStandardStreamMetadataFormat, $String* nativeStreamMetadataFormatName, $String* nativeStreamMetadataFormatClassName, $StringArray* extraStreamMetadataFormatNames, $StringArray* extraStreamMetadataFormatClassNames, bool supportsStandardImageMetadataFormat, $String* nativeImageMetadataFormatName, $String* nativeImageMetadataFormatClassName, $StringArray* extraImageMetadataFormatNames, $StringArray* extraImageMetadataFormatClassNames);
	virtual bool canEncodeImage(::javax::imageio::ImageTypeSpecifier* type) {return false;}
	virtual bool canEncodeImage(::java::awt::image::RenderedImage* im);
	virtual ::javax::imageio::ImageWriter* createWriterInstance();
	virtual ::javax::imageio::ImageWriter* createWriterInstance(Object$* extension) {return nullptr;}
	virtual $StringArray* getImageReaderSpiNames();
	virtual $ClassArray* getOutputTypes();
	virtual bool isFormatLossless();
	virtual bool isOwnWriter(::javax::imageio::ImageWriter* writer);
	static $ClassArray* STANDARD_OUTPUT_TYPE;
	$ClassArray* outputTypes = nullptr;
	$StringArray* readerSpiNames = nullptr;
	$Class* writerClass = nullptr;
};

		} // spi
	} // imageio
} // javax

#pragma pop_macro("STANDARD_OUTPUT_TYPE")

#endif // _javax_imageio_spi_ImageWriterSpi_h_