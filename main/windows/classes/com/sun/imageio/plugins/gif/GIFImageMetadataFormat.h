#ifndef _com_sun_imageio_plugins_gif_GIFImageMetadataFormat_h_
#define _com_sun_imageio_plugins_gif_GIFImageMetadataFormat_h_
//$ class com.sun.imageio.plugins.gif.GIFImageMetadataFormat
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
				namespace gif {

class GIFImageMetadataFormat : public ::javax::imageio::metadata::IIOMetadataFormatImpl {
	$class(GIFImageMetadataFormat, 0, ::javax::imageio::metadata::IIOMetadataFormatImpl)
public:
	GIFImageMetadataFormat();
	void init$();
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override;
	static ::javax::imageio::metadata::IIOMetadataFormat* getInstance();
	static ::javax::imageio::metadata::IIOMetadataFormat* instance;
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_gif_GIFImageMetadataFormat_h_