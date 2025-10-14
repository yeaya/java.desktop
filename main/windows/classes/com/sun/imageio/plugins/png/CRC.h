#ifndef _com_sun_imageio_plugins_png_CRC_h_
#define _com_sun_imageio_plugins_png_CRC_h_
//$ class com.sun.imageio.plugins.png.CRC
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CRC")
#undef CRC

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

class CRC : public ::java::lang::Object {
	$class(CRC, 0, ::java::lang::Object)
public:
	CRC();
	void init$();
	int32_t getValue();
	void reset();
	void update($bytes* data, int32_t off, int32_t len);
	void update(int32_t data);
	static $ints* crcTable;
	int32_t crc = 0;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("CRC")

#endif // _com_sun_imageio_plugins_png_CRC_h_