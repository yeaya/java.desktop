#ifndef _com_sun_imageio_plugins_tiff_TIFFImageWriteParam_h_
#define _com_sun_imageio_plugins_tiff_TIFFImageWriteParam_h_
//$ class com.sun.imageio.plugins.tiff.TIFFImageWriteParam
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
				namespace tiff {

class TIFFImageWriteParam : public ::javax::imageio::ImageWriteParam {
	$class(TIFFImageWriteParam, $NO_CLASS_INIT, ::javax::imageio::ImageWriteParam)
public:
	TIFFImageWriteParam();
	void init$(::java::util::Locale* locale);
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFImageWriteParam_h_