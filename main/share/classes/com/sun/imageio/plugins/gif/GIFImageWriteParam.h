#ifndef _com_sun_imageio_plugins_gif_GIFImageWriteParam_h_
#define _com_sun_imageio_plugins_gif_GIFImageWriteParam_h_
//$ class com.sun.imageio.plugins.gif.GIFImageWriteParam
//$ extends javax.imageio.ImageWriteParam

#include <javax/imageio/ImageWriteParam.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

class GIFImageWriteParam : public ::javax::imageio::ImageWriteParam {
	$class(GIFImageWriteParam, $NO_CLASS_INIT, ::javax::imageio::ImageWriteParam)
public:
	GIFImageWriteParam();
	void init$(::java::util::Locale* locale);
	virtual void setCompressionMode(int32_t mode) override;
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_gif_GIFImageWriteParam_h_