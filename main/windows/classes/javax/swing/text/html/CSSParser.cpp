#include <javax/swing/text/html/CSSParser.h>

#include <java/io/Reader.h>
#include <java/lang/StringBuffer.h>
#include <javax/swing/text/html/CSSParser$CSSParserCallback.h>
#include <jcpp.h>

#undef BRACE_CLOSE
#undef BRACE_OPEN
#undef BRACKET_CLOSE
#undef BRACKET_OPEN
#undef END
#undef IDENTIFIER
#undef PAREN_CLOSE
#undef PAREN_OPEN

using $Reader = ::java::io::Reader;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $CSSParser$CSSParserCallback = ::javax::swing::text::html::CSSParser$CSSParserCallback;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSSParser_FieldInfo_[] = {
	{"IDENTIFIER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CSSParser, IDENTIFIER)},
	{"BRACKET_OPEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CSSParser, BRACKET_OPEN)},
	{"BRACKET_CLOSE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CSSParser, BRACKET_CLOSE)},
	{"BRACE_OPEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CSSParser, BRACE_OPEN)},
	{"BRACE_CLOSE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CSSParser, BRACE_CLOSE)},
	{"PAREN_OPEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CSSParser, PAREN_OPEN)},
	{"PAREN_CLOSE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CSSParser, PAREN_CLOSE)},
	{"END", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CSSParser, END)},
	{"charMapping", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CSSParser, charMapping)},
	{"didPushChar", "Z", nullptr, $PRIVATE, $field(CSSParser, didPushChar)},
	{"pushedChar", "I", nullptr, $PRIVATE, $field(CSSParser, pushedChar)},
	{"unitBuffer", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(CSSParser, unitBuffer)},
	{"unitStack", "[I", nullptr, $PRIVATE, $field(CSSParser, unitStack)},
	{"stackCount", "I", nullptr, $PRIVATE, $field(CSSParser, stackCount)},
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(CSSParser, reader)},
	{"encounteredRuleSet", "Z", nullptr, $PRIVATE, $field(CSSParser, encounteredRuleSet)},
	{"callback", "Ljavax/swing/text/html/CSSParser$CSSParserCallback;", nullptr, $PRIVATE, $field(CSSParser, callback)},
	{"tokenBuffer", "[C", nullptr, $PRIVATE, $field(CSSParser, tokenBuffer)},
	{"tokenBufferLength", "I", nullptr, $PRIVATE, $field(CSSParser, tokenBufferLength)},
	{"readWS", "Z", nullptr, $PRIVATE, $field(CSSParser, readWS$)},
	{}
};

$MethodInfo _CSSParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSSParser::*)()>(&CSSParser::init$))},
	{"append", "(C)V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)(char16_t)>(&CSSParser::append))},
	{"endBlock", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)(int32_t)>(&CSSParser::endBlock))},
	{"getIdentifier", "(C)Z", nullptr, $PRIVATE, $method(static_cast<bool(CSSParser::*)(char16_t)>(&CSSParser::getIdentifier)), "java.io.IOException"},
	{"getNextStatement", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CSSParser::*)()>(&CSSParser::getNextStatement)), "java.io.IOException"},
	{"inBlock", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CSSParser::*)()>(&CSSParser::inBlock))},
	{"nextToken", "(C)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CSSParser::*)(char16_t)>(&CSSParser::nextToken)), "java.io.IOException"},
	{"parse", "(Ljava/io/Reader;Ljavax/swing/text/html/CSSParser$CSSParserCallback;Z)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"parseAtRule", "()V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)()>(&CSSParser::parseAtRule)), "java.io.IOException"},
	{"parseDeclaration", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CSSParser::*)()>(&CSSParser::parseDeclaration)), "java.io.IOException"},
	{"parseDeclarationBlock", "()V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)()>(&CSSParser::parseDeclarationBlock)), "java.io.IOException"},
	{"parseIdentifiers", "(CZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CSSParser::*)(char16_t,bool)>(&CSSParser::parseIdentifiers)), "java.io.IOException"},
	{"parseRuleSet", "()V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)()>(&CSSParser::parseRuleSet)), "java.io.IOException"},
	{"parseSelectors", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CSSParser::*)()>(&CSSParser::parseSelectors)), "java.io.IOException"},
	{"parseTillClosed", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)(int32_t)>(&CSSParser::parseTillClosed)), "java.io.IOException"},
	{"pushChar", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)(int32_t)>(&CSSParser::pushChar))},
	{"readChar", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CSSParser::*)()>(&CSSParser::readChar)), "java.io.IOException"},
	{"readComment", "()V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)()>(&CSSParser::readComment)), "java.io.IOException"},
	{"readTill", "(C)V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)(char16_t)>(&CSSParser::readTill)), "java.io.IOException"},
	{"readWS", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CSSParser::*)()>(&CSSParser::readWS)), "java.io.IOException"},
	{"startBlock", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CSSParser::*)(int32_t)>(&CSSParser::startBlock))},
	{}
};

$InnerClassInfo _CSSParser_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSParser$CSSParserCallback", "javax.swing.text.html.CSSParser", "CSSParserCallback", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSSParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSSParser",
	"java.lang.Object",
	nullptr,
	_CSSParser_FieldInfo_,
	_CSSParser_MethodInfo_,
	nullptr,
	nullptr,
	_CSSParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSParser$CSSParserCallback"
};

$Object* allocate$CSSParser($Class* clazz) {
	return $of($alloc(CSSParser));
}

$chars* CSSParser::charMapping = nullptr;

void CSSParser::init$() {
	$set(this, unitStack, $new($ints, 2));
	$set(this, tokenBuffer, $new($chars, 80));
	$set(this, unitBuffer, $new($StringBuffer));
}

void CSSParser::parse($Reader* reader$renamed, $CSSParser$CSSParserCallback* callback$renamed, bool inRule) {
	$useLocalCurrentObjectStackCache();
	$var($Reader, reader, reader$renamed);
	$var($CSSParser$CSSParserCallback, callback, callback$renamed);
	$set(this, callback, callback);
	this->stackCount = (this->tokenBufferLength = 0);
	$set(this, reader, reader);
	this->encounteredRuleSet = false;
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (inRule) {
				parseDeclarationBlock();
			} else {
				while (getNextStatement()) {
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$assign(callback, nullptr);
			$assign(reader, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool CSSParser::getNextStatement() {
	$nc(this->unitBuffer)->setLength(0);
	int32_t token = nextToken((char16_t)0);
	switch (token) {
	case CSSParser::IDENTIFIER:
		{
			if (this->tokenBufferLength > 0) {
				if ($nc(this->tokenBuffer)->get(0) == u'@') {
					parseAtRule();
				} else {
					this->encounteredRuleSet = true;
					parseRuleSet();
				}
			}
			return true;
		}
	case CSSParser::BRACKET_OPEN:
		{}
	case CSSParser::BRACE_OPEN:
		{}
	case CSSParser::PAREN_OPEN:
		{
			parseTillClosed(token);
			return true;
		}
	case CSSParser::BRACKET_CLOSE:
		{}
	case CSSParser::BRACE_CLOSE:
		{}
	case CSSParser::PAREN_CLOSE:
		{
			$throwNew($RuntimeException, "Unexpected top level block close"_s);
		}
	case CSSParser::END:
		{
			return false;
		}
	}
	return true;
}

void CSSParser::parseAtRule() {
	bool done = false;
	bool isImport = (this->tokenBufferLength == 7 && $nc(this->tokenBuffer)->get(0) == u'@' && $nc(this->tokenBuffer)->get(1) == u'i' && $nc(this->tokenBuffer)->get(2) == u'm' && $nc(this->tokenBuffer)->get(3) == u'p' && $nc(this->tokenBuffer)->get(4) == u'o' && $nc(this->tokenBuffer)->get(5) == u'r' && $nc(this->tokenBuffer)->get(6) == u't');
	$nc(this->unitBuffer)->setLength(0);
	while (!done) {
		int32_t nextToken = this->nextToken(u';');
		switch (nextToken) {
		case CSSParser::IDENTIFIER:
			{
				if (this->tokenBufferLength > 0 && $nc(this->tokenBuffer)->get(this->tokenBufferLength - 1) == u';') {
					--this->tokenBufferLength;
					done = true;
				}
				if (this->tokenBufferLength > 0) {
					if ($nc(this->unitBuffer)->length() > 0 && this->readWS$) {
						$nc(this->unitBuffer)->append(u' ');
					}
					$nc(this->unitBuffer)->append(this->tokenBuffer, 0, this->tokenBufferLength);
				}
				break;
			}
		case CSSParser::BRACE_OPEN:
			{
				if ($nc(this->unitBuffer)->length() > 0 && this->readWS$) {
					$nc(this->unitBuffer)->append(u' ');
				}
				$nc(this->unitBuffer)->append($nc(CSSParser::charMapping)->get(nextToken));
				parseTillClosed(nextToken);
				done = true;
				{
					int32_t nextChar = readWS();
					if (nextChar != -1 && nextChar != u';') {
						pushChar(nextChar);
					}
				}
				break;
			}
		case CSSParser::BRACKET_OPEN:
			{}
		case CSSParser::PAREN_OPEN:
			{
				$nc(this->unitBuffer)->append($nc(CSSParser::charMapping)->get(nextToken));
				parseTillClosed(nextToken);
				break;
			}
		case CSSParser::BRACKET_CLOSE:
			{}
		case CSSParser::BRACE_CLOSE:
			{}
		case CSSParser::PAREN_CLOSE:
			{
				$throwNew($RuntimeException, "Unexpected close in @ rule"_s);
			}
		case CSSParser::END:
			{
				done = true;
				break;
			}
		}
	}
	if (isImport && !this->encounteredRuleSet) {
		$nc(this->callback)->handleImport($($nc(this->unitBuffer)->toString()));
	}
}

void CSSParser::parseRuleSet() {
	if (parseSelectors()) {
		$nc(this->callback)->startRule();
		parseDeclarationBlock();
		$nc(this->callback)->endRule();
	}
}

bool CSSParser::parseSelectors() {
	$useLocalCurrentObjectStackCache();
	int32_t nextToken = 0;
	if (this->tokenBufferLength > 0) {
		$nc(this->callback)->handleSelector($$new($String, this->tokenBuffer, 0, this->tokenBufferLength));
	}
	$nc(this->unitBuffer)->setLength(0);
	for (;;) {
		while ((nextToken = this->nextToken((char16_t)0)) == CSSParser::IDENTIFIER) {
			if (this->tokenBufferLength > 0) {
				$nc(this->callback)->handleSelector($$new($String, this->tokenBuffer, 0, this->tokenBufferLength));
			}
		}
		switch (nextToken) {
		case CSSParser::BRACE_OPEN:
			{
				return true;
			}
		case CSSParser::BRACKET_OPEN:
			{}
		case CSSParser::PAREN_OPEN:
			{
				parseTillClosed(nextToken);
				$nc(this->unitBuffer)->setLength(0);
				break;
			}
		case CSSParser::BRACKET_CLOSE:
			{}
		case CSSParser::BRACE_CLOSE:
			{}
		case CSSParser::PAREN_CLOSE:
			{
				$throwNew($RuntimeException, "Unexpected block close in selector"_s);
			}
		case CSSParser::END:
			{
				return false;
			}
		}
	}
}

void CSSParser::parseDeclarationBlock() {
	for (;;) {
		int32_t token = parseDeclaration();
		switch (token) {
		case CSSParser::END:
			{}
		case CSSParser::BRACE_CLOSE:
			{
				return;
			}
		case CSSParser::BRACKET_CLOSE:
			{}
		case CSSParser::PAREN_CLOSE:
			{
				$throwNew($RuntimeException, "Unexpected close in declaration block"_s);
			}
		case CSSParser::IDENTIFIER:
			{
				break;
			}
		}
	}
}

int32_t CSSParser::parseDeclaration() {
	$useLocalCurrentObjectStackCache();
	int32_t token = 0;
	if ((token = parseIdentifiers(u':', false)) != CSSParser::IDENTIFIER) {
		return token;
	}
	for (int32_t counter = $nc(this->unitBuffer)->length() - 1; counter >= 0; --counter) {
		$nc(this->unitBuffer)->setCharAt(counter, $Character::toLowerCase($nc(this->unitBuffer)->charAt(counter)));
	}
	$nc(this->callback)->handleProperty($($nc(this->unitBuffer)->toString()));
	token = parseIdentifiers(u';', true);
	$nc(this->callback)->handleValue($($nc(this->unitBuffer)->toString()));
	return token;
}

int32_t CSSParser::parseIdentifiers(char16_t extraChar, bool wantsBlocks) {
	int32_t nextToken = 0;
	int32_t ubl = 0;
	$nc(this->unitBuffer)->setLength(0);
	for (;;) {
		nextToken = this->nextToken(extraChar);
		switch (nextToken) {
		case CSSParser::IDENTIFIER:
			{
				if (this->tokenBufferLength > 0) {
					if ($nc(this->tokenBuffer)->get(this->tokenBufferLength - 1) == extraChar) {
						if (--this->tokenBufferLength > 0) {
							if (this->readWS$ && $nc(this->unitBuffer)->length() > 0) {
								$nc(this->unitBuffer)->append(u' ');
							}
							$nc(this->unitBuffer)->append(this->tokenBuffer, 0, this->tokenBufferLength);
						}
						return CSSParser::IDENTIFIER;
					}
					if (this->readWS$ && $nc(this->unitBuffer)->length() > 0) {
						$nc(this->unitBuffer)->append(u' ');
					}
					$nc(this->unitBuffer)->append(this->tokenBuffer, 0, this->tokenBufferLength);
				}
				break;
			}
		case CSSParser::BRACKET_OPEN:
			{}
		case CSSParser::BRACE_OPEN:
			{}
		case CSSParser::PAREN_OPEN:
			{
				ubl = $nc(this->unitBuffer)->length();
				if (wantsBlocks) {
					$nc(this->unitBuffer)->append($nc(CSSParser::charMapping)->get(nextToken));
				}
				parseTillClosed(nextToken);
				if (!wantsBlocks) {
					$nc(this->unitBuffer)->setLength(ubl);
				}
				break;
			}
		case CSSParser::BRACE_CLOSE:
			{}
		case CSSParser::BRACKET_CLOSE:
			{}
		case CSSParser::PAREN_CLOSE:
			{}
		case CSSParser::END:
			{
				return nextToken;
			}
		}
	}
}

void CSSParser::parseTillClosed(int32_t openToken) {
	int32_t nextToken = 0;
	bool done = false;
	startBlock(openToken);
	while (!done) {
		nextToken = this->nextToken((char16_t)0);
		switch (nextToken) {
		case CSSParser::IDENTIFIER:
			{
				if ($nc(this->unitBuffer)->length() > 0 && this->readWS$) {
					$nc(this->unitBuffer)->append(u' ');
				}
				if (this->tokenBufferLength > 0) {
					$nc(this->unitBuffer)->append(this->tokenBuffer, 0, this->tokenBufferLength);
				}
				break;
			}
		case CSSParser::BRACKET_OPEN:
			{}
		case CSSParser::BRACE_OPEN:
			{}
		case CSSParser::PAREN_OPEN:
			{
				if ($nc(this->unitBuffer)->length() > 0 && this->readWS$) {
					$nc(this->unitBuffer)->append(u' ');
				}
				$nc(this->unitBuffer)->append($nc(CSSParser::charMapping)->get(nextToken));
				startBlock(nextToken);
				break;
			}
		case CSSParser::BRACKET_CLOSE:
			{}
		case CSSParser::BRACE_CLOSE:
			{}
		case CSSParser::PAREN_CLOSE:
			{
				if ($nc(this->unitBuffer)->length() > 0 && this->readWS$) {
					$nc(this->unitBuffer)->append(u' ');
				}
				$nc(this->unitBuffer)->append($nc(CSSParser::charMapping)->get(nextToken));
				endBlock(nextToken);
				if (!inBlock()) {
					done = true;
				}
				break;
			}
		case CSSParser::END:
			{
				$throwNew($RuntimeException, "Unclosed block"_s);
			}
		}
	}
}

int32_t CSSParser::nextToken(char16_t idChar) {
	this->readWS$ = false;
	int32_t nextChar = readWS();
	switch (nextChar) {
	case u'\'':
		{
			readTill(u'\'');
			if (this->tokenBufferLength > 0) {
				--this->tokenBufferLength;
			}
			return CSSParser::IDENTIFIER;
		}
	case u'\"':
		{
			readTill(u'\"');
			if (this->tokenBufferLength > 0) {
				--this->tokenBufferLength;
			}
			return CSSParser::IDENTIFIER;
		}
	case u'[':
		{
			return CSSParser::BRACKET_OPEN;
		}
	case u']':
		{
			return CSSParser::BRACKET_CLOSE;
		}
	case u'{':
		{
			return CSSParser::BRACE_OPEN;
		}
	case u'}':
		{
			return CSSParser::BRACE_CLOSE;
		}
	case u'(':
		{
			return CSSParser::PAREN_OPEN;
		}
	case u')':
		{
			return CSSParser::PAREN_CLOSE;
		}
	case -1:
		{
			return CSSParser::END;
		}
	default:
		{
			pushChar(nextChar);
			getIdentifier(idChar);
			return CSSParser::IDENTIFIER;
		}
	}
}

bool CSSParser::getIdentifier(char16_t stopChar) {
	bool lastWasEscape = false;
	bool done = false;
	int32_t escapeCount = 0;
	int32_t escapeChar = 0;
	int32_t nextChar = 0;
	int32_t intStopChar = (int32_t)stopChar;
	int16_t type = 0;
	int32_t escapeOffset = 0;
	this->tokenBufferLength = 0;
	while (!done) {
		nextChar = readChar();
		switch (nextChar) {
		case u'\\':
			{
				type = (int16_t)1;
				break;
			}
		case u'0':
			{}
		case u'1':
			{}
		case u'2':
			{}
		case u'3':
			{}
		case u'4':
			{}
		case u'5':
			{}
		case u'6':
			{}
		case u'7':
			{}
		case u'8':
			{}
		case u'9':
			{
				type = (int16_t)2;
				escapeOffset = nextChar - u'0';
				break;
			}
		case u'a':
			{}
		case u'b':
			{}
		case u'c':
			{}
		case u'd':
			{}
		case u'e':
			{}
		case u'f':
			{
				type = (int16_t)2;
				escapeOffset = nextChar - u'a' + 10;
				break;
			}
		case u'A':
			{}
		case u'B':
			{}
		case u'C':
			{}
		case u'D':
			{}
		case u'E':
			{}
		case u'F':
			{
				type = (int16_t)2;
				escapeOffset = nextChar - u'A' + 10;
				break;
			}
		case u'\'':
			{}
		case u'\"':
			{}
		case u'[':
			{}
		case u']':
			{}
		case u'{':
			{}
		case u'}':
			{}
		case u'(':
			{}
		case u')':
			{}
		case u' ':
			{}
		case u'\n':
			{}
		case u'\t':
			{}
		case u'\r':
			{
				type = (int16_t)3;
				break;
			}
		case u'/':
			{
				type = (int16_t)4;
				break;
			}
		case -1:
			{
				done = true;
				type = (int16_t)0;
				break;
			}
		default:
			{
				type = (int16_t)0;
				break;
			}
		}
		if (lastWasEscape) {
			if (type == 2) {
				escapeChar = escapeChar * 16 + escapeOffset;
				if (++escapeCount == 4) {
					lastWasEscape = false;
					append((char16_t)escapeChar);
				}
			} else {
				lastWasEscape = false;
				if (escapeCount > 0) {
					append((char16_t)escapeChar);
					pushChar(nextChar);
				} else if (!done) {
					append((char16_t)nextChar);
				}
			}
		} else if (!done) {
			if (type == 1) {
				lastWasEscape = true;
				escapeChar = (escapeCount = 0);
			} else if (type == 3) {
				done = true;
				pushChar(nextChar);
			} else if (type == 4) {
				nextChar = readChar();
				if (nextChar == u'*') {
					done = true;
					readComment();
					this->readWS$ = true;
				} else {
					append(u'/');
					if (nextChar == -1) {
						done = true;
					} else {
						pushChar(nextChar);
					}
				}
			} else {
				append((char16_t)nextChar);
				if (nextChar == intStopChar) {
					done = true;
				}
			}
		}
	}
	return (this->tokenBufferLength > 0);
}

void CSSParser::readTill(char16_t stopChar) {
	$useLocalCurrentObjectStackCache();
	bool lastWasEscape = false;
	int32_t escapeCount = 0;
	int32_t escapeChar = 0;
	int32_t nextChar = 0;
	bool done = false;
	int32_t intStopChar = (int32_t)stopChar;
	int16_t type = 0;
	int32_t escapeOffset = 0;
	this->tokenBufferLength = 0;
	while (!done) {
		nextChar = readChar();
		switch (nextChar) {
		case u'\\':
			{
				type = (int16_t)1;
				break;
			}
		case u'0':
			{}
		case u'1':
			{}
		case u'2':
			{}
		case u'3':
			{}
		case u'4':
			{}
		case u'5':
			{}
		case u'6':
			{}
		case u'7':
			{}
		case u'8':
			{}
		case u'9':
			{
				type = (int16_t)2;
				escapeOffset = nextChar - u'0';
				break;
			}
		case u'a':
			{}
		case u'b':
			{}
		case u'c':
			{}
		case u'd':
			{}
		case u'e':
			{}
		case u'f':
			{
				type = (int16_t)2;
				escapeOffset = nextChar - u'a' + 10;
				break;
			}
		case u'A':
			{}
		case u'B':
			{}
		case u'C':
			{}
		case u'D':
			{}
		case u'E':
			{}
		case u'F':
			{
				type = (int16_t)2;
				escapeOffset = nextChar - u'A' + 10;
				break;
			}
		case -1:
			{
				$throwNew($RuntimeException, $$str({"Unclosed "_s, $$str(stopChar)}));
			}
		default:
			{
				type = (int16_t)0;
				break;
			}
		}
		if (lastWasEscape) {
			if (type == 2) {
				escapeChar = escapeChar * 16 + escapeOffset;
				if (++escapeCount == 4) {
					lastWasEscape = false;
					append((char16_t)escapeChar);
				}
			} else if (escapeCount > 0) {
				append((char16_t)escapeChar);
				if (type == 1) {
					lastWasEscape = true;
					escapeChar = (escapeCount = 0);
				} else {
					if (nextChar == intStopChar) {
						done = true;
					}
					append((char16_t)nextChar);
					lastWasEscape = false;
				}
			} else {
				append((char16_t)nextChar);
				lastWasEscape = false;
			}
		} else if (type == 1) {
			lastWasEscape = true;
			escapeChar = (escapeCount = 0);
		} else {
			if (nextChar == intStopChar) {
				done = true;
			}
			append((char16_t)nextChar);
		}
	}
}

void CSSParser::append(char16_t character) {
	if (this->tokenBufferLength == $nc(this->tokenBuffer)->length) {
		$var($chars, newBuffer, $new($chars, $nc(this->tokenBuffer)->length * 2));
		$System::arraycopy(this->tokenBuffer, 0, newBuffer, 0, $nc(this->tokenBuffer)->length);
		$set(this, tokenBuffer, newBuffer);
	}
	$nc(this->tokenBuffer)->set(this->tokenBufferLength++, character);
}

void CSSParser::readComment() {
	int32_t nextChar = 0;
	for (;;) {
		nextChar = readChar();
		switch (nextChar) {
		case -1:
			{
				$throwNew($RuntimeException, "Unclosed comment"_s);
			}
		case u'*':
			{
				nextChar = readChar();
				if (nextChar == u'/') {
					return;
				} else if (nextChar == -1) {
					$throwNew($RuntimeException, "Unclosed comment"_s);
				} else {
					pushChar(nextChar);
				}
				break;
			}
		default:
			{
				break;
			}
		}
	}
}

void CSSParser::startBlock(int32_t startToken) {
	if (this->stackCount == $nc(this->unitStack)->length) {
		$var($ints, newUS, $new($ints, this->stackCount * 2));
		$System::arraycopy(this->unitStack, 0, newUS, 0, this->stackCount);
		$set(this, unitStack, newUS);
	}
	$nc(this->unitStack)->set(this->stackCount++, startToken);
}

void CSSParser::endBlock(int32_t endToken) {
	int32_t startToken = 0;
	switch (endToken) {
	case CSSParser::BRACKET_CLOSE:
		{
			startToken = CSSParser::BRACKET_OPEN;
			break;
		}
	case CSSParser::BRACE_CLOSE:
		{
			startToken = CSSParser::BRACE_OPEN;
			break;
		}
	case CSSParser::PAREN_CLOSE:
		{
			startToken = CSSParser::PAREN_OPEN;
			break;
		}
	default:
		{
			startToken = -1;
			break;
		}
	}
	if (this->stackCount > 0 && $nc(this->unitStack)->get(this->stackCount - 1) == startToken) {
		--this->stackCount;
	} else {
		$throwNew($RuntimeException, "Unmatched block"_s);
	}
}

bool CSSParser::inBlock() {
	return (this->stackCount > 0);
}

int32_t CSSParser::readWS() {
	int32_t nextChar = 0;
	while (true) {
		bool var$0 = (nextChar = readChar()) != -1;
		if (!(var$0 && $Character::isWhitespace((char16_t)nextChar))) {
			break;
		}
		{
			this->readWS$ = true;
		}
	}
	return nextChar;
}

int32_t CSSParser::readChar() {
	if (this->didPushChar) {
		this->didPushChar = false;
		return this->pushedChar;
	}
	return $nc(this->reader)->read();
}

void CSSParser::pushChar(int32_t tempChar) {
	if (this->didPushChar) {
		$throwNew($RuntimeException, "Can not handle look ahead of more than one character"_s);
	}
	this->didPushChar = true;
	this->pushedChar = tempChar;
}

void clinit$CSSParser($Class* class$) {
	$assignStatic(CSSParser::charMapping, $new($chars, {
		(char16_t)0,
		(char16_t)0,
		u'[',
		u']',
		u'{',
		u'}',
		u'(',
		u')',
		(char16_t)0
	}));
}

CSSParser::CSSParser() {
}

$Class* CSSParser::load$($String* name, bool initialize) {
	$loadClass(CSSParser, name, initialize, &_CSSParser_ClassInfo_, clinit$CSSParser, allocate$CSSParser);
	return class$;
}

$Class* CSSParser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax