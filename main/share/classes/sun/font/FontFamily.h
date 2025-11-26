#ifndef _sun_font_FontFamily_h_
#define _sun_font_FontFamily_h_
//$ class sun.font.FontFamily
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class HashMap;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace sun {
	namespace font {
		class Font2D;
	}
}

namespace sun {
	namespace font {

class FontFamily : public ::java::lang::Object {
	$class(FontFamily, 0, ::java::lang::Object)
public:
	FontFamily();
	void init$($String* name, bool isLogFont, int32_t rank);
	void init$($String* name);
	static void addLocaleNames(::sun::font::FontFamily* family, $StringArray* names);
	bool closerWeight(::sun::font::Font2D* currFont, ::sun::font::Font2D* font, int32_t style);
	static $StringArray* getAllFamilyNames();
	static $Array<::sun::font::FontFamily>* getAllFontFamilies();
	virtual ::sun::font::Font2D* getClosestStyle(int32_t style);
	static ::sun::font::FontFamily* getFamily($String* name);
	virtual $String* getFamilyName();
	virtual ::sun::font::Font2D* getFont(int32_t style);
	virtual ::sun::font::Font2D* getFontWithExactStyleMatch(int32_t style);
	static ::sun::font::FontFamily* getLocaleFamily($String* name);
	virtual int32_t getRank();
	bool isFromSameSource(::sun::font::Font2D* font);
	bool preferredWidth(::sun::font::Font2D* font);
	static void remove(::sun::font::Font2D* font2D);
	virtual void setFont(::sun::font::Font2D* font, int32_t style);
	virtual $String* toString() override;
	static ::java::util::concurrent::ConcurrentHashMap* familyNameMap;
	static ::java::util::HashMap* allLocaleNames;
	$String* familyName = nullptr;
	::sun::font::Font2D* plain = nullptr;
	::sun::font::Font2D* bold = nullptr;
	::sun::font::Font2D* italic = nullptr;
	::sun::font::Font2D* bolditalic = nullptr;
	bool logicalFont = false;
	int32_t familyRank = 0;
	int32_t familyWidth = 0;
};

	} // font
} // sun

#endif // _sun_font_FontFamily_h_