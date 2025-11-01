#ifndef _javax_print_attribute_standard_DateTimeAtCreation_h_
#define _javax_print_attribute_standard_DateTimeAtCreation_h_
//$ class javax.print.attribute.standard.DateTimeAtCreation
//$ extends javax.print.attribute.DateTimeSyntax
//$ implements javax.print.attribute.PrintJobAttribute

#include <javax/print/attribute/DateTimeSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>

namespace java {
	namespace util {
		class Date;
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import DateTimeAtCreation : public ::javax::print::attribute::DateTimeSyntax, public ::javax::print::attribute::PrintJobAttribute {
	$class(DateTimeAtCreation, $NO_CLASS_INIT, ::javax::print::attribute::DateTimeSyntax, ::javax::print::attribute::PrintJobAttribute)
public:
	DateTimeAtCreation();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Date* dateTime);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD76CD106C5821921;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_DateTimeAtCreation_h_