#ifndef _javax_imageio_plugins_bmp_BMPImageWriteParam_h_
#define _javax_imageio_plugins_bmp_BMPImageWriteParam_h_
//$ class javax.imageio.plugins.bmp.BMPImageWriteParam
//$ extends javax.imageio.ImageWriteParam

#include <javax/imageio/ImageWriteParam.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace bmp {

class $export BMPImageWriteParam : public ::javax::imageio::ImageWriteParam {
	$class(BMPImageWriteParam, $NO_CLASS_INIT, ::javax::imageio::ImageWriteParam)
public:
	BMPImageWriteParam();
	void init$(::java::util::Locale* locale);
	void init$();
	virtual bool isTopDown();
	virtual void setTopDown(bool topDown);
	bool topDown = false;
};

			} // bmp
		} // plugins
	} // imageio
} // javax

#endif // _javax_imageio_plugins_bmp_BMPImageWriteParam_h_