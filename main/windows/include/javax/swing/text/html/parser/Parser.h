#ifndef _javax_swing_text_html_parser_Parser_h_
#define _javax_swing_text_html_parser_Parser_h_
//$ class javax.swing.text.html.parser.Parser
//$ extends javax.swing.text.html.parser.DTDConstants

#include <java/lang/Array.h>
#include <javax/swing/text/html/parser/DTDConstants.h>

#pragma push_macro("END_COMMENT")
#undef END_COMMENT
#pragma push_macro("SCRIPT_END_TAG")
#undef SCRIPT_END_TAG
#pragma push_macro("SCRIPT_END_TAG_UPPER_CASE")
#undef SCRIPT_END_TAG_UPPER_CASE
#pragma push_macro("START_COMMENT")
#undef START_COMMENT

namespace java {
	namespace io {
		class Reader;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class SimpleAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {
					class DTD;
					class Element;
					class TagElement;
					class TagStack;
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

class $import Parser : public ::javax::swing::text::html::parser::DTDConstants {
	$class(Parser, 0, ::javax::swing::text::html::parser::DTDConstants)
public:
	Parser();
	void init$(::javax::swing::text::html::parser::DTD* dtd);
	virtual void addString(int32_t c);
	virtual void endTag(bool omitted);
	virtual void error($String* err, $String* arg1, $String* arg2, $String* arg3);
	virtual void error($String* err, $String* arg1, $String* arg2);
	virtual void error($String* err, $String* arg1);
	virtual void error($String* err);
	virtual void errorContext();
	virtual void flushAttributes();
	virtual ::javax::swing::text::SimpleAttributeSet* getAttributes();
	virtual int32_t getBlockStartPosition();
	virtual $chars* getChars(int32_t pos);
	virtual $chars* getChars(int32_t pos, int32_t endPos);
	virtual int32_t getCurrentLine();
	virtual int32_t getCurrentPos();
	virtual $String* getEndOfLineString();
	virtual $String* getString(int32_t pos);
	virtual void handleComment($chars* text);
	virtual void handleEOFInComment();
	virtual void handleEmptyTag(::javax::swing::text::html::parser::TagElement* tag);
	virtual void handleEndTag(::javax::swing::text::html::parser::TagElement* tag);
	virtual void handleError(int32_t ln, $String* msg);
	virtual void handleStartTag(::javax::swing::text::html::parser::TagElement* tag);
	virtual void handleText($chars* text);
	virtual void handleText(::javax::swing::text::html::parser::TagElement* tag);
	virtual void handleTitle($chars* text);
	virtual bool ignoreElement(::javax::swing::text::html::parser::Element* elem);
	virtual bool legalElementContext(::javax::swing::text::html::parser::Element* elem);
	virtual void legalTagContext(::javax::swing::text::html::parser::TagElement* tag);
	virtual ::javax::swing::text::html::parser::TagElement* makeTag(::javax::swing::text::html::parser::Element* elem, bool fictional);
	virtual ::javax::swing::text::html::parser::TagElement* makeTag(::javax::swing::text::html::parser::Element* elem);
	$chars* mapNumericReference(int32_t c);
	virtual void markFirstTime(::javax::swing::text::html::parser::Element* elem);
	virtual void parse(::java::io::Reader* in);
	virtual void parseAttributeSpecificationList(::javax::swing::text::html::parser::Element* elem);
	virtual $String* parseAttributeValue(bool lower);
	virtual void parseComment();
	virtual void parseContent();
	virtual $String* parseDTDMarkup();
	$chars* parseEntityReference();
	virtual bool parseIdentifier(bool lower);
	virtual void parseInvalidTag();
	virtual void parseLiteral(bool replace);
	virtual bool parseMarkupDeclarations(::java::lang::StringBuffer* strBuff);
	virtual void parseScript();
	virtual void parseTag();
	int32_t readCh();
	virtual void resetStrBuffer();
	virtual void skipSpace();
	virtual void startTag(::javax::swing::text::html::parser::TagElement* tag);
	virtual int32_t strIndexOf(char16_t target);
	$chars* text = nullptr;
	int32_t textpos = 0;
	::javax::swing::text::html::parser::TagElement* last = nullptr;
	bool space = false;
	$chars* str = nullptr;
	int32_t strpos = 0;
	::javax::swing::text::html::parser::DTD* dtd = nullptr;
	int32_t ch = 0;
	int32_t ln = 0;
	::java::io::Reader* in = nullptr;
	::javax::swing::text::html::parser::Element* recent = nullptr;
	::javax::swing::text::html::parser::TagStack* stack = nullptr;
	bool skipTag = false;
	::javax::swing::text::html::parser::TagElement* lastFormSent = nullptr;
	::javax::swing::text::SimpleAttributeSet* attributes = nullptr;
	bool seenHtml = false;
	bool seenHead = false;
	bool seenBody = false;
	bool ignoreSpace = false;
	bool strict = false;
	int32_t crlfCount = 0;
	int32_t crCount = 0;
	int32_t lfCount = 0;
	int32_t currentBlockStartPos = 0;
	int32_t lastBlockStartPos = 0;
	static $chars* cp1252Map;
	static $String* START_COMMENT;
	static $String* END_COMMENT;
	static $chars* SCRIPT_END_TAG;
	static $chars* SCRIPT_END_TAG_UPPER_CASE;
	$chars* buf = nullptr;
	int32_t pos = 0;
	int32_t len = 0;
	int32_t currentPosition = 0;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("END_COMMENT")
#pragma pop_macro("SCRIPT_END_TAG")
#pragma pop_macro("SCRIPT_END_TAG_UPPER_CASE")
#pragma pop_macro("START_COMMENT")

#endif // _javax_swing_text_html_parser_Parser_h_