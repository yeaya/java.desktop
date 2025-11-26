#ifndef _javax_print_attribute_standard_PrinterStateReason_h_
#define _javax_print_attribute_standard_PrinterStateReason_h_
//$ class javax.print.attribute.standard.PrinterStateReason
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.Attribute

#include <java/lang/Array.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/EnumSyntax.h>

#pragma push_macro("CONNECTING_TO_DEVICE")
#undef CONNECTING_TO_DEVICE
#pragma push_macro("COVER_OPEN")
#undef COVER_OPEN
#pragma push_macro("DEVELOPER_EMPTY")
#undef DEVELOPER_EMPTY
#pragma push_macro("DEVELOPER_LOW")
#undef DEVELOPER_LOW
#pragma push_macro("DOOR_OPEN")
#undef DOOR_OPEN
#pragma push_macro("FUSER_OVER_TEMP")
#undef FUSER_OVER_TEMP
#pragma push_macro("FUSER_UNDER_TEMP")
#undef FUSER_UNDER_TEMP
#pragma push_macro("INPUT_TRAY_MISSING")
#undef INPUT_TRAY_MISSING
#pragma push_macro("INTERLOCK_OPEN")
#undef INTERLOCK_OPEN
#pragma push_macro("INTERPRETER_RESOURCE_UNAVAILABLE")
#undef INTERPRETER_RESOURCE_UNAVAILABLE
#pragma push_macro("MARKER_SUPPLY_EMPTY")
#undef MARKER_SUPPLY_EMPTY
#pragma push_macro("MARKER_SUPPLY_LOW")
#undef MARKER_SUPPLY_LOW
#pragma push_macro("MARKER_WASTE_ALMOST_FULL")
#undef MARKER_WASTE_ALMOST_FULL
#pragma push_macro("MARKER_WASTE_FULL")
#undef MARKER_WASTE_FULL
#pragma push_macro("MEDIA_EMPTY")
#undef MEDIA_EMPTY
#pragma push_macro("MEDIA_JAM")
#undef MEDIA_JAM
#pragma push_macro("MEDIA_LOW")
#undef MEDIA_LOW
#pragma push_macro("MEDIA_NEEDED")
#undef MEDIA_NEEDED
#pragma push_macro("MOVING_TO_PAUSED")
#undef MOVING_TO_PAUSED
#pragma push_macro("OPC_LIFE_OVER")
#undef OPC_LIFE_OVER
#pragma push_macro("OPC_NEAR_EOL")
#undef OPC_NEAR_EOL
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("OUTPUT_AREA_ALMOST_FULL")
#undef OUTPUT_AREA_ALMOST_FULL
#pragma push_macro("OUTPUT_AREA_FULL")
#undef OUTPUT_AREA_FULL
#pragma push_macro("OUTPUT_TRAY_MISSING")
#undef OUTPUT_TRAY_MISSING
#pragma push_macro("PAUSED")
#undef PAUSED
#pragma push_macro("SHUTDOWN")
#undef SHUTDOWN
#pragma push_macro("SPOOL_AREA_FULL")
#undef SPOOL_AREA_FULL
#pragma push_macro("STOPPED_PARTLY")
#undef STOPPED_PARTLY
#pragma push_macro("STOPPING")
#undef STOPPING
#pragma push_macro("TIMED_OUT")
#undef TIMED_OUT
#pragma push_macro("TONER_EMPTY")
#undef TONER_EMPTY
#pragma push_macro("TONER_LOW")
#undef TONER_LOW

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export PrinterStateReason : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::Attribute {
	$class(PrinterStateReason, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::Attribute)
public:
	PrinterStateReason();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual $Class* getCategory() override;
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $String* getName() override;
	virtual $StringArray* getStringTable() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xE97762AA80A5A5AF;
	static ::javax::print::attribute::standard::PrinterStateReason* OTHER;
	static ::javax::print::attribute::standard::PrinterStateReason* MEDIA_NEEDED;
	static ::javax::print::attribute::standard::PrinterStateReason* MEDIA_JAM;
	static ::javax::print::attribute::standard::PrinterStateReason* MOVING_TO_PAUSED;
	static ::javax::print::attribute::standard::PrinterStateReason* PAUSED;
	static ::javax::print::attribute::standard::PrinterStateReason* SHUTDOWN;
	static ::javax::print::attribute::standard::PrinterStateReason* CONNECTING_TO_DEVICE;
	static ::javax::print::attribute::standard::PrinterStateReason* TIMED_OUT;
	static ::javax::print::attribute::standard::PrinterStateReason* STOPPING;
	static ::javax::print::attribute::standard::PrinterStateReason* STOPPED_PARTLY;
	static ::javax::print::attribute::standard::PrinterStateReason* TONER_LOW;
	static ::javax::print::attribute::standard::PrinterStateReason* TONER_EMPTY;
	static ::javax::print::attribute::standard::PrinterStateReason* SPOOL_AREA_FULL;
	static ::javax::print::attribute::standard::PrinterStateReason* COVER_OPEN;
	static ::javax::print::attribute::standard::PrinterStateReason* INTERLOCK_OPEN;
	static ::javax::print::attribute::standard::PrinterStateReason* DOOR_OPEN;
	static ::javax::print::attribute::standard::PrinterStateReason* INPUT_TRAY_MISSING;
	static ::javax::print::attribute::standard::PrinterStateReason* MEDIA_LOW;
	static ::javax::print::attribute::standard::PrinterStateReason* MEDIA_EMPTY;
	static ::javax::print::attribute::standard::PrinterStateReason* OUTPUT_TRAY_MISSING;
	static ::javax::print::attribute::standard::PrinterStateReason* OUTPUT_AREA_ALMOST_FULL;
	static ::javax::print::attribute::standard::PrinterStateReason* OUTPUT_AREA_FULL;
	static ::javax::print::attribute::standard::PrinterStateReason* MARKER_SUPPLY_LOW;
	static ::javax::print::attribute::standard::PrinterStateReason* MARKER_SUPPLY_EMPTY;
	static ::javax::print::attribute::standard::PrinterStateReason* MARKER_WASTE_ALMOST_FULL;
	static ::javax::print::attribute::standard::PrinterStateReason* MARKER_WASTE_FULL;
	static ::javax::print::attribute::standard::PrinterStateReason* FUSER_OVER_TEMP;
	static ::javax::print::attribute::standard::PrinterStateReason* FUSER_UNDER_TEMP;
	static ::javax::print::attribute::standard::PrinterStateReason* OPC_NEAR_EOL;
	static ::javax::print::attribute::standard::PrinterStateReason* OPC_LIFE_OVER;
	static ::javax::print::attribute::standard::PrinterStateReason* DEVELOPER_LOW;
	static ::javax::print::attribute::standard::PrinterStateReason* DEVELOPER_EMPTY;
	static ::javax::print::attribute::standard::PrinterStateReason* INTERPRETER_RESOURCE_UNAVAILABLE;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::PrinterStateReason>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("CONNECTING_TO_DEVICE")
#pragma pop_macro("COVER_OPEN")
#pragma pop_macro("DEVELOPER_EMPTY")
#pragma pop_macro("DEVELOPER_LOW")
#pragma pop_macro("DOOR_OPEN")
#pragma pop_macro("FUSER_OVER_TEMP")
#pragma pop_macro("FUSER_UNDER_TEMP")
#pragma pop_macro("INPUT_TRAY_MISSING")
#pragma pop_macro("INTERLOCK_OPEN")
#pragma pop_macro("INTERPRETER_RESOURCE_UNAVAILABLE")
#pragma pop_macro("MARKER_SUPPLY_EMPTY")
#pragma pop_macro("MARKER_SUPPLY_LOW")
#pragma pop_macro("MARKER_WASTE_ALMOST_FULL")
#pragma pop_macro("MARKER_WASTE_FULL")
#pragma pop_macro("MEDIA_EMPTY")
#pragma pop_macro("MEDIA_JAM")
#pragma pop_macro("MEDIA_LOW")
#pragma pop_macro("MEDIA_NEEDED")
#pragma pop_macro("MOVING_TO_PAUSED")
#pragma pop_macro("OPC_LIFE_OVER")
#pragma pop_macro("OPC_NEAR_EOL")
#pragma pop_macro("OTHER")
#pragma pop_macro("OUTPUT_AREA_ALMOST_FULL")
#pragma pop_macro("OUTPUT_AREA_FULL")
#pragma pop_macro("OUTPUT_TRAY_MISSING")
#pragma pop_macro("PAUSED")
#pragma pop_macro("SHUTDOWN")
#pragma pop_macro("SPOOL_AREA_FULL")
#pragma pop_macro("STOPPED_PARTLY")
#pragma pop_macro("STOPPING")
#pragma pop_macro("TIMED_OUT")
#pragma pop_macro("TONER_EMPTY")
#pragma pop_macro("TONER_LOW")

#endif // _javax_print_attribute_standard_PrinterStateReason_h_