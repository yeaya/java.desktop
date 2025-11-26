#ifndef _javax_swing_text_html_CSS$ShorthandMarginParser_h_
#define _javax_swing_text_html_CSS$ShorthandMarginParser_h_
//$ class javax.swing.text.html.CSS$ShorthandMarginParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
				class CSS$Attribute;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$ShorthandMarginParser : public ::java::lang::Object {
	$class(CSS$ShorthandMarginParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CSS$ShorthandMarginParser();
	void init$();
	static void parseShorthandMargin(::javax::swing::text::html::CSS* css, $String* value, ::javax::swing::text::MutableAttributeSet* attr, $Array<::javax::swing::text::html::CSS$Attribute>* names);
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$ShorthandMarginParser_h_