#ifndef _com_sun_imageio_plugins_tiff_TIFFAttrInfo_h_
#define _com_sun_imageio_plugins_tiff_TIFFAttrInfo_h_
//$ class com.sun.imageio.plugins.tiff.TIFFAttrInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFAttrInfo : public ::java::lang::Object {
	$class(TIFFAttrInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TIFFAttrInfo();
	void init$();
	int32_t valueType = 0;
	int32_t dataType = 0;
	bool isRequired = false;
	int32_t listMinLength = 0;
	int32_t listMaxLength = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFAttrInfo_h_