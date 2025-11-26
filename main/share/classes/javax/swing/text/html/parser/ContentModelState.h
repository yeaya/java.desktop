#ifndef _javax_swing_text_html_parser_ContentModelState_h_
#define _javax_swing_text_html_parser_ContentModelState_h_
//$ class javax.swing.text.html.parser.ContentModelState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {
					class ContentModel;
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

class ContentModelState : public ::java::lang::Object {
	$class(ContentModelState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ContentModelState();
	void init$(::javax::swing::text::html::parser::ContentModel* model);
	void init$(Object$* content, ::javax::swing::text::html::parser::ContentModelState* next);
	void init$(Object$* content, ::javax::swing::text::html::parser::ContentModelState* next, int64_t value);
	virtual ::javax::swing::text::html::parser::ContentModelState* advance(Object$* token);
	virtual ::javax::swing::text::html::parser::Element* first();
	virtual ::javax::swing::text::html::parser::ContentModel* getModel();
	virtual bool terminate();
	::javax::swing::text::html::parser::ContentModel* model = nullptr;
	int64_t value = 0;
	::javax::swing::text::html::parser::ContentModelState* next = nullptr;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_ContentModelState_h_