#ifndef _javax_print_attribute_standard_SheetCollate_h_
#define _javax_print_attribute_standard_SheetCollate_h_
//$ class javax.print.attribute.standard.SheetCollate
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("COLLATED")
#undef COLLATED
#pragma push_macro("UNCOLLATED")
#undef UNCOLLATED

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import SheetCollate : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(SheetCollate, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	SheetCollate();
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
	static const int64_t serialVersionUID = (int64_t)0x62434D3186623CEB;
	static ::javax::print::attribute::standard::SheetCollate* UNCOLLATED;
	static ::javax::print::attribute::standard::SheetCollate* COLLATED;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::SheetCollate>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("COLLATED")
#pragma pop_macro("UNCOLLATED")

#endif // _javax_print_attribute_standard_SheetCollate_h_