#ifndef _com_sun_imageio_plugins_png_PNGMetadataFormatResources_h_
#define _com_sun_imageio_plugins_png_PNGMetadataFormatResources_h_
//$ class com.sun.imageio.plugins.png.PNGMetadataFormatResources
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

class PNGMetadataFormatResources : public ::java::util::ListResourceBundle {
	$class(PNGMetadataFormatResources, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	PNGMetadataFormatResources();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_png_PNGMetadataFormatResources_h_