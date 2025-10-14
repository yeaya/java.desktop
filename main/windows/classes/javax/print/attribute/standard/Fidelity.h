#ifndef _javax_print_attribute_standard_Fidelity_h_
#define _javax_print_attribute_standard_Fidelity_h_
//$ class javax.print.attribute.standard.Fidelity
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintJobAttribute,javax.print.attribute.PrintRequestAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("FIDELITY_FALSE")
#undef FIDELITY_FALSE
#pragma push_macro("FIDELITY_TRUE")
#undef FIDELITY_TRUE

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export Fidelity : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintJobAttribute, public ::javax::print::attribute::PrintRequestAttribute {
	$class(Fidelity, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintJobAttribute, ::javax::print::attribute::PrintRequestAttribute)
public:
	Fidelity();
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
	static const int64_t serialVersionUID = (int64_t)0x57B817701E73CB54;
	static ::javax::print::attribute::standard::Fidelity* FIDELITY_TRUE;
	static ::javax::print::attribute::standard::Fidelity* FIDELITY_FALSE;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::Fidelity>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("FIDELITY_FALSE")
#pragma pop_macro("FIDELITY_TRUE")

#endif // _javax_print_attribute_standard_Fidelity_h_