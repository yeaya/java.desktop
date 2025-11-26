#ifndef _sun_awt_FcFontManager_h_
#define _sun_awt_FcFontManager_h_
//$ class sun.awt.FcFontManager
//$ extends sun.font.SunFontManager

#include <java/lang/Array.h>
#include <sun/font/SunFontManager.h>

namespace sun {
	namespace awt {
		class FontConfiguration;
	}
}
namespace sun {
	namespace font {
		class FontConfigManager;
	}
}

namespace sun {
	namespace awt {

class $export FcFontManager : public ::sun::font::SunFontManager {
	$class(FcFontManager, $NO_CLASS_INIT, ::sun::font::SunFontManager)
public:
	FcFontManager();
	void init$();
	virtual ::sun::awt::FontConfiguration* createFontConfiguration() override;
	virtual ::sun::awt::FontConfiguration* createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) override;
	virtual $StringArray* getDefaultPlatformFont() override;
	virtual ::sun::font::FontConfigManager* getFontConfigManager();
	virtual $String* getFontPath(bool noType1Fonts) override;
	virtual $String* getFontPathNative(bool noType1Fonts, bool isX11GE);
	::sun::font::FontConfigManager* fcManager = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_FcFontManager_h_