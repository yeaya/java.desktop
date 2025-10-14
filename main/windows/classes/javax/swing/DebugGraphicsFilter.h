#ifndef _javax_swing_DebugGraphicsFilter_h_
#define _javax_swing_DebugGraphicsFilter_h_
//$ class javax.swing.DebugGraphicsFilter
//$ extends java.awt.image.RGBImageFilter

#include <java/awt/image/RGBImageFilter.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace javax {
	namespace swing {

class DebugGraphicsFilter : public ::java::awt::image::RGBImageFilter {
	$class(DebugGraphicsFilter, $NO_CLASS_INIT, ::java::awt::image::RGBImageFilter)
public:
	DebugGraphicsFilter();
	void init$(::java::awt::Color* c);
	virtual int32_t filterRGB(int32_t x, int32_t y, int32_t rgb) override;
	::java::awt::Color* color = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DebugGraphicsFilter_h_