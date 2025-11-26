#ifndef _sun_awt_image_PixelConverter$ByteGray_h_
#define _sun_awt_image_PixelConverter$ByteGray_h_
//$ class sun.awt.image.PixelConverter$ByteGray
//$ extends sun.awt.image.PixelConverter

#include <sun/awt/image/PixelConverter.h>

#pragma push_macro("BLU_MULT")
#undef BLU_MULT
#pragma push_macro("GRN_MULT")
#undef GRN_MULT
#pragma push_macro("RED_MULT")
#undef RED_MULT

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

class PixelConverter$ByteGray : public ::sun::awt::image::PixelConverter {
	$class(PixelConverter$ByteGray, 0, ::sun::awt::image::PixelConverter)
public:
	PixelConverter$ByteGray();
	void init$();
	virtual int32_t pixelToRgb(int32_t pixel, ::java::awt::image::ColorModel* cm) override;
	virtual int32_t rgbToPixel(int32_t rgb, ::java::awt::image::ColorModel* cm) override;
	static double RED_MULT;
	static double GRN_MULT;
	static double BLU_MULT;
	static ::sun::awt::image::PixelConverter* instance;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("BLU_MULT")
#pragma pop_macro("GRN_MULT")
#pragma pop_macro("RED_MULT")

#endif // _sun_awt_image_PixelConverter$ByteGray_h_