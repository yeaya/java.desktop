#ifndef _com_sun_imageio_plugins_bmp_BMPMetadataFormat_h_
#define _com_sun_imageio_plugins_bmp_BMPMetadataFormat_h_
//$ class com.sun.imageio.plugins.bmp.BMPMetadataFormat
//$ extends javax.imageio.metadata.IIOMetadataFormatImpl

#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>

namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPMetadataFormat : public ::javax::imageio::metadata::IIOMetadataFormatImpl {
	$class(BMPMetadataFormat, 0, ::javax::imageio::metadata::IIOMetadataFormatImpl)
public:
	BMPMetadataFormat();
	void init$();
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override;
	static ::javax::imageio::metadata::IIOMetadataFormat* getInstance();
	static ::javax::imageio::metadata::IIOMetadataFormat* instance;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPMetadataFormat_h_