#ifndef _javax_swing_text_html_CSS$Attribute_h_
#define _javax_swing_text_html_CSS$Attribute_h_
//$ class javax.swing.text.html.CSS$Attribute
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL_BORDER_COLORS")
#undef ALL_BORDER_COLORS
#pragma push_macro("ALL_BORDER_STYLES")
#undef ALL_BORDER_STYLES
#pragma push_macro("ALL_BORDER_WIDTHS")
#undef ALL_BORDER_WIDTHS
#pragma push_macro("ALL_MARGINS")
#undef ALL_MARGINS
#pragma push_macro("ALL_PADDING")
#undef ALL_PADDING
#pragma push_macro("BACKGROUND")
#undef BACKGROUND
#pragma push_macro("BACKGROUND_ATTACHMENT")
#undef BACKGROUND_ATTACHMENT
#pragma push_macro("BACKGROUND_COLOR")
#undef BACKGROUND_COLOR
#pragma push_macro("BACKGROUND_IMAGE")
#undef BACKGROUND_IMAGE
#pragma push_macro("BACKGROUND_POSITION")
#undef BACKGROUND_POSITION
#pragma push_macro("BACKGROUND_REPEAT")
#undef BACKGROUND_REPEAT
#pragma push_macro("BORDER")
#undef BORDER
#pragma push_macro("BORDER_BOTTOM")
#undef BORDER_BOTTOM
#pragma push_macro("BORDER_BOTTOM_COLOR")
#undef BORDER_BOTTOM_COLOR
#pragma push_macro("BORDER_BOTTOM_STYLE")
#undef BORDER_BOTTOM_STYLE
#pragma push_macro("BORDER_BOTTOM_WIDTH")
#undef BORDER_BOTTOM_WIDTH
#pragma push_macro("BORDER_COLOR")
#undef BORDER_COLOR
#pragma push_macro("BORDER_LEFT")
#undef BORDER_LEFT
#pragma push_macro("BORDER_LEFT_COLOR")
#undef BORDER_LEFT_COLOR
#pragma push_macro("BORDER_LEFT_STYLE")
#undef BORDER_LEFT_STYLE
#pragma push_macro("BORDER_LEFT_WIDTH")
#undef BORDER_LEFT_WIDTH
#pragma push_macro("BORDER_RIGHT")
#undef BORDER_RIGHT
#pragma push_macro("BORDER_RIGHT_COLOR")
#undef BORDER_RIGHT_COLOR
#pragma push_macro("BORDER_RIGHT_STYLE")
#undef BORDER_RIGHT_STYLE
#pragma push_macro("BORDER_RIGHT_WIDTH")
#undef BORDER_RIGHT_WIDTH
#pragma push_macro("BORDER_SPACING")
#undef BORDER_SPACING
#pragma push_macro("BORDER_STYLE")
#undef BORDER_STYLE
#pragma push_macro("BORDER_TOP")
#undef BORDER_TOP
#pragma push_macro("BORDER_TOP_COLOR")
#undef BORDER_TOP_COLOR
#pragma push_macro("BORDER_TOP_STYLE")
#undef BORDER_TOP_STYLE
#pragma push_macro("BORDER_TOP_WIDTH")
#undef BORDER_TOP_WIDTH
#pragma push_macro("BORDER_WIDTH")
#undef BORDER_WIDTH
#pragma push_macro("CAPTION_SIDE")
#undef CAPTION_SIDE
#pragma push_macro("CLEAR")
#undef CLEAR
#pragma push_macro("COLOR")
#undef COLOR
#pragma push_macro("DISPLAY")
#undef DISPLAY
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("FONT")
#undef FONT
#pragma push_macro("FONT_FAMILY")
#undef FONT_FAMILY
#pragma push_macro("FONT_SIZE")
#undef FONT_SIZE
#pragma push_macro("FONT_STYLE")
#undef FONT_STYLE
#pragma push_macro("FONT_VARIANT")
#undef FONT_VARIANT
#pragma push_macro("FONT_WEIGHT")
#undef FONT_WEIGHT
#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("LETTER_SPACING")
#undef LETTER_SPACING
#pragma push_macro("LINE_HEIGHT")
#undef LINE_HEIGHT
#pragma push_macro("LIST_STYLE")
#undef LIST_STYLE
#pragma push_macro("LIST_STYLE_IMAGE")
#undef LIST_STYLE_IMAGE
#pragma push_macro("LIST_STYLE_POSITION")
#undef LIST_STYLE_POSITION
#pragma push_macro("LIST_STYLE_TYPE")
#undef LIST_STYLE_TYPE
#pragma push_macro("MARGIN")
#undef MARGIN
#pragma push_macro("MARGIN_BOTTOM")
#undef MARGIN_BOTTOM
#pragma push_macro("MARGIN_LEFT")
#undef MARGIN_LEFT
#pragma push_macro("MARGIN_LEFT_LTR")
#undef MARGIN_LEFT_LTR
#pragma push_macro("MARGIN_LEFT_RTL")
#undef MARGIN_LEFT_RTL
#pragma push_macro("MARGIN_RIGHT")
#undef MARGIN_RIGHT
#pragma push_macro("MARGIN_RIGHT_LTR")
#undef MARGIN_RIGHT_LTR
#pragma push_macro("MARGIN_RIGHT_RTL")
#undef MARGIN_RIGHT_RTL
#pragma push_macro("MARGIN_TOP")
#undef MARGIN_TOP
#pragma push_macro("PADDING")
#undef PADDING
#pragma push_macro("PADDING_BOTTOM")
#undef PADDING_BOTTOM
#pragma push_macro("PADDING_LEFT")
#undef PADDING_LEFT
#pragma push_macro("PADDING_RIGHT")
#undef PADDING_RIGHT
#pragma push_macro("PADDING_TOP")
#undef PADDING_TOP
#pragma push_macro("TEXT_ALIGN")
#undef TEXT_ALIGN
#pragma push_macro("TEXT_DECORATION")
#undef TEXT_DECORATION
#pragma push_macro("TEXT_INDENT")
#undef TEXT_INDENT
#pragma push_macro("TEXT_TRANSFORM")
#undef TEXT_TRANSFORM
#pragma push_macro("VERTICAL_ALIGN")
#undef VERTICAL_ALIGN
#pragma push_macro("WHITE_SPACE")
#undef WHITE_SPACE
#pragma push_macro("WIDTH")
#undef WIDTH
#pragma push_macro("WORD_SPACING")
#undef WORD_SPACING

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$Attribute : public ::java::lang::Object {
	$class(CSS$Attribute, 0, ::java::lang::Object)
public:
	CSS$Attribute();
	void init$($String* name, $String* defaultValue, bool inherited);
	$String* getDefaultValue();
	bool isInherited();
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* defaultValue = nullptr;
	bool inherited = false;
	static ::javax::swing::text::html::CSS$Attribute* BACKGROUND;
	static ::javax::swing::text::html::CSS$Attribute* BACKGROUND_ATTACHMENT;
	static ::javax::swing::text::html::CSS$Attribute* BACKGROUND_COLOR;
	static ::javax::swing::text::html::CSS$Attribute* BACKGROUND_IMAGE;
	static ::javax::swing::text::html::CSS$Attribute* BACKGROUND_POSITION;
	static ::javax::swing::text::html::CSS$Attribute* BACKGROUND_REPEAT;
	static ::javax::swing::text::html::CSS$Attribute* BORDER;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_BOTTOM;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_BOTTOM_COLOR;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_BOTTOM_STYLE;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_BOTTOM_WIDTH;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_COLOR;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_LEFT;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_LEFT_COLOR;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_LEFT_STYLE;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_LEFT_WIDTH;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_RIGHT;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_RIGHT_COLOR;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_RIGHT_STYLE;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_RIGHT_WIDTH;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_STYLE;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_TOP;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_TOP_COLOR;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_TOP_STYLE;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_TOP_WIDTH;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_WIDTH;
	static ::javax::swing::text::html::CSS$Attribute* CLEAR;
	static ::javax::swing::text::html::CSS$Attribute* COLOR;
	static ::javax::swing::text::html::CSS$Attribute* DISPLAY;
	static ::javax::swing::text::html::CSS$Attribute* FLOAT;
	static ::javax::swing::text::html::CSS$Attribute* FONT;
	static ::javax::swing::text::html::CSS$Attribute* FONT_FAMILY;
	static ::javax::swing::text::html::CSS$Attribute* FONT_SIZE;
	static ::javax::swing::text::html::CSS$Attribute* FONT_STYLE;
	static ::javax::swing::text::html::CSS$Attribute* FONT_VARIANT;
	static ::javax::swing::text::html::CSS$Attribute* FONT_WEIGHT;
	static ::javax::swing::text::html::CSS$Attribute* HEIGHT;
	static ::javax::swing::text::html::CSS$Attribute* LETTER_SPACING;
	static ::javax::swing::text::html::CSS$Attribute* LINE_HEIGHT;
	static ::javax::swing::text::html::CSS$Attribute* LIST_STYLE;
	static ::javax::swing::text::html::CSS$Attribute* LIST_STYLE_IMAGE;
	static ::javax::swing::text::html::CSS$Attribute* LIST_STYLE_POSITION;
	static ::javax::swing::text::html::CSS$Attribute* LIST_STYLE_TYPE;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN_BOTTOM;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN_LEFT;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN_RIGHT;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN_LEFT_LTR;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN_LEFT_RTL;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN_RIGHT_LTR;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN_RIGHT_RTL;
	static ::javax::swing::text::html::CSS$Attribute* MARGIN_TOP;
	static ::javax::swing::text::html::CSS$Attribute* PADDING;
	static ::javax::swing::text::html::CSS$Attribute* PADDING_BOTTOM;
	static ::javax::swing::text::html::CSS$Attribute* PADDING_LEFT;
	static ::javax::swing::text::html::CSS$Attribute* PADDING_RIGHT;
	static ::javax::swing::text::html::CSS$Attribute* PADDING_TOP;
	static ::javax::swing::text::html::CSS$Attribute* TEXT_ALIGN;
	static ::javax::swing::text::html::CSS$Attribute* TEXT_DECORATION;
	static ::javax::swing::text::html::CSS$Attribute* TEXT_INDENT;
	static ::javax::swing::text::html::CSS$Attribute* TEXT_TRANSFORM;
	static ::javax::swing::text::html::CSS$Attribute* VERTICAL_ALIGN;
	static ::javax::swing::text::html::CSS$Attribute* WORD_SPACING;
	static ::javax::swing::text::html::CSS$Attribute* WHITE_SPACE;
	static ::javax::swing::text::html::CSS$Attribute* WIDTH;
	static ::javax::swing::text::html::CSS$Attribute* BORDER_SPACING;
	static ::javax::swing::text::html::CSS$Attribute* CAPTION_SIDE;
	static $Array<::javax::swing::text::html::CSS$Attribute>* allAttributes;
	static $Array<::javax::swing::text::html::CSS$Attribute>* ALL_MARGINS;
	static $Array<::javax::swing::text::html::CSS$Attribute>* ALL_PADDING;
	static $Array<::javax::swing::text::html::CSS$Attribute>* ALL_BORDER_WIDTHS;
	static $Array<::javax::swing::text::html::CSS$Attribute>* ALL_BORDER_STYLES;
	static $Array<::javax::swing::text::html::CSS$Attribute>* ALL_BORDER_COLORS;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("ALL_BORDER_COLORS")
#pragma pop_macro("ALL_BORDER_STYLES")
#pragma pop_macro("ALL_BORDER_WIDTHS")
#pragma pop_macro("ALL_MARGINS")
#pragma pop_macro("ALL_PADDING")
#pragma pop_macro("BACKGROUND")
#pragma pop_macro("BACKGROUND_ATTACHMENT")
#pragma pop_macro("BACKGROUND_COLOR")
#pragma pop_macro("BACKGROUND_IMAGE")
#pragma pop_macro("BACKGROUND_POSITION")
#pragma pop_macro("BACKGROUND_REPEAT")
#pragma pop_macro("BORDER")
#pragma pop_macro("BORDER_BOTTOM")
#pragma pop_macro("BORDER_BOTTOM_COLOR")
#pragma pop_macro("BORDER_BOTTOM_STYLE")
#pragma pop_macro("BORDER_BOTTOM_WIDTH")
#pragma pop_macro("BORDER_COLOR")
#pragma pop_macro("BORDER_LEFT")
#pragma pop_macro("BORDER_LEFT_COLOR")
#pragma pop_macro("BORDER_LEFT_STYLE")
#pragma pop_macro("BORDER_LEFT_WIDTH")
#pragma pop_macro("BORDER_RIGHT")
#pragma pop_macro("BORDER_RIGHT_COLOR")
#pragma pop_macro("BORDER_RIGHT_STYLE")
#pragma pop_macro("BORDER_RIGHT_WIDTH")
#pragma pop_macro("BORDER_SPACING")
#pragma pop_macro("BORDER_STYLE")
#pragma pop_macro("BORDER_TOP")
#pragma pop_macro("BORDER_TOP_COLOR")
#pragma pop_macro("BORDER_TOP_STYLE")
#pragma pop_macro("BORDER_TOP_WIDTH")
#pragma pop_macro("BORDER_WIDTH")
#pragma pop_macro("CAPTION_SIDE")
#pragma pop_macro("CLEAR")
#pragma pop_macro("COLOR")
#pragma pop_macro("DISPLAY")
#pragma pop_macro("FLOAT")
#pragma pop_macro("FONT")
#pragma pop_macro("FONT_FAMILY")
#pragma pop_macro("FONT_SIZE")
#pragma pop_macro("FONT_STYLE")
#pragma pop_macro("FONT_VARIANT")
#pragma pop_macro("FONT_WEIGHT")
#pragma pop_macro("HEIGHT")
#pragma pop_macro("LETTER_SPACING")
#pragma pop_macro("LINE_HEIGHT")
#pragma pop_macro("LIST_STYLE")
#pragma pop_macro("LIST_STYLE_IMAGE")
#pragma pop_macro("LIST_STYLE_POSITION")
#pragma pop_macro("LIST_STYLE_TYPE")
#pragma pop_macro("MARGIN")
#pragma pop_macro("MARGIN_BOTTOM")
#pragma pop_macro("MARGIN_LEFT")
#pragma pop_macro("MARGIN_LEFT_LTR")
#pragma pop_macro("MARGIN_LEFT_RTL")
#pragma pop_macro("MARGIN_RIGHT")
#pragma pop_macro("MARGIN_RIGHT_LTR")
#pragma pop_macro("MARGIN_RIGHT_RTL")
#pragma pop_macro("MARGIN_TOP")
#pragma pop_macro("PADDING")
#pragma pop_macro("PADDING_BOTTOM")
#pragma pop_macro("PADDING_LEFT")
#pragma pop_macro("PADDING_RIGHT")
#pragma pop_macro("PADDING_TOP")
#pragma pop_macro("TEXT_ALIGN")
#pragma pop_macro("TEXT_DECORATION")
#pragma pop_macro("TEXT_INDENT")
#pragma pop_macro("TEXT_TRANSFORM")
#pragma pop_macro("VERTICAL_ALIGN")
#pragma pop_macro("WHITE_SPACE")
#pragma pop_macro("WIDTH")
#pragma pop_macro("WORD_SPACING")

#endif // _javax_swing_text_html_CSS$Attribute_h_