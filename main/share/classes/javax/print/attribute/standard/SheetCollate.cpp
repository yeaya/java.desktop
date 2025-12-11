#include <javax/print/attribute/standard/SheetCollate.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef COLLATED
#undef UNCOLLATED

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $SheetCollateArray = $Array<::javax::print::attribute::standard::SheetCollate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _SheetCollate_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SheetCollate, serialVersionUID)},
	{"UNCOLLATED", "Ljavax/print/attribute/standard/SheetCollate;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SheetCollate, UNCOLLATED)},
	{"COLLATED", "Ljavax/print/attribute/standard/SheetCollate;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SheetCollate, COLLATED)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SheetCollate, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/SheetCollate;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SheetCollate, myEnumValueTable)},
	{}
};

$MethodInfo _SheetCollate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(SheetCollate::*)(int32_t)>(&SheetCollate::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SheetCollate_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.SheetCollate",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_SheetCollate_FieldInfo_,
	_SheetCollate_MethodInfo_
};

$Object* allocate$SheetCollate($Class* clazz) {
	return $of($alloc(SheetCollate));
}

$Object* SheetCollate::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t SheetCollate::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* SheetCollate::toString() {
	 return this->$EnumSyntax::toString();
}

bool SheetCollate::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void SheetCollate::finalize() {
	this->$EnumSyntax::finalize();
}

SheetCollate* SheetCollate::UNCOLLATED = nullptr;
SheetCollate* SheetCollate::COLLATED = nullptr;
$StringArray* SheetCollate::myStringTable = nullptr;
$SheetCollateArray* SheetCollate::myEnumValueTable = nullptr;

void SheetCollate::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* SheetCollate::getStringTable() {
	return SheetCollate::myStringTable;
}

$EnumSyntaxArray* SheetCollate::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, SheetCollate::myEnumValueTable);
}

$Class* SheetCollate::getCategory() {
	return SheetCollate::class$;
}

$String* SheetCollate::getName() {
	return "sheet-collate"_s;
}

void clinit$SheetCollate($Class* class$) {
	$assignStatic(SheetCollate::UNCOLLATED, $new(SheetCollate, 0));
	$assignStatic(SheetCollate::COLLATED, $new(SheetCollate, 1));
	$assignStatic(SheetCollate::myStringTable, $new($StringArray, {
		"uncollated"_s,
		"collated"_s
	}));
	$assignStatic(SheetCollate::myEnumValueTable, $new($SheetCollateArray, {
		SheetCollate::UNCOLLATED,
		SheetCollate::COLLATED
	}));
}

SheetCollate::SheetCollate() {
}

$Class* SheetCollate::load$($String* name, bool initialize) {
	$loadClass(SheetCollate, name, initialize, &_SheetCollate_ClassInfo_, clinit$SheetCollate, allocate$SheetCollate);
	return class$;
}

$Class* SheetCollate::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax