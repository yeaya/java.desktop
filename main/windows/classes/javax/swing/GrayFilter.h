#ifndef _javax_swing_GrayFilter_h_
#define _javax_swing_GrayFilter_h_
//$ class javax.swing.GrayFilter
//$ extends java.awt.image.RGBImageFilter

#include <java/awt/image/RGBImageFilter.h>

namespace java {
	namespace awt {
		class Image;
	}
}

namespace javax {
	namespace swing {

class $export GrayFilter : public ::java::awt::image::RGBImageFilter {
	$class(GrayFilter, $NO_CLASS_INIT, ::java::awt::image::RGBImageFilter)
public:
	GrayFilter();
	void init$(bool b, int32_t p);
	static ::java::awt::Image* createDisabledImage(::java::awt::Image* i);
	static ::java::awt::Image* createDisabledImageImpl(::java::awt::Image* i);
	virtual int32_t filterRGB(int32_t x, int32_t y, int32_t rgb) override;
	static ::java::awt::Image* lambda$createDisabledImage$0(::java::awt::Image* img);
	bool brighter = false;
	int32_t percent = 0;
};

	} // swing
} // javax

#endif // _javax_swing_GrayFilter_h_