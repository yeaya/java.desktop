#ifndef _sun_awt_image_PixelConverter$UshortGray_h_
#define _sun_awt_image_PixelConverter$UshortGray_h_
//$ class sun.awt.image.PixelConverter$UshortGray
//$ extends sun.awt.image.PixelConverter$ByteGray

#include <sun/awt/image/PixelConverter$ByteGray.h>

#pragma push_macro("SHORT_MULT")
#undef SHORT_MULT
#pragma push_macro("USHORT_BLU_MULT")
#undef USHORT_BLU_MULT
#pragma push_macro("USHORT_GRN_MULT")
#undef USHORT_GRN_MULT
#pragma push_macro("USHORT_RED_MULT")
#undef USHORT_RED_MULT

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
			class PixelConverter;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class PixelConverter$UshortGray : public ::sun::awt::image::PixelConverter$ByteGray {
	$class(PixelConverter$UshortGray, 0, ::sun::awt::image::PixelConverter$ByteGray)
public:
	PixelConverter$UshortGray();
	void init$();
	virtual int32_t pixelToRgb(int32_t pixel, ::java::awt::image::ColorModel* cm) override;
	virtual int32_t rgbToPixel(int32_t rgb, ::java::awt::image::ColorModel* cm) override;
	static double SHORT_MULT;
	static double USHORT_RED_MULT;
	static double USHORT_GRN_MULT;
	static double USHORT_BLU_MULT;
	static ::sun::awt::image::PixelConverter* instance;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("SHORT_MULT")
#pragma pop_macro("USHORT_BLU_MULT")
#pragma pop_macro("USHORT_GRN_MULT")
#pragma pop_macro("USHORT_RED_MULT")

#endif // _sun_awt_image_PixelConverter$UshortGray_h_