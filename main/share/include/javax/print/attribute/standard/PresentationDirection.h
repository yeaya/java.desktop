#ifndef _javax_print_attribute_standard_PresentationDirection_h_
#define _javax_print_attribute_standard_PresentationDirection_h_
//$ class javax.print.attribute.standard.PresentationDirection
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintJobAttribute,javax.print.attribute.PrintRequestAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

#pragma push_macro("TOBOTTOM_TOLEFT")
#undef TOBOTTOM_TOLEFT
#pragma push_macro("TOBOTTOM_TORIGHT")
#undef TOBOTTOM_TORIGHT
#pragma push_macro("TOLEFT_TOBOTTOM")
#undef TOLEFT_TOBOTTOM
#pragma push_macro("TOLEFT_TOTOP")
#undef TOLEFT_TOTOP
#pragma push_macro("TORIGHT_TOBOTTOM")
#undef TORIGHT_TOBOTTOM
#pragma push_macro("TORIGHT_TOTOP")
#undef TORIGHT_TOTOP
#pragma push_macro("TOTOP_TOLEFT")
#undef TOTOP_TOLEFT
#pragma push_macro("TOTOP_TORIGHT")
#undef TOTOP_TORIGHT

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import PresentationDirection : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintJobAttribute, public ::javax::print::attribute::PrintRequestAttribute {
	$class(PresentationDirection, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintJobAttribute, ::javax::print::attribute::PrintRequestAttribute)
public:
	PresentationDirection();
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
	static const int64_t serialVersionUID = (int64_t)0x731CCB3AD3C31B44;
	static ::javax::print::attribute::standard::PresentationDirection* TOBOTTOM_TORIGHT;
	static ::javax::print::attribute::standard::PresentationDirection* TOBOTTOM_TOLEFT;
	static ::javax::print::attribute::standard::PresentationDirection* TOTOP_TORIGHT;
	static ::javax::print::attribute::standard::PresentationDirection* TOTOP_TOLEFT;
	static ::javax::print::attribute::standard::PresentationDirection* TORIGHT_TOBOTTOM;
	static ::javax::print::attribute::standard::PresentationDirection* TORIGHT_TOTOP;
	static ::javax::print::attribute::standard::PresentationDirection* TOLEFT_TOBOTTOM;
	static ::javax::print::attribute::standard::PresentationDirection* TOLEFT_TOTOP;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::PresentationDirection>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("TOBOTTOM_TOLEFT")
#pragma pop_macro("TOBOTTOM_TORIGHT")
#pragma pop_macro("TOLEFT_TOBOTTOM")
#pragma pop_macro("TOLEFT_TOTOP")
#pragma pop_macro("TORIGHT_TOBOTTOM")
#pragma pop_macro("TORIGHT_TOTOP")
#pragma pop_macro("TOTOP_TOLEFT")
#pragma pop_macro("TOTOP_TORIGHT")

#endif // _javax_print_attribute_standard_PresentationDirection_h_