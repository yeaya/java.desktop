#ifndef _com_sun_imageio_plugins_jpeg_JPEGMetadataFormat_h_
#define _com_sun_imageio_plugins_jpeg_JPEGMetadataFormat_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGMetadataFormat
//$ extends javax.imageio.metadata.IIOMetadataFormatImpl

#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>

#pragma push_macro("MAX_JPEG_DATA_SIZE")
#undef MAX_JPEG_DATA_SIZE

namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGMetadataFormat : public ::javax::imageio::metadata::IIOMetadataFormatImpl {
	$class(JPEGMetadataFormat, $NO_CLASS_INIT, ::javax::imageio::metadata::IIOMetadataFormatImpl)
public:
	JPEGMetadataFormat();
	void init$($String* formatName, int32_t childPolicy);
	virtual void addStreamElements($String* parentName);
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override;
	virtual bool isInSubtree($String* elementName, $String* subtreeName);
	static const int32_t MAX_JPEG_DATA_SIZE = 0x0000FFFD;
	$String* resourceBaseName = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("MAX_JPEG_DATA_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_JPEGMetadataFormat_h_