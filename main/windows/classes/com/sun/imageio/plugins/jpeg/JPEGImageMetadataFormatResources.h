#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageMetadataFormatResources_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageMetadataFormatResources_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageMetadataFormatResources
//$ extends com.sun.imageio.plugins.jpeg.JPEGMetadataFormatResources

#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormatResources.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageMetadataFormatResources : public ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormatResources {
	$class(JPEGImageMetadataFormatResources, 0, ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormatResources)
public:
	JPEGImageMetadataFormatResources();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* imageContents;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageMetadataFormatResources_h_