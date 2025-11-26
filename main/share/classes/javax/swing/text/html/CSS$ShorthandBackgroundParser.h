#ifndef _javax_swing_text_html_CSS$ShorthandBackgroundParser_h_
#define _javax_swing_text_html_CSS$ShorthandBackgroundParser_h_
//$ class javax.swing.text.html.CSS$ShorthandBackgroundParser
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

class $export CSS$ShorthandBackgroundParser : public ::java::lang::Object {
	$class(CSS$ShorthandBackgroundParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CSS$ShorthandBackgroundParser();
	void init$();
	static bool isAttachment($String* string);
	static bool isColor($String* string);
	static bool isImage($String* string);
	static bool isPosition($String* string);
	static bool isRepeat($String* string);
	static void parseShorthandBackground(::javax::swing::text::html::CSS* css, $String* value, ::javax::swing::text::MutableAttributeSet* attr);
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$ShorthandBackgroundParser_h_