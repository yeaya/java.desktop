#ifndef _com_sun_imageio_plugins_png_RowFilter_h_
#define _com_sun_imageio_plugins_png_RowFilter_h_
//$ class com.sun.imageio.plugins.png.RowFilter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

class RowFilter : public ::java::lang::Object {
	$class(RowFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RowFilter();
	void init$();
	static int32_t abs(int32_t x);
	virtual int32_t filterRow(int32_t colorType, $bytes* currRow, $bytes* prevRow, $Array<int8_t, 2>* scratchRows, int32_t bytesPerRow, int32_t bytesPerPixel);
	int32_t paethPredictor(int32_t a, int32_t b, int32_t c);
	static int32_t subFilter($bytes* currRow, $bytes* subFilteredRow, int32_t bytesPerPixel, int32_t bytesPerRow);
	static int32_t upFilter($bytes* currRow, $bytes* prevRow, $bytes* upFilteredRow, int32_t bytesPerPixel, int32_t bytesPerRow);
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_png_RowFilter_h_