#ifndef _javax_print_attribute_standard_PrinterIsAcceptingJobs_h_
#define _javax_print_attribute_standard_PrinterIsAcceptingJobs_h_
//$ class javax.print.attribute.standard.PrinterIsAcceptingJobs
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintServiceAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintServiceAttribute.h>

#pragma push_macro("ACCEPTING_JOBS")
#undef ACCEPTING_JOBS
#pragma push_macro("NOT_ACCEPTING_JOBS")
#undef NOT_ACCEPTING_JOBS

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export PrinterIsAcceptingJobs : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PrinterIsAcceptingJobs, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	PrinterIsAcceptingJobs();
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
	static const int64_t serialVersionUID = (int64_t)0xB9E3A70D81127F13;
	static ::javax::print::attribute::standard::PrinterIsAcceptingJobs* NOT_ACCEPTING_JOBS;
	static ::javax::print::attribute::standard::PrinterIsAcceptingJobs* ACCEPTING_JOBS;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::PrinterIsAcceptingJobs>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("ACCEPTING_JOBS")
#pragma pop_macro("NOT_ACCEPTING_JOBS")

#endif // _javax_print_attribute_standard_PrinterIsAcceptingJobs_h_