#include <sun/print/AttributeClass.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ATTRIBUTES_CHARSET
#undef ATTRIBUTES_NATURAL_LANGUAGE
#undef TAG_BOOL
#undef TAG_CHARSET
#undef TAG_DATE
#undef TAG_ENUM
#undef TAG_INT
#undef TAG_KEYWORD
#undef TAG_MEMBER_ATTRNAME
#undef TAG_MIME_MEDIATYPE
#undef TAG_NAME_LANGUAGE
#undef TAG_NAME_WO_LANGUAGE
#undef TAG_NATURALLANGUAGE
#undef TAG_OCTET
#undef TAG_RANGE_INTEGER
#undef TAG_RESOLUTION
#undef TAG_TEXT_LANGUAGE
#undef TAG_TEXT_WO_LANGUAGE
#undef TAG_UNSUPPORTED_VALUE
#undef TAG_URI

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace sun {
	namespace print {

$FieldInfo _AttributeClass_FieldInfo_[] = {
	{"myName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeClass, myName)},
	{"myType", "I", nullptr, $PRIVATE, $field(AttributeClass, myType)},
	{"nameLen", "I", nullptr, $PRIVATE, $field(AttributeClass, nameLen)},
	{"myValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AttributeClass, myValue)},
	{"TAG_UNSUPPORTED_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_UNSUPPORTED_VALUE)},
	{"TAG_INT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_INT)},
	{"TAG_BOOL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_BOOL)},
	{"TAG_ENUM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_ENUM)},
	{"TAG_OCTET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_OCTET)},
	{"TAG_DATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_DATE)},
	{"TAG_RESOLUTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_RESOLUTION)},
	{"TAG_RANGE_INTEGER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_RANGE_INTEGER)},
	{"TAG_TEXT_LANGUAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_TEXT_LANGUAGE)},
	{"TAG_NAME_LANGUAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_NAME_LANGUAGE)},
	{"TAG_TEXT_WO_LANGUAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_TEXT_WO_LANGUAGE)},
	{"TAG_NAME_WO_LANGUAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_NAME_WO_LANGUAGE)},
	{"TAG_KEYWORD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_KEYWORD)},
	{"TAG_URI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_URI)},
	{"TAG_CHARSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_CHARSET)},
	{"TAG_NATURALLANGUAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_NATURALLANGUAGE)},
	{"TAG_MIME_MEDIATYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_MIME_MEDIATYPE)},
	{"TAG_MEMBER_ATTRNAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AttributeClass, TAG_MEMBER_ATTRNAME)},
	{"ATTRIBUTES_CHARSET", "Lsun/print/AttributeClass;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AttributeClass, ATTRIBUTES_CHARSET)},
	{"ATTRIBUTES_NATURAL_LANGUAGE", "Lsun/print/AttributeClass;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AttributeClass, ATTRIBUTES_NATURAL_LANGUAGE)},
	{}
};

$MethodInfo _AttributeClass_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/Object;)V", nullptr, $PROTECTED, $method(static_cast<void(AttributeClass::*)($String*,int32_t,Object$*)>(&AttributeClass::init$))},
	{"convertToInt", "([B)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AttributeClass::*)($bytes*)>(&AttributeClass::convertToInt))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getArrayOfIntValues", "()[I", nullptr, $PUBLIC},
	{"getArrayOfStringValues", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getByteValue", "()B", nullptr, $PUBLIC},
	{"getIntRangeValue", "()[I", nullptr, $PUBLIC},
	{"getIntValue", "()I", nullptr, $PUBLIC},
	{"getLenChars", "()[C", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getObjectValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()B", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unsignedByteToInt", "(B)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AttributeClass::*)(int8_t)>(&AttributeClass::unsignedByteToInt))},
	{}
};

$ClassInfo _AttributeClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.AttributeClass",
	"java.lang.Object",
	nullptr,
	_AttributeClass_FieldInfo_,
	_AttributeClass_MethodInfo_
};

$Object* allocate$AttributeClass($Class* clazz) {
	return $of($alloc(AttributeClass));
}

AttributeClass* AttributeClass::ATTRIBUTES_CHARSET = nullptr;
AttributeClass* AttributeClass::ATTRIBUTES_NATURAL_LANGUAGE = nullptr;

void AttributeClass::init$($String* name, int32_t type, Object$* value) {
	$set(this, myName, name);
	this->myType = type;
	this->nameLen = $nc(name)->length();
	$set(this, myValue, value);
}

int8_t AttributeClass::getType() {
	return (int8_t)this->myType;
}

$chars* AttributeClass::getLenChars() {
	$var($chars, chars, $new($chars, 2));
	chars->set(0, (char16_t)0);
	chars->set(1, (char16_t)this->nameLen);
	return chars;
}

$Object* AttributeClass::getObjectValue() {
	return $of(this->myValue);
}

int32_t AttributeClass::getIntValue() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bufArray, $cast($bytes, this->myValue));
	if (bufArray != nullptr) {
		$var($bytes, buf, $new($bytes, 4));
		for (int32_t i = 0; i < 4; ++i) {
			buf->set(i, bufArray->get(i + 1));
		}
		return convertToInt(buf);
	}
	return 0;
}

$ints* AttributeClass::getArrayOfIntValues() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bufArray, $cast($bytes, this->myValue));
	if (bufArray != nullptr) {
		$var($ByteArrayInputStream, bufStream, $new($ByteArrayInputStream, bufArray));
		int32_t available = bufStream->available();
		bufStream->mark(available);
		bufStream->skip(available - 1);
		int32_t length = bufStream->read();
		bufStream->reset();
		$var($ints, valueArray, $new($ints, length));
		for (int32_t i = 0; i < length; ++i) {
			int32_t valLength = bufStream->read();
			if (valLength != 4) {
				return nullptr;
			}
			$var($bytes, bufBytes, $new($bytes, valLength));
			bufStream->read(bufBytes, 0, valLength);
			valueArray->set(i, convertToInt(bufBytes));
		}
		return valueArray;
	}
	return nullptr;
}

$ints* AttributeClass::getIntRangeValue() {
	$useLocalCurrentObjectStackCache();
	$var($ints, range, $new($ints, {
		0,
		0
	}));
	$var($bytes, bufArray, $cast($bytes, this->myValue));
	if (bufArray != nullptr) {
		int32_t nBytes = 4;
		for (int32_t j = 0; j < 2; ++j) {
			$var($bytes, intBytes, $new($bytes, nBytes));
			for (int32_t i = 0; i < nBytes; ++i) {
				intBytes->set(i, bufArray->get(i + (4 * j) + 1));
			}
			range->set(j, convertToInt(intBytes));
		}
	}
	return range;
}

$String* AttributeClass::getStringValue() {
	$useLocalCurrentObjectStackCache();
	$var($String, strVal, nullptr);
	$var($bytes, bufArray, $cast($bytes, this->myValue));
	if (bufArray != nullptr) {
		$var($ByteArrayInputStream, bufStream, $new($ByteArrayInputStream, bufArray));
		int32_t valLength = bufStream->read();
		$var($bytes, strBytes, $new($bytes, valLength));
		bufStream->read(strBytes, 0, valLength);
		try {
			$assign(strVal, $new($String, strBytes, "UTF-8"_s));
		} catch ($UnsupportedEncodingException& uee) {
		}
	}
	return strVal;
}

$StringArray* AttributeClass::getArrayOfStringValues() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bufArray, $cast($bytes, this->myValue));
	if (bufArray != nullptr) {
		$var($ByteArrayInputStream, bufStream, $new($ByteArrayInputStream, bufArray));
		int32_t available = bufStream->available();
		bufStream->mark(available);
		bufStream->skip(available - 1);
		int32_t length = bufStream->read();
		bufStream->reset();
		$var($StringArray, valueArray, $new($StringArray, length));
		for (int32_t i = 0; i < length; ++i) {
			int32_t valLength = bufStream->read();
			$var($bytes, bufBytes, $new($bytes, valLength));
			bufStream->read(bufBytes, 0, valLength);
			try {
				valueArray->set(i, $$new($String, bufBytes, "UTF-8"_s));
			} catch ($UnsupportedEncodingException& uee) {
			}
		}
		return valueArray;
	}
	return nullptr;
}

int8_t AttributeClass::getByteValue() {
	$var($bytes, bufArray, $cast($bytes, this->myValue));
	if ((bufArray != nullptr) && (bufArray->length >= 2)) {
		return bufArray->get(1);
	}
	return (int8_t)0;
}

$String* AttributeClass::getName() {
	return this->myName;
}

bool AttributeClass::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(AttributeClass, obj))) {
		return false;
	}
	if ($equals(this, obj)) {
		return true;
	}
	$var(AttributeClass, acObj, $cast(AttributeClass, obj));
	bool var$1 = this->myType == $nc(acObj)->getType();
	bool var$0 = var$1 && $Objects::equals(this->myName, $(acObj->getName()));
	return var$0 && $Objects::equals(this->myValue, $(acObj->getObjectValue()));
}

int32_t AttributeClass::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$($of($Integer::valueOf(this->myType))),
		$of(this->myName),
		this->myValue
	}));
}

$String* AttributeClass::toString() {
	return this->myName;
}

int32_t AttributeClass::unsignedByteToInt(int8_t b) {
	return ((int32_t)(b & (uint32_t)255));
}

int32_t AttributeClass::convertToInt($bytes* buf) {
	int32_t intVal = 0;
	int32_t pos = 0;
	intVal += unsignedByteToInt($nc(buf)->get(pos++)) << 24;
	intVal += unsignedByteToInt($nc(buf)->get(pos++)) << 16;
	intVal += unsignedByteToInt($nc(buf)->get(pos++)) << 8;
	intVal += unsignedByteToInt($nc(buf)->get(pos++)) << 0;
	return intVal;
}

void clinit$AttributeClass($Class* class$) {
	$assignStatic(AttributeClass::ATTRIBUTES_CHARSET, $new(AttributeClass, "attributes-charset"_s, AttributeClass::TAG_CHARSET, "utf-8"_s));
	$assignStatic(AttributeClass::ATTRIBUTES_NATURAL_LANGUAGE, $new(AttributeClass, "attributes-natural-language"_s, AttributeClass::TAG_NATURALLANGUAGE, "en"_s));
}

AttributeClass::AttributeClass() {
}

$Class* AttributeClass::load$($String* name, bool initialize) {
	$loadClass(AttributeClass, name, initialize, &_AttributeClass_ClassInfo_, clinit$AttributeClass, allocate$AttributeClass);
	return class$;
}

$Class* AttributeClass::class$ = nullptr;

	} // print
} // sun