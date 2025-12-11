#include <javax/print/attribute/standard/DialogTypeSelection.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef COMMON
#undef NATIVE

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $DialogTypeSelectionArray = $Array<::javax::print::attribute::standard::DialogTypeSelection>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _DialogTypeSelection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DialogTypeSelection, serialVersionUID)},
	{"NATIVE", "Ljavax/print/attribute/standard/DialogTypeSelection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DialogTypeSelection, NATIVE)},
	{"COMMON", "Ljavax/print/attribute/standard/DialogTypeSelection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DialogTypeSelection, COMMON)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DialogTypeSelection, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/DialogTypeSelection;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DialogTypeSelection, myEnumValueTable)},
	{}
};

$MethodInfo _DialogTypeSelection_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(DialogTypeSelection::*)(int32_t)>(&DialogTypeSelection::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DialogTypeSelection_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.DialogTypeSelection",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintRequestAttribute",
	_DialogTypeSelection_FieldInfo_,
	_DialogTypeSelection_MethodInfo_
};

$Object* allocate$DialogTypeSelection($Class* clazz) {
	return $of($alloc(DialogTypeSelection));
}

$Object* DialogTypeSelection::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t DialogTypeSelection::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* DialogTypeSelection::toString() {
	 return this->$EnumSyntax::toString();
}

bool DialogTypeSelection::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void DialogTypeSelection::finalize() {
	this->$EnumSyntax::finalize();
}

DialogTypeSelection* DialogTypeSelection::NATIVE = nullptr;
DialogTypeSelection* DialogTypeSelection::COMMON = nullptr;
$StringArray* DialogTypeSelection::myStringTable = nullptr;
$DialogTypeSelectionArray* DialogTypeSelection::myEnumValueTable = nullptr;

void DialogTypeSelection::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* DialogTypeSelection::getStringTable() {
	return DialogTypeSelection::myStringTable;
}

$EnumSyntaxArray* DialogTypeSelection::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, DialogTypeSelection::myEnumValueTable);
}

$Class* DialogTypeSelection::getCategory() {
	return DialogTypeSelection::class$;
}

$String* DialogTypeSelection::getName() {
	return "dialog-type-selection"_s;
}

void clinit$DialogTypeSelection($Class* class$) {
	$assignStatic(DialogTypeSelection::NATIVE, $new(DialogTypeSelection, 0));
	$assignStatic(DialogTypeSelection::COMMON, $new(DialogTypeSelection, 1));
	$assignStatic(DialogTypeSelection::myStringTable, $new($StringArray, {
		"native"_s,
		"common"_s
	}));
	$assignStatic(DialogTypeSelection::myEnumValueTable, $new($DialogTypeSelectionArray, {
		DialogTypeSelection::NATIVE,
		DialogTypeSelection::COMMON
	}));
}

DialogTypeSelection::DialogTypeSelection() {
}

$Class* DialogTypeSelection::load$($String* name, bool initialize) {
	$loadClass(DialogTypeSelection, name, initialize, &_DialogTypeSelection_ClassInfo_, clinit$DialogTypeSelection, allocate$DialogTypeSelection);
	return class$;
}

$Class* DialogTypeSelection::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax