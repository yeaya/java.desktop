#ifndef _javax_print_attribute_standard_PrintQuality_h_
#define _javax_print_attribute_standard_PrintQuality_h_
//$ class javax.print.attribute.standard.PrintQuality
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("DRAFT")
#undef DRAFT
#pragma push_macro("HIGH")
#undef HIGH
#pragma push_macro("NORMAL")
#undef NORMAL

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export PrintQuality : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(PrintQuality, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	PrintQuality();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual $Class* getCategory() override;
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $String* getName() override;
	virtual int32_t getOffset() override;
	virtual $StringArray* getStringTable() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD55CD9E109587AC3;
	static ::javax::print::attribute::standard::PrintQuality* DRAFT;
	static ::javax::print::attribute::standard::PrintQuality* NORMAL;
	static ::javax::print::attribute::standard::PrintQuality* HIGH;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::PrintQuality>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("DRAFT")
#pragma pop_macro("HIGH")
#pragma pop_macro("NORMAL")

#endif // _javax_print_attribute_standard_PrintQuality_h_