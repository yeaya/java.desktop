#ifndef _sun_font_FontConfigManager_h_
#define _sun_font_FontConfigManager_h_
//$ class sun.font.FontConfigManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {
		class CompositeFont;
		class FontConfigManager$FcCompFont;
		class FontConfigManager$FontConfigInfo;
		class PhysicalFont;
	}
}

namespace sun {
	namespace font {

class FontConfigManager : public ::java::lang::Object {
	$class(FontConfigManager, 0, ::java::lang::Object)
public:
	FontConfigManager();
	void init$();
	static $String* getFCLocaleStr();
	static void getFontConfig($String* locale, ::sun::font::FontConfigManager$FontConfigInfo* fcInfo, $Array<::sun::font::FontConfigManager$FcCompFont>* fonts, bool includeFallbacks);
	static $Object* getFontConfigAAHint();
	static $Object* getFontConfigAAHint($String* fcFamily);
	static int32_t getFontConfigAASettings($String* locale, $String* fcFamily);
	virtual ::sun::font::CompositeFont* getFontConfigFont($String* name, int32_t style);
	virtual $Array<::sun::font::FontConfigManager$FcCompFont>* getFontConfigFonts();
	virtual ::sun::font::FontConfigManager$FontConfigInfo* getFontConfigInfo();
	static int32_t getFontConfigVersion();
	virtual void initFontConfigFonts(bool includeFallbacks);
	virtual $Array<::sun::font::FontConfigManager$FcCompFont>* loadFontConfig();
	virtual void populateFontConfig($Array<::sun::font::FontConfigManager$FcCompFont>* fcInfo);
	virtual ::sun::font::PhysicalFont* registerFromFcInfo(::sun::font::FontConfigManager$FcCompFont* fcInfo);
	static bool fontConfigFailed;
	static ::sun::font::FontConfigManager$FontConfigInfo* fcInfo;
	static $StringArray* fontConfigNames;
	$Array<::sun::font::FontConfigManager$FcCompFont>* fontConfigFonts = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FontConfigManager_h_