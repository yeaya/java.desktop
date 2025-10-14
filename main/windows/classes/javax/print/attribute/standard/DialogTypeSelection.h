#ifndef _javax_print_attribute_standard_DialogTypeSelection_h_
#define _javax_print_attribute_standard_DialogTypeSelection_h_
//$ class javax.print.attribute.standard.DialogTypeSelection
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintRequestAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("COMMON")
#undef COMMON
#pragma push_macro("NATIVE")
#undef NATIVE

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export DialogTypeSelection : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintRequestAttribute {
	$class(DialogTypeSelection, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintRequestAttribute)
public:
	DialogTypeSelection();
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
	static const int64_t serialVersionUID = (int64_t)0x6857BA4F2CB0235D;
	static ::javax::print::attribute::standard::DialogTypeSelection* NATIVE;
	static ::javax::print::attribute::standard::DialogTypeSelection* COMMON;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::DialogTypeSelection>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("COMMON")
#pragma pop_macro("NATIVE")

#endif // _javax_print_attribute_standard_DialogTypeSelection_h_