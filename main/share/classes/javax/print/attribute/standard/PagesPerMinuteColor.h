#ifndef _javax_print_attribute_standard_PagesPerMinuteColor_h_
#define _javax_print_attribute_standard_PagesPerMinuteColor_h_
//$ class javax.print.attribute.standard.PagesPerMinuteColor
//$ extends javax.print.attribute.IntegerSyntax
//$ implements javax.print.attribute.PrintServiceAttribute

#include <javax/print/attribute/IntegerSyntax.h>
#include <javax/print/attribute/PrintServiceAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export PagesPerMinuteColor : public ::javax::print::attribute::IntegerSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PagesPerMinuteColor, $NO_CLASS_INIT, ::javax::print::attribute::IntegerSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	PagesPerMinuteColor();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x17624C580F4C2F60;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PagesPerMinuteColor_h_