#include <javax/print/attribute/standard/DocumentName.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/print/attribute/TextSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _DocumentName_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocumentName, serialVersionUID)},
	{}
};

$MethodInfo _DocumentName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(DocumentName::*)($String*,$Locale*)>(&DocumentName::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DocumentName_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.DocumentName",
	"javax.print.attribute.TextSyntax",
	"javax.print.attribute.DocAttribute",
	_DocumentName_FieldInfo_,
	_DocumentName_MethodInfo_
};

$Object* allocate$DocumentName($Class* clazz) {
	return $of($alloc(DocumentName));
}

int32_t DocumentName::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* DocumentName::toString() {
	 return this->$TextSyntax::toString();
}

$Object* DocumentName::clone() {
	 return this->$TextSyntax::clone();
}

void DocumentName::finalize() {
	this->$TextSyntax::finalize();
}

void DocumentName::init$($String* documentName, $Locale* locale) {
	$TextSyntax::init$(documentName, locale);
}

bool DocumentName::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(DocumentName, object));
}

$Class* DocumentName::getCategory() {
	return DocumentName::class$;
}

$String* DocumentName::getName() {
	return "document-name"_s;
}

DocumentName::DocumentName() {
}

$Class* DocumentName::load$($String* name, bool initialize) {
	$loadClass(DocumentName, name, initialize, &_DocumentName_ClassInfo_, allocate$DocumentName);
	return class$;
}

$Class* DocumentName::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax