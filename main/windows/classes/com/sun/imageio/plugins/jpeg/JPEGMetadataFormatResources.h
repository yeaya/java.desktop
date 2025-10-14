#ifndef _com_sun_imageio_plugins_jpeg_JPEGMetadataFormatResources_h_
#define _com_sun_imageio_plugins_jpeg_JPEGMetadataFormatResources_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGMetadataFormatResources
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGMetadataFormatResources : public ::java::util::ListResourceBundle {
	$class(JPEGMetadataFormatResources, 0, ::java::util::ListResourceBundle)
public:
	JPEGMetadataFormatResources();
	void init$();
	static $Array<::java::lang::Object, 2>* commonContents;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGMetadataFormatResources_h_