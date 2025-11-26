#ifndef _sun_awt_X11FontManager_h_
#define _sun_awt_X11FontManager_h_
//$ class sun.awt.X11FontManager
//$ extends sun.awt.FcFontManager

#include <java/lang/Array.h>
#include <sun/awt/FcFontManager.h>

#pragma push_macro("ADD_STYLE_NAME_FIELD")
#undef ADD_STYLE_NAME_FIELD
#pragma push_macro("AVERAGE_WIDTH_FIELD")
#undef AVERAGE_WIDTH_FIELD
#pragma push_macro("CHARSET_ENCODING_FIELD")
#undef CHARSET_ENCODING_FIELD
#pragma push_macro("CHARSET_REGISTRY_FIELD")
#undef CHARSET_REGISTRY_FIELD
#pragma push_macro("FAMILY_NAME_FIELD")
#undef FAMILY_NAME_FIELD
#pragma push_macro("FOUNDRY_FIELD")
#undef FOUNDRY_FIELD
#pragma push_macro("PIXEL_SIZE_FIELD")
#undef PIXEL_SIZE_FIELD
#pragma push_macro("POINT_SIZE_FIELD")
#undef POINT_SIZE_FIELD
#pragma push_macro("RESOLUTION_X_FIELD")
#undef RESOLUTION_X_FIELD
#pragma push_macro("RESOLUTION_Y_FIELD")
#undef RESOLUTION_Y_FIELD
#pragma push_macro("SETWIDTH_NAME_FIELD")
#undef SETWIDTH_NAME_FIELD
#pragma push_macro("SLANT_FIELD")
#undef SLANT_FIELD
#pragma push_macro("SPACING_FIELD")
#undef SPACING_FIELD
#pragma push_macro("WEIGHT_NAME_FIELD")
#undef WEIGHT_NAME_FIELD

namespace java {
	namespace util {
		class HashMap;
		class HashSet;
		class Map;
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
	namespace awt {

class $export X11FontManager : public ::sun::awt::FcFontManager {
	$class(X11FontManager, 0, ::sun::awt::FcFontManager)
public:
	X11FontManager();
	void init$();
	virtual void addFontToPlatformFontPath($String* platformName) override;
	virtual ::sun::awt::FontConfiguration* createFontConfiguration() override;
	virtual ::sun::awt::FontConfiguration* createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) override;
	virtual $String* getFileNameFromPlatformName($String* platName) override;
	$String* getFileNameFromXLFD($String* name);
	virtual ::javax::swing::plaf::FontUIResource* getFontConfigFUIR($String* family, int32_t style, int32_t size) override;
	virtual $String* getFontPath(bool noType1Fonts) override;
	static ::sun::awt::X11FontManager* getInstance();
	virtual $StringArray* getNativeNames($String* fontFileName, $String* platformName) override;
	void getPlatformFontPathFromFontConfig();
	static $String* getX11FontName($String* platName);
	bool isHeadless();
	virtual void loadFonts() override;
	virtual void registerFontDir($String* path) override;
	virtual void registerFontDirs($String* pathName) override;
	virtual void registerPlatformFontsUsedByFontConfiguration() override;
	$String* specificFontIDForName($String* name);
	$String* switchFontIDForName($String* name);
	static const int32_t FOUNDRY_FIELD = 1;
	static const int32_t FAMILY_NAME_FIELD = 2;
	static const int32_t WEIGHT_NAME_FIELD = 3;
	static const int32_t SLANT_FIELD = 4;
	static const int32_t SETWIDTH_NAME_FIELD = 5;
	static const int32_t ADD_STYLE_NAME_FIELD = 6;
	static const int32_t PIXEL_SIZE_FIELD = 7;
	static const int32_t POINT_SIZE_FIELD = 8;
	static const int32_t RESOLUTION_X_FIELD = 9;
	static const int32_t RESOLUTION_Y_FIELD = 10;
	static const int32_t SPACING_FIELD = 11;
	static const int32_t AVERAGE_WIDTH_FIELD = 12;
	static const int32_t CHARSET_REGISTRY_FIELD = 13;
	static const int32_t CHARSET_ENCODING_FIELD = 14;
	static ::java::util::Map* fontNameMap;
	static ::java::util::Map* xlfdMap;
	static ::java::util::Map* xFontDirsMap;
	static ::java::util::HashSet* fontConfigDirs;
	static ::java::util::HashMap* registeredDirs;
	static $StringArray* fontdirs;
};

	} // awt
} // sun

#pragma pop_macro("ADD_STYLE_NAME_FIELD")
#pragma pop_macro("AVERAGE_WIDTH_FIELD")
#pragma pop_macro("CHARSET_ENCODING_FIELD")
#pragma pop_macro("CHARSET_REGISTRY_FIELD")
#pragma pop_macro("FAMILY_NAME_FIELD")
#pragma pop_macro("FOUNDRY_FIELD")
#pragma pop_macro("PIXEL_SIZE_FIELD")
#pragma pop_macro("POINT_SIZE_FIELD")
#pragma pop_macro("RESOLUTION_X_FIELD")
#pragma pop_macro("RESOLUTION_Y_FIELD")
#pragma pop_macro("SETWIDTH_NAME_FIELD")
#pragma pop_macro("SLANT_FIELD")
#pragma pop_macro("SPACING_FIELD")
#pragma pop_macro("WEIGHT_NAME_FIELD")

#endif // _sun_awt_X11FontManager_h_