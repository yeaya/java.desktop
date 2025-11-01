#ifndef _javax_print_attribute_standard_JobMediaSheetsCompleted_h_
#define _javax_print_attribute_standard_JobMediaSheetsCompleted_h_
//$ class javax.print.attribute.standard.JobMediaSheetsCompleted
//$ extends javax.print.attribute.IntegerSyntax
//$ implements javax.print.attribute.PrintJobAttribute

#include <javax/print/attribute/IntegerSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import JobMediaSheetsCompleted : public ::javax::print::attribute::IntegerSyntax, public ::javax::print::attribute::PrintJobAttribute {
	$class(JobMediaSheetsCompleted, $NO_CLASS_INIT, ::javax::print::attribute::IntegerSyntax, ::javax::print::attribute::PrintJobAttribute)
public:
	JobMediaSheetsCompleted();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1824495247B1E39B;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_JobMediaSheetsCompleted_h_