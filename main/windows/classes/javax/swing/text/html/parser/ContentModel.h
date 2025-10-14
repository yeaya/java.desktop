#ifndef _javax_swing_text_html_parser_ContentModel_h_
#define _javax_swing_text_html_parser_ContentModel_h_
//$ class javax.swing.text.html.parser.ContentModel
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Vector;
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

class $export ContentModel : public ::java::io::Serializable {
	$class(ContentModel, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ContentModel();
	void init$();
	void init$(::javax::swing::text::html::parser::Element* content);
	void init$(int32_t type, ::javax::swing::text::html::parser::ContentModel* content);
	void init$(int32_t type, Object$* content, ::javax::swing::text::html::parser::ContentModel* next);
	bool empty();
	bool first(Object$* token);
	::javax::swing::text::html::parser::Element* first();
	void getElements(::java::util::Vector* elemVec);
	virtual $String* toString() override;
	int32_t type = 0;
	$Object* content = nullptr;
	::javax::swing::text::html::parser::ContentModel* next = nullptr;
	$booleans* valSet = nullptr;
	$booleans* val = nullptr;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_ContentModel_h_