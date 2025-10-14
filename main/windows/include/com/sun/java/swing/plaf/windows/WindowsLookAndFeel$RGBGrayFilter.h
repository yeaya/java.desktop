#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$RGBGrayFilter_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$RGBGrayFilter_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter
//$ extends java.awt.image.RGBImageFilter

#include <java/awt/image/RGBImageFilter.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsLookAndFeel$RGBGrayFilter : public ::java::awt::image::RGBImageFilter {
	$class(WindowsLookAndFeel$RGBGrayFilter, $NO_CLASS_INIT, ::java::awt::image::RGBImageFilter)
public:
	WindowsLookAndFeel$RGBGrayFilter();
	void init$();
	virtual int32_t filterRGB(int32_t x, int32_t y, int32_t rgb) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$RGBGrayFilter_h_