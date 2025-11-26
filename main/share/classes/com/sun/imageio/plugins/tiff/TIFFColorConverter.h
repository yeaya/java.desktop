#ifndef _com_sun_imageio_plugins_tiff_TIFFColorConverter_h_
#define _com_sun_imageio_plugins_tiff_TIFFColorConverter_h_
//$ class com.sun.imageio.plugins.tiff.TIFFColorConverter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFColorConverter : public ::java::lang::Object {
	$class(TIFFColorConverter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TIFFColorConverter();
	void init$();
	virtual void fromRGB(float r, float g, float b, $floats* result) {}
	virtual void toRGB(float x0, float x1, float x2, $floats* rgb) {}
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFColorConverter_h_