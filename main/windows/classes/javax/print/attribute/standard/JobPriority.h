#ifndef _javax_print_attribute_standard_JobPriority_h_
#define _javax_print_attribute_standard_JobPriority_h_
//$ class javax.print.attribute.standard.JobPriority
//$ extends javax.print.attribute.IntegerSyntax
//$ implements javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <javax/print/attribute/IntegerSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export JobPriority : public ::javax::print::attribute::IntegerSyntax, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(JobPriority, $NO_CLASS_INIT, ::javax::print::attribute::IntegerSyntax, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	JobPriority();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xC029DEFC5525896F;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_JobPriority_h_