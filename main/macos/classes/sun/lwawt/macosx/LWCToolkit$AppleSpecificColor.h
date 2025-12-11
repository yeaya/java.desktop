#ifndef _sun_lwawt_macosx_LWCToolkit$AppleSpecificColor_h_
#define _sun_lwawt_macosx_LWCToolkit$AppleSpecificColor_h_
//$ class sun.lwawt.macosx.LWCToolkit$AppleSpecificColor
//$ extends java.awt.Color

#include <java/awt/Color.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class LWCToolkit$AppleSpecificColor : public ::java::awt::Color {
	$class(LWCToolkit$AppleSpecificColor, $NO_CLASS_INIT, ::java::awt::Color)
public:
	LWCToolkit$AppleSpecificColor();
	void init$(int32_t index);
	virtual int32_t getRGB() override;
	int32_t index = 0;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_LWCToolkit$AppleSpecificColor_h_