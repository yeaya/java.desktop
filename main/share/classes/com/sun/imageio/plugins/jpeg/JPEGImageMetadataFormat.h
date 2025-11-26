#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageMetadataFormat_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageMetadataFormat_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageMetadataFormat
//$ extends com.sun.imageio.plugins.jpeg.JPEGMetadataFormat

#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormat.h>

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
				namespace jpeg {

class JPEGImageMetadataFormat : public ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormat {
	$class(JPEGImageMetadataFormat, 0, ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormat)
public:
	JPEGImageMetadataFormat();
	void init$();
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override;
	static ::javax::imageio::metadata::IIOMetadataFormat* getInstance();
	static ::com::sun::imageio::plugins::jpeg::JPEGImageMetadataFormat* theInstance;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageMetadataFormat_h_