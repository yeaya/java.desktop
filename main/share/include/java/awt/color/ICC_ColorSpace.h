#ifndef _java_awt_color_ICC_ColorSpace_h_
#define _java_awt_color_ICC_ColorSpace_h_
//$ class java.awt.color.ICC_ColorSpace
//$ extends java.awt.color.ColorSpace

#include <java/awt/color/ColorSpace.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace color {
			class ICC_Profile;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace sun {
	namespace java2d {
		namespace cmm {
			class ColorTransform;
		}
	}
}

namespace java {
	namespace awt {
		namespace color {

class $import ICC_ColorSpace : public ::java::awt::color::ColorSpace {
	$class(ICC_ColorSpace, $NO_CLASS_INIT, ::java::awt::color::ColorSpace)
public:
	ICC_ColorSpace();
	void init$(::java::awt::color::ICC_Profile* profile);
	virtual $floats* fromCIEXYZ($floats* colorvalue) override;
	virtual $floats* fromRGB($floats* rgbvalue) override;
	virtual float getMaxValue(int32_t component) override;
	virtual float getMinValue(int32_t component) override;
	virtual ::java::awt::color::ICC_Profile* getProfile();
	void readObject(::java::io::ObjectInputStream* s);
	void setComponentScaling();
	void setMinMax();
	virtual $floats* toCIEXYZ($floats* colorvalue) override;
	virtual $floats* toRGB($floats* colorvalue) override;
	static const int64_t serialVersionUID = (int64_t)0x2FF5C8D6D34EB6FB;
	::java::awt::color::ICC_Profile* thisProfile = nullptr;
	$floats* minVal = nullptr;
	$floats* maxVal = nullptr;
	$floats* diffMinMax = nullptr;
	$floats* invDiffMinMax = nullptr;
	bool needScaleInit = false;
	$volatile(::sun::java2d::cmm::ColorTransform*) this2srgb = nullptr;
	$volatile(::sun::java2d::cmm::ColorTransform*) srgb2this = nullptr;
	$volatile(::sun::java2d::cmm::ColorTransform*) this2xyz = nullptr;
	$volatile(::sun::java2d::cmm::ColorTransform*) xyz2this = nullptr;
};

		} // color
	} // awt
} // java

#endif // _java_awt_color_ICC_ColorSpace_h_