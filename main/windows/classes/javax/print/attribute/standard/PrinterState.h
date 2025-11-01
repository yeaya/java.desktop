#ifndef _javax_print_attribute_standard_PrinterState_h_
#define _javax_print_attribute_standard_PrinterState_h_
//$ class javax.print.attribute.standard.PrinterState
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintServiceAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintServiceAttribute.h>

#pragma push_macro("IDLE")
#undef IDLE
#pragma push_macro("PROCESSING")
#undef PROCESSING
#pragma push_macro("STOPPED")
#undef STOPPED
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export PrinterState : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PrinterState, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	PrinterState();
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
	static const int64_t serialVersionUID = (int64_t)0xF6FC3BB02FC4723A;
	static ::javax::print::attribute::standard::PrinterState* UNKNOWN;
	static ::javax::print::attribute::standard::PrinterState* IDLE;
	static ::javax::print::attribute::standard::PrinterState* PROCESSING;
	static ::javax::print::attribute::standard::PrinterState* STOPPED;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::PrinterState>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("IDLE")
#pragma pop_macro("PROCESSING")
#pragma pop_macro("STOPPED")
#pragma pop_macro("UNKNOWN")

#endif // _javax_print_attribute_standard_PrinterState_h_