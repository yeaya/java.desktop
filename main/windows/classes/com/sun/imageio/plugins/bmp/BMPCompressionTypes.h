#ifndef _com_sun_imageio_plugins_bmp_BMPCompressionTypes_h_
#define _com_sun_imageio_plugins_bmp_BMPCompressionTypes_h_
//$ class com.sun.imageio.plugins.bmp.BMPCompressionTypes
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPCompressionTypes : public ::java::lang::Object {
	$class(BMPCompressionTypes, 0, ::java::lang::Object)
public:
	BMPCompressionTypes();
	void init$();
	static $StringArray* getCompressionTypes();
	static $String* getName(int32_t type);
	static int32_t getType($String* typeString);
	static $StringArray* compressionTypeNames;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPCompressionTypes_h_