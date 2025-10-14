#ifndef _javax_print_attribute_standard_JobMessageFromOperator_h_
#define _javax_print_attribute_standard_JobMessageFromOperator_h_
//$ class javax.print.attribute.standard.JobMessageFromOperator
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

class $import JobMessageFromOperator : public ::javax::print::attribute::TextSyntax, public ::javax::print::attribute::PrintJobAttribute {
	$class(JobMessageFromOperator, $NO_CLASS_INIT, ::javax::print::attribute::TextSyntax, ::javax::print::attribute::PrintJobAttribute)
public:
	JobMessageFromOperator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* message, ::java::util::Locale* locale);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xBFDFCAAD87C09261;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_JobMessageFromOperator_h_