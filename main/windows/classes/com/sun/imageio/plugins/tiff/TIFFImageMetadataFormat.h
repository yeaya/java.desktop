#ifndef _com_sun_imageio_plugins_tiff_TIFFImageMetadataFormat_h_
#define _com_sun_imageio_plugins_tiff_TIFFImageMetadataFormat_h_
//$ class com.sun.imageio.plugins.tiff.TIFFImageMetadataFormat
//$ extends com.sun.imageio.plugins.tiff.TIFFMetadataFormat

#include <com/sun/imageio/plugins/tiff/TIFFMetadataFormat.h>

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
				namespace tiff {

class TIFFImageMetadataFormat : public ::com::sun::imageio::plugins::tiff::TIFFMetadataFormat {
	$class(TIFFImageMetadataFormat, 0, ::com::sun::imageio::plugins::tiff::TIFFMetadataFormat)
public:
	TIFFImageMetadataFormat();
	void init$();
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override;
	static ::javax::imageio::metadata::IIOMetadataFormat* getInstance();
	static ::com::sun::imageio::plugins::tiff::TIFFImageMetadataFormat* theInstance;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFImageMetadataFormat_h_