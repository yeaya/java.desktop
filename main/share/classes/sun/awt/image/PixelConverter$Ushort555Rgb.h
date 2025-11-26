#ifndef _sun_awt_image_PixelConverter$Ushort555Rgb_h_
#define _sun_awt_image_PixelConverter$Ushort555Rgb_h_
//$ class sun.awt.image.PixelConverter$Ushort555Rgb
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

class PixelConverter$Ushort555Rgb : public ::sun::awt::image::PixelConverter {
	$class(PixelConverter$Ushort555Rgb, 0, ::sun::awt::image::PixelConverter)
public:
	PixelConverter$Ushort555Rgb();
	void init$();
	virtual int32_t pixelToRgb(int32_t pixel, ::java::awt::image::ColorModel* cm) override;
	virtual int32_t rgbToPixel(int32_t rgb, ::java::awt::image::ColorModel* cm) override;
	static ::sun::awt::image::PixelConverter* instance;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_PixelConverter$Ushort555Rgb_h_