#ifndef _com_sun_imageio_plugins_common_StandardMetadataFormat_h_
#define _com_sun_imageio_plugins_common_StandardMetadataFormat_h_
//$ class com.sun.imageio.plugins.common.StandardMetadataFormat
//$ extends javax.imageio.metadata.IIOMetadataFormatImpl

#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>

namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class StandardMetadataFormat : public ::javax::imageio::metadata::IIOMetadataFormatImpl {
	$class(StandardMetadataFormat, $NO_CLASS_INIT, ::javax::imageio::metadata::IIOMetadataFormatImpl)
public:
	StandardMetadataFormat();
	void init$();
	void addSingleAttributeElement($String* elementName, $String* parentName, int32_t dataType);
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_StandardMetadataFormat_h_