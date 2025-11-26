#ifndef _javax_print_attribute_standard_RequestingUserName_h_
#define _javax_print_attribute_standard_RequestingUserName_h_
//$ class javax.print.attribute.standard.RequestingUserName
//$ extends javax.print.attribute.TextSyntax
//$ implements javax.print.attribute.PrintRequestAttribute

#include <javax/print/attribute/PrintRequestAttribute.h>
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

class $import RequestingUserName : public ::javax::print::attribute::TextSyntax, public ::javax::print::attribute::PrintRequestAttribute {
	$class(RequestingUserName, $NO_CLASS_INIT, ::javax::print::attribute::TextSyntax, ::javax::print::attribute::PrintRequestAttribute)
public:
	RequestingUserName();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* userName, ::java::util::Locale* locale);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xDAC3E45626FBBBC2;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_RequestingUserName_h_