#ifndef _sun_java2d_xr_XRColor_h_
#define _sun_java2d_xr_XRColor_h_
//$ class sun.java2d.xr.XRColor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FULL_ALPHA")
#undef FULL_ALPHA
#pragma push_macro("NO_ALPHA")
#undef NO_ALPHA

namespace java {
	namespace awt {
		class Color;
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRColor : public ::java::lang::Object {
	$class(XRColor, 0, ::java::lang::Object)
public:
	XRColor();
	void init$();
	void init$(int32_t alpha, int32_t red, int32_t green, int32_t blue);
	void init$(::java::awt::Color* color);
	static $ints* ARGBPrePixelToXRColors($ints* pixels);
	static int32_t byteToXRColorValue(int32_t byteValue);
	virtual int32_t getAlpha();
	virtual int32_t getBlue();
	virtual int32_t getGreen();
	virtual int32_t getRed();
	virtual void setAlpha(int32_t alpha);
	virtual void setColorValues(::java::awt::Color* color);
	virtual void setColorValues(int32_t pixel);
	virtual $String* toString() override;
	static ::sun::java2d::xr::XRColor* FULL_ALPHA;
	static ::sun::java2d::xr::XRColor* NO_ALPHA;
	int32_t red = 0;
	int32_t green = 0;
	int32_t blue = 0;
	int32_t alpha = 0;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("FULL_ALPHA")
#pragma pop_macro("NO_ALPHA")

#endif // _sun_java2d_xr_XRColor_h_