#ifndef _sun_font_MFontConfiguration_h_
#define _sun_font_MFontConfiguration_h_
//$ class sun.font.MFontConfiguration
//$ extends sun.awt.FontConfiguration

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
namespace java {
	namespace util {
		class HashMap;
		class HashSet;
	}
}
namespace sun {
	namespace font {
		class SunFontManager;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace font {

class MFontConfiguration : public ::sun::awt::FontConfiguration {
	$class(MFontConfiguration, 0, ::sun::awt::FontConfiguration)
public:
	MFontConfiguration();
	void init$(::sun::font::SunFontManager* fm);
	void init$(::sun::font::SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts);
	virtual ::java::util::HashSet* getAWTFontPathSet() override;
	virtual ::java::nio::charset::Charset* getDefaultFontCharset($String* fontName) override;
	virtual $String* getEncoding($String* awtFontName, $String* characterSubsetName) override;
	virtual $String* getFaceNameFromComponentFontName($String* componentFontName) override;
	virtual $String* getFallbackFamilyName($String* fontName, $String* defaultFallback) override;
	virtual $String* getFileNameFromComponentFontName($String* componentFontName) override;
	$String* getVersionString(::java::io::File* f);
	virtual void initReorderMap() override;
	void initTables();
	virtual $String* mapFileName($String* fileName) override;
	virtual void setOsNameAndVersion() override;
	static ::sun::awt::FontConfiguration* fontConfig;
	static ::sun::util::logging::PlatformLogger* logger;
	static $String* fontsDirPrefix;
	static ::java::util::HashMap* encodingMap;
};

	} // font
} // sun

#endif // _sun_font_MFontConfiguration_h_