#ifndef _java_awt_font_GlyphMetrics_h_
#define _java_awt_font_GlyphMetrics_h_
//$ class java.awt.font.GlyphMetrics
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("COMBINING")
#undef COMBINING
#pragma push_macro("COMPONENT")
#undef COMPONENT
#pragma push_macro("LIGATURE")
#undef LIGATURE
#pragma push_macro("STANDARD")
#undef STANDARD
#pragma push_macro("WHITESPACE")
#undef WHITESPACE

namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
			class Rectangle2D$Float;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export GlyphMetrics : public ::java::lang::Object {
	$class(GlyphMetrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphMetrics();
	void init$(float advance, ::java::awt::geom::Rectangle2D* bounds, int8_t glyphType);
	void init$(bool horizontal, float advanceX, float advanceY, ::java::awt::geom::Rectangle2D* bounds, int8_t glyphType);
	float getAdvance();
	float getAdvanceX();
	float getAdvanceY();
	::java::awt::geom::Rectangle2D* getBounds2D();
	float getLSB();
	float getRSB();
	int32_t getType();
	bool isCombining();
	bool isComponent();
	bool isLigature();
	bool isStandard();
	bool isWhitespace();
	bool horizontal = false;
	float advanceX = 0.0;
	float advanceY = 0.0;
	::java::awt::geom::Rectangle2D$Float* bounds = nullptr;
	int8_t glyphType = 0;
	static const int8_t STANDARD = 0;
	static const int8_t LIGATURE = 1;
	static const int8_t COMBINING = 2;
	static const int8_t COMPONENT = 3;
	static const int8_t WHITESPACE = 4;
};

		} // font
	} // awt
} // java

#pragma pop_macro("COMBINING")
#pragma pop_macro("COMPONENT")
#pragma pop_macro("LIGATURE")
#pragma pop_macro("STANDARD")
#pragma pop_macro("WHITESPACE")

#endif // _java_awt_font_GlyphMetrics_h_