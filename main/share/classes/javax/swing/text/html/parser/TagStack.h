#ifndef _javax_swing_text_html_parser_TagStack_h_
#define _javax_swing_text_html_parser_TagStack_h_
//$ class javax.swing.text.html.parser.TagStack
//$ extends javax.swing.text.html.parser.DTDConstants

#include <javax/swing/text/html/parser/DTDConstants.h>

namespace java {
	namespace util {
		class BitSet;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {
					class ContentModel;
					class ContentModelState;
					class Element;
					class TagElement;
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

class TagStack : public ::javax::swing::text::html::parser::DTDConstants {
	$class(TagStack, $NO_CLASS_INIT, ::javax::swing::text::html::parser::DTDConstants)
public:
	TagStack();
	void init$(::javax::swing::text::html::parser::TagElement* tag, ::javax::swing::text::html::parser::TagStack* next);
	bool advance(::javax::swing::text::html::parser::Element* elem);
	::javax::swing::text::html::parser::ContentModel* contentModel();
	bool excluded(int32_t elemIndex);
	::javax::swing::text::html::parser::Element* first();
	bool terminate();
	virtual $String* toString() override;
	::javax::swing::text::html::parser::TagElement* tag = nullptr;
	::javax::swing::text::html::parser::Element* elem = nullptr;
	::javax::swing::text::html::parser::ContentModelState* state = nullptr;
	::javax::swing::text::html::parser::TagStack* next = nullptr;
	::java::util::BitSet* inclusions = nullptr;
	::java::util::BitSet* exclusions = nullptr;
	bool net = false;
	bool pre = false;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_TagStack_h_