#ifndef _sun_font_FontManagerNativeLibrary_h_
#define _sun_font_FontManagerNativeLibrary_h_
//$ class sun.font.FontManagerNativeLibrary
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {

class FontManagerNativeLibrary : public ::java::lang::Object {
	$class(FontManagerNativeLibrary, 0, ::java::lang::Object)
public:
	FontManagerNativeLibrary();
	void init$();
	static void load();
};

	} // font
} // sun

#endif // _sun_font_FontManagerNativeLibrary_h_