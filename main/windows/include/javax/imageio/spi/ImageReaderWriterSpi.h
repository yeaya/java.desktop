#ifndef _javax_imageio_spi_ImageReaderWriterSpi_h_
#define _javax_imageio_spi_ImageReaderWriterSpi_h_
//$ class javax.imageio.spi.ImageReaderWriterSpi
//$ extends javax.imageio.spi.IIOServiceProvider

#include <java/lang/Array.h>
#include <javax/imageio/spi/IIOServiceProvider.h>

namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataFormat;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $import ImageReaderWriterSpi : public ::javax::imageio::spi::IIOServiceProvider {
	$class(ImageReaderWriterSpi, $NO_CLASS_INIT, ::javax::imageio::spi::IIOServiceProvider)
public:
	ImageReaderWriterSpi();
	void init$($String* vendorName, $String* version, $StringArray* names, $StringArray* suffixes, $StringArray* MIMETypes, $String* pluginClassName, bool supportsStandardStreamMetadataFormat, $String* nativeStreamMetadataFormatName, $String* nativeStreamMetadataFormatClassName, $StringArray* extraStreamMetadataFormatNames, $StringArray* extraStreamMetadataFormatClassNames, bool supportsStandardImageMetadataFormat, $String* nativeImageMetadataFormatName, $String* nativeImageMetadataFormatClassName, $StringArray* extraImageMetadataFormatNames, $StringArray* extraImageMetadataFormatClassNames);
	void init$();
	virtual $StringArray* getExtraImageMetadataFormatNames();
	virtual $StringArray* getExtraStreamMetadataFormatNames();
	virtual $StringArray* getFileSuffixes();
	virtual $StringArray* getFormatNames();
	virtual ::javax::imageio::metadata::IIOMetadataFormat* getImageMetadataFormat($String* formatName);
	virtual $StringArray* getMIMETypes();
	::javax::imageio::metadata::IIOMetadataFormat* getMetadataFormat($String* formatName, bool supportsStandard, $String* nativeName, $String* nativeClassName, $StringArray* extraNames, $StringArray* extraClassNames);
	$Class* getMetadataFormatClass($String* formatClassName);
	virtual $String* getNativeImageMetadataFormatName();
	virtual $String* getNativeStreamMetadataFormatName();
	virtual $String* getPluginClassName();
	virtual ::javax::imageio::metadata::IIOMetadataFormat* getStreamMetadataFormat($String* formatName);
	virtual bool isStandardImageMetadataFormatSupported();
	virtual bool isStandardStreamMetadataFormatSupported();
	$Class* lambda$getMetadataFormat$0($String* className);
	$StringArray* names = nullptr;
	$StringArray* suffixes = nullptr;
	$StringArray* MIMETypes = nullptr;
	$String* pluginClassName = nullptr;
	bool supportsStandardStreamMetadataFormat = false;
	$String* nativeStreamMetadataFormatName = nullptr;
	$String* nativeStreamMetadataFormatClassName = nullptr;
	$StringArray* extraStreamMetadataFormatNames = nullptr;
	$StringArray* extraStreamMetadataFormatClassNames = nullptr;
	bool supportsStandardImageMetadataFormat = false;
	$String* nativeImageMetadataFormatName = nullptr;
	$String* nativeImageMetadataFormatClassName = nullptr;
	$StringArray* extraImageMetadataFormatNames = nullptr;
	$StringArray* extraImageMetadataFormatClassNames = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_ImageReaderWriterSpi_h_