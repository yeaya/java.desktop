#ifndef _javax_print_attribute_standard_Sides_h_
#define _javax_print_attribute_standard_Sides_h_
//$ class javax.print.attribute.standard.Sides
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("DUPLEX")
#undef DUPLEX
#pragma push_macro("ONE_SIDED")
#undef ONE_SIDED
#pragma push_macro("TUMBLE")
#undef TUMBLE
#pragma push_macro("TWO_SIDED_LONG_EDGE")
#undef TWO_SIDED_LONG_EDGE
#pragma push_macro("TWO_SIDED_SHORT_EDGE")
#undef TWO_SIDED_SHORT_EDGE

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export Sides : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(Sides, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	Sides();
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
	static const int64_t serialVersionUID = (int64_t)0xA060B417F4C1E81A;
	static ::javax::print::attribute::standard::Sides* ONE_SIDED;
	static ::javax::print::attribute::standard::Sides* TWO_SIDED_LONG_EDGE;
	static ::javax::print::attribute::standard::Sides* TWO_SIDED_SHORT_EDGE;
	static ::javax::print::attribute::standard::Sides* DUPLEX;
	static ::javax::print::attribute::standard::Sides* TUMBLE;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::Sides>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("DUPLEX")
#pragma pop_macro("ONE_SIDED")
#pragma pop_macro("TUMBLE")
#pragma pop_macro("TWO_SIDED_LONG_EDGE")
#pragma pop_macro("TWO_SIDED_SHORT_EDGE")

#endif // _javax_print_attribute_standard_Sides_h_