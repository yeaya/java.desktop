#ifndef _com_apple_laf_AquaUtils$IconImageFilter_h_
#define _com_apple_laf_AquaUtils$IconImageFilter_h_
//$ class com.apple.laf.AquaUtils$IconImageFilter
//$ extends java.awt.image.RGBImageFilter

#include <java/awt/image/RGBImageFilter.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$IconImageFilter : public ::java::awt::image::RGBImageFilter {
	$class(AquaUtils$IconImageFilter, $NO_CLASS_INIT, ::java::awt::image::RGBImageFilter)
public:
	AquaUtils$IconImageFilter();
	void init$();
	virtual int32_t filterRGB(int32_t x, int32_t y, int32_t rgb) override;
	virtual int32_t getGreyFor(int32_t gray) {return 0;}
	static int32_t grayTransform(int32_t color, int32_t gray);
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$IconImageFilter_h_