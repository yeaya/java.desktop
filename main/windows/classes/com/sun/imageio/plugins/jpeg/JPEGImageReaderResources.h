#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageReaderResources_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageReaderResources_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageReaderResources
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageReaderResources : public ::java::util::ListResourceBundle {
	$class(JPEGImageReaderResources, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	JPEGImageReaderResources();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageReaderResources_h_