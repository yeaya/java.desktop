#ifndef _java_awt_color_ICC_Profile$BuiltInProfile_h_
#define _java_awt_color_ICC_Profile$BuiltInProfile_h_
//$ interface java.awt.color.ICC_Profile$BuiltInProfile
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
			class ICC_Profile;
		}
	}
}

namespace java {
	namespace awt {
		namespace color {

class ICC_Profile$BuiltInProfile : public ::java::lang::Object {
	$interface(ICC_Profile$BuiltInProfile, 0, ::java::lang::Object)
public:
	static ::java::awt::color::ICC_Profile* SRGB;
	static ::java::awt::color::ICC_Profile* LRGB;
	static ::java::awt::color::ICC_Profile* XYZ;
	static ::java::awt::color::ICC_Profile* PYCC;
	static ::java::awt::color::ICC_Profile* GRAY;
};

		} // color
	} // awt
} // java

#pragma pop_macro("GRAY")
#pragma pop_macro("LRGB")
#pragma pop_macro("PYCC")
#pragma pop_macro("SRGB")
#pragma pop_macro("XYZ")

#endif // _java_awt_color_ICC_Profile$BuiltInProfile_h_