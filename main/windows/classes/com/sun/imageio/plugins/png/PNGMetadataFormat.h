#ifndef _com_sun_imageio_plugins_png_PNGMetadataFormat_h_
#define _com_sun_imageio_plugins_png_PNGMetadataFormat_h_
//$ class com.sun.imageio.plugins.png.PNGMetadataFormat
//$ extends javax.imageio.metadata.IIOMetadataFormatImpl

#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>

#pragma push_macro("VALUE_0")
#undef VALUE_0
#pragma push_macro("VALUE_1")
#undef VALUE_1
#pragma push_macro("VALUE_12")
#undef VALUE_12
#pragma push_macro("VALUE_23")
#undef VALUE_23
#pragma push_macro("VALUE_255")
#undef VALUE_255
#pragma push_macro("VALUE_31")
#undef VALUE_31
#pragma push_macro("VALUE_59")
#undef VALUE_59
#pragma push_macro("VALUE_60")
#undef VALUE_60
#pragma push_macro("VALUE_MAX_16")
#undef VALUE_MAX_16
#pragma push_macro("VALUE_MAX_32")
#undef VALUE_MAX_32

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
				namespace png {

class PNGMetadataFormat : public ::javax::imageio::metadata::IIOMetadataFormatImpl {
	$class(PNGMetadataFormat, 0, ::javax::imageio::metadata::IIOMetadataFormatImpl)
public:
	PNGMetadataFormat();
	void init$();
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override;
	static ::javax::imageio::metadata::IIOMetadataFormat* getInstance();
	static ::javax::imageio::metadata::IIOMetadataFormat* instance;
	static $String* VALUE_0;
	static $String* VALUE_1;
	static $String* VALUE_12;
	static $String* VALUE_23;
	static $String* VALUE_31;
	static $String* VALUE_59;
	static $String* VALUE_60;
	static $String* VALUE_255;
	static $String* VALUE_MAX_16;
	static $String* VALUE_MAX_32;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("VALUE_0")
#pragma pop_macro("VALUE_1")
#pragma pop_macro("VALUE_12")
#pragma pop_macro("VALUE_23")
#pragma pop_macro("VALUE_255")
#pragma pop_macro("VALUE_31")
#pragma pop_macro("VALUE_59")
#pragma pop_macro("VALUE_60")
#pragma pop_macro("VALUE_MAX_16")
#pragma pop_macro("VALUE_MAX_32")

#endif // _com_sun_imageio_plugins_png_PNGMetadataFormat_h_