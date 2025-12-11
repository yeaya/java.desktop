#ifndef _sun_font_FontManager_h_
#define _sun_font_FontManager_h_
//$ interface sun.font.FontManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOGICAL_FALLBACK")
#undef LOGICAL_FALLBACK
#pragma push_macro("NO_FALLBACK")
#undef NO_FALLBACK
#pragma push_macro("PHYSICAL_FALLBACK")
#undef PHYSICAL_FALLBACK

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace font {
		class CreatedFontTracker;
		class Font2D;
		class Font2DHandle;
	}
}

namespace sun {
	namespace font {

class FontManager : public ::java::lang::Object {
	$interface(FontManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::sun::font::Font2D>* createFont2D(::java::io::File* fontFile, int32_t fontFormat, bool all, bool isCopy, ::sun::font::CreatedFontTracker* tracker) {return nullptr;}
	virtual void deRegisterBadFont(::sun::font::Font2D* font2D) {}
	virtual ::sun::font::Font2D* findFont2D($String* name, int32_t style, int32_t fallback) {return nullptr;}
	virtual ::sun::font::Font2DHandle* getNewComposite($String* family, int32_t style, ::sun::font::Font2DHandle* handle) {return nullptr;}
	virtual void preferLocaleFonts() {}
	virtual void preferProportionalFonts() {}
	virtual bool registerFont(::java::awt::Font* font) {return false;}
	static const int32_t NO_FALLBACK = 0;
	static const int32_t PHYSICAL_FALLBACK = 1;
	static const int32_t LOGICAL_FALLBACK = 2;
};

	} // font
} // sun

#pragma pop_macro("LOGICAL_FALLBACK")
#pragma pop_macro("NO_FALLBACK")
#pragma pop_macro("PHYSICAL_FALLBACK")

#endif // _sun_font_FontManager_h_