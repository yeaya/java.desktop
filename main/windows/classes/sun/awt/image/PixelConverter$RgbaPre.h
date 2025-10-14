#ifndef _sun_awt_image_PixelConverter$RgbaPre_h_
#define _sun_awt_image_PixelConverter$RgbaPre_h_
//$ class sun.awt.image.PixelConverter$RgbaPre
//$ extends sun.awt.image.PixelConverter

#include <sun/awt/image/PixelConverter.h>

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

class PixelConverter$RgbaPre : public ::sun::awt::image::PixelConverter {
	$class(PixelConverter$RgbaPre, 0, ::sun::awt::image::PixelConverter)
public:
	PixelConverter$RgbaPre();
	void init$();
	virtual int32_t pixelToRgb(int32_t pixel, ::java::awt::image::ColorModel* cm) override;
	virtual int32_t rgbToPixel(int32_t rgb, ::java::awt::image::ColorModel* cm) override;
	static ::sun::awt::image::PixelConverter* instance;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_PixelConverter$RgbaPre_h_