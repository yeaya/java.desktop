#ifndef _com_sun_imageio_plugins_jpeg_JPEGStreamMetadataFormatResources_h_
#define _com_sun_imageio_plugins_jpeg_JPEGStreamMetadataFormatResources_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGStreamMetadataFormatResources
//$ extends com.sun.imageio.plugins.jpeg.JPEGMetadataFormatResources

#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormatResources.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGStreamMetadataFormatResources : public ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormatResources {
	$class(JPEGStreamMetadataFormatResources, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormatResources)
public:
	JPEGStreamMetadataFormatResources();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGStreamMetadataFormatResources_h_