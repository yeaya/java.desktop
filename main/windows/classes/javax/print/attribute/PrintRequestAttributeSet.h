#ifndef _javax_print_attribute_PrintRequestAttributeSet_h_
#define _javax_print_attribute_PrintRequestAttributeSet_h_
//$ interface javax.print.attribute.PrintRequestAttributeSet
//$ extends javax.print.attribute.AttributeSet

#include <javax/print/attribute/AttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {

class $export PrintRequestAttributeSet : public ::javax::print::attribute::AttributeSet {
	$interface(PrintRequestAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSet)
public:
	virtual bool add(::javax::print::attribute::Attribute* attribute) override {return false;}
	virtual bool addAll(::javax::print::attribute::AttributeSet* attributes) override {return false;}
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_PrintRequestAttributeSet_h_