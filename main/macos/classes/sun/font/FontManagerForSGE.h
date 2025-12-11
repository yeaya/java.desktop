#ifndef _sun_font_FontManagerForSGE_h_
#define _sun_font_FontManagerForSGE_h_
//$ interface sun.font.FontManagerForSGE
//$ extends sun.font.FontManager

#include <java/lang/Array.h>
#include <sun/font/FontManager.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace util {
		class Locale;
		class TreeMap;
	}
}

namespace sun {
	namespace font {

class FontManagerForSGE : public ::sun::font::FontManager {
	$interface(FontManagerForSGE, $NO_CLASS_INIT, ::sun::font::FontManager)
public:
	virtual $Array<::java::awt::Font>* getAllInstalledFonts() {return nullptr;}
	virtual ::java::util::TreeMap* getCreatedFontFamilyNames() {return nullptr;}
	virtual $Array<::java::awt::Font>* getCreatedFonts() {return nullptr;}
	virtual $StringArray* getInstalledFontFamilyNames(::java::util::Locale* requestedLocale) {return nullptr;}
	virtual void useAlternateFontforJALocales() {}
};

	} // font
} // sun

#endif // _sun_font_FontManagerForSGE_h_