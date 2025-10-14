#ifndef _sun_font_FontSubstitution_h_
#define _sun_font_FontSubstitution_h_
//$ interface sun.font.FontSubstitution
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {
		class CompositeFont;
	}
}

namespace sun {
	namespace font {

class FontSubstitution : public ::java::lang::Object {
	$interface(FontSubstitution, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::font::CompositeFont* getCompositeFont2D() {return nullptr;}
};

	} // font
} // sun

#endif // _sun_font_FontSubstitution_h_