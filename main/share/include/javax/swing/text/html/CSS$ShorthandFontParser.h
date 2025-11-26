#ifndef _javax_swing_text_html_CSS$ShorthandFontParser_h_
#define _javax_swing_text_html_CSS$ShorthandFontParser_h_
//$ class javax.swing.text.html.CSS$ShorthandFontParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class MutableAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$ShorthandFontParser : public ::java::lang::Object {
	$class(CSS$ShorthandFontParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CSS$ShorthandFontParser();
	void init$();
	static bool isFontStyle($String* string);
	static bool isFontVariant($String* string);
	static bool isFontWeight($String* string);
	static void parseShorthandFont(::javax::swing::text::html::CSS* css, $String* value, ::javax::swing::text::MutableAttributeSet* attr);
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$ShorthandFontParser_h_