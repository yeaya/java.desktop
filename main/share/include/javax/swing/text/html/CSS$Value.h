#ifndef _javax_swing_text_html_CSS$Value_h_
#define _javax_swing_text_html_CSS$Value_h_
//$ class javax.swing.text.html.CSS$Value
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BACKGROUND_FIXED")
#undef BACKGROUND_FIXED
#pragma push_macro("BACKGROUND_NO_REPEAT")
#undef BACKGROUND_NO_REPEAT
#pragma push_macro("BACKGROUND_REPEAT")
#undef BACKGROUND_REPEAT
#pragma push_macro("BACKGROUND_REPEAT_X")
#undef BACKGROUND_REPEAT_X
#pragma push_macro("BACKGROUND_REPEAT_Y")
#undef BACKGROUND_REPEAT_Y
#pragma push_macro("BACKGROUND_SCROLL")
#undef BACKGROUND_SCROLL
#pragma push_macro("CIRCLE")
#undef CIRCLE
#pragma push_macro("DASHED")
#undef DASHED
#pragma push_macro("DECIMAL")
#undef DECIMAL
#pragma push_macro("DISC")
#undef DISC
#pragma push_macro("DOTTED")
#undef DOTTED
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("GROOVE")
#undef GROOVE
#pragma push_macro("HIDDEN")
#undef HIDDEN
#pragma push_macro("INHERITED")
#undef INHERITED
#pragma push_macro("INSET")
#undef INSET
#pragma push_macro("LOWER_ALPHA")
#undef LOWER_ALPHA
#pragma push_macro("LOWER_ROMAN")
#undef LOWER_ROMAN
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("OUTSET")
#undef OUTSET
#pragma push_macro("RIDGE")
#undef RIDGE
#pragma push_macro("SOLID")
#undef SOLID
#pragma push_macro("SQUARE")
#undef SQUARE
#pragma push_macro("UPPER_ALPHA")
#undef UPPER_ALPHA
#pragma push_macro("UPPER_ROMAN")
#undef UPPER_ROMAN

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$Value : public ::java::lang::Object {
	$class(CSS$Value, 0, ::java::lang::Object)
public:
	CSS$Value();
	void init$($String* name);
	virtual $String* toString() override;
	static ::javax::swing::text::html::CSS$Value* INHERITED;
	static ::javax::swing::text::html::CSS$Value* NONE;
	static ::javax::swing::text::html::CSS$Value* HIDDEN;
	static ::javax::swing::text::html::CSS$Value* DOTTED;
	static ::javax::swing::text::html::CSS$Value* DASHED;
	static ::javax::swing::text::html::CSS$Value* SOLID;
	static ::javax::swing::text::html::CSS$Value* DOUBLE;
	static ::javax::swing::text::html::CSS$Value* GROOVE;
	static ::javax::swing::text::html::CSS$Value* RIDGE;
	static ::javax::swing::text::html::CSS$Value* INSET;
	static ::javax::swing::text::html::CSS$Value* OUTSET;
	static ::javax::swing::text::html::CSS$Value* DISC;
	static ::javax::swing::text::html::CSS$Value* CIRCLE;
	static ::javax::swing::text::html::CSS$Value* SQUARE;
	static ::javax::swing::text::html::CSS$Value* DECIMAL;
	static ::javax::swing::text::html::CSS$Value* LOWER_ROMAN;
	static ::javax::swing::text::html::CSS$Value* UPPER_ROMAN;
	static ::javax::swing::text::html::CSS$Value* LOWER_ALPHA;
	static ::javax::swing::text::html::CSS$Value* UPPER_ALPHA;
	static ::javax::swing::text::html::CSS$Value* BACKGROUND_NO_REPEAT;
	static ::javax::swing::text::html::CSS$Value* BACKGROUND_REPEAT;
	static ::javax::swing::text::html::CSS$Value* BACKGROUND_REPEAT_X;
	static ::javax::swing::text::html::CSS$Value* BACKGROUND_REPEAT_Y;
	static ::javax::swing::text::html::CSS$Value* BACKGROUND_SCROLL;
	static ::javax::swing::text::html::CSS$Value* BACKGROUND_FIXED;
	$String* name = nullptr;
	static $Array<::javax::swing::text::html::CSS$Value>* allValues;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_FIXED")
#pragma pop_macro("BACKGROUND_NO_REPEAT")
#pragma pop_macro("BACKGROUND_REPEAT")
#pragma pop_macro("BACKGROUND_REPEAT_X")
#pragma pop_macro("BACKGROUND_REPEAT_Y")
#pragma pop_macro("BACKGROUND_SCROLL")
#pragma pop_macro("CIRCLE")
#pragma pop_macro("DASHED")
#pragma pop_macro("DECIMAL")
#pragma pop_macro("DISC")
#pragma pop_macro("DOTTED")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("GROOVE")
#pragma pop_macro("HIDDEN")
#pragma pop_macro("INHERITED")
#pragma pop_macro("INSET")
#pragma pop_macro("LOWER_ALPHA")
#pragma pop_macro("LOWER_ROMAN")
#pragma pop_macro("NONE")
#pragma pop_macro("OUTSET")
#pragma pop_macro("RIDGE")
#pragma pop_macro("SOLID")
#pragma pop_macro("SQUARE")
#pragma pop_macro("UPPER_ALPHA")
#pragma pop_macro("UPPER_ROMAN")

#endif // _javax_swing_text_html_CSS$Value_h_