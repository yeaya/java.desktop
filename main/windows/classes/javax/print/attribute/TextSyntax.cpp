#include <javax/print/attribute/TextSyntax.h>

#include <java/io/Serializable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _TextSyntax_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextSyntax, serialVersionUID)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TextSyntax, value)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(TextSyntax, locale)},
	{}
};

$MethodInfo _TextSyntax_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PROTECTED, $method(static_cast<void(TextSyntax::*)($String*,$Locale*)>(&TextSyntax::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&TextSyntax::verify))},
	{"verify", "(Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Locale*(*)($Locale*)>(&TextSyntax::verify))},
	{}
};

$ClassInfo _TextSyntax_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.attribute.TextSyntax",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_TextSyntax_FieldInfo_,
	_TextSyntax_MethodInfo_
};

$Object* allocate$TextSyntax($Class* clazz) {
	return $of($alloc(TextSyntax));
}

$Object* TextSyntax::clone() {
	 return this->$Serializable::clone();
}

void TextSyntax::finalize() {
	this->$Serializable::finalize();
}

void TextSyntax::init$($String* value, $Locale* locale) {
	$set(this, value, verify(value));
	$set(this, locale, verify(locale));
}

$String* TextSyntax::verify($String* value) {
	$init(TextSyntax);
	if (value == nullptr) {
		$throwNew($NullPointerException, " value is null"_s);
	}
	return value;
}

$Locale* TextSyntax::verify($Locale* locale) {
	$init(TextSyntax);
	if (locale == nullptr) {
		return $Locale::getDefault();
	}
	return locale;
}

$String* TextSyntax::getValue() {
	return this->value;
}

$Locale* TextSyntax::getLocale() {
	return this->locale;
}

int32_t TextSyntax::hashCode() {
	int32_t var$0 = $nc(this->value)->hashCode();
	return var$0 ^ $nc(this->locale)->hashCode();
}

bool TextSyntax::equals(Object$* object) {
	bool var$0 = object != nullptr && $instanceOf(TextSyntax, object) && $nc(this->value)->equals($nc(($cast(TextSyntax, object)))->value);
	return (var$0 && $nc(this->locale)->equals($nc(($cast(TextSyntax, object)))->locale));
}

$String* TextSyntax::toString() {
	return this->value;
}

TextSyntax::TextSyntax() {
}

$Class* TextSyntax::load$($String* name, bool initialize) {
	$loadClass(TextSyntax, name, initialize, &_TextSyntax_ClassInfo_, allocate$TextSyntax);
	return class$;
}

$Class* TextSyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax