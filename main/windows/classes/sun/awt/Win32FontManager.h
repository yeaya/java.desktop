#ifndef _sun_awt_Win32FontManager_h_
#define _sun_awt_Win32FontManager_h_
//$ class sun.awt.Win32FontManager
//$ extends sun.font.SunFontManager

#include <java/lang/Array.h>
#include <sun/font/SunFontManager.h>

namespace java {
	namespace util {
		class HashMap;
		class Locale;
	}
}
namespace sun {
	namespace awt {
		class FontConfiguration;
	}
}
namespace sun {
	namespace font {
		class TrueTypeFont;
	}
}

namespace sun {
	namespace awt {

class $export Win32FontManager : public ::sun::font::SunFontManager {
	$class(Win32FontManager, 0, ::sun::font::SunFontManager)
public:
	Win32FontManager();
	void init$();
	virtual ::sun::awt::FontConfiguration* createFontConfiguration() override;
	virtual ::sun::awt::FontConfiguration* createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) override;
	static void deRegisterFontWithPlatform($String* fontName);
	virtual $StringArray* getDefaultPlatformFont() override;
	virtual ::sun::font::TrueTypeFont* getEUDCFont() override;
	static $String* getEUDCFontFile();
	virtual $String* getFontPath(bool noType1Fonts) override;
	virtual void populateFontFileNameMap(::java::util::HashMap* fontToFileMap, ::java::util::HashMap* fontToFamilyNameMap, ::java::util::HashMap* familyToFontListMap, ::java::util::Locale* locale) override;
	static void populateFontFileNameMap0(::java::util::HashMap* fontToFileMap, ::java::util::HashMap* fontToFamilyNameMap, ::java::util::HashMap* familyToFontListMap, ::java::util::Locale* locale);
	virtual ::java::util::HashMap* populateHardcodedFileNameMap() override;
	using ::sun::font::SunFontManager::registerFontFile;
	virtual void registerFontFile($String* fontFileName, $StringArray* nativeNames, int32_t fontRank, bool defer) override;
	static void registerFontWithPlatform($String* fontName);
	static void registerJREFontsForPrinting();
	void registerJREFontsWithPlatform($String* pathName);
	virtual bool useAbsoluteFontFileNames() override;
	static ::sun::font::TrueTypeFont* eudcFont;
	static $String* fontsForPrinting;
};

	} // awt
} // sun

#endif // _sun_awt_Win32FontManager_h_