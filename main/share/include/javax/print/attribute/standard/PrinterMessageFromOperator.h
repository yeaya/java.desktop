#ifndef _javax_print_attribute_standard_PrinterMessageFromOperator_h_
#define _javax_print_attribute_standard_PrinterMessageFromOperator_h_
//$ class javax.print.attribute.standard.PrinterMessageFromOperator
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

class $import PrinterMessageFromOperator : public ::javax::print::attribute::TextSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PrinterMessageFromOperator, $NO_CLASS_INIT, ::javax::print::attribute::TextSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	PrinterMessageFromOperator();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* message, ::java::util::Locale* locale);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xC1BB6E69C3395D3A;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PrinterMessageFromOperator_h_