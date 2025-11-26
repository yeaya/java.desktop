#ifndef _java_awt_color_ColorSpace$BuiltInSpace_h_
#define _java_awt_color_ColorSpace$BuiltInSpace_h_
//$ interface java.awt.color.ColorSpace$BuiltInSpace
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("GRAY")
#undef GRAY
#pragma push_macro("LRGB")
#undef LRGB
#pragma push_macro("PYCC")
#undef PYCC
#pragma push_macro("SRGB")
#undef SRGB
#pragma push_macro("XYZ")
#undef XYZ

namespace java {
	namespace awt {
		namespace color {
			class ColorSpace;
		}
	}
}

namespace java {
	namespace awt {
		namespace color {

class ColorSpace$BuiltInSpace : public ::java::lang::Object {
	$interface(ColorSpace$BuiltInSpace, 0, ::java::lang::Object)
public:
	static ::java::awt::color::ColorSpace* SRGB;
	static ::java::awt::color::ColorSpace* LRGB;
	static ::java::awt::color::ColorSpace* XYZ;
	static ::java::awt::color::ColorSpace* PYCC;
	static ::java::awt::color::ColorSpace* GRAY;
};

		} // color
	} // awt
} // java

#pragma pop_macro("GRAY")
#pragma pop_macro("LRGB")
#pragma pop_macro("PYCC")
#pragma pop_macro("SRGB")
#pragma pop_macro("XYZ")

#endif // _java_awt_color_ColorSpace$BuiltInSpace_h_