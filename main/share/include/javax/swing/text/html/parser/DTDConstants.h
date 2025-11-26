#ifndef _javax_swing_text_html_parser_DTDConstants_h_
#define _javax_swing_text_html_parser_DTDConstants_h_
//$ interface javax.swing.text.html.parser.DTDConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANY")
#undef ANY
#pragma push_macro("CDATA")
#undef CDATA
#pragma push_macro("CONREF")
#undef CONREF
#pragma push_macro("CURRENT")
#undef CURRENT
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("ENDTAG")
#undef ENDTAG
#pragma push_macro("ENTITIES")
#undef ENTITIES
#pragma push_macro("ENTITY")
#undef ENTITY
#pragma push_macro("FIXED")
#undef FIXED
#pragma push_macro("GENERAL")
#undef GENERAL
#pragma push_macro("ID")
#undef ID
#pragma push_macro("IDREF")
#undef IDREF
#pragma push_macro("IDREFS")
#undef IDREFS
#pragma push_macro("IMPLIED")
#undef IMPLIED
#pragma push_macro("MD")
#undef MD
#pragma push_macro("MODEL")
#undef MODEL
#pragma push_macro("MS")
#undef MS
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("NMTOKEN")
#undef NMTOKEN
#pragma push_macro("NMTOKENS")
#undef NMTOKENS
#pragma push_macro("NOTATION")
#undef NOTATION
#pragma push_macro("NUMBER")
#undef NUMBER
#pragma push_macro("NUMBERS")
#undef NUMBERS
#pragma push_macro("NUTOKEN")
#undef NUTOKEN
#pragma push_macro("NUTOKENS")
#undef NUTOKENS
#pragma push_macro("PARAMETER")
#undef PARAMETER
#pragma push_macro("PI")
#undef PI
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("RCDATA")
#undef RCDATA
#pragma push_macro("REQUIRED")
#undef REQUIRED
#pragma push_macro("SDATA")
#undef SDATA
#pragma push_macro("STARTTAG")
#undef STARTTAG
#pragma push_macro("SYSTEM")
#undef SYSTEM

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

class $import DTDConstants : public ::java::lang::Object {
	$interface(DTDConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t CDATA = 1;
	static const int32_t ENTITY = 2;
	static const int32_t ENTITIES = 3;
	static const int32_t ID = 4;
	static const int32_t IDREF = 5;
	static const int32_t IDREFS = 6;
	static const int32_t NAME = 7;
	static const int32_t NAMES = 8;
	static const int32_t NMTOKEN = 9;
	static const int32_t NMTOKENS = 10;
	static const int32_t NOTATION = 11;
	static const int32_t NUMBER = 12;
	static const int32_t NUMBERS = 13;
	static const int32_t NUTOKEN = 14;
	static const int32_t NUTOKENS = 15;
	static const int32_t RCDATA = 16;
	static const int32_t EMPTY = 17;
	static const int32_t MODEL = 18;
	static const int32_t ANY = 19;
	static const int32_t FIXED = 1;
	static const int32_t REQUIRED = 2;
	static const int32_t CURRENT = 3;
	static const int32_t CONREF = 4;
	static const int32_t IMPLIED = 5;
	static const int32_t PUBLIC = 10;
	static const int32_t SDATA = 11;
	static const int32_t PI = 12;
	static const int32_t STARTTAG = 13;
	static const int32_t ENDTAG = 14;
	static const int32_t MS = 15;
	static const int32_t MD = 16;
	static const int32_t SYSTEM = 17;
	static const int32_t GENERAL = 65536; // 1 << 16
	static const int32_t DEFAULT = 131072; // 1 << 17
	static const int32_t PARAMETER = 262144; // 1 << 18
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("ANY")
#pragma pop_macro("CDATA")
#pragma pop_macro("CONREF")
#pragma pop_macro("CURRENT")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("EMPTY")
#pragma pop_macro("ENDTAG")
#pragma pop_macro("ENTITIES")
#pragma pop_macro("ENTITY")
#pragma pop_macro("FIXED")
#pragma pop_macro("GENERAL")
#pragma pop_macro("ID")
#pragma pop_macro("IDREF")
#pragma pop_macro("IDREFS")
#pragma pop_macro("IMPLIED")
#pragma pop_macro("MD")
#pragma pop_macro("MODEL")
#pragma pop_macro("MS")
#pragma pop_macro("NAME")
#pragma pop_macro("NAMES")
#pragma pop_macro("NMTOKEN")
#pragma pop_macro("NMTOKENS")
#pragma pop_macro("NOTATION")
#pragma pop_macro("NUMBER")
#pragma pop_macro("NUMBERS")
#pragma pop_macro("NUTOKEN")
#pragma pop_macro("NUTOKENS")
#pragma pop_macro("PARAMETER")
#pragma pop_macro("PI")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("RCDATA")
#pragma pop_macro("REQUIRED")
#pragma pop_macro("SDATA")
#pragma pop_macro("STARTTAG")
#pragma pop_macro("SYSTEM")

#endif // _javax_swing_text_html_parser_DTDConstants_h_