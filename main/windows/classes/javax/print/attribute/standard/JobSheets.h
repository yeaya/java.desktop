#ifndef _javax_print_attribute_standard_JobSheets_h_
#define _javax_print_attribute_standard_JobSheets_h_
//$ class javax.print.attribute.standard.JobSheets
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("STANDARD")
#undef STANDARD

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export JobSheets : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(JobSheets, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	JobSheets();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	static const int64_t serialVersionUID = (int64_t)0xBE48FBE2EC6A18B1;
	static ::javax::print::attribute::standard::JobSheets* NONE;
	static ::javax::print::attribute::standard::JobSheets* STANDARD;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::JobSheets>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("NONE")
#pragma pop_macro("STANDARD")

#endif // _javax_print_attribute_standard_JobSheets_h_