#ifndef _javax_imageio_spi_ImageReaderSpi_h_
#define _javax_imageio_spi_ImageReaderSpi_h_
//$ class javax.imageio.spi.ImageReaderSpi
//$ extends javax.imageio.spi.ImageReaderWriterSpi

#include <java/lang/Array.h>
#include <javax/imageio/spi/ImageReaderWriterSpi.h>

#pragma push_macro("STANDARD_INPUT_TYPE")
#undef STANDARD_INPUT_TYPE

namespace javax {
	namespace imageio {
		class ImageReader;
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $import ImageReaderSpi : public ::javax::imageio::spi::ImageReaderWriterSpi {
	$class(ImageReaderSpi, 0, ::javax::imageio::spi::ImageReaderWriterSpi)
public:
	ImageReaderSpi();
	void init$();
	void init$($String* vendorName, $String* version, $StringArray* names, $StringArray* suffixes, $StringArray* MIMETypes, $String* readerClassName, $ClassArray* inputTypes, $StringArray* writerSpiNames, bool supportsStandardStreamMetadataFormat, $String* nativeStreamMetadataFormatName, $String* nativeStreamMetadataFormatClassName, $StringArray* extraStreamMetadataFormatNames, $StringArray* extraStreamMetadataFormatClassNames, bool supportsStandardImageMetadataFormat, $String* nativeImageMetadataFormatName, $String* nativeImageMetadataFormatClassName, $StringArray* extraImageMetadataFormatNames, $StringArray* extraImageMetadataFormatClassNames);
	virtual bool canDecodeInput(Object$* source) {return false;}
	virtual ::javax::imageio::ImageReader* createReaderInstance();
	virtual ::javax::imageio::ImageReader* createReaderInstance(Object$* extension) {return nullptr;}
	virtual $StringArray* getImageWriterSpiNames();
	virtual $ClassArray* getInputTypes();
	virtual bool isOwnReader(::javax::imageio::ImageReader* reader);
	static $ClassArray* STANDARD_INPUT_TYPE;
	$ClassArray* inputTypes = nullptr;
	$StringArray* writerSpiNames = nullptr;
	$Class* readerClass = nullptr;
};

		} // spi
	} // imageio
} // javax

#pragma pop_macro("STANDARD_INPUT_TYPE")

#endif // _javax_imageio_spi_ImageReaderSpi_h_