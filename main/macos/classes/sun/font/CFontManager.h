#ifndef _sun_font_CFontManager_h_
#define _sun_font_CFontManager_h_
//$ class sun.font.CFontManager
//$ extends sun.font.SunFontManager

#include <java/lang/Array.h>
#include <sun/font/SunFontManager.h>

namespace java {
	namespace util {
		class HashMap;
		class Hashtable;
		class Locale;
		class TreeMap;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class FontUIResource;
		}
	}
}
namespace sun {
	namespace awt {
		class FontConfiguration;
	}
}
namespace sun {
	namespace font {
		class Font2D;
		class FontFamily;
	}
}

namespace sun {
	namespace font {

class CFontManager : public ::sun::font::SunFontManager {
	$class(CFontManager, 0, ::sun::font::SunFontManager)
public:
	CFontManager();
	void init$();
	virtual void addNativeFontFamilyNames(::java::util::TreeMap* familyNames, ::java::util::Locale* requestedLocale) override;
	bool cloneStyledFont(::sun::font::FontFamily* realFamily, $String* logicalFamilyName, int32_t style);
	virtual ::sun::awt::FontConfiguration* createFontConfiguration() override;
	virtual ::sun::awt::FontConfiguration* createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) override;
	virtual $StringArray* getDefaultPlatformFont() override;
	virtual ::javax::swing::plaf::FontUIResource* getFontConfigFUIR($String* family, int32_t style, int32_t size) override;
	::sun::font::FontFamily* getFontFamily($String* realName, $String* fallbackName);
	::sun::font::FontFamily* getFontFamilyWithExtraTry($String* logicalName, $String* realName, $String* fallbackName);
	virtual $String* getFontPath(bool noType1Fonts) override;
	static $Array<::sun::font::Font2D>* getGenericFonts();
	virtual $Array<::sun::font::Font2D>* getRegisteredFonts() override;
	$StringArray* lambda$registerFontsInDir$0($String* dirName);
	virtual void loadFonts() override;
	void loadNativeDirFonts($String* fontPath);
	void loadNativeFonts();
	virtual void populateFontFileNameMap(::java::util::HashMap* fontToFileMap, ::java::util::HashMap* fontToFamilyNameMap, ::java::util::HashMap* familyToFontListMap, ::java::util::Locale* locale) override;
	using ::sun::font::SunFontManager::registerFont;
	void registerFont($String* fontName, $String* fontFamilyName);
	using ::sun::font::SunFontManager::registerFontsInDir;
	virtual void registerFontsInDir($String* dirName, bool useJavaRasterizer, int32_t fontRank, bool defer, bool resolveSymLinks) override;
	::sun::font::Font2D* registerGenericFont(::sun::font::Font2D* f);
	::sun::font::Font2D* registerGenericFont(::sun::font::Font2D* f, bool logicalFont);
	void registerItalicDerived();
	void setupLogicalFonts($String* logicalName, $String* realName, $String* fallbackName);
	static ::java::util::Hashtable* genericFonts;
	$Object* waitForFontsToBeLoaded = nullptr;
	bool loadedAllFonts = false;
};

	} // font
} // sun

#endif // _sun_font_CFontManager_h_