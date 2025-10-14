#include <javax/print/attribute/standard/Fidelity.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef FIDELITY_FALSE
#undef FIDELITY_TRUE

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $FidelityArray = $Array<::javax::print::attribute::standard::Fidelity>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Fidelity_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Fidelity, serialVersionUID)},
	{"FIDELITY_TRUE", "Ljavax/print/attribute/standard/Fidelity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Fidelity, FIDELITY_TRUE)},
	{"FIDELITY_FALSE", "Ljavax/print/attribute/standard/Fidelity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Fidelity, FIDELITY_FALSE)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Fidelity, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/Fidelity;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Fidelity, myEnumValueTable)},
	{}
};

$MethodInfo _Fidelity_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Fidelity::*)(int32_t)>(&Fidelity::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Fidelity_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.Fidelity",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintJobAttribute,javax.print.attribute.PrintRequestAttribute",
	_Fidelity_FieldInfo_,
	_Fidelity_MethodInfo_
};

$Object* allocate$Fidelity($Class* clazz) {
	return $of($alloc(Fidelity));
}

$Object* Fidelity::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t Fidelity::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* Fidelity::toString() {
	 return this->$EnumSyntax::toString();
}

bool Fidelity::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void Fidelity::finalize() {
	this->$EnumSyntax::finalize();
}


Fidelity* Fidelity::FIDELITY_TRUE = nullptr;

Fidelity* Fidelity::FIDELITY_FALSE = nullptr;

$StringArray* Fidelity::myStringTable = nullptr;

$FidelityArray* Fidelity::myEnumValueTable = nullptr;

void Fidelity::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* Fidelity::getStringTable() {
	return Fidelity::myStringTable;
}

$EnumSyntaxArray* Fidelity::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, Fidelity::myEnumValueTable);
}

$Class* Fidelity::getCategory() {
	return Fidelity::class$;
}

$String* Fidelity::getName() {
	return "ipp-attribute-fidelity"_s;
}

void clinit$Fidelity($Class* class$) {
	$assignStatic(Fidelity::FIDELITY_TRUE, $new(Fidelity, 0));
	$assignStatic(Fidelity::FIDELITY_FALSE, $new(Fidelity, 1));
	$assignStatic(Fidelity::myStringTable, $new($StringArray, {
		"true"_s,
		"false"_s
	}));
	$assignStatic(Fidelity::myEnumValueTable, $new($FidelityArray, {
		Fidelity::FIDELITY_TRUE,
		Fidelity::FIDELITY_FALSE
	}));
}

Fidelity::Fidelity() {
}

$Class* Fidelity::load$($String* name, bool initialize) {
	$loadClass(Fidelity, name, initialize, &_Fidelity_ClassInfo_, clinit$Fidelity, allocate$Fidelity);
	return class$;
}

$Class* Fidelity::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax