#include <javax/print/attribute/standard/Sides.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef DUPLEX
#undef ONE_SIDED
#undef TUMBLE
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $SidesArray = $Array<::javax::print::attribute::standard::Sides>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Sides_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Sides, serialVersionUID)},
	{"ONE_SIDED", "Ljavax/print/attribute/standard/Sides;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sides, ONE_SIDED)},
	{"TWO_SIDED_LONG_EDGE", "Ljavax/print/attribute/standard/Sides;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sides, TWO_SIDED_LONG_EDGE)},
	{"TWO_SIDED_SHORT_EDGE", "Ljavax/print/attribute/standard/Sides;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sides, TWO_SIDED_SHORT_EDGE)},
	{"DUPLEX", "Ljavax/print/attribute/standard/Sides;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sides, DUPLEX)},
	{"TUMBLE", "Ljavax/print/attribute/standard/Sides;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sides, TUMBLE)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Sides, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/Sides;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Sides, myEnumValueTable)},
	{}
};

$MethodInfo _Sides_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Sides::*)(int32_t)>(&Sides::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Sides_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.Sides",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_Sides_FieldInfo_,
	_Sides_MethodInfo_
};

$Object* allocate$Sides($Class* clazz) {
	return $of($alloc(Sides));
}

$Object* Sides::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t Sides::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* Sides::toString() {
	 return this->$EnumSyntax::toString();
}

bool Sides::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void Sides::finalize() {
	this->$EnumSyntax::finalize();
}

Sides* Sides::ONE_SIDED = nullptr;
Sides* Sides::TWO_SIDED_LONG_EDGE = nullptr;
Sides* Sides::TWO_SIDED_SHORT_EDGE = nullptr;
Sides* Sides::DUPLEX = nullptr;
Sides* Sides::TUMBLE = nullptr;
$StringArray* Sides::myStringTable = nullptr;
$SidesArray* Sides::myEnumValueTable = nullptr;

void Sides::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* Sides::getStringTable() {
	return Sides::myStringTable;
}

$EnumSyntaxArray* Sides::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, Sides::myEnumValueTable);
}

$Class* Sides::getCategory() {
	return Sides::class$;
}

$String* Sides::getName() {
	return "sides"_s;
}

void clinit$Sides($Class* class$) {
	$assignStatic(Sides::ONE_SIDED, $new(Sides, 0));
	$assignStatic(Sides::TWO_SIDED_LONG_EDGE, $new(Sides, 1));
	$assignStatic(Sides::TWO_SIDED_SHORT_EDGE, $new(Sides, 2));
	$assignStatic(Sides::DUPLEX, Sides::TWO_SIDED_LONG_EDGE);
	$assignStatic(Sides::TUMBLE, Sides::TWO_SIDED_SHORT_EDGE);
	$assignStatic(Sides::myStringTable, $new($StringArray, {
		"one-sided"_s,
		"two-sided-long-edge"_s,
		"two-sided-short-edge"_s
	}));
	$assignStatic(Sides::myEnumValueTable, $new($SidesArray, {
		Sides::ONE_SIDED,
		Sides::TWO_SIDED_LONG_EDGE,
		Sides::TWO_SIDED_SHORT_EDGE
	}));
}

Sides::Sides() {
}

$Class* Sides::load$($String* name, bool initialize) {
	$loadClass(Sides, name, initialize, &_Sides_ClassInfo_, clinit$Sides, allocate$Sides);
	return class$;
}

$Class* Sides::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax