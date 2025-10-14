#ifndef _sun_font_GlyphLayout$LayoutEngineKey_h_
#define _sun_font_GlyphLayout$LayoutEngineKey_h_
//$ class sun.font.GlyphLayout$LayoutEngineKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {
		class Font2D;
	}
}

namespace sun {
	namespace font {

class GlyphLayout$LayoutEngineKey : public ::java::lang::Object {
	$class(GlyphLayout$LayoutEngineKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphLayout$LayoutEngineKey();
	void init$();
	void init$(::sun::font::Font2D* font, int32_t script, int32_t lang);
	::sun::font::GlyphLayout$LayoutEngineKey* copy();
	virtual bool equals(Object$* rhs) override;
	::sun::font::Font2D* font();
	virtual int32_t hashCode() override;
	void init(::sun::font::Font2D* font, int32_t script, int32_t lang);
	int32_t lang();
	int32_t script();
	::sun::font::Font2D* font$ = nullptr;
	int32_t script$ = 0;
	int32_t lang$ = 0;
};

	} // font
} // sun

#endif // _sun_font_GlyphLayout$LayoutEngineKey_h_