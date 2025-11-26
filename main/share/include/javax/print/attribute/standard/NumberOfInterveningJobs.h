#ifndef _javax_print_attribute_standard_NumberOfInterveningJobs_h_
#define _javax_print_attribute_standard_NumberOfInterveningJobs_h_
//$ class javax.print.attribute.standard.NumberOfInterveningJobs
//$ extends javax.print.attribute.IntegerSyntax
//$ implements javax.print.attribute.PrintJobAttribute

#include <javax/print/attribute/IntegerSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import NumberOfInterveningJobs : public ::javax::print::attribute::IntegerSyntax, public ::javax::print::attribute::PrintJobAttribute {
	$class(NumberOfInterveningJobs, $NO_CLASS_INIT, ::javax::print::attribute::IntegerSyntax, ::javax::print::attribute::PrintJobAttribute)
public:
	NumberOfInterveningJobs();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x23A3DEBF177511DA;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_NumberOfInterveningJobs_h_