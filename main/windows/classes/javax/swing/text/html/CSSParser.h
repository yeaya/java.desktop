#ifndef _javax_swing_text_html_CSSParser_h_
#define _javax_swing_text_html_CSSParser_h_
//$ class javax.swing.text.html.CSSParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BRACE_CLOSE")
#undef BRACE_CLOSE
#pragma push_macro("BRACE_OPEN")
#undef BRACE_OPEN
#pragma push_macro("BRACKET_CLOSE")
#undef BRACKET_CLOSE
#pragma push_macro("BRACKET_OPEN")
#undef BRACKET_OPEN
#pragma push_macro("END")
#undef END
#pragma push_macro("IDENTIFIER")
#undef IDENTIFIER
#pragma push_macro("PAREN_CLOSE")
#undef PAREN_CLOSE
#pragma push_macro("PAREN_OPEN")
#undef PAREN_OPEN

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
			namespace html {
				class CSSParser$CSSParserCallback;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class CSSParser : public ::java::lang::Object {
	$class(CSSParser, 0, ::java::lang::Object)
public:
	CSSParser();
	void init$();
	void append(char16_t character);
	void endBlock(int32_t endToken);
	bool getIdentifier(char16_t stopChar);
	bool getNextStatement();
	bool inBlock();
	int32_t nextToken(char16_t idChar);
	virtual void parse(::java::io::Reader* reader, ::javax::swing::text::html::CSSParser$CSSParserCallback* callback, bool inRule);
	void parseAtRule();
	int32_t parseDeclaration();
	void parseDeclarationBlock();
	int32_t parseIdentifiers(char16_t extraChar, bool wantsBlocks);
	void parseRuleSet();
	bool parseSelectors();
	void parseTillClosed(int32_t openToken);
	void pushChar(int32_t tempChar);
	int32_t readChar();
	void readComment();
	void readTill(char16_t stopChar);
	int32_t readWS();
	void startBlock(int32_t startToken);
	static const int32_t IDENTIFIER = 1;
	static const int32_t BRACKET_OPEN = 2;
	static const int32_t BRACKET_CLOSE = 3;
	static const int32_t BRACE_OPEN = 4;
	static const int32_t BRACE_CLOSE = 5;
	static const int32_t PAREN_OPEN = 6;
	static const int32_t PAREN_CLOSE = 7;
	static const int32_t END = (-1);
	static $chars* charMapping;
	bool didPushChar = false;
	int32_t pushedChar = 0;
	::java::lang::StringBuffer* unitBuffer = nullptr;
	$ints* unitStack = nullptr;
	int32_t stackCount = 0;
	::java::io::Reader* reader = nullptr;
	bool encounteredRuleSet = false;
	::javax::swing::text::html::CSSParser$CSSParserCallback* callback = nullptr;
	$chars* tokenBuffer = nullptr;
	int32_t tokenBufferLength = 0;
	bool readWS$ = false;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("BRACE_CLOSE")
#pragma pop_macro("BRACE_OPEN")
#pragma pop_macro("BRACKET_CLOSE")
#pragma pop_macro("BRACKET_OPEN")
#pragma pop_macro("END")
#pragma pop_macro("IDENTIFIER")
#pragma pop_macro("PAREN_CLOSE")
#pragma pop_macro("PAREN_OPEN")

#endif // _javax_swing_text_html_CSSParser_h_