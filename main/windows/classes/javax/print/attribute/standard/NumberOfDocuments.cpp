#include <javax/print/attribute/standard/NumberOfDocuments.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _NumberOfDocuments_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberOfDocuments, serialVersionUID)},
	{}
};

$MethodInfo _NumberOfDocuments_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(NumberOfDocuments::*)(int32_t)>(&NumberOfDocuments::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NumberOfDocuments_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.NumberOfDocuments",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_NumberOfDocuments_FieldInfo_,
	_NumberOfDocuments_MethodInfo_
};

$Object* allocate$NumberOfDocuments($Class* clazz) {
	return $of($alloc(NumberOfDocuments));
}

int32_t NumberOfDocuments::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* NumberOfDocuments::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* NumberOfDocuments::clone() {
	 return this->$IntegerSyntax::clone();
}

void NumberOfDocuments::finalize() {
	this->$IntegerSyntax::finalize();
}

void NumberOfDocuments::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool NumberOfDocuments::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(NumberOfDocuments, object));
}

$Class* NumberOfDocuments::getCategory() {
	return NumberOfDocuments::class$;
}

$String* NumberOfDocuments::getName() {
	return "number-of-documents"_s;
}

NumberOfDocuments::NumberOfDocuments() {
}

$Class* NumberOfDocuments::load$($String* name, bool initialize) {
	$loadClass(NumberOfDocuments, name, initialize, &_NumberOfDocuments_ClassInfo_, allocate$NumberOfDocuments);
	return class$;
}

$Class* NumberOfDocuments::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax