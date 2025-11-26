#include <javax/swing/text/rtf/RTFParser.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/StringBuffer.h>
#include <javax/swing/text/rtf/AbstractFilter.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractFilter = ::javax::swing::text::rtf::AbstractFilter;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFParser_FieldInfo_[] = {
	{"level", "I", nullptr, $PUBLIC, $field(RTFParser, level)},
	{"state", "I", nullptr, $PRIVATE, $field(RTFParser, state)},
	{"currentCharacters", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(RTFParser, currentCharacters)},
	{"pendingKeyword", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RTFParser, pendingKeyword)},
	{"pendingCharacter", "I", nullptr, $PRIVATE, $field(RTFParser, pendingCharacter)},
	{"binaryBytesLeft", "J", nullptr, $PRIVATE, $field(RTFParser, binaryBytesLeft)},
	{"binaryBuf", "Ljava/io/ByteArrayOutputStream;", nullptr, 0, $field(RTFParser, binaryBuf)},
	{"savedSpecials", "[Z", nullptr, $PRIVATE, $field(RTFParser, savedSpecials)},
	{"warnings", "Ljava/io/PrintStream;", nullptr, $PROTECTED, $field(RTFParser, warnings)},
	{"S_text", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RTFParser, S_text)},
	{"S_backslashed", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RTFParser, S_backslashed)},
	{"S_token", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RTFParser, S_token)},
	{"S_parameter", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RTFParser, S_parameter)},
	{"S_aftertick", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RTFParser, S_aftertick)},
	{"S_aftertickc", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RTFParser, S_aftertickc)},
	{"S_inblob", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RTFParser, S_inblob)},
	{"rtfSpecialsTable", "[Z", nullptr, $STATIC | $FINAL, $staticField(RTFParser, rtfSpecialsTable)},
	{}
};

$MethodInfo _RTFParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFParser::*)()>(&RTFParser::init$))},
	{"begingroup", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endgroup", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleText", "(C)V", nullptr, $PUBLIC},
	{"warning", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(C)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeSpecial", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _RTFParser_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.text.rtf.RTFParser",
	"javax.swing.text.rtf.AbstractFilter",
	nullptr,
	_RTFParser_FieldInfo_,
	_RTFParser_MethodInfo_
};

$Object* allocate$RTFParser($Class* clazz) {
	return $of($alloc(RTFParser));
}

$booleans* RTFParser::rtfSpecialsTable = nullptr;

void RTFParser::handleText(char16_t ch) {
	handleText($($String::valueOf(ch)));
}

void RTFParser::init$() {
	$AbstractFilter::init$();
	$set(this, currentCharacters, $new($StringBuffer));
	this->state = this->S_text;
	$set(this, pendingKeyword, nullptr);
	this->level = 0;
	$set(this, specialsTable, RTFParser::rtfSpecialsTable);
}

void RTFParser::writeSpecial(int32_t b) {
	write((char16_t)b);
}

void RTFParser::warning($String* s) {
	if (this->warnings != nullptr) {
		$nc(this->warnings)->println(s);
	}
}

void RTFParser::write($String* s$renamed) {
	$var($String, s, s$renamed);
	if (this->state != this->S_text) {
		int32_t index = 0;
		int32_t length = $nc(s)->length();
		while (index < length && this->state != this->S_text) {
			write(s->charAt(index));
			++index;
		}
		if (index >= length) {
			return;
		}
		$assign(s, s->substring(index));
	}
	if ($nc(this->currentCharacters)->length() > 0) {
		$nc(this->currentCharacters)->append(s);
	} else {
		handleText(s);
	}
}

void RTFParser::write(char16_t ch) {
	$useLocalCurrentObjectStackCache();
	bool ok = false;
	switch (this->state) {
	case this->S_text:
		{
			if (ch == u'\n' || ch == u'\r') {
				break;
			} else if (ch == u'{') {
				if ($nc(this->currentCharacters)->length() > 0) {
					handleText($($nc(this->currentCharacters)->toString()));
					$set(this, currentCharacters, $new($StringBuffer));
				}
				++this->level;
				begingroup();
			} else if (ch == u'}') {
				if ($nc(this->currentCharacters)->length() > 0) {
					handleText($($nc(this->currentCharacters)->toString()));
					$set(this, currentCharacters, $new($StringBuffer));
				}
				if (this->level == 0) {
					$throwNew($IOException, "Too many close-groups in RTF text"_s);
				}
				endgroup();
				--this->level;
			} else if (ch == u'\\') {
				if ($nc(this->currentCharacters)->length() > 0) {
					handleText($($nc(this->currentCharacters)->toString()));
					$set(this, currentCharacters, $new($StringBuffer));
				}
				this->state = this->S_backslashed;
			} else {
				$nc(this->currentCharacters)->append(ch);
			}
			break;
		}
	case this->S_backslashed:
		{
			if (ch == u'\'') {
				this->state = this->S_aftertick;
				break;
			}
			if (!$Character::isLetter(ch)) {
				$var($chars, newstring, $new($chars, 1));
				newstring->set(0, ch);
				if (!handleKeyword($$new($String, newstring))) {
					warning($$str({"Unknown keyword: "_s, newstring, " ("_s, $$str((int8_t)ch), ")"_s}));
				}
				this->state = this->S_text;
				$set(this, pendingKeyword, nullptr);
				break;
			}
			this->state = this->S_token;
		}
	case this->S_token:
		{
			if ($Character::isLetter(ch)) {
				$nc(this->currentCharacters)->append(ch);
			} else {
				$set(this, pendingKeyword, $nc(this->currentCharacters)->toString());
				$set(this, currentCharacters, $new($StringBuffer));
				if ($Character::isDigit(ch) || (ch == u'-')) {
					this->state = this->S_parameter;
					$nc(this->currentCharacters)->append(ch);
				} else {
					ok = handleKeyword(this->pendingKeyword);
					if (!ok) {
						warning($$str({"Unknown keyword: "_s, this->pendingKeyword}));
					}
					$set(this, pendingKeyword, nullptr);
					this->state = this->S_text;
					if (!$Character::isWhitespace(ch)) {
						write(ch);
					}
				}
			}
			break;
		}
	case this->S_parameter:
		{
			if ($Character::isDigit(ch)) {
				$nc(this->currentCharacters)->append(ch);
			} else {
				if ($nc(this->pendingKeyword)->equals("bin"_s)) {
					int64_t parameter = $Long::parseLong($($nc(this->currentCharacters)->toString()));
					$set(this, pendingKeyword, nullptr);
					this->state = this->S_inblob;
					this->binaryBytesLeft = parameter;
					if (this->binaryBytesLeft > $Integer::MAX_VALUE) {
						$set(this, binaryBuf, $new($ByteArrayOutputStream, $Integer::MAX_VALUE));
					} else {
						$set(this, binaryBuf, $new($ByteArrayOutputStream, (int32_t)this->binaryBytesLeft));
					}
					$set(this, savedSpecials, this->specialsTable);
					$init($AbstractFilter);
					$set(this, specialsTable, $AbstractFilter::allSpecialsTable);
					break;
				}
				int32_t parameter = $Integer::parseInt($($nc(this->currentCharacters)->toString()));
				ok = handleKeyword(this->pendingKeyword, parameter);
				if (!ok) {
					warning($$str({"Unknown keyword: "_s, this->pendingKeyword, " (param "_s, this->currentCharacters, ")"_s}));
				}
				$set(this, pendingKeyword, nullptr);
				$set(this, currentCharacters, $new($StringBuffer));
				this->state = this->S_text;
				if (!$Character::isWhitespace(ch)) {
					write(ch);
				}
			}
			break;
		}
	case this->S_aftertick:
		{
			if ($Character::digit(ch, 16) == -1) {
				this->state = this->S_text;
			} else {
				this->pendingCharacter = $Character::digit(ch, 16);
				this->state = this->S_aftertickc;
			}
			break;
		}
	case this->S_aftertickc:
		{
			this->state = this->S_text;
			if ($Character::digit(ch, 16) != -1) {
				this->pendingCharacter = this->pendingCharacter * 16 + $Character::digit(ch, 16);
				ch = $nc(this->translationTable)->get(this->pendingCharacter);
				if (ch != 0) {
					handleText(ch);
				}
			}
			break;
		}
	case this->S_inblob:
		{
			$nc(this->binaryBuf)->write((int32_t)ch);
			--this->binaryBytesLeft;
			if (this->binaryBytesLeft == 0) {
				this->state = this->S_text;
				$set(this, specialsTable, this->savedSpecials);
				$set(this, savedSpecials, nullptr);
				handleBinaryBlob($($nc(this->binaryBuf)->toByteArray()));
				$set(this, binaryBuf, nullptr);
			}
		}
	}
}

void RTFParser::flush() {
	$AbstractFilter::flush();
	if (this->state == this->S_text && $nc(this->currentCharacters)->length() > 0) {
		handleText($($nc(this->currentCharacters)->toString()));
		$set(this, currentCharacters, $new($StringBuffer));
	}
}

void RTFParser::close() {
	flush();
	if (this->state != this->S_text || this->level > 0) {
		warning("Truncated RTF file."_s);
		while (this->level > 0) {
			endgroup();
			--this->level;
		}
	}
	$AbstractFilter::close();
}

void clinit$RTFParser($Class* class$) {
	{
		$init($AbstractFilter);
		$assignStatic(RTFParser::rtfSpecialsTable, $cast($booleans, $nc($AbstractFilter::noSpecialsTable)->clone()));
		$nc(RTFParser::rtfSpecialsTable)->set(u'\n', true);
		$nc(RTFParser::rtfSpecialsTable)->set(u'\r', true);
		$nc(RTFParser::rtfSpecialsTable)->set(u'{', true);
		$nc(RTFParser::rtfSpecialsTable)->set(u'}', true);
		$nc(RTFParser::rtfSpecialsTable)->set(u'\\', true);
	}
}

RTFParser::RTFParser() {
}

$Class* RTFParser::load$($String* name, bool initialize) {
	$loadClass(RTFParser, name, initialize, &_RTFParser_ClassInfo_, clinit$RTFParser, allocate$RTFParser);
	return class$;
}

$Class* RTFParser::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax