#ifndef _com_sun_imageio_plugins_tiff_TIFFPackBitsUtil_h_
#define _com_sun_imageio_plugins_tiff_TIFFPackBitsUtil_h_
//$ class com.sun.imageio.plugins.tiff.TIFFPackBitsUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFPackBitsUtil : public ::java::lang::Object {
	$class(TIFFPackBitsUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TIFFPackBitsUtil();
	void init$();
	virtual $bytes* decode($bytes* srcData);
	void ensureCapacity(int32_t bytesToAdd);
	$bytes* dstData = nullptr;
	int32_t dstIndex = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFPackBitsUtil_h_