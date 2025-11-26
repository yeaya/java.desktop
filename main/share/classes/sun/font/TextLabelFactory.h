#ifndef _sun_font_TextLabelFactory_h_
#define _sun_font_TextLabelFactory_h_
//$ class sun.font.TextLabelFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
		}
	}
}
namespace java {
	namespace text {
		class Bidi;
	}
}
namespace sun {
	namespace font {
		class CoreMetrics;
		class Decoration;
		class ExtendedTextLabel;
		class TextLabel;
	}
}

namespace sun {
	namespace font {

class TextLabelFactory : public ::java::lang::Object {
	$class(TextLabelFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextLabelFactory();
	void init$(::java::awt::font::FontRenderContext* frc, $chars* text, ::java::text::Bidi* bidi, int32_t flags);
	::sun::font::ExtendedTextLabel* createExtended(::java::awt::Font* font, ::sun::font::CoreMetrics* lm, ::sun::font::Decoration* decorator, int32_t start, int32_t limit);
	::sun::font::TextLabel* createSimple(::java::awt::Font* font, ::sun::font::CoreMetrics* lm, int32_t start, int32_t limit);
	::java::awt::font::FontRenderContext* getFontRenderContext();
	::java::text::Bidi* getLineBidi();
	void setLineContext(int32_t lineStart, int32_t lineLimit);
	::java::awt::font::FontRenderContext* frc = nullptr;
	$chars* text = nullptr;
	::java::text::Bidi* bidi = nullptr;
	::java::text::Bidi* lineBidi = nullptr;
	int32_t flags = 0;
	int32_t lineStart = 0;
	int32_t lineLimit = 0;
};

	} // font
} // sun

#endif // _sun_font_TextLabelFactory_h_