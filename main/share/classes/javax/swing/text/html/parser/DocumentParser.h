#ifndef _javax_swing_text_html_parser_DocumentParser_h_
#define _javax_swing_text_html_parser_DocumentParser_h_
//$ class javax.swing.text.html.parser.DocumentParser
//$ extends javax.swing.text.html.parser.Parser

#include <java/lang/Array.h>
#include <javax/swing/text/html/parser/Parser.h>

namespace java {
	namespace io {
		class Reader;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLEditorKit$ParserCallback;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {
					class DTD;
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

class $export DocumentParser : public ::javax::swing::text::html::parser::Parser {
	$class(DocumentParser, $NO_CLASS_INIT, ::javax::swing::text::html::parser::Parser)
public:
	DocumentParser();
	using ::javax::swing::text::html::parser::Parser::handleText;
	void init$(::javax::swing::text::html::parser::DTD* dtd);
	void debug($String* msg);
	virtual void handleComment($chars* text) override;
	virtual void handleEmptyTag(::javax::swing::text::html::parser::TagElement* tag) override;
	virtual void handleEndTag(::javax::swing::text::html::parser::TagElement* tag) override;
	virtual void handleError(int32_t ln, $String* errorMsg) override;
	virtual void handleStartTag(::javax::swing::text::html::parser::TagElement* tag) override;
	virtual void handleText($chars* data) override;
	using ::javax::swing::text::html::parser::Parser::parse;
	virtual void parse(::java::io::Reader* in, ::javax::swing::text::html::HTMLEditorKit$ParserCallback* callback, bool ignoreCharSet);
	int32_t inbody = 0;
	int32_t intitle = 0;
	int32_t inhead = 0;
	int32_t instyle = 0;
	int32_t inscript = 0;
	bool seentitle = false;
	::javax::swing::text::html::HTMLEditorKit$ParserCallback* callback = nullptr;
	bool ignoreCharSet = false;
	static const bool debugFlag = false;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_DocumentParser_h_