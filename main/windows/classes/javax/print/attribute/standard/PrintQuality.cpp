#include <javax/print/attribute/standard/PrintQuality.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef DRAFT
#undef HIGH
#undef NORMAL

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $PrintQualityArray = $Array<::javax::print::attribute::standard::PrintQuality>;
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

$FieldInfo _PrintQuality_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintQuality, serialVersionUID)},
	{"DRAFT", "Ljavax/print/attribute/standard/PrintQuality;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrintQuality, DRAFT)},
	{"NORMAL", "Ljavax/print/attribute/standard/PrintQuality;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrintQuality, NORMAL)},
	{"HIGH", "Ljavax/print/attribute/standard/PrintQuality;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrintQuality, HIGH)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintQuality, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/PrintQuality;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintQuality, myEnumValueTable)},
	{}
};

$MethodInfo _PrintQuality_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(PrintQuality::*)(int32_t)>(&PrintQuality::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getOffset", "()I", nullptr, $PROTECTED},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintQuality_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.PrintQuality",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_PrintQuality_FieldInfo_,
	_PrintQuality_MethodInfo_
};

$Object* allocate$PrintQuality($Class* clazz) {
	return $of($alloc(PrintQuality));
}

$Object* PrintQuality::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t PrintQuality::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* PrintQuality::toString() {
	 return this->$EnumSyntax::toString();
}

bool PrintQuality::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void PrintQuality::finalize() {
	this->$EnumSyntax::finalize();
}

PrintQuality* PrintQuality::DRAFT = nullptr;
PrintQuality* PrintQuality::NORMAL = nullptr;
PrintQuality* PrintQuality::HIGH = nullptr;
$StringArray* PrintQuality::myStringTable = nullptr;
$PrintQualityArray* PrintQuality::myEnumValueTable = nullptr;

void PrintQuality::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* PrintQuality::getStringTable() {
	return $cast($StringArray, $nc(PrintQuality::myStringTable)->clone());
}

$EnumSyntaxArray* PrintQuality::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(PrintQuality::myEnumValueTable)->clone());
}

int32_t PrintQuality::getOffset() {
	return 3;
}

$Class* PrintQuality::getCategory() {
	return PrintQuality::class$;
}

$String* PrintQuality::getName() {
	return "print-quality"_s;
}

void clinit$PrintQuality($Class* class$) {
	$assignStatic(PrintQuality::DRAFT, $new(PrintQuality, 3));
	$assignStatic(PrintQuality::NORMAL, $new(PrintQuality, 4));
	$assignStatic(PrintQuality::HIGH, $new(PrintQuality, 5));
	$assignStatic(PrintQuality::myStringTable, $new($StringArray, {
		"draft"_s,
		"normal"_s,
		"high"_s
	}));
	$assignStatic(PrintQuality::myEnumValueTable, $new($PrintQualityArray, {
		PrintQuality::DRAFT,
		PrintQuality::NORMAL,
		PrintQuality::HIGH
	}));
}

PrintQuality::PrintQuality() {
}

$Class* PrintQuality::load$($String* name, bool initialize) {
	$loadClass(PrintQuality, name, initialize, &_PrintQuality_ClassInfo_, clinit$PrintQuality, allocate$PrintQuality);
	return class$;
}

$Class* PrintQuality::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax