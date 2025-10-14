#include <javax/print/MimeType.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/Vector.h>
#include <javax/print/MimeType$LexicalAnalyzer.h>
#include <javax/print/MimeType$ParameterMap.h>
#include <javax/print/MimeType$ParameterMapEntrySet.h>
#include <jcpp.h>

#undef EOF_LEXEME
#undef ILLEGAL_LEXEME
#undef QUOTED_STRING_LEXEME
#undef TOKEN_LEXEME
#undef TSPECIAL_LEXEME

using $Serializable = ::java::io::Serializable;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $Vector = ::java::util::Vector;
using $MimeType$LexicalAnalyzer = ::javax::print::MimeType$LexicalAnalyzer;
using $MimeType$ParameterMap = ::javax::print::MimeType$ParameterMap;
using $MimeType$ParameterMapEntrySet = ::javax::print::MimeType$ParameterMapEntrySet;

namespace javax {
	namespace print {

$FieldInfo _MimeType_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeType, serialVersionUID)},
	{"myPieces", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(MimeType, myPieces)},
	{"myStringValue", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(MimeType, myStringValue)},
	{"myEntrySet", "Ljavax/print/MimeType$ParameterMapEntrySet;", nullptr, $PRIVATE | $TRANSIENT, $field(MimeType, myEntrySet)},
	{"myParameterMap", "Ljavax/print/MimeType$ParameterMap;", nullptr, $PRIVATE | $TRANSIENT, $field(MimeType, myParameterMap)},
	{"TOKEN_LEXEME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeType, TOKEN_LEXEME)},
	{"QUOTED_STRING_LEXEME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeType, QUOTED_STRING_LEXEME)},
	{"TSPECIAL_LEXEME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeType, TSPECIAL_LEXEME)},
	{"EOF_LEXEME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeType, EOF_LEXEME)},
	{"ILLEGAL_LEXEME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeType, ILLEGAL_LEXEME)},
	{}
};

$MethodInfo _MimeType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MimeType::*)($String*)>(&MimeType::init$))},
	{"addQuotes", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&MimeType::addQuotes))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getMediaSubtype", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMediaType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParameterMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MimeType::*)()>(&MimeType::getStringValue))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MimeType::*)($String*)>(&MimeType::parse))},
	{"removeBackslashes", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&MimeType::removeBackslashes))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUnicodeLowerCase", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&MimeType::toUnicodeLowerCase))},
	{}
};

$InnerClassInfo _MimeType_InnerClassesInfo_[] = {
	{"javax.print.MimeType$LexicalAnalyzer", "javax.print.MimeType", "LexicalAnalyzer", $PRIVATE | $STATIC},
	{"javax.print.MimeType$ParameterMap", "javax.print.MimeType", "ParameterMap", $PRIVATE},
	{"javax.print.MimeType$ParameterMapEntrySet", "javax.print.MimeType", "ParameterMapEntrySet", $PRIVATE},
	{"javax.print.MimeType$ParameterMapEntrySetIterator", "javax.print.MimeType", "ParameterMapEntrySetIterator", $PRIVATE},
	{"javax.print.MimeType$ParameterMapEntry", "javax.print.MimeType", "ParameterMapEntry", $PRIVATE},
	{}
};

$ClassInfo _MimeType_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.MimeType",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_MimeType_FieldInfo_,
	_MimeType_MethodInfo_,
	nullptr,
	nullptr,
	_MimeType_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.print.MimeType$LexicalAnalyzer,javax.print.MimeType$ParameterMap,javax.print.MimeType$ParameterMapEntrySet,javax.print.MimeType$ParameterMapEntrySetIterator,javax.print.MimeType$ParameterMapEntry"
};

$Object* allocate$MimeType($Class* clazz) {
	return $of($alloc(MimeType));
}

$Object* MimeType::clone() {
	 return this->$Serializable::clone();
}

void MimeType::finalize() {
	this->$Serializable::finalize();
}

void MimeType::init$($String* s) {
	$set(this, myStringValue, nullptr);
	$set(this, myEntrySet, nullptr);
	$set(this, myParameterMap, nullptr);
	parse(s);
}

$String* MimeType::getMimeType() {
	return getStringValue();
}

$String* MimeType::getMediaType() {
	return $nc(this->myPieces)->get(0);
}

$String* MimeType::getMediaSubtype() {
	return $nc(this->myPieces)->get(1);
}

$Map* MimeType::getParameterMap() {
	if (this->myParameterMap == nullptr) {
		$set(this, myParameterMap, $new($MimeType$ParameterMap, this));
	}
	return this->myParameterMap;
}

$String* MimeType::toString() {
	return getStringValue();
}

int32_t MimeType::hashCode() {
	return $nc($(getStringValue()))->hashCode();
}

bool MimeType::equals(Object$* obj) {
	return (obj != nullptr && $instanceOf(MimeType, obj) && $nc($(getStringValue()))->equals($($nc(($cast(MimeType, obj)))->getStringValue())));
}

$String* MimeType::getStringValue() {
	if (this->myStringValue == nullptr) {
		$var($StringBuilder, result, $new($StringBuilder));
		result->append($nc(this->myPieces)->get(0));
		result->append(u'/');
		result->append($nc(this->myPieces)->get(1));
		int32_t n = $nc(this->myPieces)->length;
		for (int32_t i = 2; i < n; i += 2) {
			result->append(u';');
			result->append(u' ');
			result->append($nc(this->myPieces)->get(i));
			result->append(u'=');
			result->append($(addQuotes($nc(this->myPieces)->get(i + 1))));
		}
		$set(this, myStringValue, result->toString());
	}
	return this->myStringValue;
}

$String* MimeType::toUnicodeLowerCase($String* s) {
	$init(MimeType);
	int32_t n = $nc(s)->length();
	$var($chars, result, $new($chars, n));
	for (int32_t i = 0; i < n; ++i) {
		result->set(i, $Character::toLowerCase(s->charAt(i)));
	}
	return $new($String, result);
}

$String* MimeType::removeBackslashes($String* s) {
	$init(MimeType);
	int32_t n = $nc(s)->length();
	$var($chars, result, $new($chars, n));
	int32_t i = 0;
	int32_t j = 0;
	char16_t c = 0;
	for (i = 0; i < n; ++i) {
		c = s->charAt(i);
		if (c == u'\\') {
			c = s->charAt(++i);
		}
		result->set(j++, c);
	}
	return $new($String, result, 0, j);
}

$String* MimeType::addQuotes($String* s) {
	$init(MimeType);
	int32_t n = $nc(s)->length();
	int32_t i = 0;
	char16_t c = 0;
	$var($StringBuilder, result, $new($StringBuilder, n + 2));
	result->append(u'\"');
	for (i = 0; i < n; ++i) {
		c = s->charAt(i);
		if (c == u'\"') {
			result->append(u'\\');
		}
		result->append(c);
	}
	result->append(u'\"');
	return result->toString();
}

void MimeType::parse($String* s) {
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($MimeType$LexicalAnalyzer, theLexer, $new($MimeType$LexicalAnalyzer, s));
	int32_t theLexemeType = 0;
	$var($Vector, thePieces, $new($Vector));
	bool mediaTypeIsText = false;
	bool parameterNameIsCharset = false;
	if (theLexer->getLexemeType() == MimeType::TOKEN_LEXEME) {
		$var($String, mt, toUnicodeLowerCase($(theLexer->getLexeme())));
		thePieces->add(mt);
		theLexer->nextLexeme();
		mediaTypeIsText = $nc(mt)->equals("text"_s);
	} else {
		$throwNew($IllegalArgumentException);
	}
	bool var$0 = theLexer->getLexemeType() == MimeType::TSPECIAL_LEXEME;
	if (var$0 && theLexer->getLexemeFirstCharacter() == u'/') {
		theLexer->nextLexeme();
	} else {
		$throwNew($IllegalArgumentException);
	}
	if (theLexer->getLexemeType() == MimeType::TOKEN_LEXEME) {
		thePieces->add($(toUnicodeLowerCase($(theLexer->getLexeme()))));
		theLexer->nextLexeme();
	} else {
		$throwNew($IllegalArgumentException);
	}
	while (true) {
		bool var$1 = theLexer->getLexemeType() == MimeType::TSPECIAL_LEXEME;
		if (!(var$1 && theLexer->getLexemeFirstCharacter() == u';')) {
			break;
		}
		{
			theLexer->nextLexeme();
			if (theLexer->getLexemeType() == MimeType::TOKEN_LEXEME) {
				$var($String, pn, toUnicodeLowerCase($(theLexer->getLexeme())));
				thePieces->add(pn);
				theLexer->nextLexeme();
				parameterNameIsCharset = $nc(pn)->equals("charset"_s);
			} else {
				$throwNew($IllegalArgumentException);
			}
			bool var$2 = theLexer->getLexemeType() == MimeType::TSPECIAL_LEXEME;
			if (var$2 && theLexer->getLexemeFirstCharacter() == u'=') {
				theLexer->nextLexeme();
			} else {
				$throwNew($IllegalArgumentException);
			}
			if (theLexer->getLexemeType() == MimeType::TOKEN_LEXEME) {
				$var($String, pv, theLexer->getLexeme());
				thePieces->add(mediaTypeIsText && parameterNameIsCharset ? $(toUnicodeLowerCase(pv)) : pv);
				theLexer->nextLexeme();
			} else if (theLexer->getLexemeType() == MimeType::QUOTED_STRING_LEXEME) {
				$var($String, pv, removeBackslashes($(theLexer->getLexeme())));
				thePieces->add(mediaTypeIsText && parameterNameIsCharset ? $(toUnicodeLowerCase(pv)) : pv);
				theLexer->nextLexeme();
			} else {
				$throwNew($IllegalArgumentException);
			}
		}
	}
	if (theLexer->getLexemeType() != MimeType::EOF_LEXEME) {
		$throwNew($IllegalArgumentException);
	}
	int32_t n = thePieces->size();
	$set(this, myPieces, $fcast($StringArray, thePieces->toArray($$new($StringArray, n))));
	int32_t i = 0;
	int32_t j = 0;
	$var($String, temp, nullptr);
	for (i = 4; i < n; i += 2) {
		j = 2;
		while (j < i && $nc($nc(this->myPieces)->get(j))->compareTo($nc(this->myPieces)->get(i)) <= 0) {
			j += 2;
		}
		while (j < i) {
			$assign(temp, $nc(this->myPieces)->get(j));
			$nc(this->myPieces)->set(j, $nc(this->myPieces)->get(i));
			$nc(this->myPieces)->set(i, temp);
			$assign(temp, $nc(this->myPieces)->get(j + 1));
			$nc(this->myPieces)->set(j + 1, $nc(this->myPieces)->get(i + 1));
			$nc(this->myPieces)->set(i + 1, temp);
			j += 2;
		}
	}
}

MimeType::MimeType() {
}

$Class* MimeType::load$($String* name, bool initialize) {
	$loadClass(MimeType, name, initialize, &_MimeType_ClassInfo_, allocate$MimeType);
	return class$;
}

$Class* MimeType::class$ = nullptr;

	} // print
} // javax