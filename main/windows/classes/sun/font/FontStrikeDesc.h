#ifndef _sun_font_FontStrikeDesc_h_
#define _sun_font_FontStrikeDesc_h_
//$ class sun.font.FontStrikeDesc
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("AA_LCD_H")
#undef AA_LCD_H
#pragma push_macro("AA_LCD_V")
#undef AA_LCD_V
#pragma push_macro("AA_ON")
#undef AA_ON
#pragma push_macro("FRAC_METRICS_ON")
#undef FRAC_METRICS_ON
#pragma push_macro("FRAC_METRICS_SP")
#undef FRAC_METRICS_SP

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
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace sun {
	namespace font {
		class Font2D;
	}
}

namespace sun {
	namespace font {

class FontStrikeDesc : public ::java::lang::Object {
	$class(FontStrikeDesc, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontStrikeDesc();
	void init$();
	void init$(::java::awt::geom::AffineTransform* devAt, ::java::awt::geom::AffineTransform* at, int32_t fStyle, int32_t aa, int32_t fm);
	void init$(::sun::font::FontStrikeDesc* desc);
	virtual bool equals(Object$* obj) override;
	static int32_t getAAHintIntVal(Object$* aa, ::sun::font::Font2D* font2D, int32_t ptSize);
	static int32_t getAAHintIntVal(::sun::font::Font2D* font2D, ::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	static int32_t getFMHintIntVal(Object$* fm);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t AA_ON = 16;
	static const int32_t AA_LCD_H = 32;
	static const int32_t AA_LCD_V = 64;
	static const int32_t FRAC_METRICS_ON = 256;
	static const int32_t FRAC_METRICS_SP = 512;
	::java::awt::geom::AffineTransform* devTx = nullptr;
	::java::awt::geom::AffineTransform* glyphTx = nullptr;
	int32_t style = 0;
	int32_t aaHint = 0;
	int32_t fmHint = 0;
	int32_t hashCode$ = 0;
	int32_t valuemask = 0;
};

	} // font
} // sun

#pragma pop_macro("AA_LCD_H")
#pragma pop_macro("AA_LCD_V")
#pragma pop_macro("AA_ON")
#pragma pop_macro("FRAC_METRICS_ON")
#pragma pop_macro("FRAC_METRICS_SP")

#endif // _sun_font_FontStrikeDesc_h_