#ifndef _javax_swing_plaf_metal_MetalUtils$OceanToolBarImageFilter_h_
#define _javax_swing_plaf_metal_MetalUtils$OceanToolBarImageFilter_h_
//$ class javax.swing.plaf.metal.MetalUtils$OceanToolBarImageFilter
//$ extends java.awt.image.RGBImageFilter

#include <java/awt/image/RGBImageFilter.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalUtils$OceanToolBarImageFilter : public ::java::awt::image::RGBImageFilter {
	$class(MetalUtils$OceanToolBarImageFilter, $NO_CLASS_INIT, ::java::awt::image::RGBImageFilter)
public:
	MetalUtils$OceanToolBarImageFilter();
	void init$();
	virtual int32_t filterRGB(int32_t x, int32_t y, int32_t rgb) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalUtils$OceanToolBarImageFilter_h_