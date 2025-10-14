#ifndef _javax_print_attribute_standard_OrientationRequested_h_
#define _javax_print_attribute_standard_OrientationRequested_h_
//$ class javax.print.attribute.standard.OrientationRequested
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("LANDSCAPE")
#undef LANDSCAPE
#pragma push_macro("PORTRAIT")
#undef PORTRAIT
#pragma push_macro("REVERSE_LANDSCAPE")
#undef REVERSE_LANDSCAPE
#pragma push_macro("REVERSE_PORTRAIT")
#undef REVERSE_PORTRAIT

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export OrientationRequested : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(OrientationRequested, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	OrientationRequested();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	static const int64_t serialVersionUID = (int64_t)0xC247875930E6867C;
	static ::javax::print::attribute::standard::OrientationRequested* PORTRAIT;
	static ::javax::print::attribute::standard::OrientationRequested* LANDSCAPE;
	static ::javax::print::attribute::standard::OrientationRequested* REVERSE_LANDSCAPE;
	static ::javax::print::attribute::standard::OrientationRequested* REVERSE_PORTRAIT;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::OrientationRequested>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("LANDSCAPE")
#pragma pop_macro("PORTRAIT")
#pragma pop_macro("REVERSE_LANDSCAPE")
#pragma pop_macro("REVERSE_PORTRAIT")

#endif // _javax_print_attribute_standard_OrientationRequested_h_