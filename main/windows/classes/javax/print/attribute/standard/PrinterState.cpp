#include <javax/print/attribute/standard/PrinterState.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef IDLE
#undef PROCESSING
#undef STOPPED
#undef UNKNOWN

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $PrinterStateArray = $Array<::javax::print::attribute::standard::PrinterState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterState_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterState, serialVersionUID)},
	{"UNKNOWN", "Ljavax/print/attribute/standard/PrinterState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterState, UNKNOWN)},
	{"IDLE", "Ljavax/print/attribute/standard/PrinterState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterState, IDLE)},
	{"PROCESSING", "Ljavax/print/attribute/standard/PrinterState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterState, PROCESSING)},
	{"STOPPED", "Ljavax/print/attribute/standard/PrinterState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterState, STOPPED)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrinterState, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/PrinterState;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrinterState, myEnumValueTable)},
	{}
};

$MethodInfo _PrinterState_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(PrinterState::*)(int32_t)>(&PrinterState::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterState_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterState",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintServiceAttribute",
	_PrinterState_FieldInfo_,
	_PrinterState_MethodInfo_
};

$Object* allocate$PrinterState($Class* clazz) {
	return $of($alloc(PrinterState));
}

$Object* PrinterState::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t PrinterState::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* PrinterState::toString() {
	 return this->$EnumSyntax::toString();
}

bool PrinterState::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void PrinterState::finalize() {
	this->$EnumSyntax::finalize();
}

PrinterState* PrinterState::UNKNOWN = nullptr;
PrinterState* PrinterState::IDLE = nullptr;
PrinterState* PrinterState::PROCESSING = nullptr;
PrinterState* PrinterState::STOPPED = nullptr;
$StringArray* PrinterState::myStringTable = nullptr;
$PrinterStateArray* PrinterState::myEnumValueTable = nullptr;

void PrinterState::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* PrinterState::getStringTable() {
	return PrinterState::myStringTable;
}

$EnumSyntaxArray* PrinterState::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, PrinterState::myEnumValueTable);
}

$Class* PrinterState::getCategory() {
	return PrinterState::class$;
}

$String* PrinterState::getName() {
	return "printer-state"_s;
}

void clinit$PrinterState($Class* class$) {
	$assignStatic(PrinterState::UNKNOWN, $new(PrinterState, 0));
	$assignStatic(PrinterState::IDLE, $new(PrinterState, 3));
	$assignStatic(PrinterState::PROCESSING, $new(PrinterState, 4));
	$assignStatic(PrinterState::STOPPED, $new(PrinterState, 5));
	$assignStatic(PrinterState::myStringTable, $new($StringArray, {
		"unknown"_s,
		($String*)nullptr,
		($String*)nullptr,
		"idle"_s,
		"processing"_s,
		"stopped"_s
	}));
	$assignStatic(PrinterState::myEnumValueTable, $new($PrinterStateArray, {
		PrinterState::UNKNOWN,
		(PrinterState*)nullptr,
		(PrinterState*)nullptr,
		PrinterState::IDLE,
		PrinterState::PROCESSING,
		PrinterState::STOPPED
	}));
}

PrinterState::PrinterState() {
}

$Class* PrinterState::load$($String* name, bool initialize) {
	$loadClass(PrinterState, name, initialize, &_PrinterState_ClassInfo_, clinit$PrinterState, allocate$PrinterState);
	return class$;
}

$Class* PrinterState::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax