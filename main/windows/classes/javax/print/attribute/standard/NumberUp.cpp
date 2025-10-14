#include <javax/print/attribute/standard/NumberUp.h>

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
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _NumberUp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberUp, serialVersionUID)},
	{}
};

$MethodInfo _NumberUp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(NumberUp::*)(int32_t)>(&NumberUp::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NumberUp_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.NumberUp",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_NumberUp_FieldInfo_,
	_NumberUp_MethodInfo_
};

$Object* allocate$NumberUp($Class* clazz) {
	return $of($alloc(NumberUp));
}

int32_t NumberUp::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* NumberUp::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* NumberUp::clone() {
	 return this->$IntegerSyntax::clone();
}

void NumberUp::finalize() {
	this->$IntegerSyntax::finalize();
}

void NumberUp::init$(int32_t value) {
	$IntegerSyntax::init$(value, 1, $Integer::MAX_VALUE);
}

bool NumberUp::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(NumberUp, object));
}

$Class* NumberUp::getCategory() {
	return NumberUp::class$;
}

$String* NumberUp::getName() {
	return "number-up"_s;
}

NumberUp::NumberUp() {
}

$Class* NumberUp::load$($String* name, bool initialize) {
	$loadClass(NumberUp, name, initialize, &_NumberUp_ClassInfo_, allocate$NumberUp);
	return class$;
}

$Class* NumberUp::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax