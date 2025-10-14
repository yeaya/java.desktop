#ifndef _javax_print_attribute_standard_Severity_h_
#define _javax_print_attribute_standard_Severity_h_
//$ class javax.print.attribute.standard.Severity
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.Attribute

#include <java/lang/Array.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/EnumSyntax.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("REPORT")
#undef REPORT
#pragma push_macro("WARNING")
#undef WARNING

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import Severity : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::Attribute {
	$class(Severity, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::Attribute)
public:
	Severity();
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
	static const int64_t serialVersionUID = (int64_t)0x79DF82A974E3C804;
	static ::javax::print::attribute::standard::Severity* REPORT;
	static ::javax::print::attribute::standard::Severity* WARNING;
	static ::javax::print::attribute::standard::Severity* ERROR;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::Severity>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("ERROR")
#pragma pop_macro("REPORT")
#pragma pop_macro("WARNING")

#endif // _javax_print_attribute_standard_Severity_h_