#ifndef _javax_swing_text_html_parser_TagElement_h_
#define _javax_swing_text_html_parser_TagElement_h_
//$ class javax.swing.text.html.parser.TagElement
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {
					class Element;
				}
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

class $import TagElement : public ::java::lang::Object {
	$class(TagElement, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TagElement();
	void init$(::javax::swing::text::html::parser::Element* elem);
	void init$(::javax::swing::text::html::parser::Element* elem, bool fictional);
	virtual bool breaksFlow();
	virtual bool fictional();
	virtual ::javax::swing::text::html::parser::Element* getElement();
	virtual ::javax::swing::text::html::HTML$Tag* getHTMLTag();
	virtual bool isPreformatted();
	::javax::swing::text::html::parser::Element* elem = nullptr;
	::javax::swing::text::html::HTML$Tag* htmlTag = nullptr;
	bool insertedByErrorRecovery = false;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_TagElement_h_