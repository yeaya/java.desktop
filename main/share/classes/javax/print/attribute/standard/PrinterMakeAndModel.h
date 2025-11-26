#ifndef _javax_print_attribute_standard_PrinterMakeAndModel_h_
#define _javax_print_attribute_standard_PrinterMakeAndModel_h_
//$ class javax.print.attribute.standard.PrinterMakeAndModel
//$ extends javax.print.attribute.TextSyntax
//$ implements javax.print.attribute.PrintServiceAttribute

#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/TextSyntax.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export PrinterMakeAndModel : public ::javax::print::attribute::TextSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PrinterMakeAndModel, $NO_CLASS_INIT, ::javax::print::attribute::TextSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	PrinterMakeAndModel();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* makeAndModel, ::java::util::Locale* locale);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x3F911174D4F72973;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PrinterMakeAndModel_h_