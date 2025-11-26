#ifndef _sun_font_FcFontConfiguration_h_
#define _sun_font_FcFontConfiguration_h_
//$ class sun.font.FcFontConfiguration
//$ extends sun.awt.FontConfiguration

#include <java/lang/Array.h>
#include <sun/awt/FontConfiguration.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace sun {
	namespace awt {
		class FontDescriptor;
	}
}
namespace sun {
	namespace font {
		class CompositeFontDescriptor;
		class FontConfigManager$FcCompFont;
		class FontConfigManager$FontConfigFont;
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class FcFontConfiguration : public ::sun::awt::FontConfiguration {
	$class(FcFontConfiguration, 0, ::sun::awt::FontConfiguration)
public:
	FcFontConfiguration();
	void init$(::sun::font::SunFontManager* fm);
	void init$(::sun::font::SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts);
	virtual $Array<::sun::awt::FontDescriptor>* buildFontDescriptors(int32_t fontIndex, int32_t styleIndex) override;
	virtual $Array<::sun::font::CompositeFontDescriptor>* get2DCompositeFontInfo() override;
	virtual ::java::nio::charset::Charset* getDefaultFontCharset($String* fontName) override;
	virtual $String* getEncoding($String* awtFontName, $String* characterSubsetName) override;
	virtual $String* getExtraFontPath() override;
	virtual $String* getFaceNameFromComponentFontName($String* componentFontName) override;
	virtual $String* getFallbackFamilyName($String* fontName, $String* defaultFallback) override;
	$Array<::sun::font::FontConfigManager$FontConfigFont>* getFcFontList($Array<::sun::font::FontConfigManager$FcCompFont>* fcFonts, $String* fontname, int32_t style);
	::java::io::File* getFcInfoFile();
	virtual $String* getFileNameFromComponentFontName($String* componentFontName) override;
	virtual $String* getFileNameFromPlatformName($String* platformName) override;
	virtual int32_t getNumberCoreFonts() override;
	virtual $StringArray* getPlatformFontNames() override;
	$String* getVersionString(::java::io::File* f);
	virtual bool init() override;
	virtual void initReorderMap() override;
	virtual bool needToSearchForFile($String* fileName) override;
	void readFcInfo();
	virtual void setOsNameAndVersion() override;
	static void warning($String* msg);
	void writeFcInfo();
	static $String* fileVersion;
	$String* fcInfoFileName = nullptr;
	$Array<::sun::font::FontConfigManager$FcCompFont>* fcCompFonts = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FcFontConfiguration_h_