#include <javax/swing/text/NumberFormatter.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/DecimalFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/Format$Field.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat$Field.h>
#include <java/text/NumberFormat.h>
#include <java/text/ParseException.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CURRENCY
#undef EXPONENT
#undef EXPONENT_SIGN
#undef EXPONENT_SYMBOL
#undef GROUPING_SEPARATOR
#undef INTEGER
#undef PERCENT
#undef PERMILLE
#undef SIGN

using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Short = ::java::lang::Short;
using $Constructor = ::java::lang::reflect::Constructor;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $CharacterIterator = ::java::text::CharacterIterator;
using $DecimalFormat = ::java::text::DecimalFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $Format = ::java::text::Format;
using $Format$Field = ::java::text::Format$Field;
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormat$Field = ::java::text::NumberFormat$Field;
using $ParseException = ::java::text::ParseException;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _NumberFormatter_FieldInfo_[] = {
	{"specialChars", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NumberFormatter, specialChars)},
	{}
};

$MethodInfo _NumberFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NumberFormatter::*)()>(&NumberFormatter::init$))},
	{"<init>", "(Ljava/text/NumberFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(NumberFormatter::*)($NumberFormat*)>(&NumberFormatter::init$))},
	{"convertValueToValueClass", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE, $method(static_cast<$Object*(NumberFormatter::*)(Object$*,$Class*)>(&NumberFormatter::convertValueToValueClass))},
	{"getDecimalFormatSymbols", "()Ljava/text/DecimalFormatSymbols;", nullptr, $PRIVATE, $method(static_cast<$DecimalFormatSymbols*(NumberFormatter::*)()>(&NumberFormatter::getDecimalFormatSymbols))},
	{"getDecimalSeparator", "()C", nullptr, $PRIVATE, $method(static_cast<char16_t(NumberFormatter::*)()>(&NumberFormatter::getDecimalSeparator))},
	{"getFieldFrom", "(II)Ljava/text/NumberFormat$Field;", nullptr, $PRIVATE, $method(static_cast<$NumberFormat$Field*(NumberFormatter::*)(int32_t,int32_t)>(&NumberFormatter::getFieldFrom))},
	{"getMinusSign", "()C", nullptr, $PRIVATE, $method(static_cast<char16_t(NumberFormatter::*)()>(&NumberFormatter::getMinusSign))},
	{"getPositiveSign", "()C", nullptr, $PRIVATE, $method(static_cast<char16_t(NumberFormatter::*)()>(&NumberFormatter::getPositiveSign))},
	{"isLegalInsertText", "(Ljava/lang/String;)Z", nullptr, 0},
	{"isLiteral", "(Ljava/util/Map;)Z", "(Ljava/util/Map<**>;)Z", 0},
	{"isNavigatable", "(I)Z", nullptr, 0},
	{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, 0, nullptr, "javax.swing.text.BadLocationException"},
	{"setFormat", "(Ljava/text/Format;)V", nullptr, $PUBLIC},
	{"stringToValue", "(Ljava/lang/String;Ljava/text/Format;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.text.ParseException"},
	{"toggleExponentSign", "(IC)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(NumberFormatter::*)(int32_t,char16_t)>(&NumberFormatter::toggleExponentSign)), "javax.swing.text.BadLocationException,java.text.ParseException"},
	{"toggleSign", "(Z)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(NumberFormatter::*)(bool)>(&NumberFormatter::toggleSign)), "java.text.ParseException"},
	{"toggleSignIfNecessary", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IC)Z", nullptr, $PRIVATE, $method(static_cast<bool(NumberFormatter::*)($DocumentFilter$FilterBypass*,int32_t,char16_t)>(&NumberFormatter::toggleSignIfNecessary)), "javax.swing.text.BadLocationException"},
	{}
};

$ClassInfo _NumberFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.NumberFormatter",
	"javax.swing.text.InternationalFormatter",
	nullptr,
	_NumberFormatter_FieldInfo_,
	_NumberFormatter_MethodInfo_
};

$Object* allocate$NumberFormatter($Class* clazz) {
	return $of($alloc(NumberFormatter));
}

void NumberFormatter::init$() {
	NumberFormatter::init$($($NumberFormat::getNumberInstance()));
}

void NumberFormatter::init$($NumberFormat* format) {
	$InternationalFormatter::init$(format);
	setFormat(format);
	setAllowsInvalid(true);
	setCommitsOnValidEdit(false);
	setOverwriteMode(false);
}

void NumberFormatter::setFormat($Format* format) {
	$InternationalFormatter::setFormat(format);
	$var($DecimalFormatSymbols, dfs, getDecimalFormatSymbols());
	if (dfs != nullptr) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append($(dfs->getCurrencySymbol()));
		sb->append(dfs->getDecimalSeparator());
		sb->append(dfs->getGroupingSeparator());
		sb->append($(dfs->getInfinity()));
		sb->append($(dfs->getInternationalCurrencySymbol()));
		sb->append(dfs->getMinusSign());
		sb->append(dfs->getMonetaryDecimalSeparator());
		sb->append($(dfs->getNaN()));
		sb->append(dfs->getPercent());
		sb->append(u'+');
		$set(this, specialChars, sb->toString());
	} else {
		$set(this, specialChars, ""_s);
	}
}

$Object* NumberFormatter::stringToValue($String* text, $Format* f) {
	if (f == nullptr) {
		return $of(text);
	}
	$var($Object, value, $nc(f)->parseObject(text));
	return $of(convertValueToValueClass(value, getValueClass()));
}

$Object* NumberFormatter::convertValueToValueClass(Object$* value, $Class* valueClass) {
	if (valueClass != nullptr && ($instanceOf($Number, value))) {
		$var($Number, numberValue, $cast($Number, value));
		$load($Integer);
		if (valueClass == $Integer::class$) {
			return $of($Integer::valueOf($nc(numberValue)->intValue()));
		} else {
			$load($Long);
			if (valueClass == $Long::class$) {
				return $of($Long::valueOf($nc(numberValue)->longValue()));
			} else {
				$load($Float);
				if (valueClass == $Float::class$) {
					return $of($Float::valueOf($nc(numberValue)->floatValue()));
				} else {
					$load($Double);
					if (valueClass == $Double::class$) {
						return $of($Double::valueOf($nc(numberValue)->doubleValue()));
					} else {
						$load($Byte);
						if (valueClass == $Byte::class$) {
							return $of($Byte::valueOf($nc(numberValue)->byteValue()));
						} else {
							$load($Short);
							if (valueClass == $Short::class$) {
								return $of($Short::valueOf($nc(numberValue)->shortValue()));
							}
						}
					}
				}
			}
		}
	}
	return $of(value);
}

char16_t NumberFormatter::getPositiveSign() {
	return u'+';
}

char16_t NumberFormatter::getMinusSign() {
	$var($DecimalFormatSymbols, dfs, getDecimalFormatSymbols());
	if (dfs != nullptr) {
		return dfs->getMinusSign();
	}
	return u'-';
}

char16_t NumberFormatter::getDecimalSeparator() {
	$var($DecimalFormatSymbols, dfs, getDecimalFormatSymbols());
	if (dfs != nullptr) {
		return dfs->getDecimalSeparator();
	}
	return u'.';
}

$DecimalFormatSymbols* NumberFormatter::getDecimalFormatSymbols() {
	$var($Format, f, getFormat());
	if ($instanceOf($DecimalFormat, f)) {
		return $nc(($cast($DecimalFormat, f)))->getDecimalFormatSymbols();
	}
	return nullptr;
}

bool NumberFormatter::isLegalInsertText($String* text) {
	if (getAllowsInvalid()) {
		return true;
	}
	for (int32_t counter = $nc(text)->length() - 1; counter >= 0; --counter) {
		char16_t aChar = text->charAt(counter);
		bool var$0 = !$Character::isDigit(aChar);
		if (var$0 && $nc(this->specialChars)->indexOf((int32_t)aChar) == -1) {
			return false;
		}
	}
	return true;
}

bool NumberFormatter::isLiteral($Map* attrs) {
	if (!$InternationalFormatter::isLiteral(attrs)) {
		if (attrs == nullptr) {
			return false;
		}
		int32_t size = $nc(attrs)->size();
		$init($NumberFormat$Field);
		if (attrs->get($NumberFormat$Field::GROUPING_SEPARATOR) != nullptr) {
			--size;
			if (attrs->get($NumberFormat$Field::INTEGER) != nullptr) {
				--size;
			}
		}
		if (attrs->get($NumberFormat$Field::EXPONENT_SYMBOL) != nullptr) {
			--size;
		}
		if (attrs->get($NumberFormat$Field::PERCENT) != nullptr) {
			--size;
		}
		if (attrs->get($NumberFormat$Field::PERMILLE) != nullptr) {
			--size;
		}
		if (attrs->get($NumberFormat$Field::CURRENCY) != nullptr) {
			--size;
		}
		if (attrs->get($NumberFormat$Field::SIGN) != nullptr) {
			--size;
		}
		return size == 0;
	}
	return true;
}

bool NumberFormatter::isNavigatable(int32_t index) {
	if (!$InternationalFormatter::isNavigatable(index)) {
		char16_t var$0 = getBufferedChar(index);
		return var$0 == getDecimalSeparator();
	}
	return true;
}

$NumberFormat$Field* NumberFormatter::getFieldFrom(int32_t index, int32_t direction) {
	if (isValidMask()) {
		int32_t max = $nc($($nc($(getFormattedTextField()))->getDocument()))->getLength();
		$var($AttributedCharacterIterator, iterator, getIterator());
		if (index >= max) {
			index += direction;
		}
		while (index >= 0 && index < max) {
			$nc(iterator)->setIndex(index);
			$var($Map, attrs, iterator->getAttributes());
			if (attrs != nullptr && attrs->size() > 0) {
				{
					$var($Iterator, i$, $nc($(attrs->keySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, key, i$->next());
						{
							if ($instanceOf($NumberFormat$Field, key)) {
								return $cast($NumberFormat$Field, key);
							}
						}
					}
				}
			}
			index += direction;
		}
	}
	return nullptr;
}

void NumberFormatter::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* string, $AttributeSet* attr) {
	bool var$1 = !getAllowsInvalid() && length == 0 && string != nullptr;
	bool var$0 = var$1 && string->length() == 1;
	if (var$0 && toggleSignIfNecessary(fb, offset, string->charAt(0))) {
		return;
	}
	$InternationalFormatter::replace(fb, offset, length, string, attr);
}

bool NumberFormatter::toggleSignIfNecessary($DocumentFilter$FilterBypass* fb, int32_t offset, char16_t aChar) {
	bool var$0 = aChar == getMinusSign();
	if (var$0 || aChar == getPositiveSign()) {
		$var($NumberFormat$Field, field, getFieldFrom(offset, -1));
		$var($Object, newValue, nullptr);
		try {
			$init($NumberFormat$Field);
			if (field == nullptr || (field != $NumberFormat$Field::EXPONENT && field != $NumberFormat$Field::EXPONENT_SYMBOL && field != $NumberFormat$Field::EXPONENT_SIGN)) {
				$assign(newValue, toggleSign((aChar == getPositiveSign())));
			} else {
				$assign(newValue, toggleExponentSign(offset, aChar));
			}
			if (newValue != nullptr && isValidValue(newValue, false)) {
				int32_t lc = getLiteralCountTo(offset);
				$var($String, string, valueToString(newValue));
				$nc(fb)->remove(0, $nc($(fb->getDocument()))->getLength());
				fb->insertString(0, string, nullptr);
				updateValue(newValue);
				repositionCursor(getLiteralCountTo(offset) - lc + offset, 1);
				return true;
			}
		} catch ($ParseException&) {
			$var($ParseException, pe, $catch());
			invalidEdit();
		}
	}
	return false;
}

$Object* NumberFormatter::toggleSign(bool positive) {
	$beforeCallerSensitive();
	$var($Object, value, stringToValue($($nc($(getFormattedTextField()))->getText())));
	if (value != nullptr) {
		$var($String, string, $of(value)->toString());
		if (string != nullptr && string->length() > 0) {
			if (positive) {
				if (string->charAt(0) == u'-') {
					$assign(string, string->substring(1));
				}
			} else {
				if (string->charAt(0) == u'+') {
					$assign(string, string->substring(1));
				}
				bool var$0 = string->length() > 0;
				if (var$0 && string->charAt(0) != u'-') {
					$assign(string, $str({"-"_s, string}));
				}
			}
			if (string != nullptr) {
				$Class* valueClass = getValueClass();
				if (valueClass == nullptr) {
					valueClass = $of(value)->getClass();
				}
				try {
					$ReflectUtil::checkPackageAccess(valueClass);
					$SwingUtilities2::checkAccess(valueClass->getModifiers());
					$load($String);
					$var($Constructor, cons, valueClass->getConstructor($$new($ClassArray, {$String::class$})));
					if (cons != nullptr) {
						$SwingUtilities2::checkAccess(cons->getModifiers());
						return $of(cons->newInstance($$new($ObjectArray, {$of(string)})));
					}
				} catch ($Throwable&) {
					$catch();
				}
			}
		}
	}
	return $of(nullptr);
}

$Object* NumberFormatter::toggleExponentSign(int32_t offset, char16_t aChar) {
	$var($String, string, $nc($(getFormattedTextField()))->getText());
	int32_t replaceLength = 0;
	$init($NumberFormat$Field);
	int32_t loc = getAttributeStart($NumberFormat$Field::EXPONENT_SIGN);
	if (loc >= 0) {
		replaceLength = 1;
		offset = loc;
	}
	if (aChar == getPositiveSign()) {
		$assign(string, getReplaceString(offset, replaceLength, nullptr));
	} else {
		$assign(string, getReplaceString(offset, replaceLength, $($String::valueOf(aChar))));
	}
	return $of(stringToValue(string));
}

NumberFormatter::NumberFormatter() {
}

$Class* NumberFormatter::load$($String* name, bool initialize) {
	$loadClass(NumberFormatter, name, initialize, &_NumberFormatter_ClassInfo_, allocate$NumberFormatter);
	return class$;
}

$Class* NumberFormatter::class$ = nullptr;

		} // text
	} // swing
} // javax