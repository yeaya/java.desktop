#ifndef _com_sun_imageio_plugins_common_BogusColorSpace_h_
#define _com_sun_imageio_plugins_common_BogusColorSpace_h_
//$ class com.sun.imageio.plugins.common.BogusColorSpace
//$ extends java.awt.color.ColorSpace

#include <java/awt/color/ColorSpace.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class BogusColorSpace : public ::java::awt::color::ColorSpace {
	$class(BogusColorSpace, $NO_CLASS_INIT, ::java::awt::color::ColorSpace)
public:
	BogusColorSpace();
	using ::java::awt::color::ColorSpace::getType;
	void init$(int32_t numComponents);
	virtual $floats* fromCIEXYZ($floats* xyzvalue) override;
	virtual $floats* fromRGB($floats* rgbvalue) override;
	static int32_t getType(int32_t numComponents);
	virtual $floats* toCIEXYZ($floats* colorvalue) override;
	virtual $floats* toRGB($floats* colorvalue) override;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_BogusColorSpace_h_