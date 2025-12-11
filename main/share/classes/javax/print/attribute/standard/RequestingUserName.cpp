#include <javax/print/attribute/standard/RequestingUserName.h>

#include <java/util/Locale.h>
#include <javax/print/attribute/TextSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _RequestingUserName_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RequestingUserName, serialVersionUID)},
	{}
};

$MethodInfo _RequestingUserName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(RequestingUserName::*)($String*,$Locale*)>(&RequestingUserName::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RequestingUserName_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.RequestingUserName",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.PrintRequestAttribute",
	_RequestingUserName_FieldInfo_,
	_RequestingUserName_MethodInfo_
};

$Object* allocate$RequestingUserName($Class* clazz) {
	return $of($alloc(RequestingUserName));
}

int32_t RequestingUserName::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* RequestingUserName::toString() {
	 return this->$TextSyntax::toString();
}

$Object* RequestingUserName::clone() {
	 return this->$TextSyntax::clone();
}

void RequestingUserName::finalize() {
	this->$TextSyntax::finalize();
}

void RequestingUserName::init$($String* userName, $Locale* locale) {
	$TextSyntax::init$(userName, locale);
}

bool RequestingUserName::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(RequestingUserName, object));
}

$Class* RequestingUserName::getCategory() {
	return RequestingUserName::class$;
}

$String* RequestingUserName::getName() {
	return "requesting-user-name"_s;
}

RequestingUserName::RequestingUserName() {
}

$Class* RequestingUserName::load$($String* name, bool initialize) {
	$loadClass(RequestingUserName, name, initialize, &_RequestingUserName_ClassInfo_, allocate$RequestingUserName);
	return class$;
}

$Class* RequestingUserName::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax