#ifndef _com_sun_imageio_plugins_gif_GIFImageMetadataFormatResources_h_
#define _com_sun_imageio_plugins_gif_GIFImageMetadataFormatResources_h_
//$ class com.sun.imageio.plugins.gif.GIFImageMetadataFormatResources
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

class GIFImageMetadataFormatResources : public ::java::util::ListResourceBundle {
	$class(GIFImageMetadataFormatResources, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	GIFImageMetadataFormatResources();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_gif_GIFImageMetadataFormatResources_h_