#ifndef _javax_print_attribute_standard_JobPrioritySupported_h_
#define _javax_print_attribute_standard_JobPrioritySupported_h_
//$ class javax.print.attribute.standard.JobPrioritySupported
//$ extends javax.print.attribute.IntegerSyntax
//$ implements javax.print.attribute.SupportedValuesAttribute

#include <javax/print/attribute/IntegerSyntax.h>
#include <javax/print/attribute/SupportedValuesAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export JobPrioritySupported : public ::javax::print::attribute::IntegerSyntax, public ::javax::print::attribute::SupportedValuesAttribute {
	$class(JobPrioritySupported, $NO_CLASS_INIT, ::javax::print::attribute::IntegerSyntax, ::javax::print::attribute::SupportedValuesAttribute)
public:
	JobPrioritySupported();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x239824BC15139CB6;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_JobPrioritySupported_h_