#include <javax/print/attribute/standard/Copies.h>

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
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Copies_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Copies, serialVersionUID)},
	{}
};

$MethodInfo _Copies_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Copies::*)(int32_t)>(&Copies::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Copies_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.Copies",
	"javax.print.attribute.IntegerSyntax",
	"javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_Copies_FieldInfo_,
	_Copies_MethodInfo_
};

$Object* allocate$Copies($Class* clazz) {
	return $of($alloc(Copies));
}

int32_t Copies::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* Copies::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* Copies::clone() {
	 return this->$IntegerSyntax::clone();
}

void Copies::finalize() {
	this->$IntegerSyntax::finalize();
}

void Copies::init$(int32_t value) {
	$IntegerSyntax::init$(value, 1, $Integer::MAX_VALUE);
}

bool Copies::equals(Object$* object) {
	return $IntegerSyntax::equals(object) && $instanceOf(Copies, object);
}

$Class* Copies::getCategory() {
	return Copies::class$;
}

$String* Copies::getName() {
	return "copies"_s;
}

Copies::Copies() {
}

$Class* Copies::load$($String* name, bool initialize) {
	$loadClass(Copies, name, initialize, &_Copies_ClassInfo_, allocate$Copies);
	return class$;
}

$Class* Copies::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax