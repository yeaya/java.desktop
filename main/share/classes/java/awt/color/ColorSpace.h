#ifndef _java_awt_color_ColorSpace_h_
#define _java_awt_color_ColorSpace_h_
//$ class java.awt.color.ColorSpace
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CS_CIEXYZ")
#undef CS_CIEXYZ
#pragma push_macro("CS_GRAY")
#undef CS_GRAY
#pragma push_macro("CS_LINEAR_RGB")
#undef CS_LINEAR_RGB
#pragma push_macro("CS_PYCC")
#undef CS_PYCC
#pragma push_macro("TYPE_2CLR")
#undef TYPE_2CLR
#pragma push_macro("TYPE_3CLR")
#undef TYPE_3CLR
#pragma push_macro("TYPE_4CLR")
#undef TYPE_4CLR
#pragma push_macro("TYPE_5CLR")
#undef TYPE_5CLR
#pragma push_macro("TYPE_6CLR")
#undef TYPE_6CLR
#pragma push_macro("TYPE_7CLR")
#undef TYPE_7CLR
#pragma push_macro("TYPE_8CLR")
#undef TYPE_8CLR
#pragma push_macro("TYPE_9CLR")
#undef TYPE_9CLR
#pragma push_macro("TYPE_ACLR")
#undef TYPE_ACLR
#pragma push_macro("TYPE_BCLR")
#undef TYPE_BCLR
#pragma push_macro("TYPE_CCLR")
#undef TYPE_CCLR
#pragma push_macro("TYPE_CMY")
#undef TYPE_CMY
#pragma push_macro("TYPE_CMYK")
#undef TYPE_CMYK
#pragma push_macro("TYPE_DCLR")
#undef TYPE_DCLR
#pragma push_macro("TYPE_ECLR")
#undef TYPE_ECLR
#pragma push_macro("TYPE_FCLR")
#undef TYPE_FCLR
#pragma push_macro("TYPE_GRAY")
#undef TYPE_GRAY
#pragma push_macro("TYPE_HLS")
#undef TYPE_HLS
#pragma push_macro("TYPE_HSV")
#undef TYPE_HSV
#pragma push_macro("TYPE_RGB")
#undef TYPE_RGB
#pragma push_macro("TYPE_XYZ")
#undef TYPE_XYZ

namespace java {
	namespace awt {
		namespace color {

class $export ColorSpace : public ::java::io::Serializable {
	$class(ColorSpace, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ColorSpace();
	void init$(int32_t type, int32_t numComponents);
	virtual $floats* fromCIEXYZ($floats* colorvalue) {return nullptr;}
	virtual $floats* fromRGB($floats* rgbvalue) {return nullptr;}
	static ::java::awt::color::ColorSpace* getInstance(int32_t cspace);
	virtual float getMaxValue(int32_t component);
	virtual float getMinValue(int32_t component);
	virtual $String* getName(int32_t component);
	virtual int32_t getNumComponents();
	virtual int32_t getType();
	virtual bool isCS_sRGB();
	void rangeCheck(int32_t component);
	virtual $floats* toCIEXYZ($floats* colorvalue) {return nullptr;}
	virtual $floats* toRGB($floats* colorvalue) {return nullptr;}
	static const int64_t serialVersionUID = (int64_t)0xFA5154EF4F5B84C4;
	int32_t type = 0;
	int32_t numComponents = 0;
	$volatile($StringArray*) compName = nullptr;
	static const int32_t TYPE_XYZ = 0;
	static const int32_t TYPE_Lab = 1;
	static const int32_t TYPE_Luv = 2;
	static const int32_t TYPE_YCbCr = 3;
	static const int32_t TYPE_Yxy = 4;
	static const int32_t TYPE_RGB = 5;
	static const int32_t TYPE_GRAY = 6;
	static const int32_t TYPE_HSV = 7;
	static const int32_t TYPE_HLS = 8;
	static const int32_t TYPE_CMYK = 9;
	static const int32_t TYPE_CMY = 11;
	static const int32_t TYPE_2CLR = 12;
	static const int32_t TYPE_3CLR = 13;
	static const int32_t TYPE_4CLR = 14;
	static const int32_t TYPE_5CLR = 15;
	static const int32_t TYPE_6CLR = 16;
	static const int32_t TYPE_7CLR = 17;
	static const int32_t TYPE_8CLR = 18;
	static const int32_t TYPE_9CLR = 19;
	static const int32_t TYPE_ACLR = 20;
	static const int32_t TYPE_BCLR = 21;
	static const int32_t TYPE_CCLR = 22;
	static const int32_t TYPE_DCLR = 23;
	static const int32_t TYPE_ECLR = 24;
	static const int32_t TYPE_FCLR = 25;
	static const int32_t CS_sRGB = 1000;
	static const int32_t CS_LINEAR_RGB = 1004;
	static const int32_t CS_CIEXYZ = 1001;
	static const int32_t CS_PYCC = 1002;
	static const int32_t CS_GRAY = 1003;
};

		} // color
	} // awt
} // java

#pragma pop_macro("CS_CIEXYZ")
#pragma pop_macro("CS_GRAY")
#pragma pop_macro("CS_LINEAR_RGB")
#pragma pop_macro("CS_PYCC")
#pragma pop_macro("TYPE_2CLR")
#pragma pop_macro("TYPE_3CLR")
#pragma pop_macro("TYPE_4CLR")
#pragma pop_macro("TYPE_5CLR")
#pragma pop_macro("TYPE_6CLR")
#pragma pop_macro("TYPE_7CLR")
#pragma pop_macro("TYPE_8CLR")
#pragma pop_macro("TYPE_9CLR")
#pragma pop_macro("TYPE_ACLR")
#pragma pop_macro("TYPE_BCLR")
#pragma pop_macro("TYPE_CCLR")
#pragma pop_macro("TYPE_CMY")
#pragma pop_macro("TYPE_CMYK")
#pragma pop_macro("TYPE_DCLR")
#pragma pop_macro("TYPE_ECLR")
#pragma pop_macro("TYPE_FCLR")
#pragma pop_macro("TYPE_GRAY")
#pragma pop_macro("TYPE_HLS")
#pragma pop_macro("TYPE_HSV")
#pragma pop_macro("TYPE_RGB")
#pragma pop_macro("TYPE_XYZ")

#endif // _java_awt_color_ColorSpace_h_