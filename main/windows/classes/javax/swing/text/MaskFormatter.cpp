#include <javax/swing/text/MaskFormatter.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <java/util/ArrayList.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/DefaultFormatter$ReplaceHolder.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MaskFormatter$AlphaNumericCharacter.h>
#include <javax/swing/text/MaskFormatter$CharCharacter.h>
#include <javax/swing/text/MaskFormatter$DigitMaskCharacter.h>
#include <javax/swing/text/MaskFormatter$HexCharacter.h>
#include <javax/swing/text/MaskFormatter$LiteralCharacter.h>
#include <javax/swing/text/MaskFormatter$LowerCaseCharacter.h>
#include <javax/swing/text/MaskFormatter$MaskCharacter.h>
#include <javax/swing/text/MaskFormatter$UpperCaseCharacter.h>
#include <jcpp.h>

#undef ALPHA_NUMERIC_KEY
#undef ANYTHING_KEY
#undef CHARACTER_KEY
#undef DIGIT_KEY
#undef HEX_KEY
#undef LITERAL_KEY
#undef LOWERCASE_KEY
#undef UPPERCASE_KEY

using $MaskFormatter$MaskCharacterArray = $Array<::javax::swing::text::MaskFormatter$MaskCharacter>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParseException = ::java::text::ParseException;
using $ArrayList = ::java::util::ArrayList;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $DefaultFormatter$ReplaceHolder = ::javax::swing::text::DefaultFormatter$ReplaceHolder;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MaskFormatter$AlphaNumericCharacter = ::javax::swing::text::MaskFormatter$AlphaNumericCharacter;
using $MaskFormatter$CharCharacter = ::javax::swing::text::MaskFormatter$CharCharacter;
using $MaskFormatter$DigitMaskCharacter = ::javax::swing::text::MaskFormatter$DigitMaskCharacter;
using $MaskFormatter$HexCharacter = ::javax::swing::text::MaskFormatter$HexCharacter;
using $MaskFormatter$LiteralCharacter = ::javax::swing::text::MaskFormatter$LiteralCharacter;
using $MaskFormatter$LowerCaseCharacter = ::javax::swing::text::MaskFormatter$LowerCaseCharacter;
using $MaskFormatter$MaskCharacter = ::javax::swing::text::MaskFormatter$MaskCharacter;
using $MaskFormatter$UpperCaseCharacter = ::javax::swing::text::MaskFormatter$UpperCaseCharacter;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _MaskFormatter_FieldInfo_[] = {
	{"DIGIT_KEY", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaskFormatter, DIGIT_KEY)},
	{"LITERAL_KEY", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaskFormatter, LITERAL_KEY)},
	{"UPPERCASE_KEY", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaskFormatter, UPPERCASE_KEY)},
	{"LOWERCASE_KEY", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaskFormatter, LOWERCASE_KEY)},
	{"ALPHA_NUMERIC_KEY", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaskFormatter, ALPHA_NUMERIC_KEY)},
	{"CHARACTER_KEY", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaskFormatter, CHARACTER_KEY)},
	{"ANYTHING_KEY", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaskFormatter, ANYTHING_KEY)},
	{"HEX_KEY", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaskFormatter, HEX_KEY)},
	{"EmptyMaskChars", "[Ljavax/swing/text/MaskFormatter$MaskCharacter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MaskFormatter, EmptyMaskChars)},
	{"mask", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MaskFormatter, mask)},
	{"maskChars", "[Ljavax/swing/text/MaskFormatter$MaskCharacter;", nullptr, $PRIVATE | $TRANSIENT, $field(MaskFormatter, maskChars)},
	{"validCharacters", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MaskFormatter, validCharacters)},
	{"invalidCharacters", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MaskFormatter, invalidCharacters)},
	{"placeholderString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MaskFormatter, placeholderString)},
	{"placeholder", "C", nullptr, $PRIVATE, $field(MaskFormatter, placeholder)},
	{"containsLiteralChars", "Z", nullptr, $PRIVATE, $field(MaskFormatter, containsLiteralChars)},
	{}
};

$MethodInfo _MaskFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MaskFormatter::*)()>(&MaskFormatter::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MaskFormatter::*)($String*)>(&MaskFormatter::init$)), "java.text.ParseException"},
	{"append", "(Ljava/lang/StringBuilder;Ljava/lang/String;[ILjava/lang/String;[Ljavax/swing/text/MaskFormatter$MaskCharacter;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter::*)($StringBuilder*,$String*,$ints*,$String*,$MaskFormatter$MaskCharacterArray*)>(&MaskFormatter::append)), "java.text.ParseException"},
	{"canReplace", "(Ljavax/swing/text/DefaultFormatter$ReplaceHolder;)Z", nullptr, 0},
	{"getCharacter", "(IC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(MaskFormatter::*)(int32_t,char16_t)>(&MaskFormatter::getCharacter))},
	{"getInvalidCharacters", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInvalidOffset", "(Ljava/lang/String;Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MaskFormatter::*)($String*,bool)>(&MaskFormatter::getInvalidOffset))},
	{"getLiteral", "(I)C", nullptr, $PRIVATE, $method(static_cast<char16_t(MaskFormatter::*)(int32_t)>(&MaskFormatter::getLiteral))},
	{"getMask", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMaskCharacter", "(I)Ljavax/swing/text/MaskFormatter$MaskCharacter;", nullptr, $PRIVATE, $method(static_cast<$MaskFormatter$MaskCharacter*(MaskFormatter::*)(int32_t)>(&MaskFormatter::getMaskCharacter))},
	{"getMaxLength", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(MaskFormatter::*)()>(&MaskFormatter::getMaxLength))},
	{"getPlaceholder", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPlaceholderCharacter", "()C", nullptr, $PUBLIC},
	{"getValidCharacters", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValueContainsLiteralCharacters", "()Z", nullptr, $PUBLIC},
	{"install", "(Ljavax/swing/JFormattedTextField;)V", nullptr, $PUBLIC},
	{"isLiteral", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(MaskFormatter::*)(int32_t)>(&MaskFormatter::isLiteral))},
	{"isNavigatable", "(I)Z", nullptr, 0},
	{"isPlaceholder", "(IC)Z", nullptr, $PRIVATE, $method(static_cast<bool(MaskFormatter::*)(int32_t,char16_t)>(&MaskFormatter::isPlaceholder))},
	{"isValidCharacter", "(IC)Z", nullptr, $PRIVATE, $method(static_cast<bool(MaskFormatter::*)(int32_t,char16_t)>(&MaskFormatter::isValidCharacter))},
	{"isValidEdit", "(Ljavax/swing/text/DefaultFormatter$ReplaceHolder;)Z", nullptr, 0},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter::*)($ObjectInputStream*)>(&MaskFormatter::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setInvalidCharacters", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setMask", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"setPlaceholder", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPlaceholderCharacter", "(C)V", nullptr, $PUBLIC},
	{"setValidCharacters", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setValueContainsLiteralCharacters", "(Z)V", nullptr, $PUBLIC},
	{"stringToValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"stringToValue", "(Ljava/lang/String;Z)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(MaskFormatter::*)($String*,bool)>(&MaskFormatter::stringToValue)), "java.text.ParseException"},
	{"stripLiteralChars", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MaskFormatter::*)($String*)>(&MaskFormatter::stripLiteralChars))},
	{"updateInternalMask", "()V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter::*)()>(&MaskFormatter::updateInternalMask)), "java.text.ParseException"},
	{"valueToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{}
};

$InnerClassInfo _MaskFormatter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$HexCharacter", "javax.swing.text.MaskFormatter", "HexCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$CharCharacter", "javax.swing.text.MaskFormatter", "CharCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$AlphaNumericCharacter", "javax.swing.text.MaskFormatter", "AlphaNumericCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$LowerCaseCharacter", "javax.swing.text.MaskFormatter", "LowerCaseCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$UpperCaseCharacter", "javax.swing.text.MaskFormatter", "UpperCaseCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$DigitMaskCharacter", "javax.swing.text.MaskFormatter", "DigitMaskCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$LiteralCharacter", "javax.swing.text.MaskFormatter", "LiteralCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.MaskFormatter",
	"javax.swing.text.DefaultFormatter",
	nullptr,
	_MaskFormatter_FieldInfo_,
	_MaskFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter$HexCharacter,javax.swing.text.MaskFormatter$CharCharacter,javax.swing.text.MaskFormatter$AlphaNumericCharacter,javax.swing.text.MaskFormatter$LowerCaseCharacter,javax.swing.text.MaskFormatter$UpperCaseCharacter,javax.swing.text.MaskFormatter$DigitMaskCharacter,javax.swing.text.MaskFormatter$LiteralCharacter,javax.swing.text.MaskFormatter$MaskCharacter"
};

$Object* allocate$MaskFormatter($Class* clazz) {
	return $of($alloc(MaskFormatter));
}

$MaskFormatter$MaskCharacterArray* MaskFormatter::EmptyMaskChars = nullptr;

void MaskFormatter::init$() {
	$DefaultFormatter::init$();
	setAllowsInvalid(false);
	this->containsLiteralChars = true;
	$set(this, maskChars, MaskFormatter::EmptyMaskChars);
	this->placeholder = u' ';
}

void MaskFormatter::init$($String* mask) {
	MaskFormatter::init$();
	setMask(mask);
}

void MaskFormatter::setMask($String* mask) {
	$set(this, mask, mask);
	updateInternalMask();
}

$String* MaskFormatter::getMask() {
	return this->mask;
}

void MaskFormatter::setValidCharacters($String* validCharacters) {
	$set(this, validCharacters, validCharacters);
}

$String* MaskFormatter::getValidCharacters() {
	return this->validCharacters;
}

void MaskFormatter::setInvalidCharacters($String* invalidCharacters) {
	$set(this, invalidCharacters, invalidCharacters);
}

$String* MaskFormatter::getInvalidCharacters() {
	return this->invalidCharacters;
}

void MaskFormatter::setPlaceholder($String* placeholder) {
	$set(this, placeholderString, placeholder);
}

$String* MaskFormatter::getPlaceholder() {
	return this->placeholderString;
}

void MaskFormatter::setPlaceholderCharacter(char16_t placeholder) {
	this->placeholder = placeholder;
}

char16_t MaskFormatter::getPlaceholderCharacter() {
	return this->placeholder;
}

void MaskFormatter::setValueContainsLiteralCharacters(bool containsLiteralChars) {
	this->containsLiteralChars = containsLiteralChars;
}

bool MaskFormatter::getValueContainsLiteralCharacters() {
	return this->containsLiteralChars;
}

$Object* MaskFormatter::stringToValue($String* value) {
	return $of(stringToValue(value, true));
}

$String* MaskFormatter::valueToString(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, sValue, (value == nullptr) ? ""_s : $nc($of(value))->toString());
	$var($StringBuilder, result, $new($StringBuilder));
	$var($String, placeholder, getPlaceholder());
	$var($ints, valueCounter, $new($ints, {0}));
	append(result, sValue, valueCounter, placeholder, this->maskChars);
	return result->toString();
}

void MaskFormatter::install($JFormattedTextField* ftf) {
	$useLocalCurrentObjectStackCache();
	$DefaultFormatter::install(ftf);
	if (ftf != nullptr) {
		$var($Object, value, ftf->getValue());
		try {
			stringToValue($(valueToString(value)));
		} catch ($ParseException&) {
			$var($ParseException, pe, $catch());
			setEditValid(false);
		}
	}
}

$Object* MaskFormatter::stringToValue($String* value$renamed, bool completeMatch) {
	$var($String, value, value$renamed);
	int32_t errorOffset = 0;
	if ((errorOffset = getInvalidOffset(value, completeMatch)) == -1) {
		if (!getValueContainsLiteralCharacters()) {
			$assign(value, stripLiteralChars(value));
		}
		return $of($DefaultFormatter::stringToValue(value));
	}
	$throwNew($ParseException, "stringToValue passed invalid value"_s, errorOffset);
}

int32_t MaskFormatter::getInvalidOffset($String* string, bool completeMatch) {
	int32_t iLength = $nc(string)->length();
	if (iLength != getMaxLength()) {
		return iLength;
	}
	{
		int32_t counter = 0;
		int32_t max = string->length();
		for (; counter < max; ++counter) {
			char16_t aChar = string->charAt(counter);
			bool var$0 = !isValidCharacter(counter, aChar);
			if (var$0 && (completeMatch || !isPlaceholder(counter, aChar))) {
				return counter;
			}
		}
	}
	return -1;
}

void MaskFormatter::append($StringBuilder* result, $String* value, $ints* index, $String* placeholder, $MaskFormatter$MaskCharacterArray* mask) {
	{
		int32_t counter = 0;
		int32_t maxCounter = $nc(mask)->length;
		for (; counter < maxCounter; ++counter) {
			$nc(mask->get(counter))->append(result, value, index, placeholder);
		}
	}
}

void MaskFormatter::updateInternalMask() {
	$useLocalCurrentObjectStackCache();
	$var($String, mask, getMask());
	$var($ArrayList, fixed, $new($ArrayList));
	$var($ArrayList, temp, fixed);
	if (mask != nullptr) {
		{
			int32_t counter = 0;
			int32_t maxCounter = mask->length();
			for (; counter < maxCounter; ++counter) {
				char16_t maskChar = mask->charAt(counter);
				switch (maskChar) {
				case MaskFormatter::DIGIT_KEY:
					{
						temp->add($$new($MaskFormatter$DigitMaskCharacter, this));
						break;
					}
				case MaskFormatter::LITERAL_KEY:
					{
						if (++counter < maxCounter) {
							maskChar = mask->charAt(counter);
							temp->add($$new($MaskFormatter$LiteralCharacter, this, maskChar));
						}
						break;
					}
				case MaskFormatter::UPPERCASE_KEY:
					{
						temp->add($$new($MaskFormatter$UpperCaseCharacter, this));
						break;
					}
				case MaskFormatter::LOWERCASE_KEY:
					{
						temp->add($$new($MaskFormatter$LowerCaseCharacter, this));
						break;
					}
				case MaskFormatter::ALPHA_NUMERIC_KEY:
					{
						temp->add($$new($MaskFormatter$AlphaNumericCharacter, this));
						break;
					}
				case MaskFormatter::CHARACTER_KEY:
					{
						temp->add($$new($MaskFormatter$CharCharacter, this));
						break;
					}
				case MaskFormatter::ANYTHING_KEY:
					{
						temp->add($$new($MaskFormatter$MaskCharacter, this));
						break;
					}
				case MaskFormatter::HEX_KEY:
					{
						temp->add($$new($MaskFormatter$HexCharacter, this));
						break;
					}
				default:
					{
						temp->add($$new($MaskFormatter$LiteralCharacter, this, maskChar));
						break;
					}
				}
			}
		}
	}
	if (fixed->size() == 0) {
		$set(this, maskChars, MaskFormatter::EmptyMaskChars);
	} else {
		$set(this, maskChars, $new($MaskFormatter$MaskCharacterArray, fixed->size()));
		fixed->toArray(this->maskChars);
	}
}

$MaskFormatter$MaskCharacter* MaskFormatter::getMaskCharacter(int32_t index) {
	if (index >= $nc(this->maskChars)->length) {
		return nullptr;
	}
	return $nc(this->maskChars)->get(index);
}

bool MaskFormatter::isPlaceholder(int32_t index, char16_t aChar) {
	return (getPlaceholderCharacter() == aChar);
}

bool MaskFormatter::isValidCharacter(int32_t index, char16_t aChar) {
	return $nc($(getMaskCharacter(index)))->isValidCharacter(aChar);
}

bool MaskFormatter::isLiteral(int32_t index) {
	return $nc($(getMaskCharacter(index)))->isLiteral();
}

int32_t MaskFormatter::getMaxLength() {
	return $nc(this->maskChars)->length;
}

char16_t MaskFormatter::getLiteral(int32_t index) {
	return $nc($(getMaskCharacter(index)))->getChar((char16_t)0);
}

char16_t MaskFormatter::getCharacter(int32_t index, char16_t aChar) {
	return $nc($(getMaskCharacter(index)))->getChar(aChar);
}

$String* MaskFormatter::stripLiteralChars($String* string) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, nullptr);
	int32_t last = 0;
	{
		int32_t counter = 0;
		int32_t max = $nc(string)->length();
		for (; counter < max; ++counter) {
			if (isLiteral(counter)) {
				if (sb == nullptr) {
					$assign(sb, $new($StringBuilder));
					if (counter > 0) {
						sb->append($(string->substring(0, counter)));
					}
					last = counter + 1;
				} else if (last != counter) {
					$nc(sb)->append($(string->substring(last, counter)));
				}
				last = counter + 1;
			}
		}
	}
	if (sb == nullptr) {
		return string;
	} else if (last != string->length()) {
		if (sb == nullptr) {
			return string->substring(last);
		}
		$nc(sb)->append($(string->substring(last)));
	}
	return $nc(sb)->toString();
}

void MaskFormatter::readObject($ObjectInputStream* s) {
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$set(this, validCharacters, $cast($String, $nc(f)->get("validCharacters"_s, ($Object*)nullptr)));
	$set(this, invalidCharacters, $cast($String, f->get("invalidCharacters"_s, ($Object*)nullptr)));
	$set(this, placeholderString, $cast($String, f->get("placeholderString"_s, ($Object*)nullptr)));
	this->placeholder = f->get("placeholder"_s, u'\0');
	this->containsLiteralChars = f->get("containsLiteralChars"_s, false);
	$set(this, mask, $cast($String, f->get("mask"_s, ($Object*)nullptr)));
	try {
		updateInternalMask();
	} catch ($ParseException&) {
		$catch();
	}
}

bool MaskFormatter::isNavigatable(int32_t offset) {
	if (!getAllowsInvalid()) {
		bool var$0 = offset < getMaxLength();
		return (var$0 && !isLiteral(offset));
	}
	return true;
}

bool MaskFormatter::isValidEdit($DefaultFormatter$ReplaceHolder* rh) {
	$useLocalCurrentObjectStackCache();
	if (!getAllowsInvalid()) {
		$var($String, newString, getReplaceString($nc(rh)->offset, rh->length, rh->text));
		try {
			$set($nc(rh), value, stringToValue(newString, false));
			return true;
		} catch ($ParseException&) {
			$var($ParseException, pe, $catch());
			return false;
		}
	}
	return true;
}

bool MaskFormatter::canReplace($DefaultFormatter$ReplaceHolder* rh) {
	$useLocalCurrentObjectStackCache();
	if (!getAllowsInvalid()) {
		$var($StringBuilder, replace, nullptr);
		$var($String, text, $nc(rh)->text);
		int32_t tl = (text != nullptr) ? $nc(text)->length() : 0;
		if (tl == 0 && rh->length == 1 && $nc($(getFormattedTextField()))->getSelectionStart() != rh->offset) {
			while (rh->offset > 0 && isLiteral(rh->offset)) {
				--rh->offset;
			}
		}
		int32_t var$0 = getMaxLength() - rh->offset;
		int32_t max = $Math::min(var$0, $Math::max(tl, rh->length));
		{
			int32_t counter = 0;
			int32_t textIndex = 0;
			for (; counter < max; ++counter) {
				if (textIndex < tl && isValidCharacter(rh->offset + counter, text->charAt(textIndex))) {
					char16_t aChar = text->charAt(textIndex);
					if (aChar != getCharacter(rh->offset + counter, aChar)) {
						if (replace == nullptr) {
							$assign(replace, $new($StringBuilder));
							if (textIndex > 0) {
								replace->append($(text->substring(0, textIndex)));
							}
						}
					}
					if (replace != nullptr) {
						replace->append(getCharacter(rh->offset + counter, aChar));
					}
					++textIndex;
				} else if (isLiteral(rh->offset + counter)) {
					if (replace != nullptr) {
						replace->append(getLiteral(rh->offset + counter));
						if (textIndex < tl) {
							max = $Math::min(max + 1, getMaxLength() - rh->offset);
						}
					} else if (textIndex > 0) {
						$assign(replace, $new($StringBuilder, max));
						replace->append($(text->substring(0, textIndex)));
						replace->append(getLiteral(rh->offset + counter));
						if (textIndex < tl) {
							max = $Math::min(max + 1, getMaxLength() - rh->offset);
						} else if (rh->cursorPosition == -1) {
							rh->cursorPosition = rh->offset + counter;
						}
					} else {
						++rh->offset;
						--rh->length;
						--counter;
						--max;
					}
				} else if (textIndex >= tl) {
					if (replace == nullptr) {
						$assign(replace, $new($StringBuilder));
						if (text != nullptr) {
							replace->append(text);
						}
					}
					$nc(replace)->append(getPlaceholderCharacter());
					if (tl > 0 && rh->cursorPosition == -1) {
						rh->cursorPosition = rh->offset + counter;
					}
				} else {
					return false;
				}
			}
		}
		if (replace != nullptr) {
			$set(rh, text, replace->toString());
		} else if (text != nullptr && rh->offset + tl > getMaxLength()) {
			$set(rh, text, text->substring(0, getMaxLength() - rh->offset));
		}
		if (getOverwriteMode() && rh->text != nullptr) {
			rh->length = $nc(rh->text)->length();
		}
	}
	return $DefaultFormatter::canReplace(rh);
}

void clinit$MaskFormatter($Class* class$) {
	$assignStatic(MaskFormatter::EmptyMaskChars, $new($MaskFormatter$MaskCharacterArray, 0));
}

MaskFormatter::MaskFormatter() {
}

$Class* MaskFormatter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter, name, initialize, &_MaskFormatter_ClassInfo_, clinit$MaskFormatter, allocate$MaskFormatter);
	return class$;
}

$Class* MaskFormatter::class$ = nullptr;

		} // text
	} // swing
} // javax