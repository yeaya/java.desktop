#ifndef _javax_print_attribute_PrintServiceAttributeSet_h_
#define _javax_print_attribute_PrintServiceAttributeSet_h_
//$ interface javax.print.attribute.PrintServiceAttributeSet
//$ extends javax.print.attribute.AttributeSet

#include <javax/print/attribute/AttributeSet.h>

namespace javax {
	namespace print {
		namespace attribute {

class $export PrintServiceAttributeSet : public ::javax::print::attribute::AttributeSet {
	$interface(PrintServiceAttributeSet, $NO_CLASS_INIT, ::javax::print::attribute::AttributeSet)
public:
	virtual bool add(::javax::print::attribute::Attribute* attribute) override {return false;}
	virtual bool addAll(::javax::print::attribute::AttributeSet* attributes) override {return false;}
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_PrintServiceAttributeSet_h_