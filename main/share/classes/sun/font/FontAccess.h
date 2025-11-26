#ifndef _sun_font_FontAccess_h_
#define _sun_font_FontAccess_h_
//$ class sun.font.FontAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class FontPeer;
		}
	}
}
namespace sun {
	namespace font {
		class Font2D;
		class Font2DHandle;
	}
}

namespace sun {
	namespace font {

class FontAccess : public ::java::lang::Object {
	$class(FontAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontAccess();
	void init$();
	virtual ::sun::font::Font2D* getFont2D(::java::awt::Font* f) {return nullptr;}
	static ::sun::font::FontAccess* getFontAccess();
	virtual ::java::awt::peer::FontPeer* getFontPeer(::java::awt::Font* f) {return nullptr;}
	virtual bool isCreatedFont(::java::awt::Font* f) {return false;}
	virtual void setCreatedFont(::java::awt::Font* f) {}
	virtual void setFont2D(::java::awt::Font* f, ::sun::font::Font2DHandle* h) {}
	static void setFontAccess(::sun::font::FontAccess* acc);
	static ::sun::font::FontAccess* access;
};

	} // font
} // sun

#endif // _sun_font_FontAccess_h_