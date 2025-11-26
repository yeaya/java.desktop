#ifndef _com_sun_imageio_plugins_tiff_TIFFElementInfo_h_
#define _com_sun_imageio_plugins_tiff_TIFFElementInfo_h_
//$ class com.sun.imageio.plugins.tiff.TIFFElementInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Comparable;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFElementInfo : public ::java::lang::Object {
	$class(TIFFElementInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TIFFElementInfo();
	void init$($StringArray* childNames, $StringArray* attributeNames, int32_t childPolicy);
	$StringArray* childNames = nullptr;
	$StringArray* attributeNames = nullptr;
	int32_t childPolicy = 0;
	int32_t minChildren = 0;
	int32_t maxChildren = 0;
	int32_t objectValueType = 0;
	$Class* objectClass = nullptr;
	$Object* objectDefaultValue = nullptr;
	$ObjectArray* objectEnumerations = nullptr;
	::java::lang::Comparable* objectMinValue = nullptr;
	::java::lang::Comparable* objectMaxValue = nullptr;
	int32_t objectArrayMinLength = 0;
	int32_t objectArrayMaxLength = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFElementInfo_h_