#ifndef _bug8132119_h_
#define _bug8132119_h_
//$ class bug8132119
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BACKGROUND_COLOR")
#undef BACKGROUND_COLOR
#pragma push_macro("DRAW_COLOR")
#undef DRAW_COLOR
#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("NUMERIC_SHAPER")
#undef NUMERIC_SHAPER
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Color;
		class Font;
		class Graphics2D;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class NumericShaper;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

class $export bug8132119 : public ::java::lang::Object {
	$class(bug8132119, 0, ::java::lang::Object)
public:
	bug8132119();
	void init$();
	static void checkClippedString($String* str, $String* res, $String* golden);
	static void checkImageContainsSymbol(::java::awt::image::BufferedImage* buffImage, int32_t x, int32_t intersections);
	static void checkImageIsEmpty(::java::awt::image::BufferedImage* buffImage);
	static void checkNullArguments();
	static void checkNullArguments(::javax::swing::JComponent* comp, ::java::awt::Graphics2D* g, $String* text);
	static void checkNullArgumentsDrawString(::javax::swing::JComponent* comp, ::java::awt::Graphics2D* g, $String* text);
	static void checkNullArgumentsDrawStringUnderlineCharAt(::javax::swing::JComponent* comp, ::java::awt::Graphics2D* g, $String* text);
	static void checkNullArgumentsGetClippedString(::javax::swing::JComponent* comp, $String* text);
	static void checkNullArgumentsGetStringWidth(::javax::swing::JComponent* comp, $String* text);
	static ::java::awt::image::BufferedImage* createBufferedImage(int32_t width, int32_t height);
	static ::javax::swing::JComponent* createComponent($String* str);
	static ::java::awt::Font* getFont();
	static $String* getFontName($String* fn, $StringArray* fontNames);
	static float getLayoutWidth($String* text, ::java::awt::Font* font, ::java::awt::font::NumericShaper* shaper);
	static void main($StringArray* args);
	static void setMetalLAF();
	static void testDrawEmptyString();
	static void testDrawString(bool underlined);
	static void testStringClip();
	static void testStringMethods();
	static void testStringWidth();
	static const int32_t WIDTH = 50;
	static const int32_t HEIGHT = 50;
	static ::java::awt::Color* DRAW_COLOR;
	static ::java::awt::Color* BACKGROUND_COLOR;
	static ::java::awt::font::NumericShaper* NUMERIC_SHAPER;
};

#pragma pop_macro("BACKGROUND_COLOR")
#pragma pop_macro("DRAW_COLOR")
#pragma pop_macro("HEIGHT")
#pragma pop_macro("NUMERIC_SHAPER")
#pragma pop_macro("WIDTH")

#endif // _bug8132119_h_