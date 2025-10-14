#ifndef _javax_swing_plaf_metal_MetalUtils$OceanDisabledButtonImageFilter_h_
#define _javax_swing_plaf_metal_MetalUtils$OceanDisabledButtonImageFilter_h_
//$ class javax.swing.plaf.metal.MetalUtils$OceanDisabledButtonImageFilter
//$ extends java.awt.image.RGBImageFilter

#include <java/awt/image/RGBImageFilter.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalUtils$OceanDisabledButtonImageFilter : public ::java::awt::image::RGBImageFilter {
	$class(MetalUtils$OceanDisabledButtonImageFilter, $NO_CLASS_INIT, ::java::awt::image::RGBImageFilter)
public:
	MetalUtils$OceanDisabledButtonImageFilter();
	void init$(int32_t min, int32_t max);
	virtual int32_t filterRGB(int32_t x, int32_t y, int32_t rgb) override;
	float min = 0.0;
	float factor = 0.0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalUtils$OceanDisabledButtonImageFilter_h_