#ifndef _javax_print_attribute_standard_Chromaticity_h_
#define _javax_print_attribute_standard_Chromaticity_h_
//$ class javax.print.attribute.standard.Chromaticity
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("COLOR")
#undef COLOR
#pragma push_macro("MONOCHROME")
#undef MONOCHROME

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import Chromaticity : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(Chromaticity, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	Chromaticity();
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
	static const int64_t serialVersionUID = (int64_t)0x40AD94035087B0BC;
	static ::javax::print::attribute::standard::Chromaticity* MONOCHROME;
	static ::javax::print::attribute::standard::Chromaticity* COLOR;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::Chromaticity>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("COLOR")
#pragma pop_macro("MONOCHROME")

#endif // _javax_print_attribute_standard_Chromaticity_h_