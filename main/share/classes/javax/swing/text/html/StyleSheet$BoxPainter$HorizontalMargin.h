#ifndef _javax_swing_text_html_StyleSheet$BoxPainter$HorizontalMargin_h_
#define _javax_swing_text_html_StyleSheet$BoxPainter$HorizontalMargin_h_
//$ class javax.swing.text.html.StyleSheet$BoxPainter$HorizontalMargin
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("RIGHT")
#undef RIGHT

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export StyleSheet$BoxPainter$HorizontalMargin : public ::java::lang::Enum {
	$class(StyleSheet$BoxPainter$HorizontalMargin, 0, ::java::lang::Enum)
public:
	StyleSheet$BoxPainter$HorizontalMargin();
	static $Array<::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin* valueOf($String* name);
	static $Array<::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin>* values();
	static ::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin* LEFT;
	static ::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin* RIGHT;
	static $Array<::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin>* $VALUES;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("LEFT")
#pragma pop_macro("RIGHT")

#endif // _javax_swing_text_html_StyleSheet$BoxPainter$HorizontalMargin_h_