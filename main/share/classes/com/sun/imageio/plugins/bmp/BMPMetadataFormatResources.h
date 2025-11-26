#ifndef _com_sun_imageio_plugins_bmp_BMPMetadataFormatResources_h_
#define _com_sun_imageio_plugins_bmp_BMPMetadataFormatResources_h_
//$ class com.sun.imageio.plugins.bmp.BMPMetadataFormatResources
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPMetadataFormatResources : public ::java::util::ListResourceBundle {
	$class(BMPMetadataFormatResources, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	BMPMetadataFormatResources();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPMetadataFormatResources_h_