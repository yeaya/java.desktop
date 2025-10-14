#ifndef _sun_font_FontManagerFactory_h_
#define _sun_font_FontManagerFactory_h_
//$ class sun.font.FontManagerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_CLASS")
#undef DEFAULT_CLASS

namespace sun {
	namespace font {
		class FontManager;
	}
}

namespace sun {
	namespace font {

class FontManagerFactory : public ::java::lang::Object {
	$class(FontManagerFactory, 0, ::java::lang::Object)
public:
	FontManagerFactory();
	void init$();
	static ::sun::font::FontManager* getInstance();
	static ::sun::font::FontManager* instance;
	static $String* DEFAULT_CLASS;
};

	} // font
} // sun

#pragma pop_macro("DEFAULT_CLASS")

#endif // _sun_font_FontManagerFactory_h_