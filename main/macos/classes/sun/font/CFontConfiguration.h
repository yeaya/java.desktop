#ifndef _sun_font_CFontConfiguration_h_
#define _sun_font_CFontConfiguration_h_
//$ class sun.font.CFontConfiguration
//$ extends sun.awt.FontConfiguration

#include <java/lang/Array.h>
#include <sun/awt/FontConfiguration.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace sun {
	namespace font {
		class CompositeFontDescriptor;
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class CFontConfiguration : public ::sun::awt::FontConfiguration {
	$class(CFontConfiguration, 0, ::sun::awt::FontConfiguration)
public:
	CFontConfiguration();
	void init$(::sun::font::SunFontManager* fm);
	void init$(::sun::font::SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts);
	virtual $Array<::sun::font::CompositeFontDescriptor>* get2DCompositeFontInfo() override;
	virtual ::java::nio::charset::Charset* getDefaultFontCharset($String* fontName) override;
	virtual $String* getEncoding($String* awtFontName, $String* charSubsetName) override;
	virtual $String* getFaceNameFromComponentFontName($String* compFontName) override;
	virtual $String* getFallbackFamilyName($String* fontName, $String* defaultFallback) override;
	virtual $String* getFileNameFromComponentFontName($String* compFontName) override;
	virtual int32_t getNumberCoreFonts() override;
	virtual $StringArray* getPlatformFontNames() override;
	virtual void initReorderMap() override;
	virtual $String* mapFileName($String* fileName) override;
	static $Array<::sun::font::CompositeFontDescriptor>* emptyDescriptors;
	static $StringArray* emptyStrings;
};

	} // font
} // sun

#endif // _sun_font_CFontConfiguration_h_