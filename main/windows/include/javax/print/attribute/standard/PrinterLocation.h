#ifndef _javax_print_attribute_standard_PrinterLocation_h_
#define _javax_print_attribute_standard_PrinterLocation_h_
//$ class javax.print.attribute.standard.PrinterLocation
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

class $import PrinterLocation : public ::javax::print::attribute::TextSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PrinterLocation, $NO_CLASS_INIT, ::javax::print::attribute::TextSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	PrinterLocation();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* location, ::java::util::Locale* locale);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xE9D098A377709B7F;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PrinterLocation_h_