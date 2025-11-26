#ifndef _javax_swing_text_html_CSS$ShorthandBorderParser_h_
#define _javax_swing_text_html_CSS$ShorthandBorderParser_h_
//$ class javax.swing.text.html.CSS$ShorthandBorderParser
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
				class CSS$Attribute;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$ShorthandBorderParser : public ::java::lang::Object {
	$class(CSS$ShorthandBorderParser, 0, ::java::lang::Object)
public:
	CSS$ShorthandBorderParser();
	void init$();
	static void parseShorthandBorder(::javax::swing::text::MutableAttributeSet* attributes, ::javax::swing::text::html::CSS$Attribute* key, $String* value);
	static $Array<::javax::swing::text::html::CSS$Attribute>* keys;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$ShorthandBorderParser_h_