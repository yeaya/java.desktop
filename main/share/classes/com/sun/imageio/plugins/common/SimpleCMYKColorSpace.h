#ifndef _com_sun_imageio_plugins_common_SimpleCMYKColorSpace_h_
#define _com_sun_imageio_plugins_common_SimpleCMYKColorSpace_h_
//$ class com.sun.imageio.plugins.common.SimpleCMYKColorSpace
//$ extends java.awt.color.ColorSpace

#include <java/awt/color/ColorSpace.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class SimpleCMYKColorSpace : public ::java::awt::color::ColorSpace {
	$class(SimpleCMYKColorSpace, 0, ::java::awt::color::ColorSpace)
public:
	SimpleCMYKColorSpace();
	void init$();
	virtual bool equals(Object$* o) override;
	virtual $floats* fromCIEXYZ($floats* xyzvalue) override;
	virtual $floats* fromRGB($floats* rgbvalue) override;
	static ::java::awt::color::ColorSpace* getInstance();
	virtual int32_t hashCode() override;
	virtual $floats* toCIEXYZ($floats* colorvalue) override;
	virtual $floats* toRGB($floats* colorvalue) override;
	static const int64_t serialVersionUID = (int64_t)0x4AC2E2AD654125B8;
	static ::java::awt::color::ColorSpace* theInstance;
	::java::awt::color::ColorSpace* csRGB = nullptr;
	static double power1;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_SimpleCMYKColorSpace_h_