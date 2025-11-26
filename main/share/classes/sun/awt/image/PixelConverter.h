#ifndef _sun_awt_image_PixelConverter_h_
#define _sun_awt_image_PixelConverter_h_
//$ class sun.awt.image.PixelConverter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class PixelConverter : public ::java::lang::Object {
	$class(PixelConverter, 0, ::java::lang::Object)
public:
	PixelConverter();
	void init$();
	int32_t getAlphaMask();
	virtual int32_t pixelToRgb(int32_t pixel, ::java::awt::image::ColorModel* cm);
	virtual int32_t rgbToPixel(int32_t rgb, ::java::awt::image::ColorModel* cm);
	static ::sun::awt::image::PixelConverter* instance;
	int32_t alphaMask = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_PixelConverter_h_