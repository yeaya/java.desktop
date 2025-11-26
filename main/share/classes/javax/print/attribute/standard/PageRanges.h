#ifndef _javax_print_attribute_standard_PageRanges_h_
#define _javax_print_attribute_standard_PageRanges_h_
//$ class javax.print.attribute.standard.PageRanges
//$ extends javax.print.attribute.SetOfIntegerSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/SetOfIntegerSyntax.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export PageRanges : public ::javax::print::attribute::SetOfIntegerSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(PageRanges, $NO_CLASS_INIT, ::javax::print::attribute::SetOfIntegerSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	PageRanges();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<int32_t, 2>* members);
	void init$($String* members);
	void init$(int32_t member);
	void init$(int32_t lowerBound, int32_t upperBound);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	void myPageRanges();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x77E712E7F8E5E9A8;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PageRanges_h_