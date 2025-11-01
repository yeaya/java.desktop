#ifndef _javax_print_attribute_standard_OutputDeviceAssigned_h_
#define _javax_print_attribute_standard_OutputDeviceAssigned_h_
//$ class javax.print.attribute.standard.OutputDeviceAssigned
//$ extends javax.print.attribute.TextSyntax
//$ implements javax.print.attribute.PrintJobAttribute

#include <javax/print/attribute/PrintJobAttribute.h>
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

class $export OutputDeviceAssigned : public ::javax::print::attribute::TextSyntax, public ::javax::print::attribute::PrintJobAttribute {
	$class(OutputDeviceAssigned, $NO_CLASS_INIT, ::javax::print::attribute::TextSyntax, ::javax::print::attribute::PrintJobAttribute)
public:
	OutputDeviceAssigned();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* deviceName, ::java::util::Locale* locale);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x4C24CB4D49BED869;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_OutputDeviceAssigned_h_