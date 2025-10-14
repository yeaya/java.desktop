#ifndef _sun_awt_windows_WFontConfiguration_h_
#define _sun_awt_windows_WFontConfiguration_h_
//$ class sun.awt.windows.WFontConfiguration
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
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace sun {
	namespace awt {
		class FontDescriptor;
	}
}
namespace sun {
	namespace font {
		class SunFontManager;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WFontConfiguration : public ::sun::awt::FontConfiguration {
	$class(WFontConfiguration, 0, ::sun::awt::FontConfiguration)
public:
	WFontConfiguration();
	void init$(::sun::font::SunFontManager* fm);
	void init$(::sun::font::SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts);
	$String* findFontWithCharset($Array<::sun::awt::FontDescriptor>* fontDescriptors, $String* charset);
	virtual ::java::nio::charset::Charset* getDefaultFontCharset($String* fontName) override;
	virtual $String* getEncoding($String* awtFontName, $String* characterSubsetName) override;
	virtual $String* getFaceNameFromComponentFontName($String* componentFontName) override;
	virtual $String* getFallbackFamilyName($String* fontName, $String* defaultFallback) override;
	virtual $String* getFileNameFromComponentFontName($String* componentFontName) override;
	$String* getTextComponentFontName($String* familyName, int32_t style);
	virtual void initReorderMap() override;
	void initTables($String* defaultEncoding);
	virtual $String* makeAWTFontName($String* platformFontName, $String* characterSubsetName) override;
	virtual void setOsNameAndVersion() override;
	bool useCompatibilityFallbacks = false;
	static ::java::util::HashMap* subsetCharsetMap;
	static ::java::util::HashMap* subsetEncodingMap;
	static $String* textInputCharset;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WFontConfiguration_h_