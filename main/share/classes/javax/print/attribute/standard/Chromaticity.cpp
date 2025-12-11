#include <javax/print/attribute/standard/Chromaticity.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef COLOR
#undef MONOCHROME

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $ChromaticityArray = $Array<::javax::print::attribute::standard::Chromaticity>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Chromaticity_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Chromaticity, serialVersionUID)},
	{"MONOCHROME", "Ljavax/print/attribute/standard/Chromaticity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Chromaticity, MONOCHROME)},
	{"COLOR", "Ljavax/print/attribute/standard/Chromaticity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Chromaticity, COLOR)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Chromaticity, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/Chromaticity;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Chromaticity, myEnumValueTable)},
	{}
};

$MethodInfo _Chromaticity_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Chromaticity::*)(int32_t)>(&Chromaticity::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Chromaticity_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.Chromaticity",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_Chromaticity_FieldInfo_,
	_Chromaticity_MethodInfo_
};

$Object* allocate$Chromaticity($Class* clazz) {
	return $of($alloc(Chromaticity));
}

$Object* Chromaticity::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t Chromaticity::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* Chromaticity::toString() {
	 return this->$EnumSyntax::toString();
}

bool Chromaticity::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void Chromaticity::finalize() {
	this->$EnumSyntax::finalize();
}

Chromaticity* Chromaticity::MONOCHROME = nullptr;
Chromaticity* Chromaticity::COLOR = nullptr;
$StringArray* Chromaticity::myStringTable = nullptr;
$ChromaticityArray* Chromaticity::myEnumValueTable = nullptr;

void Chromaticity::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* Chromaticity::getStringTable() {
	return Chromaticity::myStringTable;
}

$EnumSyntaxArray* Chromaticity::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, Chromaticity::myEnumValueTable);
}

$Class* Chromaticity::getCategory() {
	return Chromaticity::class$;
}

$String* Chromaticity::getName() {
	return "chromaticity"_s;
}

void clinit$Chromaticity($Class* class$) {
	$assignStatic(Chromaticity::MONOCHROME, $new(Chromaticity, 0));
	$assignStatic(Chromaticity::COLOR, $new(Chromaticity, 1));
	$assignStatic(Chromaticity::myStringTable, $new($StringArray, {
		"monochrome"_s,
		"color"_s
	}));
	$assignStatic(Chromaticity::myEnumValueTable, $new($ChromaticityArray, {
		Chromaticity::MONOCHROME,
		Chromaticity::COLOR
	}));
}

Chromaticity::Chromaticity() {
}

$Class* Chromaticity::load$($String* name, bool initialize) {
	$loadClass(Chromaticity, name, initialize, &_Chromaticity_ClassInfo_, clinit$Chromaticity, allocate$Chromaticity);
	return class$;
}

$Class* Chromaticity::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax