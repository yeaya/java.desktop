#ifndef _javax_print_attribute_standard_DateTimeAtProcessing_h_
#define _javax_print_attribute_standard_DateTimeAtProcessing_h_
//$ class javax.print.attribute.standard.DateTimeAtProcessing
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

class $import DateTimeAtProcessing : public ::javax::print::attribute::DateTimeSyntax, public ::javax::print::attribute::PrintJobAttribute {
	$class(DateTimeAtProcessing, $NO_CLASS_INIT, ::javax::print::attribute::DateTimeSyntax, ::javax::print::attribute::PrintJobAttribute)
public:
	DateTimeAtProcessing();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Date* dateTime);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xCC8330A1A0C15834;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_DateTimeAtProcessing_h_