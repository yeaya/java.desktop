#ifndef _sun_font_FontUtilities_h_
#define _sun_font_FontUtilities_h_
//$ class sun.font.FontUtilities
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_LAYOUT_CHARCODE")
#undef MAX_LAYOUT_CHARCODE
#pragma push_macro("MIN_LAYOUT_CHARCODE")
#undef MIN_LAYOUT_CHARCODE

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
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
	namespace font {
		class Font2D;
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

class FontUtilities : public ::java::lang::Object {
	$class(FontUtilities, 0, ::java::lang::Object)
public:
	FontUtilities();
	void init$();
	static bool debugFonts();
	static bool fontSupportsDefaultEncoding(::java::awt::Font* font);
	static ::javax::swing::plaf::FontUIResource* getCompositeFontUIResource(::java::awt::Font* font);
	static ::sun::font::Font2D* getFont2D(::java::awt::Font* font);
	static ::javax::swing::plaf::FontUIResource* getFontConfigFUIR($String* fcFamily, int32_t style, int32_t size);
	static ::sun::util::logging::PlatformLogger* getLogger();
	static bool isComplexCharCode(int32_t code);
	static bool isComplexScript($chars* chs, int32_t start, int32_t limit);
	static bool isComplexText($chars* chs, int32_t start, int32_t limit);
	static bool isLogging();
	static bool isNonSimpleChar(char16_t ch);
	static void logInfo($String* s);
	static void logSevere($String* s);
	static void logWarning($String* s);
	static $String* mapFcName($String* name);
	static bool textLayoutIsCompatible(::java::awt::Font* font);
	static bool isLinux;
	static bool isMacOSX;
	static bool isMacOSX14;
	static bool useJDKScaler;
	static bool isWindows;
	static bool debugFonts$;
	static ::sun::util::logging::PlatformLogger* logger;
	static bool logging;
	static const int32_t MIN_LAYOUT_CHARCODE = 768;
	static const int32_t MAX_LAYOUT_CHARCODE = 8303;
	static $volatile(::java::lang::ref::SoftReference*) compMapRef;
	static $Array<::java::lang::String, 2>* nameMap;
};

	} // font
} // sun

#pragma pop_macro("MAX_LAYOUT_CHARCODE")
#pragma pop_macro("MIN_LAYOUT_CHARCODE")

#endif // _sun_font_FontUtilities_h_