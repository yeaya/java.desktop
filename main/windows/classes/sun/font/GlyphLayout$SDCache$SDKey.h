#ifndef _sun_font_GlyphLayout$SDCache$SDKey_h_
#define _sun_font_GlyphLayout$SDCache$SDKey_h_
//$ class sun.font.GlyphLayout$SDCache$SDKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace sun {
	namespace font {

class GlyphLayout$SDCache$SDKey : public ::java::lang::Object {
	$class(GlyphLayout$SDCache$SDKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphLayout$SDCache$SDKey();
	void init$(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::java::awt::Font* font = nullptr;
	::java::awt::font::FontRenderContext* frc = nullptr;
	int32_t hash = 0;
};

	} // font
} // sun

#endif // _sun_font_GlyphLayout$SDCache$SDKey_h_