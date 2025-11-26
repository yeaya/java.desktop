#ifndef _javax_swing_text_html_parser_ParserDelegator$1_h_
#define _javax_swing_text_html_parser_ParserDelegator$1_h_
//$ class javax.swing.text.html.parser.ParserDelegator$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

class ParserDelegator$1 : public ::java::security::PrivilegedAction {
	$class(ParserDelegator$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ParserDelegator$1();
	void init$($String* val$name);
	virtual $Object* run() override;
	$String* val$name = nullptr;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_ParserDelegator$1_h_