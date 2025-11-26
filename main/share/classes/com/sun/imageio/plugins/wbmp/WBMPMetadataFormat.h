#ifndef _com_sun_imageio_plugins_wbmp_WBMPMetadataFormat_h_
#define _com_sun_imageio_plugins_wbmp_WBMPMetadataFormat_h_
//$ class com.sun.imageio.plugins.wbmp.WBMPMetadataFormat
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
				namespace wbmp {

class WBMPMetadataFormat : public ::javax::imageio::metadata::IIOMetadataFormatImpl {
	$class(WBMPMetadataFormat, 0, ::javax::imageio::metadata::IIOMetadataFormatImpl)
public:
	WBMPMetadataFormat();
	void init$();
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override;
	static ::javax::imageio::metadata::IIOMetadataFormat* getInstance();
	static ::javax::imageio::metadata::IIOMetadataFormat* instance;
};

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_wbmp_WBMPMetadataFormat_h_