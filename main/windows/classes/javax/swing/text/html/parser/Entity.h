#ifndef _javax_swing_text_html_parser_Entity_h_
#define _javax_swing_text_html_parser_Entity_h_
//$ class javax.swing.text.html.parser.Entity
//$ extends javax.swing.text.html.parser.DTDConstants

#include <java/lang/Array.h>
#include <javax/swing/text/html/parser/DTDConstants.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

class $export Entity : public ::javax::swing::text::html::parser::DTDConstants {
	$class(Entity, 0, ::javax::swing::text::html::parser::DTDConstants)
public:
	Entity();
	void init$($String* name, int32_t type, $chars* data);
	$chars* getData();
	$String* getName();
	$String* getString();
	int32_t getType();
	bool isGeneral();
	bool isParameter();
	static int32_t name2type($String* nm);
	$String* name = nullptr;
	int32_t type = 0;
	$chars* data = nullptr;
	static ::java::util::Hashtable* entityTypes;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_Entity_h_