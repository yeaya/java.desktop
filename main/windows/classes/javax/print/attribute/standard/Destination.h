#ifndef _javax_print_attribute_standard_Destination_h_
#define _javax_print_attribute_standard_Destination_h_
//$ class javax.print.attribute.standard.Destination
//$ extends javax.print.attribute.URISyntax
//$ implements javax.print.attribute.PrintJobAttribute,javax.print.attribute.PrintRequestAttribute

#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/URISyntax.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export Destination : public ::javax::print::attribute::URISyntax, public ::javax::print::attribute::PrintJobAttribute, public ::javax::print::attribute::PrintRequestAttribute {
	$class(Destination, $NO_CLASS_INIT, ::javax::print::attribute::URISyntax, ::javax::print::attribute::PrintJobAttribute, ::javax::print::attribute::PrintRequestAttribute)
public:
	Destination();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::net::URI* uri);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5E0BD05F38AD9B59;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_Destination_h_