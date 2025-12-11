#include <javax/print/attribute/standard/PrinterStateReason.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef CONNECTING_TO_DEVICE
#undef COVER_OPEN
#undef DEVELOPER_EMPTY
#undef DEVELOPER_LOW
#undef DOOR_OPEN
#undef FUSER_OVER_TEMP
#undef FUSER_UNDER_TEMP
#undef INPUT_TRAY_MISSING
#undef INTERLOCK_OPEN
#undef INTERPRETER_RESOURCE_UNAVAILABLE
#undef MARKER_SUPPLY_EMPTY
#undef MARKER_SUPPLY_LOW
#undef MARKER_WASTE_ALMOST_FULL
#undef MARKER_WASTE_FULL
#undef MEDIA_EMPTY
#undef MEDIA_JAM
#undef MEDIA_LOW
#undef MEDIA_NEEDED
#undef MOVING_TO_PAUSED
#undef OPC_LIFE_OVER
#undef OPC_NEAR_EOL
#undef OTHER
#undef OUTPUT_AREA_ALMOST_FULL
#undef OUTPUT_AREA_FULL
#undef OUTPUT_TRAY_MISSING
#undef PAUSED
#undef SHUTDOWN
#undef SPOOL_AREA_FULL
#undef STOPPED_PARTLY
#undef STOPPING
#undef TIMED_OUT
#undef TONER_EMPTY
#undef TONER_LOW

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $PrinterStateReasonArray = $Array<::javax::print::attribute::standard::PrinterStateReason>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PrinterStateReason_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterStateReason, serialVersionUID)},
	{"OTHER", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, OTHER)},
	{"MEDIA_NEEDED", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MEDIA_NEEDED)},
	{"MEDIA_JAM", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MEDIA_JAM)},
	{"MOVING_TO_PAUSED", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MOVING_TO_PAUSED)},
	{"PAUSED", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, PAUSED)},
	{"SHUTDOWN", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, SHUTDOWN)},
	{"CONNECTING_TO_DEVICE", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, CONNECTING_TO_DEVICE)},
	{"TIMED_OUT", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, TIMED_OUT)},
	{"STOPPING", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, STOPPING)},
	{"STOPPED_PARTLY", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, STOPPED_PARTLY)},
	{"TONER_LOW", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, TONER_LOW)},
	{"TONER_EMPTY", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, TONER_EMPTY)},
	{"SPOOL_AREA_FULL", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, SPOOL_AREA_FULL)},
	{"COVER_OPEN", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, COVER_OPEN)},
	{"INTERLOCK_OPEN", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, INTERLOCK_OPEN)},
	{"DOOR_OPEN", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, DOOR_OPEN)},
	{"INPUT_TRAY_MISSING", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, INPUT_TRAY_MISSING)},
	{"MEDIA_LOW", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MEDIA_LOW)},
	{"MEDIA_EMPTY", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MEDIA_EMPTY)},
	{"OUTPUT_TRAY_MISSING", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, OUTPUT_TRAY_MISSING)},
	{"OUTPUT_AREA_ALMOST_FULL", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, OUTPUT_AREA_ALMOST_FULL)},
	{"OUTPUT_AREA_FULL", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, OUTPUT_AREA_FULL)},
	{"MARKER_SUPPLY_LOW", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MARKER_SUPPLY_LOW)},
	{"MARKER_SUPPLY_EMPTY", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MARKER_SUPPLY_EMPTY)},
	{"MARKER_WASTE_ALMOST_FULL", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MARKER_WASTE_ALMOST_FULL)},
	{"MARKER_WASTE_FULL", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, MARKER_WASTE_FULL)},
	{"FUSER_OVER_TEMP", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, FUSER_OVER_TEMP)},
	{"FUSER_UNDER_TEMP", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, FUSER_UNDER_TEMP)},
	{"OPC_NEAR_EOL", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, OPC_NEAR_EOL)},
	{"OPC_LIFE_OVER", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, OPC_LIFE_OVER)},
	{"DEVELOPER_LOW", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, DEVELOPER_LOW)},
	{"DEVELOPER_EMPTY", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, DEVELOPER_EMPTY)},
	{"INTERPRETER_RESOURCE_UNAVAILABLE", "Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterStateReason, INTERPRETER_RESOURCE_UNAVAILABLE)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrinterStateReason, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/PrinterStateReason;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrinterStateReason, myEnumValueTable)},
	{}
};

$MethodInfo _PrinterStateReason_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(PrinterStateReason::*)(int32_t)>(&PrinterStateReason::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterStateReason_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.PrinterStateReason",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.Attribute",
	_PrinterStateReason_FieldInfo_,
	_PrinterStateReason_MethodInfo_
};

$Object* allocate$PrinterStateReason($Class* clazz) {
	return $of($alloc(PrinterStateReason));
}

$Object* PrinterStateReason::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t PrinterStateReason::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* PrinterStateReason::toString() {
	 return this->$EnumSyntax::toString();
}

bool PrinterStateReason::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void PrinterStateReason::finalize() {
	this->$EnumSyntax::finalize();
}

PrinterStateReason* PrinterStateReason::OTHER = nullptr;
PrinterStateReason* PrinterStateReason::MEDIA_NEEDED = nullptr;
PrinterStateReason* PrinterStateReason::MEDIA_JAM = nullptr;
PrinterStateReason* PrinterStateReason::MOVING_TO_PAUSED = nullptr;
PrinterStateReason* PrinterStateReason::PAUSED = nullptr;
PrinterStateReason* PrinterStateReason::SHUTDOWN = nullptr;
PrinterStateReason* PrinterStateReason::CONNECTING_TO_DEVICE = nullptr;
PrinterStateReason* PrinterStateReason::TIMED_OUT = nullptr;
PrinterStateReason* PrinterStateReason::STOPPING = nullptr;
PrinterStateReason* PrinterStateReason::STOPPED_PARTLY = nullptr;
PrinterStateReason* PrinterStateReason::TONER_LOW = nullptr;
PrinterStateReason* PrinterStateReason::TONER_EMPTY = nullptr;
PrinterStateReason* PrinterStateReason::SPOOL_AREA_FULL = nullptr;
PrinterStateReason* PrinterStateReason::COVER_OPEN = nullptr;
PrinterStateReason* PrinterStateReason::INTERLOCK_OPEN = nullptr;
PrinterStateReason* PrinterStateReason::DOOR_OPEN = nullptr;
PrinterStateReason* PrinterStateReason::INPUT_TRAY_MISSING = nullptr;
PrinterStateReason* PrinterStateReason::MEDIA_LOW = nullptr;
PrinterStateReason* PrinterStateReason::MEDIA_EMPTY = nullptr;
PrinterStateReason* PrinterStateReason::OUTPUT_TRAY_MISSING = nullptr;
PrinterStateReason* PrinterStateReason::OUTPUT_AREA_ALMOST_FULL = nullptr;
PrinterStateReason* PrinterStateReason::OUTPUT_AREA_FULL = nullptr;
PrinterStateReason* PrinterStateReason::MARKER_SUPPLY_LOW = nullptr;
PrinterStateReason* PrinterStateReason::MARKER_SUPPLY_EMPTY = nullptr;
PrinterStateReason* PrinterStateReason::MARKER_WASTE_ALMOST_FULL = nullptr;
PrinterStateReason* PrinterStateReason::MARKER_WASTE_FULL = nullptr;
PrinterStateReason* PrinterStateReason::FUSER_OVER_TEMP = nullptr;
PrinterStateReason* PrinterStateReason::FUSER_UNDER_TEMP = nullptr;
PrinterStateReason* PrinterStateReason::OPC_NEAR_EOL = nullptr;
PrinterStateReason* PrinterStateReason::OPC_LIFE_OVER = nullptr;
PrinterStateReason* PrinterStateReason::DEVELOPER_LOW = nullptr;
PrinterStateReason* PrinterStateReason::DEVELOPER_EMPTY = nullptr;
PrinterStateReason* PrinterStateReason::INTERPRETER_RESOURCE_UNAVAILABLE = nullptr;
$StringArray* PrinterStateReason::myStringTable = nullptr;
$PrinterStateReasonArray* PrinterStateReason::myEnumValueTable = nullptr;

void PrinterStateReason::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* PrinterStateReason::getStringTable() {
	return $cast($StringArray, $nc(PrinterStateReason::myStringTable)->clone());
}

$EnumSyntaxArray* PrinterStateReason::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(PrinterStateReason::myEnumValueTable)->clone());
}

$Class* PrinterStateReason::getCategory() {
	return PrinterStateReason::class$;
}

$String* PrinterStateReason::getName() {
	return "printer-state-reason"_s;
}

void clinit$PrinterStateReason($Class* class$) {
	$assignStatic(PrinterStateReason::OTHER, $new(PrinterStateReason, 0));
	$assignStatic(PrinterStateReason::MEDIA_NEEDED, $new(PrinterStateReason, 1));
	$assignStatic(PrinterStateReason::MEDIA_JAM, $new(PrinterStateReason, 2));
	$assignStatic(PrinterStateReason::MOVING_TO_PAUSED, $new(PrinterStateReason, 3));
	$assignStatic(PrinterStateReason::PAUSED, $new(PrinterStateReason, 4));
	$assignStatic(PrinterStateReason::SHUTDOWN, $new(PrinterStateReason, 5));
	$assignStatic(PrinterStateReason::CONNECTING_TO_DEVICE, $new(PrinterStateReason, 6));
	$assignStatic(PrinterStateReason::TIMED_OUT, $new(PrinterStateReason, 7));
	$assignStatic(PrinterStateReason::STOPPING, $new(PrinterStateReason, 8));
	$assignStatic(PrinterStateReason::STOPPED_PARTLY, $new(PrinterStateReason, 9));
	$assignStatic(PrinterStateReason::TONER_LOW, $new(PrinterStateReason, 10));
	$assignStatic(PrinterStateReason::TONER_EMPTY, $new(PrinterStateReason, 11));
	$assignStatic(PrinterStateReason::SPOOL_AREA_FULL, $new(PrinterStateReason, 12));
	$assignStatic(PrinterStateReason::COVER_OPEN, $new(PrinterStateReason, 13));
	$assignStatic(PrinterStateReason::INTERLOCK_OPEN, $new(PrinterStateReason, 14));
	$assignStatic(PrinterStateReason::DOOR_OPEN, $new(PrinterStateReason, 15));
	$assignStatic(PrinterStateReason::INPUT_TRAY_MISSING, $new(PrinterStateReason, 16));
	$assignStatic(PrinterStateReason::MEDIA_LOW, $new(PrinterStateReason, 17));
	$assignStatic(PrinterStateReason::MEDIA_EMPTY, $new(PrinterStateReason, 18));
	$assignStatic(PrinterStateReason::OUTPUT_TRAY_MISSING, $new(PrinterStateReason, 19));
	$assignStatic(PrinterStateReason::OUTPUT_AREA_ALMOST_FULL, $new(PrinterStateReason, 20));
	$assignStatic(PrinterStateReason::OUTPUT_AREA_FULL, $new(PrinterStateReason, 21));
	$assignStatic(PrinterStateReason::MARKER_SUPPLY_LOW, $new(PrinterStateReason, 22));
	$assignStatic(PrinterStateReason::MARKER_SUPPLY_EMPTY, $new(PrinterStateReason, 23));
	$assignStatic(PrinterStateReason::MARKER_WASTE_ALMOST_FULL, $new(PrinterStateReason, 24));
	$assignStatic(PrinterStateReason::MARKER_WASTE_FULL, $new(PrinterStateReason, 25));
	$assignStatic(PrinterStateReason::FUSER_OVER_TEMP, $new(PrinterStateReason, 26));
	$assignStatic(PrinterStateReason::FUSER_UNDER_TEMP, $new(PrinterStateReason, 27));
	$assignStatic(PrinterStateReason::OPC_NEAR_EOL, $new(PrinterStateReason, 28));
	$assignStatic(PrinterStateReason::OPC_LIFE_OVER, $new(PrinterStateReason, 29));
	$assignStatic(PrinterStateReason::DEVELOPER_LOW, $new(PrinterStateReason, 30));
	$assignStatic(PrinterStateReason::DEVELOPER_EMPTY, $new(PrinterStateReason, 31));
	$assignStatic(PrinterStateReason::INTERPRETER_RESOURCE_UNAVAILABLE, $new(PrinterStateReason, 32));
	$assignStatic(PrinterStateReason::myStringTable, $new($StringArray, {
		"other"_s,
		"media-needed"_s,
		"media-jam"_s,
		"moving-to-paused"_s,
		"paused"_s,
		"shutdown"_s,
		"connecting-to-device"_s,
		"timed-out"_s,
		"stopping"_s,
		"stopped-partly"_s,
		"toner-low"_s,
		"toner-empty"_s,
		"spool-area-full"_s,
		"cover-open"_s,
		"interlock-open"_s,
		"door-open"_s,
		"input-tray-missing"_s,
		"media-low"_s,
		"media-empty"_s,
		"output-tray-missing"_s,
		"output-area-almost-full"_s,
		"output-area-full"_s,
		"marker-supply-low"_s,
		"marker-supply-empty"_s,
		"marker-waste-almost-full"_s,
		"marker-waste-full"_s,
		"fuser-over-temp"_s,
		"fuser-under-temp"_s,
		"opc-near-eol"_s,
		"opc-life-over"_s,
		"developer-low"_s,
		"developer-empty"_s,
		"interpreter-resource-unavailable"_s
	}));
	$assignStatic(PrinterStateReason::myEnumValueTable, $new($PrinterStateReasonArray, {
		PrinterStateReason::OTHER,
		PrinterStateReason::MEDIA_NEEDED,
		PrinterStateReason::MEDIA_JAM,
		PrinterStateReason::MOVING_TO_PAUSED,
		PrinterStateReason::PAUSED,
		PrinterStateReason::SHUTDOWN,
		PrinterStateReason::CONNECTING_TO_DEVICE,
		PrinterStateReason::TIMED_OUT,
		PrinterStateReason::STOPPING,
		PrinterStateReason::STOPPED_PARTLY,
		PrinterStateReason::TONER_LOW,
		PrinterStateReason::TONER_EMPTY,
		PrinterStateReason::SPOOL_AREA_FULL,
		PrinterStateReason::COVER_OPEN,
		PrinterStateReason::INTERLOCK_OPEN,
		PrinterStateReason::DOOR_OPEN,
		PrinterStateReason::INPUT_TRAY_MISSING,
		PrinterStateReason::MEDIA_LOW,
		PrinterStateReason::MEDIA_EMPTY,
		PrinterStateReason::OUTPUT_TRAY_MISSING,
		PrinterStateReason::OUTPUT_AREA_ALMOST_FULL,
		PrinterStateReason::OUTPUT_AREA_FULL,
		PrinterStateReason::MARKER_SUPPLY_LOW,
		PrinterStateReason::MARKER_SUPPLY_EMPTY,
		PrinterStateReason::MARKER_WASTE_ALMOST_FULL,
		PrinterStateReason::MARKER_WASTE_FULL,
		PrinterStateReason::FUSER_OVER_TEMP,
		PrinterStateReason::FUSER_UNDER_TEMP,
		PrinterStateReason::OPC_NEAR_EOL,
		PrinterStateReason::OPC_LIFE_OVER,
		PrinterStateReason::DEVELOPER_LOW,
		PrinterStateReason::DEVELOPER_EMPTY,
		PrinterStateReason::INTERPRETER_RESOURCE_UNAVAILABLE
	}));
}

PrinterStateReason::PrinterStateReason() {
}

$Class* PrinterStateReason::load$($String* name, bool initialize) {
	$loadClass(PrinterStateReason, name, initialize, &_PrinterStateReason_ClassInfo_, clinit$PrinterStateReason, allocate$PrinterStateReason);
	return class$;
}

$Class* PrinterStateReason::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax