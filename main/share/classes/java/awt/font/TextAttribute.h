#ifndef _java_awt_font_TextAttribute_h_
#define _java_awt_font_TextAttribute_h_
//$ class java.awt.font.TextAttribute
//$ extends java.text.AttributedCharacterIterator$Attribute

#include <java/text/AttributedCharacterIterator$Attribute.h>

#pragma push_macro("BACKGROUND")
#undef BACKGROUND
#pragma push_macro("BIDI_EMBEDDING")
#undef BIDI_EMBEDDING
#pragma push_macro("CHAR_REPLACEMENT")
#undef CHAR_REPLACEMENT
#pragma push_macro("FAMILY")
#undef FAMILY
#pragma push_macro("FONT")
#undef FONT
#pragma push_macro("FOREGROUND")
#undef FOREGROUND
#pragma push_macro("INPUT_METHOD_HIGHLIGHT")
#undef INPUT_METHOD_HIGHLIGHT
#pragma push_macro("INPUT_METHOD_UNDERLINE")
#undef INPUT_METHOD_UNDERLINE
#pragma push_macro("JUSTIFICATION")
#undef JUSTIFICATION
#pragma push_macro("JUSTIFICATION_FULL")
#undef JUSTIFICATION_FULL
#pragma push_macro("JUSTIFICATION_NONE")
#undef JUSTIFICATION_NONE
#pragma push_macro("KERNING")
#undef KERNING
#pragma push_macro("KERNING_ON")
#undef KERNING_ON
#pragma push_macro("LIGATURES")
#undef LIGATURES
#pragma push_macro("LIGATURES_ON")
#undef LIGATURES_ON
#pragma push_macro("NUMERIC_SHAPING")
#undef NUMERIC_SHAPING
#pragma push_macro("POSTURE")
#undef POSTURE
#pragma push_macro("POSTURE_OBLIQUE")
#undef POSTURE_OBLIQUE
#pragma push_macro("POSTURE_REGULAR")
#undef POSTURE_REGULAR
#pragma push_macro("RUN_DIRECTION")
#undef RUN_DIRECTION
#pragma push_macro("RUN_DIRECTION_LTR")
#undef RUN_DIRECTION_LTR
#pragma push_macro("RUN_DIRECTION_RTL")
#undef RUN_DIRECTION_RTL
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("STRIKETHROUGH")
#undef STRIKETHROUGH
#pragma push_macro("STRIKETHROUGH_ON")
#undef STRIKETHROUGH_ON
#pragma push_macro("SUPERSCRIPT")
#undef SUPERSCRIPT
#pragma push_macro("SUPERSCRIPT_SUB")
#undef SUPERSCRIPT_SUB
#pragma push_macro("SUPERSCRIPT_SUPER")
#undef SUPERSCRIPT_SUPER
#pragma push_macro("SWAP_COLORS")
#undef SWAP_COLORS
#pragma push_macro("SWAP_COLORS_ON")
#undef SWAP_COLORS_ON
#pragma push_macro("TRACKING")
#undef TRACKING
#pragma push_macro("TRACKING_LOOSE")
#undef TRACKING_LOOSE
#pragma push_macro("TRACKING_TIGHT")
#undef TRACKING_TIGHT
#pragma push_macro("TRANSFORM")
#undef TRANSFORM
#pragma push_macro("UNDERLINE")
#undef UNDERLINE
#pragma push_macro("UNDERLINE_LOW_DASHED")
#undef UNDERLINE_LOW_DASHED
#pragma push_macro("UNDERLINE_LOW_DOTTED")
#undef UNDERLINE_LOW_DOTTED
#pragma push_macro("UNDERLINE_LOW_GRAY")
#undef UNDERLINE_LOW_GRAY
#pragma push_macro("UNDERLINE_LOW_ONE_PIXEL")
#undef UNDERLINE_LOW_ONE_PIXEL
#pragma push_macro("UNDERLINE_LOW_TWO_PIXEL")
#undef UNDERLINE_LOW_TWO_PIXEL
#pragma push_macro("UNDERLINE_ON")
#undef UNDERLINE_ON
#pragma push_macro("WEIGHT")
#undef WEIGHT
#pragma push_macro("WEIGHT_BOLD")
#undef WEIGHT_BOLD
#pragma push_macro("WEIGHT_DEMIBOLD")
#undef WEIGHT_DEMIBOLD
#pragma push_macro("WEIGHT_DEMILIGHT")
#undef WEIGHT_DEMILIGHT
#pragma push_macro("WEIGHT_EXTRABOLD")
#undef WEIGHT_EXTRABOLD
#pragma push_macro("WEIGHT_EXTRA_LIGHT")
#undef WEIGHT_EXTRA_LIGHT
#pragma push_macro("WEIGHT_HEAVY")
#undef WEIGHT_HEAVY
#pragma push_macro("WEIGHT_LIGHT")
#undef WEIGHT_LIGHT
#pragma push_macro("WEIGHT_MEDIUM")
#undef WEIGHT_MEDIUM
#pragma push_macro("WEIGHT_REGULAR")
#undef WEIGHT_REGULAR
#pragma push_macro("WEIGHT_SEMIBOLD")
#undef WEIGHT_SEMIBOLD
#pragma push_macro("WEIGHT_ULTRABOLD")
#undef WEIGHT_ULTRABOLD
#pragma push_macro("WIDTH")
#undef WIDTH
#pragma push_macro("WIDTH_CONDENSED")
#undef WIDTH_CONDENSED
#pragma push_macro("WIDTH_EXTENDED")
#undef WIDTH_EXTENDED
#pragma push_macro("WIDTH_REGULAR")
#undef WIDTH_REGULAR
#pragma push_macro("WIDTH_SEMI_CONDENSED")
#undef WIDTH_SEMI_CONDENSED
#pragma push_macro("WIDTH_SEMI_EXTENDED")
#undef WIDTH_SEMI_EXTENDED

namespace java {
	namespace lang {
		class Boolean;
		class Float;
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export TextAttribute : public ::java::text::AttributedCharacterIterator$Attribute {
	$class(TextAttribute, 0, ::java::text::AttributedCharacterIterator$Attribute)
public:
	TextAttribute();
	void init$($String* name);
	virtual $Object* readResolve() override;
	static ::java::util::Map* instanceMap;
	static const int64_t serialVersionUID = (int64_t)0x6B789D8C0DE80D46;
	static ::java::awt::font::TextAttribute* FAMILY;
	static ::java::awt::font::TextAttribute* WEIGHT;
	static ::java::lang::Float* WEIGHT_EXTRA_LIGHT;
	static ::java::lang::Float* WEIGHT_LIGHT;
	static ::java::lang::Float* WEIGHT_DEMILIGHT;
	static ::java::lang::Float* WEIGHT_REGULAR;
	static ::java::lang::Float* WEIGHT_SEMIBOLD;
	static ::java::lang::Float* WEIGHT_MEDIUM;
	static ::java::lang::Float* WEIGHT_DEMIBOLD;
	static ::java::lang::Float* WEIGHT_BOLD;
	static ::java::lang::Float* WEIGHT_HEAVY;
	static ::java::lang::Float* WEIGHT_EXTRABOLD;
	static ::java::lang::Float* WEIGHT_ULTRABOLD;
	static ::java::awt::font::TextAttribute* WIDTH;
	static ::java::lang::Float* WIDTH_CONDENSED;
	static ::java::lang::Float* WIDTH_SEMI_CONDENSED;
	static ::java::lang::Float* WIDTH_REGULAR;
	static ::java::lang::Float* WIDTH_SEMI_EXTENDED;
	static ::java::lang::Float* WIDTH_EXTENDED;
	static ::java::awt::font::TextAttribute* POSTURE;
	static ::java::lang::Float* POSTURE_REGULAR;
	static ::java::lang::Float* POSTURE_OBLIQUE;
	static ::java::awt::font::TextAttribute* SIZE;
	static ::java::awt::font::TextAttribute* TRANSFORM;
	static ::java::awt::font::TextAttribute* SUPERSCRIPT;
	static ::java::lang::Integer* SUPERSCRIPT_SUPER;
	static ::java::lang::Integer* SUPERSCRIPT_SUB;
	static ::java::awt::font::TextAttribute* FONT;
	static ::java::awt::font::TextAttribute* CHAR_REPLACEMENT;
	static ::java::awt::font::TextAttribute* FOREGROUND;
	static ::java::awt::font::TextAttribute* BACKGROUND;
	static ::java::awt::font::TextAttribute* UNDERLINE;
	static ::java::lang::Integer* UNDERLINE_ON;
	static ::java::awt::font::TextAttribute* STRIKETHROUGH;
	static ::java::lang::Boolean* STRIKETHROUGH_ON;
	static ::java::awt::font::TextAttribute* RUN_DIRECTION;
	static ::java::lang::Boolean* RUN_DIRECTION_LTR;
	static ::java::lang::Boolean* RUN_DIRECTION_RTL;
	static ::java::awt::font::TextAttribute* BIDI_EMBEDDING;
	static ::java::awt::font::TextAttribute* JUSTIFICATION;
	static ::java::lang::Float* JUSTIFICATION_FULL;
	static ::java::lang::Float* JUSTIFICATION_NONE;
	static ::java::awt::font::TextAttribute* INPUT_METHOD_HIGHLIGHT;
	static ::java::awt::font::TextAttribute* INPUT_METHOD_UNDERLINE;
	static ::java::lang::Integer* UNDERLINE_LOW_ONE_PIXEL;
	static ::java::lang::Integer* UNDERLINE_LOW_TWO_PIXEL;
	static ::java::lang::Integer* UNDERLINE_LOW_DOTTED;
	static ::java::lang::Integer* UNDERLINE_LOW_GRAY;
	static ::java::lang::Integer* UNDERLINE_LOW_DASHED;
	static ::java::awt::font::TextAttribute* SWAP_COLORS;
	static ::java::lang::Boolean* SWAP_COLORS_ON;
	static ::java::awt::font::TextAttribute* NUMERIC_SHAPING;
	static ::java::awt::font::TextAttribute* KERNING;
	static ::java::lang::Integer* KERNING_ON;
	static ::java::awt::font::TextAttribute* LIGATURES;
	static ::java::lang::Integer* LIGATURES_ON;
	static ::java::awt::font::TextAttribute* TRACKING;
	static ::java::lang::Float* TRACKING_TIGHT;
	static ::java::lang::Float* TRACKING_LOOSE;
};

		} // font
	} // awt
} // java

#pragma pop_macro("BACKGROUND")
#pragma pop_macro("BIDI_EMBEDDING")
#pragma pop_macro("CHAR_REPLACEMENT")
#pragma pop_macro("FAMILY")
#pragma pop_macro("FONT")
#pragma pop_macro("FOREGROUND")
#pragma pop_macro("INPUT_METHOD_HIGHLIGHT")
#pragma pop_macro("INPUT_METHOD_UNDERLINE")
#pragma pop_macro("JUSTIFICATION")
#pragma pop_macro("JUSTIFICATION_FULL")
#pragma pop_macro("JUSTIFICATION_NONE")
#pragma pop_macro("KERNING")
#pragma pop_macro("KERNING_ON")
#pragma pop_macro("LIGATURES")
#pragma pop_macro("LIGATURES_ON")
#pragma pop_macro("NUMERIC_SHAPING")
#pragma pop_macro("POSTURE")
#pragma pop_macro("POSTURE_OBLIQUE")
#pragma pop_macro("POSTURE_REGULAR")
#pragma pop_macro("RUN_DIRECTION")
#pragma pop_macro("RUN_DIRECTION_LTR")
#pragma pop_macro("RUN_DIRECTION_RTL")
#pragma pop_macro("SIZE")
#pragma pop_macro("STRIKETHROUGH")
#pragma pop_macro("STRIKETHROUGH_ON")
#pragma pop_macro("SUPERSCRIPT")
#pragma pop_macro("SUPERSCRIPT_SUB")
#pragma pop_macro("SUPERSCRIPT_SUPER")
#pragma pop_macro("SWAP_COLORS")
#pragma pop_macro("SWAP_COLORS_ON")
#pragma pop_macro("TRACKING")
#pragma pop_macro("TRACKING_LOOSE")
#pragma pop_macro("TRACKING_TIGHT")
#pragma pop_macro("TRANSFORM")
#pragma pop_macro("UNDERLINE")
#pragma pop_macro("UNDERLINE_LOW_DASHED")
#pragma pop_macro("UNDERLINE_LOW_DOTTED")
#pragma pop_macro("UNDERLINE_LOW_GRAY")
#pragma pop_macro("UNDERLINE_LOW_ONE_PIXEL")
#pragma pop_macro("UNDERLINE_LOW_TWO_PIXEL")
#pragma pop_macro("UNDERLINE_ON")
#pragma pop_macro("WEIGHT")
#pragma pop_macro("WEIGHT_BOLD")
#pragma pop_macro("WEIGHT_DEMIBOLD")
#pragma pop_macro("WEIGHT_DEMILIGHT")
#pragma pop_macro("WEIGHT_EXTRABOLD")
#pragma pop_macro("WEIGHT_EXTRA_LIGHT")
#pragma pop_macro("WEIGHT_HEAVY")
#pragma pop_macro("WEIGHT_LIGHT")
#pragma pop_macro("WEIGHT_MEDIUM")
#pragma pop_macro("WEIGHT_REGULAR")
#pragma pop_macro("WEIGHT_SEMIBOLD")
#pragma pop_macro("WEIGHT_ULTRABOLD")
#pragma pop_macro("WIDTH")
#pragma pop_macro("WIDTH_CONDENSED")
#pragma pop_macro("WIDTH_EXTENDED")
#pragma pop_macro("WIDTH_REGULAR")
#pragma pop_macro("WIDTH_SEMI_CONDENSED")
#pragma pop_macro("WIDTH_SEMI_EXTENDED")

#endif // _java_awt_font_TextAttribute_h_